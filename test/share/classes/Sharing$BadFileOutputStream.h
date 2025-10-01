#ifndef _Sharing$BadFileOutputStream_h_
#define _Sharing$BadFileOutputStream_h_
//$ class Sharing$BadFileOutputStream
//$ extends java.io.FileOutputStream

#include <java/io/FileOutputStream.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}

class Sharing$BadFileOutputStream : public ::java::io::FileOutputStream {
	$class(Sharing$BadFileOutputStream, $NO_CLASS_INIT, ::java::io::FileOutputStream)
public:
	Sharing$BadFileOutputStream();
	void init$(::java::io::FileDescriptor* fd);
	virtual void close() override;
};

#endif // _Sharing$BadFileOutputStream_h_