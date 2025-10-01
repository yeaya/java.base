#ifndef _java_lang_Terminator_h_
#define _java_lang_Terminator_h_
//$ class java.lang.Terminator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Signal$Handler;
		}
	}
}

namespace java {
	namespace lang {

class Terminator : public ::java::lang::Object {
	$class(Terminator, $PRELOAD, ::java::lang::Object)
public:
	Terminator();
	void init$();
	static void setup();
	static void teardown();
	static ::jdk::internal::misc::Signal$Handler* handler;
};

	} // lang
} // java

#endif // _java_lang_Terminator_h_