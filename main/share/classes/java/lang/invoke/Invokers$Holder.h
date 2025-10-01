#ifndef _java_lang_invoke_Invokers$Holder_h_
#define _java_lang_invoke_Invokers$Holder_h_
//$ class java.lang.invoke.Invokers$Holder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class Invokers;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class Invokers$Holder : public ::java::lang::Object {
	$class(Invokers$Holder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Invokers$Holder();
	void init$(::java::lang::invoke::Invokers* this$0);
	::java::lang::invoke::Invokers* this$0 = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_Invokers$Holder_h_