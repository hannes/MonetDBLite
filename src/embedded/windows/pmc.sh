if [ $# -eq 1 ]; then
	NN=`echo $1 | sed 's/.in$//'`
	echo $1
	# sedscript.in created using 
	# grep -o "@[[:alnum:]_]*@" Makefile.in | sort -f | uniq | sed -e "s/^/s|/" -e "s/$/||/" > sedscript.tpl
	sed -f embedded/windows/sedscript $1 > $NN
else
	touch config.status
	echo $0
	find . -name "*.in" -type f -exec sh $0 {} \;
fi
