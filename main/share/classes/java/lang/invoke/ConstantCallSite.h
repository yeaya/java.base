#ifndef _java_lang_invoke_ConstantCallSite_h_
#define _java_lang_invoke_ConstantCallSite_h_
//$ class java.lang.invoke.ConstantCallSite
//$ extends java.lang.invoke.CallSite

#include <java/lang/invoke/CallSite.h>

#pragma push_macro("UNSAFE")
#undef UNSAFE

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodType;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $export ConstantCallSite : public ::java::lang::invoke::CallSite {
	$class(ConstantCallSite, 0, ::java::lang::invoke::CallSite)
public:
	ConstantCallSite();
	void init$(::java::lang::invoke::MethodHandle* target);
	void init$(::java::lang::invoke::MethodType* targetType, ::java::lang::invoke::MethodHandle* createTargetHook);
	virtual ::java::lang::invoke::MethodHandle* dynamicInvoker() override;
	virtual ::java::lang::invoke::MethodHandle* getTarget() override;
	virtual void setTarget(::java::lang::invoke::MethodHandle* ignore) override;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	bool isFrozen = false;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("UNSAFE")

#endif // _java_lang_invoke_ConstantCallSite_h_