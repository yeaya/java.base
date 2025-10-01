#ifndef _java_lang_invoke_DirectMethodHandle$1_h_
#define _java_lang_invoke_DirectMethodHandle$1_h_
//$ class java.lang.invoke.DirectMethodHandle$1
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

namespace java {
	namespace lang {
		namespace invoke {
			class DirectMethodHandle;
			class LambdaForm;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class DirectMethodHandle$1 : public ::java::util::function::Function {
	$class(DirectMethodHandle$1, $NO_CLASS_INIT, ::java::util::function::Function)
public:
	DirectMethodHandle$1();
	void init$(::java::lang::invoke::DirectMethodHandle* this$0);
	virtual ::java::lang::invoke::LambdaForm* apply(::java::lang::invoke::LambdaForm* oldForm);
	virtual $Object* apply(Object$* oldForm) override;
	::java::lang::invoke::DirectMethodHandle* this$0 = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_DirectMethodHandle$1_h_