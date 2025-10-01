#ifndef _TestAfterClose_h_
#define _TestAfterClose_h_
//$ class TestAfterClose
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class ServerSocket;
	}
}

class $export TestAfterClose : public ::java::lang::Object {
	$class(TestAfterClose, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestAfterClose();
	void init$();
	static void main($StringArray* args);
	static void test(::java::net::ServerSocket* ss);
	static int32_t failCount;
};

#endif // _TestAfterClose_h_