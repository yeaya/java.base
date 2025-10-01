#ifndef _java_lang_invoke_MethodHandleImpl$WrappedMember_h_
#define _java_lang_invoke_MethodHandleImpl$WrappedMember_h_
//$ class java.lang.invoke.MethodHandleImpl$WrappedMember
//$ extends java.lang.invoke.DelegatingMethodHandle

#include <java/lang/invoke/DelegatingMethodHandle.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MemberName;
			class MethodHandle;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$WrappedMember : public ::java::lang::invoke::DelegatingMethodHandle {
	$class(MethodHandleImpl$WrappedMember, $NO_CLASS_INIT, ::java::lang::invoke::DelegatingMethodHandle)
public:
	MethodHandleImpl$WrappedMember();
	void init$(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodType* type, ::java::lang::invoke::MemberName* member, bool isInvokeSpecial, $Class* callerClass);
	virtual ::java::lang::invoke::MethodHandle* asTypeUncached(::java::lang::invoke::MethodType* newType) override;
	virtual ::java::lang::invoke::MethodHandle* getTarget() override;
	virtual $Class* internalCallerClass() override;
	virtual ::java::lang::invoke::MemberName* internalMemberName() override;
	virtual bool isInvokeSpecial() override;
	::java::lang::invoke::MethodHandle* target = nullptr;
	::java::lang::invoke::MemberName* member = nullptr;
	$Class* callerClass = nullptr;
	bool isInvokeSpecial$ = false;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleImpl$WrappedMember_h_