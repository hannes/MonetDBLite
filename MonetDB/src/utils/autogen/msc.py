import string
import regsub
import os

automake_ext = [ 'c', 'cc', 'h', 'y', 'yy', 'l', 'll', 'glue.c' ]
script_ext = [ 'mil' ]

def msc_list2string(l,pre,post):
  res = ""
  for i in l:
    res = res + pre + i + post
  return res

def msc_subdirs(fd, var, values, msc ):
  o = ""
  for v in values:
    o = o + " " + v
  fd.write("%s = %s\n" % (var,o) )
  fd.write("all-recursive: %s\n" % msc_list2string(values,"","-all ") )
  for v in values:
    fd.write("%s-all: %s\n" % (v,v))
    fd.write("\t$(CD) %s && $(MAKE) /nologo /k /f Makefile.msc all \n" % v) 
    fd.write("%s: \n\tif not exist %s $(MKDIR) %s\n" % (v,v,v))
    fd.write("\t$(INSTALL) $(SRCDIR)\\%s\\Makefile.msc %s\n" % (v,v))
  fd.write("install-recursive: %s\n" % msc_list2string(values,"","-install ") )
  for v in values:
    fd.write("%s-install: $(bindir) $(libdir)\n" % v)
    fd.write("\t$(CD) %s && $(MAKE) /nologo /k /f Makefile.msc install\n" % v) 

def msc_assignment(fd, var, values, msc ):
  o = ""
  for v in values:
    o = o + " " + v
  fd.write("%s = %s\n" % (var,o) )

def msc_cflags(fd, var, values, msc ):
  o = ""
  for v in values:
    o = o + " " + v
  fd.write("%s = $(%s) %s\n" % (var,var,o) )

def msc_extra_dist(fd, var, values, msc ):
  for i in values:
    msc['EXTRA_DIST'].append(i)

def msc_extra_headers(fd, var, values, msc ):
  for i in values:
    msc['HDRS'].append(i)

def msc_libdir(fd, var, values, msc ):
  msc['LIBDIR'] = values[0]

def msc_mtsafe(fd, var, values, msc ):
  fd.write("CFLAGS=$(CFLAGS) $(thread_safe_flag_spec)\n")

def msc_translate_dir(path,msc):
    dir = path
    if (string.find(path,os.sep) >= 0):
      d,rest = string.split(path,os.sep, 1) 
      if (d == "top_srcdir" or d == "top_builddir"):
	  d = "$(TOPDIR)"
      elif (d == "srcdir" or d == "builddir"):
          d = "."
      dir = d+ "\\" + rest
    if (os.sep != "\\"):
    	return regsub.gsub(os.sep, "\\", dir );
    return dir

def msc_translate_file(path,msc):
    if (os.path.isfile(msc['cwd']+ os.sep + path)):
	return "$(SRCDIR)\\" + path
    return path

def msc_space_sep_list(l):
  res = ""
  for i in l:
    res = res + " " + i
  return res + "\n"

def msc_find_srcs(target,deps,msc):
  base,ext = string.split(target,".", 1) 	
  f = target
  pf = f
  while (ext != "h" and deps.has_key(f) ):
    f = deps[f][0]
    b,ext = string.split(f,".",1)
    if (ext in automake_ext):
      pf = f 
  # built source if has dep and ext != cur ext
  if (deps.has_key(pf) and pf not in msc['BUILT_SOURCES']):
	pfb,pfext = string.split(pf,".",1)
	sfb,sfext = string.split(deps[pf][0],".",1)
	if (sfext != pfext):
		msc['BUILT_SOURCES'].append(pf)
  return pf

def msc_find_hdrs(target,deps,hdrs):
  base,ext = string.split(target,".", 1) 	
  f = target
  pf = f
  while (ext != "h" and deps.has_key(f) ):
    f = deps[f][0]
    b,ext = string.split(f,".",1)
    if (ext in automake_ext):
      pf = f 
  return pf

def msc_additional_libs(fd,name,sep,type,list, msc):
    deps = "lib"+sep+name+".dll: "
    if (type == "BIN"):
    	add = name+"_LIBS =" 
    else:
    	add = "lib"+sep+name+"_LIBS =" 
    for l in list:
      if (l[0] == "-" or l[0] == "$"):
      	add = add + " " + l 
      else:
      	add = add + " " + msc_translate_dir(l,msc) + ".lib"
	deps = deps + " " + msc_translate_dir(l,msc) + ".lib"
    fd.write( deps + "\n")
    return add + "\n"
  
def msc_translate_ext( f ):
	n = regsub.gsub("\.o", ".obj", f );
	return regsub.gsub("\.cc", ".cxx", n );

def msc_find_target(target,msc):
  tree = msc['TREE']
  for t in tree.keys(): 
    if(type(tree.value(t)) == type({}) and tree.value(t).has_key('TARGETS')):
       targets = tree.value(t)['TARGETS']
       if (target in targets):
	 if (t == "BINS" or t[0:4] == "bin_"):
	   return ("BIN","BIN")
	 elif (t[0:4] == "lib_"):
	   return ("LIB", string.upper(t[4:]))
         elif (t == "LIBS"):
	   name,ext = string.split(target,".",1)
	   return ("LIB", string.upper(name))
  return ("UNKNOWN","UNKNOWN")
 

def msc_deps(fd,deps,objext, msc):
  for tar,deplist in deps.items():
    t = msc_translate_ext(tar)
    b,ext = string.split(t,".",1)
    tf = msc_translate_file(t,msc)
    fd.write( tf + ":" )
    for d in deplist:
      fd.write( " " + msc_translate_dir(\
		msc_translate_ext(msc_translate_file(d,msc)),msc) )
    fd.write("\n");
    if (ext == "glue.c"):
	fd.write( "\t$(MEL) $(INCLUDES) -o %s -glue %s.m\n" % (t,b) );
    if (ext == "proto.h"):
	fd.write( "\t$(MEL) $(INCLUDES) -o %s -proto %s.m\n" % (t,b) );
    if (ext == "obj" or ext == "glue.obj"):
	target,name = msc_find_target(tar,msc);
	if (target == "LIB"):
	  d,dext = string.split(deplist[0],".",1)
	  if (dext == "c" or dext == "glue.c"):
	    fd.write( "\t$(CC) $(CFLAGS) $(INCLUDES) -DLIB%s -c %s\n" \
		% (name,msc_translate_ext(deplist[0])) );
	  elif (dext == "cc"):
	    fd.write( "\t$(CXX) $(CXXFLAGS) $(INCLUDES) -DLIB%s -c %s\n" \
		% (name,msc_translate_ext(deplist[0])) );

def msc_binary(fd, var, binmap, msc ):

  if (type(binmap) == type([])):
    name = var[4:]
    if (name == 'SCRIPTS'):
      for i in binmap:
        msc['INSTALL'].append((i,i))
    else: # link
      src = binmap[0][4:]
      msc['INSTALL'].append((name,src))
    return
  
  HDRS = []
  hdrs_ext = []
  if (binmap.has_key('HEADERS')):
	hdrs_ext = binmap['HEADERS']

  SCRIPTS = []
  scripts_ext = []
  if (binmap.has_key('SCRIPTS')):
	scripts_ext = binmap['SCRIPTS']

  name = var[4:]
  if (binmap.has_key("NAME")):
    binname = binmap['NAME'][0]
  else:
    binname = name
  msc['BINS'].append(binname)
  if (binmap.has_key('MTSAFE')):
    fd.write("CFLAGS=$(CFLAGS) $(thread_safe_flag_spec)\n")

  if (binmap.has_key("LIBS")):
    fd.write(msc_additional_libs(fd,binname, "", "BIN", binmap["LIBS"],msc))
	
  srcs = binname+"_OBJS ="
  for target in binmap['TARGETS']:
    t,ext = string.split(target,".",1)
    if (ext == "o"):
      srcs = srcs + " " + t + ".obj" 
    elif (ext == "glue.o"):
      srcs = srcs + " " + t + ".glue.obj" 
    elif (ext in hdrs_ext):
      HDRS.append(target)
    elif (ext in scripts_ext):
      if (target not in SCRIPTS):
        SCRIPTS.append(target)
  fd.write(srcs + "\n")
  fd.write( "%s.exe: $(%s_OBJS)\n" % (binname,binname))
  fd.write("\t$(CC) $(CFLAGS) -Fe%s.exe $(%s_OBJS) $(%s_LIBS) $(LDFLAGS) /subsystem:console\n\n" % (binname,binname,binname)) 

  if (len(SCRIPTS) > 0):
    fd.write(binname+"_SCRIPTS =" + msc_space_sep_list(SCRIPTS))
    msc['BUILT_SOURCES'].append("$(" + binname + "_SCRIPTS)")

  if (binmap.has_key('HEADERS')):
    for h in HDRS:
	msc['HDRS'].append(h)

  msc_deps(fd,binmap['DEPS'],".obj",msc);

def msc_bins(fd, var, binsmap, msc ):

  HDRS = []
  hdrs_ext = []
  if (binsmap.has_key('HEADERS')):
	hdrs_ext = binsmap['HEADERS']

  SCRIPTS = []
  scripts_ext = []
  if (binsmap.has_key('SCRIPTS')):
	scripts_ext = binsmap['SCRIPTS']

  name = ""
  if (binsmap.has_key("NAME")):
    name = binsmap["NAME"][0] # use first name given
  if (binsmap.has_key('MTSAFE')):
    fd.write("CFLAGS=$(CFLAGS) $(thread_safe_flag_spec)\n")

  for binsrc in binsmap['SOURCES']:
    bin,ext = string.split(binsrc,".", 1) 	
    if (ext not in automake_ext):
      msc['EXTRA_DIST'].append(binsrc)
    msc['BINS'].append(bin)
	
    if (binsmap.has_key(bin + "_LIBS")):
      fd.write(msc_additional_libs(fd,bin,"","BIN", binsmap[bin + "_LIBS"],msc))
    elif (binsmap.has_key("LIBS")):
      fd.write(msc_additional_libs(fd,bin, "", "BIN", binsmap["LIBS"],msc))

    srcs = bin+"_OBJS ="
    for target in binsmap['TARGETS']:
      l = len(bin)
      if (target[0:l] == bin):
        t,ext = string.split(target,".",1)
        if (ext == "o"):
          srcs = srcs + " " + t + ".obj" 
        elif (ext == "glue.o"):
          srcs = srcs + " " + t + ".glue.obj" 
	elif (ext in hdrs_ext):
	  HDRS.append(target)
        elif (ext in scripts_ext):
          if (target not in SCRIPTS):
            SCRIPTS.append(target)
    fd.write(srcs + "\n")
    fd.write( "%s.exe: $(%s_OBJS)\n" % (bin,bin))
    fd.write("\t$(CC) $(CFLAGS) -Fe%s.exe $(%s_OBJS) $(%s_LIBS) $(LDFLAGS) /subsystem:console\n\n" % (bin,bin,bin)) 

  if (len(SCRIPTS) > 0):
    fd.write(name+"_SCRIPTS =" + msc_space_sep_list(SCRIPTS))
    msc['BUILT_SOURCES'].append("$(" + name + "_SCRIPTS)")

  if (binsmap.has_key('HEADERS')):
    for h in HDRS:
	msc['HDRS'].append(h)

  msc_deps(fd,binsmap['DEPS'],".obj",msc);


def msc_library(fd, var, libmap, msc ):

  HDRS = []
  hdrs_ext = []
  if (libmap.has_key('HEADERS')):
    hdrs_ext = libmap['HEADERS']

  SCRIPTS = []
  scripts_ext = []
  if (libmap.has_key('SCRIPTS')):
    scripts_ext = libmap['SCRIPTS']

  name = var[4:]
  sep = ""
  if (libmap.has_key("NAME")):
    libname = libmap['NAME'][0]
  else:
    libname = name

  if (libname[0] == "_"):
     sep = "_"
     libname = libname[1:]

  msc['LIBS'].append(sep+libname)
  if (libmap.has_key('MTSAFE')):
    fd.write("CFLAGS=$(CFLAGS) $(thread_safe_flag_spec)\n")

  if (libmap.has_key("LIBS")):
    fd.write(msc_additional_libs(fd,libname, sep, "LIB", libmap["LIBS"],msc))

  for src in libmap['SOURCES']:
    base,ext = string.split(src,".", 1) 	
    if (ext not in automake_ext):
      msc['EXTRA_DIST'].append(src)
	
  srcs = "lib" + sep + libname + "_OBJS ="
  for target in libmap['TARGETS']:
    t,ext = string.split(target,".",1)
    if (ext == "o"):
      srcs = srcs + " " + t + ".obj" 
    elif (ext == "glue.o"):
      srcs = srcs + " " + t + ".glue.obj" 
    elif (ext in hdrs_ext):
      HDRS.append(target)
    elif (ext in scripts_ext):
      if (target not in SCRIPTS):
        SCRIPTS.append(target)
  fd.write(srcs + "\n")
  ln = "lib" + sep + libname
  fd.write( ln + ".lib: " + ln + ".dll\n" );
  fd.write( ln + ".dll: " + ln + ".def $(" + ln + "_OBJS) \n" )
  fd.write("\t$(CC) $(CFLAGS) -LD -Fe%s.dll $(%s_OBJS) $(%s_LIBS) $(LDFLAGS) /def:%s.def\n\n" % (ln,ln,ln,ln))

  fd.write( ln + ".def: \n" )
  fd.write( "\t$(ECHO) EXPORTS > $@\n" )
  fd.write( "\t$(ECHO) 	%s_Module_Install >> $@\n" % libname )
  fd.write( "\t$(ECHO) 	%s_Module_Delete >> $@\n" % libname )

  if (len(SCRIPTS) > 0):
    fd.write(libname+"_SCRIPTS =" + msc_space_sep_list(SCRIPTS))
    msc['BUILT_SOURCES'].append("$(" + name + "_SCRIPTS)")

  if (libmap.has_key('HEADERS')):
    for h in HDRS:
	msc['HDRS'].append(h)

  msc_deps(fd,libmap['DEPS'],".obj",msc);

def msc_libs(fd, var, libsmap, msc ):

  if (libsmap.has_key('SEP')):
  	sep = libsmap['SEP'][0]

  SCRIPTS = []
  scripts_ext = []
  if (libsmap.has_key('SCRIPTS')):
    scripts_ext = libsmap['SCRIPTS']

  if (libsmap.has_key('MTSAFE')):
    fd.write("CFLAGS=$(CFLAGS) $(thread_safe_flag_spec)\n")

  for libsrc in libsmap['SOURCES']:
    lib,ext = string.split(libsrc,".", 1) 	
    if (ext not in automake_ext):
      msc['EXTRA_DIST'].append(libsrc)
    msc['LIBS'].append(sep+lib)
	
    if (libsmap.has_key(lib + "_LIBS")):
      fd.write(msc_additional_libs(fd,lib,sep,"LIB",libsmap[lib + "_LIBS"],msc))
    elif (libsmap.has_key("LIBS")):
      fd.write(msc_additional_libs(fd,lib, sep, "LIB", libsmap["LIBS"],msc))

    srcs = "lib"+sep+lib+"_OBJS ="
    for target in libsmap['TARGETS']:
      l = len(lib)
      if (target[0:l] == lib):
        t,ext = string.split(target,".",1)
        if (ext == "o"):
          srcs = srcs + " " + t + ".obj" 
        elif (ext == "glue.o"):
          srcs = srcs + " " + t + ".glue.obj" 
        elif (ext in scripts_ext):
          if (target not in SCRIPTS):
            SCRIPTS.append(target)
    fd.write(srcs + "\n")
    ln = "lib" + sep + lib
    fd.write( ln + ".lib: " + ln + ".dll\n" );
    fd.write( ln + ".dll: " + ln + ".def $(" + ln + "_OBJS) \n" )
    fd.write("\t$(CC) $(CFLAGS) -LD -Fe%s.dll $(%s_OBJS) $(%s_LIBS) $(LDFLAGS) /def:%s.def\n\n" % (ln,ln,ln,ln))

    fd.write( ln + ".def: \n" )
    fd.write( "\t$(ECHO) EXPORTS > $@\n" )
    fd.write( "\t$(ECHO) 	%s_Module_Install >> $@\n" % lib )
    fd.write( "\t$(ECHO) 	%s_Module_Delete >> $@\n" % lib )

  if (len(SCRIPTS) > 0):
    fd.write("SCRIPTS =" + msc_space_sep_list(SCRIPTS))
    msc['BUILT_SOURCES'].append("$(SCRIPTS)")

  if (libsmap.has_key('HEADERS')):
    HDRS = []
    hdrs_ext = libsmap['HEADERS']
    for target in libsmap['DEPS'].keys():
      t,ext = string.split(target,".",1)
      if (ext in hdrs_ext):
        msc['HDRS'].append(target)

  msc_deps(fd,libsmap['DEPS'],".obj",msc);

def msc_includes(fd, var, values, msc):
  incs = ""
  for i in values:
    if (i[0] == "-" or i[0] == "$"):
      	incs = incs + " " + i
    else:
	incs = incs + " -I" + msc_translate_dir(i,msc)
  fd.write("INCLUDES = " + incs + "\n")

output_funcs = { 'SUBDIRS': msc_subdirs, 
	 	 'EXTRA_DIST': msc_extra_dist,
	 	 'EXTRA_HEADERS': msc_extra_headers,
	 	 'LIBDIR': msc_libdir,
		 'LIBS' : msc_libs,
		 'LIB' : msc_library,
		 'BINS' : msc_bins,
		 'BIN' : msc_binary,
 		 'INCLUDES' : msc_includes,
		 'MTSAFE' : msc_mtsafe,
		 'CFLAGS' : msc_cflags,
		 'CXXFLAGS' : msc_cflags,
		}

def output(tree, cwd, topdir):
  fd = open(cwd+os.sep+'Makefile.msc',"w")

  fd.write('''
## Use: nmake -f makefile.msc install

# Change this to wherever you want to install the DLLs. This directory
# should be in your PATH.
BIN = C:\\bin

################################################################

# Nothing much configurable below

# cl -? describes the options
CC = cl -GF -W3 -MD -nologo -Zi
# optimize use -Ox

# No general LDFLAGS needed
LDFLAGS = /link
INSTALL = copy
MKDIR = mkdir
ECHO = echo
CD = cd

CFLAGS = -I. -I$(TOPDIR) $(LIBC_INCS) -DHAVE_CONFIG_H

CXXEXT = \\\"cxx\\\"

''')

  msc = {}
  msc['BUILT_SOURCES'] = []
  msc['EXTRA_DIST'] = []
  msc['LIBS'] = []
  msc['BINS'] = []
  msc['HDRS'] = []
  msc['INSTALL'] = []
  msc['LIBDIR'] = 'lib'
  msc['TREE'] = tree
  msc['cwd'] = cwd
  
  fd.write("CFLAGS = $(INCLUDES) $(CFLAGS)\n" )
  fd.write("CXXFLAGS = $(CFLAGS)\n" )

  prefix = os.path.commonprefix([cwd,topdir])
  d = cwd[len(prefix):]
  reldir = "." 
  srcdir = d
  if (len(d) > 1 and d[0] == os.sep):
    d = d[1:]
    while(len(d) > 0):
	reldir = reldir + os.sep + ".."
	d,t = os.path.split(d)  

  fd.write("TOPDIR = %s\n" % regsub.gsub("/", "\\", reldir))
  fd.write("SRCDIR = $(TOPDIR)\\..%s\n" % regsub.gsub("/", "\\", srcdir))
  fd.write("!INCLUDE $(TOPDIR)\\rules.msc\n")
  if ("SUBDIRS" in tree.keys()):
     fd.write("all: all-msc all-recursive\n")
     fd.write("install: install-recursive install-msc\n")
  else:
     fd.write("all: all-msc\n")
     fd.write("install: install-msc\n")
	 
  for i in tree.keys():
    j = string.upper(i[0:3])
    if (type(tree.value(i)) == type([])):	
      if (output_funcs.has_key(i)):
	output_funcs[i](fd,i,tree.value(i),msc)
      elif (output_funcs.has_key(j)):
	output_funcs[j](fd,i,tree.value(i),msc)
      elif (i != 'TARGETS'):
	msc_assignment(fd,i,tree.value(i),msc)

  for i in tree.keys():
    j = string.upper(i[0:3])
    if (type(tree.value(i)) == type({})):	
      if (output_funcs.has_key(i)):
	output_funcs[i](fd,i,tree.value(i),msc)
      elif (output_funcs.has_key(j)):
	output_funcs[j](fd,i,tree.value(i),msc)
      elif (i != 'TARGETS'):
	msc_assignment(fd,i,tree.value(i),msc)

  if (len(msc['BUILT_SOURCES']) > 0):
    fd.write("BUILT_SOURCES = ")
    for v in msc['BUILT_SOURCES']:
      fd.write(" %s" % (v) )
    fd.write("\n")

  #fd.write("EXTRA_DIST = Makefile.ag Makefile.msc")
  #for v in msc['EXTRA_DIST']:
    #fd.write(" %s" % (v) )
  #fd.write("\n")

  fd.write("all-msc:")
  if (len(msc['LIBS']) > 0):
    for v in msc['LIBS']:
      fd.write(" lib%s.dll" % (v) )

  if (len(msc['BINS']) > 0):
    for v in msc['BINS']:
      fd.write(" %s.exe" % (v) )

  fd.write("\n")

  fd.write("install-msc: install-exec install-data\n")
  l = []
  for (x,y) in msc['INSTALL']:
	l.append(x);		
  fd.write("install-exec: %s %s %s\n" % ( \
		msc_list2string(msc['LIBS'], "install_dll_"," "), \
		msc_list2string(msc['BINS'], "install_bin_"," "), \
		msc_list2string(l, "install_"," ") \
		))
  if (len(msc['LIBS']) > 0):
    for v in msc['LIBS']:
      fd.write("install_dll_%s: lib%s.dll\n" % (v,v))
      fd.write("\t$(INSTALL) lib%s.dll $(%sdir)\n" % (v,msc['LIBDIR']) )
  if (len(msc['BINS']) > 0):
    for v in msc['BINS']:
      fd.write("install_bin_%s: %s.exe\n" % (v,v))
      fd.write("\t$(INSTALL) %s.exe $(bindir)\n" % (v) )
  if (len(msc['INSTALL']) > 0):
    for (dst,src) in msc['INSTALL']:
      fd.write("install_%s: $(bindir)\%s.exe\n" % (dst,src))
      fd.write("\t$(INSTALL) $(bindir)\%s.exe $(bindir)\%s.exe\n" % (src,dst) )

  #fd.write("install-data:")
  #if (len(msc['HDRS']) > 0):
    #if (len(name) > 0): 
      #fd.write(" install-%s" % (v) )
      #for v in msc['HDRS']:
      #fd.write("%sincludedir = $(includedir)/%s\n" % (name,name))
    #fd.write("%sinclude_HEADERS = %s\n" % (name,am_list2string(am['HDRS']," ","")))
  #fd.write("\n")
