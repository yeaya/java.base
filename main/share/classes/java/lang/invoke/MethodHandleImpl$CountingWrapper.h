#ifndef _java_lang_invoke_MethodHandleImpl$CountingWrapper_h_
#define _java_lang_invoke_MethodHandleImpl$CountingWrapper_h_
//$ class java.lang.invoke.MethodHandleImpl$CountingWrapper
//$ extends java.lang.invoke.DelegatingMethodHandle

#include <java/lang/invoke/DelegatingMethodHandle.h>

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm;
			class LambdaForm$NamedFunction;
			class MethodHandle;
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$CountingWrapper : public ::java::lang::invoke::DelegatingMethodHandle {
	$class(MethodHandleImpl$CountingWrapper, 0, ::java::lang::invoke::DelegatingMethodHandle)
public:
	MethodHandleImpl$CountingWrapper();
	void init$(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::LambdaForm* lform, ::java::util::function::Function* countingFromProducer, ::java::util::function::Function* nonCountingFormProducer, int32_t count);
	virtual ::java::lang::invoke::MethodHandle* asTypeUncached(::java::lang::invoke::MethodType* newType) override;
	virtual bool countDown();
	virtual ::java::lang::invoke::MethodHandle* getTarget() override;
	static void maybeStopCounting(Object$* o1);
	::java::lang::invoke::MethodHandle* target = nullptr;
	int32_t count = 0;
	::java::util::function::Function* countingFormProducer = nullptr;
	::java::util::function::Function* nonCountingFormProducer = nullptr;
	$volatile(bool) isCounting = false;
	static ::java::lang::invoke::LambdaForm$NamedFunction* NF_maybeStopCounting;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleImpl$CountingWrapper_h_