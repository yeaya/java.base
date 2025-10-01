#ifndef _java_lang_invoke_Invokers$Lazy_h_
#define _java_lang_invoke_Invokers$Lazy_h_
//$ class java.lang.invoke.Invokers$Lazy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class Invokers$Lazy : public ::java::lang::Object {
	$class(Invokers$Lazy, 0, ::java::lang::Object)
public:
	Invokers$Lazy();
	void init$();
	static ::java::lang::invoke::MethodHandle* MH_asSpreader;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_Invokers$Lazy_h_