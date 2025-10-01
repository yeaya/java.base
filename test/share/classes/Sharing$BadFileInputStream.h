#ifndef _Sharing$BadFileInputStream_h_
#define _Sharing$BadFileInputStream_h_
//$ class Sharing$BadFileInputStream
//$ extends java.io.FileInputStream

#include <java/io/FileInputStream.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}

class Sharing$BadFileInputStream : public ::java::io::FileInputStream {
	$class(Sharing$BadFileInputStream, $NO_CLASS_INIT, ::java::io::FileInputStream)
public:
	Sharing$BadFileInputStream();
	void init$(::java::io::FileDescriptor* fd);
	virtual void close() override;
	using ::java::io::FileInputStream::readNBytes;
};

#endif // _Sharing$BadFileInputStream_h_