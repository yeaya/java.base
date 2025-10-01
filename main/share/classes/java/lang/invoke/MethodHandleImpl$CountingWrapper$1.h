#ifndef _java_lang_invoke_MethodHandleImpl$CountingWrapper$1_h_
#define _java_lang_invoke_MethodHandleImpl$CountingWrapper$1_h_
//$ class java.lang.invoke.MethodHandleImpl$CountingWrapper$1
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm;
			class MethodHandleImpl$CountingWrapper;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$CountingWrapper$1 : public ::java::util::function::Function {
	$class(MethodHandleImpl$CountingWrapper$1, $NO_CLASS_INIT, ::java::util::function::Function)
public:
	MethodHandleImpl$CountingWrapper$1();
	void init$(::java::lang::invoke::MethodHandleImpl$CountingWrapper* val$wrapper);
	virtual ::java::lang::invoke::LambdaForm* apply(::java::lang::invoke::LambdaForm* oldForm);
	virtual $Object* apply(Object$* oldForm) override;
	::java::lang::invoke::MethodHandleImpl$CountingWrapper* val$wrapper = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleImpl$CountingWrapper$1_h_