#ifndef _java_lang_invoke_VarHandleShorts$FieldInstanceReadOnly_h_
#define _java_lang_invoke_VarHandleShorts$FieldInstanceReadOnly_h_
//$ class java.lang.invoke.VarHandleShorts$FieldInstanceReadOnly
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

class VarHandleShorts$FieldInstanceReadOnly : public ::java::lang::invoke::VarHandle {
	$class(VarHandleShorts$FieldInstanceReadOnly, 0, ::java::lang::invoke::VarHandle)
public:
	VarHandleShorts$FieldInstanceReadOnly();
	using ::java::lang::invoke::VarHandle::get;
	using ::java::lang::invoke::VarHandle::getVolatile;
	using ::java::lang::invoke::VarHandle::getOpaque;
	using ::java::lang::invoke::VarHandle::getAcquire;
	using ::java::lang::invoke::VarHandle::accessModeTypeUncached;
	void init$($Class* receiverType, int64_t fieldOffset);
	void init$($Class* receiverType, int64_t fieldOffset, ::java::lang::invoke::VarForm* form, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	virtual ::java::util::Optional* describeConstable() override;
	static int16_t get(::java::lang::invoke::VarHandle* ob, Object$* holder);
	static int16_t getAcquire(::java::lang::invoke::VarHandle* ob, Object$* holder);
	static int16_t getOpaque(::java::lang::invoke::VarHandle* ob, Object$* holder);
	static int16_t getVolatile(::java::lang::invoke::VarHandle* ob, Object$* holder);
	virtual ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleShorts$FieldInstanceReadOnly* withInvokeExactBehavior() override;
	int64_t fieldOffset = 0;
	$Class* receiverType = nullptr;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleShorts$FieldInstanceReadOnly_h_