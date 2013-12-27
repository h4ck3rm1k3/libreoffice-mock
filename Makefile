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
	fake.cxx
