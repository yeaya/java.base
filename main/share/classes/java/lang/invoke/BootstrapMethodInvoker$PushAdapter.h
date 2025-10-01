#ifndef _java_lang_invoke_BootstrapMethodInvoker$PushAdapter_h_
#define _java_lang_invoke_BootstrapMethodInvoker$PushAdapter_h_
//$ class java.lang.invoke.BootstrapMethodInvoker$PushAdapter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class BootstrapMethodInvoker$PushAdapter : public ::java::lang::Object {
	$class(BootstrapMethodInvoker$PushAdapter, 0, ::java::lang::Object)
public:
	BootstrapMethodInvoker$PushAdapter();
	void init$();
	static $Object* pushToBootstrapMethod(::java::lang::invoke::MethodHandle* pullModeBSM, ::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, Object$* type, $ObjectArray* arguments);
	static ::java::lang::invoke::MethodHandle* MH_pushToBootstrapMethod;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_BootstrapMethodInvoker$PushAdapter_h_