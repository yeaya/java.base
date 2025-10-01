#ifndef _ExtendedFileInputStream_h_
#define _ExtendedFileInputStream_h_
//$ class ExtendedFileInputStream
//$ extends java.io.FileInputStream

#include <java/io/FileInputStream.h>

namespace java {
	namespace io {
		class File;
	}
}

class ExtendedFileInputStream : public ::java::io::FileInputStream {
	$class(ExtendedFileInputStream, $NO_CLASS_INIT, ::java::io::FileInputStream)
public:
	ExtendedFileInputStream();
	void init$(::java::io::File* file);
	using ::java::io::FileInputStream::readNBytes;
};

#endif // _ExtendedFileInputStream_h_