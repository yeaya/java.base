#ifndef _java_lang_invoke_DirectMethodHandle$StaticAccessor_h_
#define _java_lang_invoke_DirectMethodHandle$StaticAccessor_h_
//$ class java.lang.invoke.DirectMethodHandle$StaticAccessor
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

class DirectMethodHandle$StaticAccessor : public ::java::lang::invoke::DirectMethodHandle {
	$class(DirectMethodHandle$StaticAccessor, 0, ::java::lang::invoke::DirectMethodHandle)
public:
	DirectMethodHandle$StaticAccessor();
	void init$(::java::lang::invoke::MethodType* mtype, ::java::lang::invoke::LambdaForm* form, ::java::lang::invoke::MemberName* member, bool crackable, Object$* staticBase, int64_t staticOffset);
	virtual $Object* checkCast(Object$* obj) override;
	virtual ::java::lang::invoke::MethodHandle* copyWith(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf) override;
	virtual $Object* internalProperties() override;
	virtual ::java::lang::invoke::MethodHandle* viewAsType(::java::lang::invoke::MethodType* newType, bool strict) override;
	static bool $assertionsDisabled;
	$Class* fieldType = nullptr;
	$Object* staticBase = nullptr;
	int64_t staticOffset = 0;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_DirectMethodHandle$StaticAccessor_h_