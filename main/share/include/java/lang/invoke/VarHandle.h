#ifndef _java_lang_invoke_VarHandle_h_
#define _java_lang_invoke_VarHandle_h_
//$ class java.lang.invoke.VarHandle
//$ extends java.lang.constant.Constable

#include <java/lang/Array.h>
#include <java/lang/constant/Constable.h>

#pragma push_macro("AIOOBE_SUPPLIER")
#undef AIOOBE_SUPPLIER
#pragma push_macro("VFORM_OFFSET")
#undef VFORM_OFFSET

namespace java {
	namespace lang {
		class RuntimeException;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodType;
			class VarForm;
			class VarHandle$AccessDescriptor;
			class VarHandle$AccessMode;
			class VarHandle$AccessType;
			class VarHandle$TypesAndInvokers;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $import VarHandle : public ::java::lang::constant::Constable {
	$class(VarHandle, 0, ::java::lang::constant::Constable)
public:
	VarHandle();
	void init$(::java::lang::invoke::VarForm* vform);
	void init$(::java::lang::invoke::VarForm* vform, bool exact);
	::java::lang::invoke::MethodType* accessModeType(::java::lang::invoke::VarHandle$AccessMode* accessMode);
	::java::lang::invoke::MethodType* accessModeType(int32_t accessTypeOrdinal);
	::java::lang::invoke::MethodType* accessModeTypeUncached(int32_t accessTypeOrdinal);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* accessMode) {return nullptr;}
	static void acquireFence();
	virtual ::java::lang::invoke::VarHandle* asDirect();
	void checkExactAccessMode(::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	$Object* compareAndExchange($ObjectArray* args);
	$Object* compareAndExchangeAcquire($ObjectArray* args);
	$Object* compareAndExchangeRelease($ObjectArray* args);
	bool compareAndSet($ObjectArray* args);
	virtual ::java::util::List* coordinateTypes();
	virtual ::java::util::Optional* describeConstable() override;
	static void fullFence();
	$Object* get($ObjectArray* args);
	$Object* getAcquire($ObjectArray* args);
	$Object* getAndAdd($ObjectArray* args);
	$Object* getAndAddAcquire($ObjectArray* args);
	$Object* getAndAddRelease($ObjectArray* args);
	$Object* getAndBitwiseAnd($ObjectArray* args);
	$Object* getAndBitwiseAndAcquire($ObjectArray* args);
	$Object* getAndBitwiseAndRelease($ObjectArray* args);
	$Object* getAndBitwiseOr($ObjectArray* args);
	$Object* getAndBitwiseOrAcquire($ObjectArray* args);
	$Object* getAndBitwiseOrRelease($ObjectArray* args);
	$Object* getAndBitwiseXor($ObjectArray* args);
	$Object* getAndBitwiseXorAcquire($ObjectArray* args);
	$Object* getAndBitwiseXorRelease($ObjectArray* args);
	$Object* getAndSet($ObjectArray* args);
	$Object* getAndSetAcquire($ObjectArray* args);
	$Object* getAndSetRelease($ObjectArray* args);
	virtual ::java::lang::invoke::MethodHandle* getMethodHandle(int32_t mode);
	::java::lang::invoke::MethodHandle* getMethodHandleUncached(int32_t mode);
	$Object* getOpaque($ObjectArray* args);
	::java::lang::invoke::VarHandle$TypesAndInvokers* getTypesAndInvokers();
	$Object* getVolatile($ObjectArray* args);
	virtual bool hasInvokeExactBehavior();
	bool isAccessModeSupported(::java::lang::invoke::VarHandle$AccessMode* accessMode);
	virtual bool isDirect();
	static void loadLoadFence();
	static void releaseFence();
	void set($ObjectArray* args);
	void setOpaque($ObjectArray* args);
	void setRelease($ObjectArray* args);
	void setVolatile($ObjectArray* args);
	static void storeStoreFence();
	virtual ::java::lang::invoke::VarHandle* target();
	void throwWrongMethodTypeException(::java::lang::invoke::VarHandle$AccessDescriptor* ad);
	virtual ::java::lang::invoke::MethodHandle* toMethodHandle(::java::lang::invoke::VarHandle$AccessMode* accessMode);
	virtual $String* toString() override;
	virtual ::java::lang::RuntimeException* unsupported();
	void updateVarForm(::java::lang::invoke::VarForm* newVForm);
	virtual $Class* varType();
	bool weakCompareAndSet($ObjectArray* args);
	bool weakCompareAndSetAcquire($ObjectArray* args);
	bool weakCompareAndSetPlain($ObjectArray* args);
	bool weakCompareAndSetRelease($ObjectArray* args);
	virtual ::java::lang::invoke::VarHandle* withInvokeBehavior() {return nullptr;}
	virtual ::java::lang::invoke::VarHandle* withInvokeExactBehavior() {return nullptr;}
	static bool $assertionsDisabled;
	::java::lang::invoke::VarForm* vform = nullptr;
	bool exact = false;
	::java::lang::invoke::VarHandle$TypesAndInvokers* typesAndInvokers = nullptr;
	static ::java::util::function::BiFunction* AIOOBE_SUPPLIER;
	static int64_t VFORM_OFFSET;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("AIOOBE_SUPPLIER")
#pragma pop_macro("VFORM_OFFSET")

#endif // _java_lang_invoke_VarHandle_h_