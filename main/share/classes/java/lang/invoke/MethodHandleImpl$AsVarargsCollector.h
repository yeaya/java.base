#ifndef _java_lang_invoke_MethodHandleImpl$AsVarargsCollector_h_
#define _java_lang_invoke_MethodHandleImpl$AsVarargsCollector_h_
//$ class java.lang.invoke.MethodHandleImpl$AsVarargsCollector
//$ extends java.lang.invoke.DelegatingMethodHandle

#include <java/lang/Array.h>
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

class MethodHandleImpl$AsVarargsCollector : public ::java::lang::invoke::DelegatingMethodHandle {
	$class(MethodHandleImpl$AsVarargsCollector, 0, ::java::lang::invoke::DelegatingMethodHandle)
public:
	MethodHandleImpl$AsVarargsCollector();
	using ::java::lang::invoke::DelegatingMethodHandle::invokeWithArguments;
	void init$(::java::lang::invoke::MethodHandle* target, $Class* arrayType);
	void init$(::java::lang::invoke::MethodType* type, ::java::lang::invoke::MethodHandle* target, $Class* arrayType);
	virtual ::java::lang::invoke::MethodHandle* asFixedArity() override;
	virtual ::java::lang::invoke::MethodHandle* asTypeUncached(::java::lang::invoke::MethodType* newType) override;
	virtual ::java::lang::invoke::MethodHandle* getTarget() override;
	virtual $Object* invokeWithArguments($ObjectArray* arguments) override;
	virtual bool isVarargsCollector() override;
	virtual ::java::lang::invoke::MethodHandle* setVarargs(::java::lang::invoke::MemberName* member) override;
	virtual bool viewAsTypeChecks(::java::lang::invoke::MethodType* newType, bool strict) override;
	virtual ::java::lang::invoke::MethodHandle* withVarargs(bool makeVarargs) override;
	static bool $assertionsDisabled;
	::java::lang::invoke::MethodHandle* target = nullptr;
	$Class* arrayType = nullptr;
	::java::lang::invoke::MethodHandle* asCollectorCache = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleImpl$AsVarargsCollector_h_