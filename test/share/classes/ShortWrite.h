#ifndef _ShortWrite_h_
#define _ShortWrite_h_
//$ class ShortWrite
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
		}
	}
}

class $export ShortWrite : public ::java::lang::Object {
	$class(ShortWrite, 0, ::java::lang::Object)
public:
	ShortWrite();
	void init$();
	static int64_t computeChecksum($Array<::java::nio::ByteBuffer>* bufs);
	static void main($StringArray* args);
	static void test1(::java::util::concurrent::ExecutorService* pool, ::java::nio::channels::SocketChannel* source, ::java::nio::channels::SocketChannel* sink, int32_t size);
	static void testN(::java::util::concurrent::ExecutorService* pool, ::java::nio::channels::SocketChannel* source, ::java::nio::channels::SocketChannel* sink, $ints* sizes);
	static ::java::util::Random* rand;
};

#endif // _ShortWrite_h_