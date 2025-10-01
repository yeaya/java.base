#ifndef _java_lang_invoke_IndirectVarHandle_h_
#define _java_lang_invoke_IndirectVarHandle_h_
//$ class java.lang.invoke.IndirectVarHandle
//$ extends java.lang.invoke.VarHandle

#include <java/lang/Array.h>
#include <java/lang/invoke/VarHandle.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodType;
			class VarForm;
			class VarHandle$AccessMode;
			class VarHandle$AccessType;
		}
	}
}
namespace java {
	namespace util {
		class List;
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

class IndirectVarHandle : public ::java::lang::invoke::VarHandle {
	$class(IndirectVarHandle, $NO_CLASS_INIT, ::java::lang::invoke::VarHandle)
public:
	IndirectVarHandle();
	using ::java::lang::invoke::VarHandle::accessModeTypeUncached;
	void init$(::java::lang::invoke::VarHandle* target, $Class* value, $ClassArray* coordinates, ::java::util::function::BiFunction* handleFactory);
	void init$(::java::lang::invoke::VarHandle* target, $Class* value, $ClassArray* coordinates, ::java::util::function::BiFunction* handleFactory, ::java::lang::invoke::VarForm* form, bool exact);
	virtual ::java::lang::invoke::MethodType* accessModeTypeUncached(::java::lang::invoke::VarHandle$AccessType* at) override;
	virtual ::java::lang::invoke::VarHandle* asDirect() override;
	virtual ::java::util::List* coordinateTypes() override;
	virtual ::java::lang::invoke::MethodHandle* getMethodHandle(int32_t mode) override;
	virtual bool isDirect() override;
	virtual ::java::lang::invoke::VarHandle* target() override;
	virtual ::java::lang::invoke::MethodHandle* toMethodHandle(::java::lang::invoke::VarHandle$AccessMode* accessMode) override;
	virtual $Class* varType() override;
	virtual ::java::lang::invoke::VarHandle* withInvokeBehavior() override;
	virtual ::java::lang::invoke::VarHandle* withInvokeExactBehavior() override;
	$Array<::java::lang::invoke::MethodHandle>* handleMap = nullptr;
	::java::lang::invoke::VarHandle* directTarget = nullptr;
	::java::lang::invoke::VarHandle* target$ = nullptr;
	::java::util::function::BiFunction* handleFactory = nullptr;
	$Class* value = nullptr;
	$ClassArray* coordinates = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_IndirectVarHandle_h_