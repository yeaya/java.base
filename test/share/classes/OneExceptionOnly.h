#ifndef _OneExceptionOnly_h_
#define _OneExceptionOnly_h_
//$ class OneExceptionOnly
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

class $export OneExceptionOnly : public ::java::lang::Object {
	$class(OneExceptionOnly, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OneExceptionOnly();
	void init$();
	static void doTest(::java::net::InetAddress* ia, int32_t port, bool testSend);
	static void main($StringArray* args);
};

#endif // _OneExceptionOnly_h_