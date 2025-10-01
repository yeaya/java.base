#ifndef _java_lang_invoke_MutableCallSite_h_
#define _java_lang_invoke_MutableCallSite_h_
//$ class java.lang.invoke.MutableCallSite
//$ extends java.lang.invoke.CallSite

#include <java/lang/Array.h>
#include <java/lang/invoke/CallSite.h>

#pragma push_macro("STORE_BARRIER")
#undef STORE_BARRIER

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $export MutableCallSite : public ::java::lang::invoke::CallSite {
	$class(MutableCallSite, 0, ::java::lang::invoke::CallSite)
public:
	MutableCallSite();
	void init$(::java::lang::invoke::MethodType* type);
	void init$(::java::lang::invoke::MethodHandle* target);
	virtual ::java::lang::invoke::MethodHandle* dynamicInvoker() override;
	virtual ::java::lang::invoke::MethodHandle* getTarget() override;
	virtual void setTarget(::java::lang::invoke::MethodHandle* newTarget) override;
	static void syncAll($Array<::java::lang::invoke::MutableCallSite>* sites);
	static ::java::util::concurrent::atomic::AtomicInteger* STORE_BARRIER;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("STORE_BARRIER")

#endif // _java_lang_invoke_MutableCallSite_h_