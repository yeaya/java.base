#ifndef _java_lang_invoke_NativeMethodHandle_h_
#define _java_lang_invoke_NativeMethodHandle_h_
//$ class java.lang.invoke.NativeMethodHandle
//$ extends java.lang.invoke.MethodHandle

#include <java/lang/invoke/MethodHandle.h>

#pragma push_macro("IMPL_NAMES")
#undef IMPL_NAMES

namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle;
			class LambdaForm;
			class MemberName$Factory;
			class MethodType;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace invoke {
			class NativeEntryPoint;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class NativeMethodHandle : public ::java::lang::invoke::MethodHandle {
	$class(NativeMethodHandle, 0, ::java::lang::invoke::MethodHandle)
public:
	NativeMethodHandle();
	void init$(::java::lang::invoke::MethodType* type, ::java::lang::invoke::LambdaForm* form, ::java::lang::invoke::MethodHandle* fallback, ::jdk::internal::invoke::NativeEntryPoint* nep);
	static bool allTypesPrimitive(::java::lang::invoke::MethodType* type);
	virtual ::java::lang::invoke::MethodHandle* copyWith(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf) override;
	static ::java::lang::invoke::MethodHandle* internalFallback(Object$* mh);
	static $Object* internalNativeEntryPoint(Object$* mh);
	static ::java::lang::invoke::MethodHandle* make(::jdk::internal::invoke::NativeEntryPoint* nep, ::java::lang::invoke::MethodHandle* fallback);
	static ::java::lang::invoke::LambdaForm* makePreparedLambdaForm(::java::lang::invoke::MethodType* mtype);
	static ::java::lang::invoke::LambdaForm* preparedLambdaForm(::java::lang::invoke::MethodType* mtype);
	virtual ::java::lang::invoke::BoundMethodHandle* rebind() override;
	static bool $assertionsDisabled;
	::jdk::internal::invoke::NativeEntryPoint* nep = nullptr;
	::java::lang::invoke::MethodHandle* fallback = nullptr;
	static ::java::lang::invoke::MemberName$Factory* IMPL_NAMES;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("IMPL_NAMES")

#endif // _java_lang_invoke_NativeMethodHandle_h_