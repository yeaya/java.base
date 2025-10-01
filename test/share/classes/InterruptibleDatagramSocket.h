#ifndef _InterruptibleDatagramSocket_h_
#define _InterruptibleDatagramSocket_h_
//$ class InterruptibleDatagramSocket
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace net {
		class DatagramSocket;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class $export InterruptibleDatagramSocket : public ::java::lang::Object {
	$class(InterruptibleDatagramSocket, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InterruptibleDatagramSocket();
	void init$();
	static void lambda$test0$0(::java::util::concurrent::CountDownLatch* latch, $Thread* testThread);
	static void main($StringArray* args);
	static void test(::java::net::DatagramSocket* s, bool interruptible);
	static void test0(::java::net::DatagramSocket* s);
};

#endif // _InterruptibleDatagramSocket_h_