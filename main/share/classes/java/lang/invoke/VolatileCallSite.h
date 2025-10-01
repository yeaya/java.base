#ifndef _java_lang_invoke_VolatileCallSite_h_
#define _java_lang_invoke_VolatileCallSite_h_
//$ class java.lang.invoke.VolatileCallSite
//$ extends java.lang.invoke.CallSite

#include <java/lang/invoke/CallSite.h>

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

class $export VolatileCallSite : public ::java::lang::invoke::CallSite {
	$class(VolatileCallSite, $NO_CLASS_INIT, ::java::lang::invoke::CallSite)
public:
	VolatileCallSite();
	void init$(::java::lang::invoke::MethodType* type);
	void init$(::java::lang::invoke::MethodHandle* target);
	virtual ::java::lang::invoke::MethodHandle* dynamicInvoker() override;
	virtual ::java::lang::invoke::MethodHandle* getTarget() override;
	virtual void setTarget(::java::lang::invoke::MethodHandle* newTarget) override;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_VolatileCallSite_h_