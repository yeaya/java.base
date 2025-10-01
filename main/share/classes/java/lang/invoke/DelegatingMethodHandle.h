#ifndef _java_lang_invoke_DelegatingMethodHandle_h_
#define _java_lang_invoke_DelegatingMethodHandle_h_
//$ class java.lang.invoke.DelegatingMethodHandle
//$ extends java.lang.invoke.MethodHandle

#include <java/lang/invoke/MethodHandle.h>

namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle;
			class LambdaForm;
			class LambdaForm$Kind;
			class LambdaForm$NamedFunction;
			class MemberName;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class DelegatingMethodHandle : public ::java::lang::invoke::MethodHandle {
	$class(DelegatingMethodHandle, 0, ::java::lang::invoke::MethodHandle)
public:
	DelegatingMethodHandle();
	virtual ::java::lang::invoke::MethodHandle* asTypeUncached(::java::lang::invoke::MethodType* newType) override;
	void init$(::java::lang::invoke::MethodHandle* target);
	void init$(::java::lang::invoke::MethodType* type, ::java::lang::invoke::MethodHandle* target);
	void init$(::java::lang::invoke::MethodType* type, ::java::lang::invoke::LambdaForm* form);
	static ::java::lang::invoke::LambdaForm* chooseDelegatingForm(::java::lang::invoke::MethodHandle* target);
	virtual ::java::lang::invoke::MethodHandle* copyWith(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf) override;
	virtual ::java::lang::invoke::MethodHandle* getTarget() {return nullptr;}
	virtual $Class* internalCallerClass() override;
	virtual ::java::lang::invoke::MemberName* internalMemberName() override;
	virtual $Object* internalProperties() override;
	virtual bool isCrackable() override;
	virtual bool isInvokeSpecial() override;
	static ::java::lang::invoke::LambdaForm* makeReinvokerForm(::java::lang::invoke::MethodHandle* target, int32_t whichCache, Object$* constraint, ::java::lang::invoke::LambdaForm$NamedFunction* getTargetFn);
	static ::java::lang::invoke::LambdaForm* makeReinvokerForm(::java::lang::invoke::MethodHandle* target, int32_t whichCache, Object$* constraint, bool forceInline, ::java::lang::invoke::LambdaForm$NamedFunction* getTargetFn, ::java::lang::invoke::LambdaForm$NamedFunction* preActionFn);
	virtual ::java::lang::invoke::BoundMethodHandle* rebind() override;
	virtual ::java::lang::invoke::MethodHandle* viewAsType(::java::lang::invoke::MethodType* newType, bool strict) override;
	static ::java::lang::invoke::LambdaForm$Kind* whichKind(int32_t whichCache);
	static bool $assertionsDisabled;
	static ::java::lang::invoke::LambdaForm$NamedFunction* NF_getTarget;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_DelegatingMethodHandle_h_