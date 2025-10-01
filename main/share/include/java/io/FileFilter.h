#ifndef _java_io_FileFilter_h_
#define _java_io_FileFilter_h_
//$ interface java.io.FileFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace java {
	namespace io {

class $import FileFilter : public ::java::lang::Object {
	$interface(FileFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool accept(::java::io::File* pathname) {return false;}
};

	} // io
} // java

#endif // _java_io_FileFilter_h_