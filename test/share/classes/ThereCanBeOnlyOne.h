#ifndef _ThereCanBeOnlyOne_h_
#define _ThereCanBeOnlyOne_h_
//$ class ThereCanBeOnlyOne
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

class $export ThereCanBeOnlyOne : public ::java::lang::Object {
	$class(ThereCanBeOnlyOne, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ThereCanBeOnlyOne();
	void init$();
	static void doTest(::java::net::InetAddress* ia, bool testSend);
	static void main($StringArray* args);
};

#endif // _ThereCanBeOnlyOne_h_