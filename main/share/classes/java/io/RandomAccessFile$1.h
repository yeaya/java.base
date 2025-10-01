#ifndef _java_io_RandomAccessFile$1_h_
#define _java_io_RandomAccessFile$1_h_
//$ class java.io.RandomAccessFile$1
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace java {
	namespace io {
		class RandomAccessFile;
	}
}

namespace java {
	namespace io {

class RandomAccessFile$1 : public ::java::io::Closeable {
	$class(RandomAccessFile$1, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	RandomAccessFile$1();
	void init$(::java::io::RandomAccessFile* this$0);
	virtual void close() override;
	::java::io::RandomAccessFile* this$0 = nullptr;
};

	} // io
} // java

#endif // _java_io_RandomAccessFile$1_h_