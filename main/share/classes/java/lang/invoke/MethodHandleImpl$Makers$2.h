#ifndef _java_lang_invoke_MethodHandleImpl$Makers$2_h_
#define _java_lang_invoke_MethodHandleImpl$Makers$2_h_
//$ class java.lang.invoke.MethodHandleImpl$Makers$2
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm;
			class MethodHandle;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$Makers$2 : public ::java::util::function::Function {
	$class(MethodHandleImpl$Makers$2, $NO_CLASS_INIT, ::java::util::function::Function)
public:
	MethodHandleImpl$Makers$2();
	void init$();
	virtual ::java::lang::invoke::LambdaForm* apply(::java::lang::invoke::MethodHandle* target);
	virtual $Object* apply(Object$* target) override;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleImpl$Makers$2_h_