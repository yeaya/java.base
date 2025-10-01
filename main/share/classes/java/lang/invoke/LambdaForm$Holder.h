#ifndef _java_lang_invoke_LambdaForm$Holder_h_
#define _java_lang_invoke_LambdaForm$Holder_h_
//$ class java.lang.invoke.LambdaForm$Holder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class LambdaForm$Holder : public ::java::lang::Object {
	$class(LambdaForm$Holder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LambdaForm$Holder();
	void init$(::java::lang::invoke::LambdaForm* this$0);
	::java::lang::invoke::LambdaForm* this$0 = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_LambdaForm$Holder_h_