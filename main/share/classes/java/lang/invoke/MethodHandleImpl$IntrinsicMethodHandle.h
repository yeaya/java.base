#ifndef _java_lang_invoke_MethodHandleImpl$IntrinsicMethodHandle_h_
#define _java_lang_invoke_MethodHandleImpl$IntrinsicMethodHandle_h_
//$ class java.lang.invoke.MethodHandleImpl$IntrinsicMethodHandle
//$ extends java.lang.invoke.DelegatingMethodHandle

#include <java/lang/invoke/DelegatingMethodHandle.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandleImpl$Intrinsic;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodHandleImpl$IntrinsicMethodHandle : public ::java::lang::invoke::DelegatingMethodHandle {
	$class(MethodHandleImpl$IntrinsicMethodHandle, $NO_CLASS_INIT, ::java::lang::invoke::DelegatingMethodHandle)
public:
	MethodHandleImpl$IntrinsicMethodHandle();
	using ::java::lang::invoke::DelegatingMethodHandle::asCollector;
	void init$(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandleImpl$Intrinsic* intrinsicName);
	void init$(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandleImpl$Intrinsic* intrinsicName, Object$* intrinsicData);
	virtual ::java::lang::invoke::MethodHandle* asCollector($Class* arrayType, int32_t arrayLength) override;
	virtual ::java::lang::invoke::MethodHandle* asTypeUncached(::java::lang::invoke::MethodType* newType) override;
	virtual ::java::lang::invoke::MethodHandle* getTarget() override;
	virtual $Object* internalProperties() override;
	virtual $Object* intrinsicData() override;
	virtual ::java::lang::invoke::MethodHandleImpl$Intrinsic* intrinsicName() override;
	::java::lang::invoke::MethodHandle* target = nullptr;
	::java::lang::invoke::MethodHandleImpl$Intrinsic* intrinsicName$ = nullptr;
	$Object* intrinsicData$ = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleImpl$IntrinsicMethodHandle_h_