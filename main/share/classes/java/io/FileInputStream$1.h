#ifndef _java_io_FileInputStream$1_h_
#define _java_io_FileInputStream$1_h_
//$ class java.io.FileInputStream$1
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace java {
	namespace io {
		class FileInputStream;
	}
}

namespace java {
	namespace io {

class FileInputStream$1 : public ::java::io::Closeable {
	$class(FileInputStream$1, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	FileInputStream$1();
	void init$(::java::io::FileInputStream* this$0);
	virtual void close() override;
	::java::io::FileInputStream* this$0 = nullptr;
};

	} // io
} // java

#endif // _java_io_FileInputStream$1_h_