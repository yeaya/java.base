#ifndef _java_lang_invoke_VarHandleShorts$FieldStaticReadOnly_h_
#define _java_lang_invoke_VarHandleShorts$FieldStaticReadOnly_h_
//$ class java.lang.invoke.VarHandleShorts$FieldStaticReadOnly
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

class VarHandleShorts$FieldStaticReadOnly : public ::java::lang::invoke::VarHandle {
	$class(VarHandleShorts$FieldStaticReadOnly, 0, ::java::lang::invoke::VarHandle)
public:
	VarHandleShorts$FieldStaticReadOnly();
	using ::java::lang::invoke::VarHandle::get;
	using ::java::lang::invoke::VarHandle::getVolatile;
	using ::java::lang::invoke::VarHandle::getOpaque;
	using ::java::lang::invoke::VarHandle::getAcquire;
	using ::java::lang::invoke::VarHandle::accessModeTypeUncached;
	void init$(Object$* base, int64_t fieldOffset);
	void init$(Object$* base, int64_t fieldOffset, ::java::lang::invoke::VarForm* form, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	virtual ::java::util::Optional* describeConstable() override;
	static int16_t get(::java::lang::invoke::VarHandle* ob);
	static int16_t getAcquire(::java::lang::invoke::VarHandle* ob);
	static int16_t getOpaque(::java::lang::invoke::VarHandle* ob);
	static int16_t getVolatile(::java::lang::invoke::VarHandle* ob);
	virtual ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleShorts$FieldStaticReadOnly* withInvokeExactBehavior() override;
	$Object* base = nullptr;
	int64_t fieldOffset = 0;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleShorts$FieldStaticReadOnly_h_