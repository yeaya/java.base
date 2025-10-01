#ifndef _java_io_RandomAccessFile$2_h_
#define _java_io_RandomAccessFile$2_h_
//$ class java.io.RandomAccessFile$2
//$ extends jdk.internal.access.JavaIORandomAccessFileAccess

#include <jdk/internal/access/JavaIORandomAccessFileAccess.h>

namespace java {
	namespace io {
		class File;
		class RandomAccessFile;
	}
}

namespace java {
	namespace io {

class RandomAccessFile$2 : public ::jdk::internal::access::JavaIORandomAccessFileAccess {
	$class(RandomAccessFile$2, $NO_CLASS_INIT, ::jdk::internal::access::JavaIORandomAccessFileAccess)
public:
	RandomAccessFile$2();
	void init$();
	virtual ::java::io::RandomAccessFile* openAndDelete(::java::io::File* file, $String* mode) override;
};

	} // io
} // java

#endif // _java_io_RandomAccessFile$2_h_