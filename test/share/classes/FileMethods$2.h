#ifndef _FileMethods$2_h_
#define _FileMethods$2_h_
//$ class FileMethods$2
//$ extends java.io.FileFilter

#include <java/io/FileFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

class FileMethods$2 : public ::java::io::FileFilter {
	$class(FileMethods$2, $NO_CLASS_INIT, ::java::io::FileFilter)
public:
	FileMethods$2();
	void init$();
	virtual bool accept(::java::io::File* f) override;
};

#endif // _FileMethods$2_h_