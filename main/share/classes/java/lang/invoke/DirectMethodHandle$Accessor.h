#ifndef _java_lang_invoke_DirectMethodHandle$Accessor_h_
#define _java_lang_invoke_DirectMethodHandle$Accessor_h_
//$ class java.lang.invoke.DirectMethodHandle$Accessor
//$ extends java.lang.invoke.DirectMethodHandle

#include <java/lang/invoke/DirectMethodHandle.h>

namespace java {
	namespace lang {
		namespace invoke {
			class LambdaForm;
			class MemberName;
			class MethodHandle;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class DirectMethodHandle$Accessor : public ::java::lang::invoke::DirectMethodHandle {
	$class(DirectMethodHandle$Accessor, 0, ::java::lang::invoke::DirectMethodHandle)
public:
	DirectMethodHandle$Accessor();
	void init$(::java::lang::invoke::MethodType* mtype, ::java::lang::invoke::LambdaForm* form, ::java::lang::invoke::MemberName* member, bool crackable, int32_t fieldOffset);
	virtual $Object* checkCast(Object$* obj) override;
	virtual ::java::lang::invoke::MethodHandle* copyWith(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf) override;
	virtual $Object* internalProperties() override;
	virtual ::java::lang::invoke::MethodHandle* viewAsType(::java::lang::invoke::MethodType* newType, bool strict) override;
	static bool $assertionsDisabled;
	$Class* fieldType = nullptr;
	int32_t fieldOffset = 0;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_DirectMethodHandle$Accessor_h_