#ifndef _java_lang_invoke_LambdaForm$NamedFunction_h_
#define _java_lang_invoke_LambdaForm$NamedFunction_h_
//$ class java.lang.invoke.LambdaForm$NamedFunction
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INVOKER_METHOD_TYPE")
#undef INVOKER_METHOD_TYPE

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm$BasicType;
			class MemberName;
			class MethodHandle;
			class MethodHandleImpl$Intrinsic;
			class MethodType;
			class MethodTypeForm;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class LambdaForm$NamedFunction : public ::java::lang::Object {
	$class(LambdaForm$NamedFunction, 0, ::java::lang::Object)
public:
	LambdaForm$NamedFunction();
	void init$(::java::lang::invoke::MethodHandle* resolvedHandle);
	void init$(::java::lang::invoke::MemberName* member, ::java::lang::invoke::MethodHandle* resolvedHandle);
	void init$(::java::lang::invoke::MethodType* basicInvokerType);
	void init$(::java::lang::reflect::Method* method);
	void init$(::java::lang::invoke::MemberName* member);
	virtual int32_t arity();
	bool assertMemberIsConsistent();
	static ::java::lang::invoke::MethodHandle* computeInvoker(::java::lang::invoke::MethodTypeForm* typeForm);
	virtual bool equals(Object$* other) override;
	virtual int32_t hashCode() override;
	virtual $Object* intrinsicData();
	virtual ::java::lang::invoke::MethodHandleImpl$Intrinsic* intrinsicName();
	virtual $Object* invokeWithArguments($ObjectArray* arguments);
	virtual $Object* invokeWithArgumentsTracing($ObjectArray* arguments);
	::java::lang::invoke::MethodHandle* invoker();
	virtual bool isConstantZero();
	virtual bool isIdentity();
	static bool isInvokeBasic(::java::lang::invoke::MemberName* member);
	virtual ::java::lang::invoke::MemberName* member();
	virtual $Class* memberDeclaringClassOrNull();
	virtual ::java::lang::invoke::MethodType* methodType();
	virtual ::java::lang::invoke::LambdaForm$BasicType* parameterType(int32_t n);
	virtual void resolve();
	virtual ::java::lang::invoke::MethodHandle* resolvedHandle();
	virtual ::java::lang::invoke::LambdaForm$BasicType* returnType();
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::java::lang::invoke::MemberName* member$ = nullptr;
	::java::lang::invoke::MethodHandle* resolvedHandle$ = nullptr;
	::java::lang::invoke::MethodHandle* invoker$ = nullptr;
	static ::java::lang::invoke::MethodType* INVOKER_METHOD_TYPE;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("INVOKER_METHOD_TYPE")

#endif // _java_lang_invoke_LambdaForm$NamedFunction_h_