#ifndef _java_io_FilenameFilter_h_
#define _java_io_FilenameFilter_h_
//$ interface java.io.FilenameFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace java {
	namespace io {

class $export FilenameFilter : public ::java::lang::Object {
	$interface(FilenameFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool accept(::java::io::File* dir, $String* name) {return false;}
};

	} // io
} // java

#endif // _java_io_FilenameFilter_h_