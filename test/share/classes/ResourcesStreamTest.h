#ifndef _ResourcesStreamTest_h_
#define _ResourcesStreamTest_h_
//$ class ResourcesStreamTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}

class $export ResourcesStreamTest : public ::java::lang::Object {
	$class(ResourcesStreamTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ResourcesStreamTest();
	void init$();
	static bool lambda$testFailure$0(::java::net::URL* url);
	static ::java::lang::Exception* lambda$testFailure$1();
	static void main($StringArray* args);
	static void testFailure();
	static void testSuccess();
};

#endif // _ResourcesStreamTest_h_