#ifndef _ExtendedFileOutputStream_h_
#define _ExtendedFileOutputStream_h_
//$ class ExtendedFileOutputStream
//$ extends java.io.FileOutputStream

#include <java/io/FileOutputStream.h>

namespace java {
	namespace io {
		class File;
	}
}

class ExtendedFileOutputStream : public ::java::io::FileOutputStream {
	$class(ExtendedFileOutputStream, $NO_CLASS_INIT, ::java::io::FileOutputStream)
public:
	ExtendedFileOutputStream();
	void init$(::java::io::File* file);
};

#endif // _ExtendedFileOutputStream_h_