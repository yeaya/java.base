#ifndef _AdaptServerSocket_h_
#define _AdaptServerSocket_h_
//$ class AdaptServerSocket
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Exception;
		class Thread;
	}
}

class $export AdaptServerSocket : public ::java::lang::Object {
	$class(AdaptServerSocket, 0, ::java::lang::Object)
public:
	AdaptServerSocket();
	void init$();
	static void main($StringArray* args);
	static void startClient(int32_t port, int32_t dally);
	static void test(int32_t clientDally, int32_t timeout, bool shouldTimeout);
	static ::java::io::PrintStream* out;
	static $volatile(bool) clientStarted;
	static $volatile(::java::lang::Exception*) clientException;
	static $volatile($Thread*) client;
};

#endif // _AdaptServerSocket_h_