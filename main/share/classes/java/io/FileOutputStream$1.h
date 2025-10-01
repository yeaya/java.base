#ifndef _java_io_FileOutputStream$1_h_
#define _java_io_FileOutputStream$1_h_
//$ class java.io.FileOutputStream$1
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace java {
	namespace io {
		class FileOutputStream;
	}
}

namespace java {
	namespace io {

class FileOutputStream$1 : public ::java::io::Closeable {
	$class(FileOutputStream$1, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	FileOutputStream$1();
	void init$(::java::io::FileOutputStream* this$0);
	virtual void close() override;
	::java::io::FileOutputStream* this$0 = nullptr;
};

	} // io
} // java

#endif // _java_io_FileOutputStream$1_h_