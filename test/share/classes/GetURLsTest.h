#ifndef _GetURLsTest_h_
#define _GetURLsTest_h_
//$ class GetURLsTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TEST_DIR")
#undef TEST_DIR

namespace java {
	namespace net {
		class URL;
	}
}

class $export GetURLsTest : public ::java::lang::Object {
	$class(GetURLsTest, 0, ::java::lang::Object)
public:
	GetURLsTest();
	void init$();
	static void main($StringArray* args);
	static void p($String* s, $Array<::java::net::URL>* urls);
	static void p($String* s);
	static $String* TEST_DIR;
};

#pragma pop_macro("TEST_DIR")

#endif // _GetURLsTest_h_