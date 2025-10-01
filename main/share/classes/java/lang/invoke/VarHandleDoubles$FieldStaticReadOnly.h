#ifndef _java_lang_invoke_VarHandleDoubles$FieldStaticReadOnly_h_
#define _java_lang_invoke_VarHandleDoubles$FieldStaticReadOnly_h_
//$ class java.lang.invoke.VarHandleDoubles$FieldStaticReadOnly
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

class VarHandleDoubles$FieldStaticReadOnly : public ::java::lang::invoke::VarHandle {
	$class(VarHandleDoubles$FieldStaticReadOnly, 0, ::java::lang::invoke::VarHandle)
public:
	VarHandleDoubles$FieldStaticReadOnly();
	using ::java::lang::invoke::VarHandle::get;
	using ::java::lang::invoke::VarHandle::getVolatile;
	using ::java::lang::invoke::VarHandle::getOpaque;
	using ::java::lang::invoke::VarHandle::getAcquire;
	using ::java::lang::invoke::VarHandle::accessModeTypeUncached;
	void init$(Object$* base, int64_t fieldOffset);
	void init$(Object$* base, int64_t fieldOffset, ::java::lang::invoke::VarForm* form, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	virtual ::java::util::Optional* describeConstable() override;
	static double get(::java::lang::invoke::VarHandle* ob);
	static double getAcquire(::java::lang::invoke::VarHandle* ob);
	static double getOpaque(::java::lang::invoke::VarHandle* ob);
	static double getVolatile(::java::lang::invoke::VarHandle* ob);
	virtual ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandleDoubles$FieldStaticReadOnly* withInvokeExactBehavior() override;
	$Object* base = nullptr;
	int64_t fieldOffset = 0;
	static ::java::lang::invoke::VarForm* FORM;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM")

#endif // _java_lang_invoke_VarHandleDoubles$FieldStaticReadOnly_h_