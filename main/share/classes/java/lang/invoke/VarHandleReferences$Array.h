#ifndef _java_lang_invoke_VarHandleReferences$Array_h_
#define _java_lang_invoke_VarHandleReferences$Array_h_
//$ class java.lang.invoke.VarHandleReferences$Array
//$ extends java.lang.invoke.VarHandle

#include <java/lang/Array.h>
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

class VarHandleReferences$Array : public ::java::lang::invoke::VarHandle {
	$class(VarHandleReferences$Array, 0, ::java::lang::invoke::VarHandle)
public:
	VarHandleReferences$Array();
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
	using ::java::lang::invoke::VarHandle::accessModeTypeUncached;
	void init$(int32_t abase, int32_t ashift, $Class* arrayType);
	void init$(int32_t abase, int32_t ashift, $Class* arrayType, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	static $Object* compareAndExchange(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value);
	static $Object* compareAndExchangeAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value);
	static $Object* compareAndExchangeRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value);
	static bool compareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value);
	virtual ::java::util::Optional* describeConstable() override;
	static $Object* get(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static $Object* getAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static $Object* getAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* value);
	static $Object* getAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* value);
	static $Object* getAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* value);
	static $Object* getOpaque(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static $Object* getVolatile(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index);
	static $Object* reflectiveTypeCheck($ObjectArray* oarray, Object$* value);
	static $Object* runtimeTypeCheck(::java::lang::invoke::VarHandleReferences$Array* handle, $ObjectArray* oarray, Object$* value);
	using ::java::lang::invoke::VarHandle::set;
	static void set(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* value);
	using ::java::lang::invoke::VarHandle::setOpaque;
	static void setOpaque(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* value);
	using ::java::lang::invoke::VarHandle::setRelease;
	static void setRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* value);
	using ::java::lang::invoke::VarHandle::setVolatile;
	static void setVolatile(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSet;
	static bool weakCompareAndSet(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetAcquire;
	static bool weakCompareAndSetAcquire(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetPlain;
	static bool weakCompareAndSetPlain(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value);
	using ::java::lang::invoke::VarHandle::weakCompareAndSetRelease;
	static bool weakCompareAndSetRelease(::java::lang::invoke::VarHandle* ob, Object$* oarray, int32_t index, Object$* expected, Object$* value);
	virtual ::java::lang::invoke::VarHandleReferences$Array* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleReferences$Array* withInvokeExactBehavior() override;
	int32_t abase = 0;
	int32_t ashift = 0;
	$Class* arrayType = nullptr;
	$Class* componentType = nullptr;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleReferences$Array_h_