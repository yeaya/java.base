#ifndef _java_lang_invoke_BootstrapMethodInvoker$PullAdapter_h_
#define _java_lang_invoke_BootstrapMethodInvoker$PullAdapter_h_
//$ class java.lang.invoke.BootstrapMethodInvoker$PullAdapter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class BootstrapCallInfo;
			class MethodHandle;
			class MethodHandles$Lookup;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class BootstrapMethodInvoker$PullAdapter : public ::java::lang::Object {
	$class(BootstrapMethodInvoker$PullAdapter, 0, ::java::lang::Object)
public:
	BootstrapMethodInvoker$PullAdapter();
	void init$();
	static $Object* pullFromBootstrapMethod(::java::lang::invoke::MethodHandle* pushModeBSM, ::java::lang::invoke::MethodHandles$Lookup* lookup, ::java::lang::invoke::BootstrapCallInfo* bsci);
	static ::java::lang::invoke::MethodHandle* MH_pullFromBootstrapMethod;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_BootstrapMethodInvoker$PullAdapter_h_