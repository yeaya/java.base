#ifndef _FileMethods$1_h_
#define _FileMethods$1_h_
//$ class FileMethods$1
//$ extends java.io.FilenameFilter

#include <java/io/FilenameFilter.h>

namespace java {
	namespace io {
		class File;
	}
}

class FileMethods$1 : public ::java::io::FilenameFilter {
	$class(FileMethods$1, $NO_CLASS_INIT, ::java::io::FilenameFilter)
public:
	FileMethods$1();
	void init$();
	virtual bool accept(::java::io::File* dir, $String* name) override;
};

#endif // _FileMethods$1_h_