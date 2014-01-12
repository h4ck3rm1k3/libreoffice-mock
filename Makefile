all:
	g++ -save-temps \
	-latk-1.0 \
	-lgobject-2.0 \
	-lglib-2.0 \
	-I /usr/lib/x86_64-linux-gnu/glib-2.0/include/ \
	-I /usr/include/glib-2.0/ \
	-I /usr/include/atk-1.0/ \
	-I ../ \
	-I /mnt/data/home/mdupont/experiments/libreoffice-core/fakeinclude/  \
	-I ../sw/source/core/access/ \
	../vcl/unx/gtk/a11y/atkwrapper.cxx \
	../vcl/unx/gtk/a11y/atklistener.cxx \
	../sw/source/core/access/acccontext.cxx \
	../sw/source/core/access/acccell.cxx \
	../sw/source/core/access/accdoc.cxx \
	../sw/source/core/access/accembedded.cxx \
	../sw/source/core/access/accfield.cxx \
	../sw/source/core/access/accfootnote.cxx \
	../sw/source/core/access/accframebase.cxx \
	../sw/source/core/access/accframe.cxx	 \
	../sw/source/core/access/accfrmobj.cxx \
	../sw/source/core/access/accfrmobjmap.cxx \
	../sw/source/core/access/accfrmobjslist.cxx \
	../sw/source/core/access/accgraphic.cxx	\
	../sw/source/core/access/accheaderfooter.cxx \
	../sw/source/core/access/acchyperlink.cxx \
	../sw/source/core/access/acchypertextdata.cxx \
	../sw/source/core/access/accmap.cxx \
	../sw/source/core/access/accnotextframe.cxx \
	../sw/source/core/access/accnotexthyperlink.cxx \
	../sw/source/core/access/accpage.cxx \
	../sw/source/core/access/accpara.cxx \
	../sw/source/core/access/accportions.cxx  \
	../sw/source/core/access/accpreview.cxx 
	../sw/source/core/access/accselectionhelper.cxx \
	../sw/source/core/access/acctable.cxx \
	../sw/source/core/access/acctextframe.cxx \
	../sw/source/core/access/parachangetrackinginfo.cxx \
	../sw/source/core/access/textmarkuphelper.cxx\
	fake.cxx

parse:
	- bash -x parse.sh 
#	-make > log.txt 2>&1
#python parse.py -i log.txt

parselog:
	python parse.py -i log.txt
