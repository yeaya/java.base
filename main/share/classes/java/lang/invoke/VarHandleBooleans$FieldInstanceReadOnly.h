#ifndef _java_lang_invoke_VarHandleBooleans$FieldInstanceReadOnly_h_
#define _java_lang_invoke_VarHandleBooleans$FieldInstanceReadOnly_h_
//$ class java.lang.invoke.VarHandleBooleans$FieldInstanceReadOnly
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

class VarHandleBooleans$FieldInstanceReadOnly : public ::java::lang::invoke::VarHandle {
	$class(VarHandleBooleans$FieldInstanceReadOnly, 0, ::java::lang::invoke::VarHandle)
public:
	VarHandleBooleans$FieldInstanceReadOnly();
	using ::java::lang::invoke::VarHandle::get;
	using ::java::lang::invoke::VarHandle::getVolatile;
	using ::java::lang::invoke::VarHandle::getOpaque;
	using ::java::lang::invoke::VarHandle::getAcquire;
	using ::java::lang::invoke::VarHandle::accessModeTypeUncached;
	void init$($Class* receiverType, int64_t fieldOffset);
	void init$($Class* receiverType, int64_t fieldOffset, ::java::lang::invoke::VarForm* form, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	virtual ::java::util::Optional* describeConstable() override;
	static bool get(::java::lang::invoke::VarHandle* ob, Object$* holder);
	static bool getAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder);
	static bool getOpaque(::java::lang::invoke::VarHandle* ob, Object$* holder);
	static bool getVolatile(::java::lang::invoke::VarHandle* ob, Object$* holder);
	virtual ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleBooleans$FieldInstanceReadOnly* withInvokeExactBehavior() override;
	int64_t fieldOffset = 0;
	$Class* receiverType = nullptr;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleBooleans$FieldInstanceReadOnly_h_