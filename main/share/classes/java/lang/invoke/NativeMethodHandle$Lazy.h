#ifndef _java_lang_invoke_NativeMethodHandle$Lazy_h_
#define _java_lang_invoke_NativeMethodHandle$Lazy_h_
//$ class java.lang.invoke.NativeMethodHandle$Lazy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm$NamedFunction;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class NativeMethodHandle$Lazy : public ::java::lang::Object {
	$class(NativeMethodHandle$Lazy, 0, ::java::lang::Object)
public:
	NativeMethodHandle$Lazy();
	void init$();
	static bool $assertionsDisabled;
	static ::java::lang::invoke::LambdaForm$NamedFunction* NF_internalNativeEntryPoint;
	static ::java::lang::invoke::LambdaForm$NamedFunction* NF_internalFallback;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_NativeMethodHandle$Lazy_h_