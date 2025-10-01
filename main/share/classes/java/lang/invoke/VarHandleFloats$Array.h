#ifndef _java_lang_invoke_VarHandleFloats$Array_h_
#define _java_lang_invoke_VarHandleFloats$Array_h_
//$ class java.lang.invoke.VarHandleFloats$Array
//$ extends java.lang.invoke.VarHandle

#include <java/lang/invoke/VarHandle.h>

#pragma push_macro("FORM")
#undef FORM

namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
			class VarForm;
			class VarHandle$AccessType;
		}
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarHandleFloats$Array : public ::java::lang::invoke::VarHandle {
	$class(VarHandleFloats$Array, 0, ::java::lang::invoke::VarHandle)
public:
	VarHandleFloats$Array();
	using ::java::lang::invoke::VarHandle::get;
	using ::java::lang::invoke::VarHandle::getVolatile;
	using ::java::lang::invoke::VarHandle::getOpaque;
	using ::java::lang::invoke::VarHandle::getAcquire;
	using ::java::lang::invoke::VarHandle::compareAndSet;
	using ::java::lang::invoke::VarHandle::compareAndExchange;
	using ::java::lang::invoke::VarHandle::compareAndExchangeAcquire;
	using ::java::lang::invoke::VarHandle::compareAndExchangeRelease;
	using ::java::lang::invoke::VarHandle::getAndSet;
	using ::java::lang::invoke::VarHandle::getAndSetAcquire;
	using ::java::lang::invoke::VarHandle::getAndSetRelease;
	using ::java::lang::invoke::VarHandle::getAndAdd;
	using ::java::lang::invoke::VarHandle::getAndAddAcquire;
	using ::java::lang::invoke::VarHandle::getAndAddRelease;
	using ::java::lang::invoke::VarHandle::accessModeTypeUncached;
	void init$(int32_t abase, int32_t ashift);
	void init$(int32_t abase, int32_t ashift, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	static float compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float expected, float value);
	static float compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float expected, float value);
	static float compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float expected, float value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float expected, float value);
	virtual ::java::util::Optional* describeConstable() override;
	static float get(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static float getAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static float getAndAdd(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float value);
	static float getAndAddAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float value);
	static float getAndAddRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float value);
	static float getAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float value);
	static float getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float value);
	static float getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float value);
	static float getOpaque(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static float getVolatile(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	using ::java::lang::invoke::VarHandle::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float value);
	using ::java::lang::invoke::VarHandle::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float value);
	using ::java::lang::invoke::VarHandle::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float value);
	using ::java::lang::invoke::VarHandle::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float expected, float value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float expected, float value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float expected, float value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, float expected, float value);
	virtual ::java::lang::invoke::VarHandleFloats$Array* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleFloats$Array* withInvokeExactBehavior() override;
	int32_t abase = 0;
	int32_t ashift = 0;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleFloats$Array_h_