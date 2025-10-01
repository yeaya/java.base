#ifndef _p2_test_Main_h_
#define _p2_test_Main_h_
//$ class p2.test.Main
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Module;
	}
}

namespace p2 {
	namespace test {

class $export Main : public ::java::lang::Object {
	$class(Main, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Main();
	void init$();
	static $Class* findClass(::java::lang::Module* module, $String* cn);
	static void main($StringArray* args);
};

	} // test
} // p2

#endif // _p2_test_Main_h_