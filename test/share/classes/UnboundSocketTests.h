#ifndef _UnboundSocketTests_h_
#define _UnboundSocketTests_h_
//$ class UnboundSocketTests
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}

class $export UnboundSocketTests : public ::java::lang::Object {
	$class(UnboundSocketTests, 0, ::java::lang::Object)
public:
	UnboundSocketTests();
	void init$();
	static void check($String* msg, Object$* actual, Object$* expected);
	static void checkIsAnyLocalAddress($String* msg, ::java::net::InetAddress* actual);
	static void main($StringArray* args);
	static int32_t failures;
};

#endif // _UnboundSocketTests_h_