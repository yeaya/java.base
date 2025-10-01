#ifndef _java_lang_invoke_MethodHandleNatives$CallSiteContext_h_
#define _java_lang_invoke_MethodHandleNatives$CallSiteContext_h_
//$ class java.lang.invoke.MethodHandleNatives$CallSiteContext
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleNatives$CallSiteContext : public ::java::lang::Runnable {
	$class(MethodHandleNatives$CallSiteContext, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	MethodHandleNatives$CallSiteContext();
	void init$();
	static ::java::lang::invoke::MethodHandleNatives$CallSiteContext* make(::java::lang::invoke::CallSite* cs);
	virtual void run() override;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleNatives$CallSiteContext_h_