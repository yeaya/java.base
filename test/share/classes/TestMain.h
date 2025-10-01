#ifndef _TestMain_h_
#define _TestMain_h_
//$ class TestMain
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Module;
	}
}

class $export TestMain : public ::java::lang::Object {
	$class(TestMain, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestMain();
	void init$();
	static $Class* findClass(::java::lang::Module* module, $String* cn);
	static void main($StringArray* args);
};

#endif // _TestMain_h_