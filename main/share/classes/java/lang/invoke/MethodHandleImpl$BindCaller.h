#ifndef _java_lang_invoke_MethodHandleImpl$BindCaller_h_
#define _java_lang_invoke_MethodHandleImpl$BindCaller_h_
//$ class java.lang.invoke.MethodHandleImpl$BindCaller
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INVOKER_MT")
#undef INVOKER_MT
#pragma push_macro("INJECTED_INVOKER_TEMPLATE")
#undef INJECTED_INVOKER_TEMPLATE

namespace java {
	namespace lang {
		class ClassValue;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$BindCaller : public ::java::lang::Object {
	$class(MethodHandleImpl$BindCaller, 0, ::java::lang::Object)
public:
	MethodHandleImpl$BindCaller();
	void init$();
	static ::java::lang::invoke::MethodHandle* bindCaller(::java::lang::invoke::MethodHandle* mh, $Class* hostClass);
	static bool checkCallerClass($Class* expected);
	static bool checkInjectedInvoker($Class* hostClass, $Class* invokerClass);
	static $bytes* generateInvokerTemplate();
	static ::java::lang::invoke::MethodHandle* makeInjectedInvoker($Class* targetClass);
	static ::java::lang::invoke::MethodHandle* prepareForInvoker(::java::lang::invoke::MethodHandle* mh);
	static ::java::lang::invoke::MethodHandle* restoreToType(::java::lang::invoke::MethodHandle* vamh, ::java::lang::invoke::MethodHandle* original, $Class* hostClass);
	static bool $assertionsDisabled;
	static ::java::lang::invoke::MethodType* INVOKER_MT;
	static ::java::lang::ClassValue* CV_makeInjectedInvoker;
	static ::java::lang::invoke::MethodHandle* MH_checkCallerClass;
	static $bytes* INJECTED_INVOKER_TEMPLATE;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("INVOKER_MT")
#pragma pop_macro("INJECTED_INVOKER_TEMPLATE")

#endif // _java_lang_invoke_MethodHandleImpl$BindCaller_h_