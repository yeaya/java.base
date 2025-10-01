#ifndef _java_lang_constant_DirectMethodHandleDescImpl_h_
#define _java_lang_constant_DirectMethodHandleDescImpl_h_
//$ class java.lang.constant.DirectMethodHandleDescImpl
//$ extends java.lang.constant.DirectMethodHandleDesc

#include <java/lang/constant/DirectMethodHandleDesc.h>

namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
			class DirectMethodHandleDesc$Kind;
			class MethodTypeDesc;
		}
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

namespace java {
	namespace lang {
		namespace constant {

class DirectMethodHandleDescImpl : public ::java::lang::constant::DirectMethodHandleDesc {
	$class(DirectMethodHandleDescImpl, $NO_CLASS_INIT, ::java::lang::constant::DirectMethodHandleDesc)
public:
	DirectMethodHandleDescImpl();
	void init$(::java::lang::constant::DirectMethodHandleDesc$Kind* kind, ::java::lang::constant::ClassDesc* owner, $String* name, ::java::lang::constant::MethodTypeDesc* type);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual ::java::lang::constant::MethodTypeDesc* invocationType() override;
	virtual bool isOwnerInterface() override;
	virtual ::java::lang::constant::DirectMethodHandleDesc$Kind* kind() override;
	virtual $String* lookupDescriptor() override;
	virtual $String* methodName() override;
	virtual ::java::lang::constant::ClassDesc* owner() override;
	virtual int32_t refKind() override;
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	virtual $String* toString() override;
	static void validateConstructor(::java::lang::constant::MethodTypeDesc* type);
	static void validateFieldType(::java::lang::constant::MethodTypeDesc* type, bool isSetter, bool isVirtual);
	::java::lang::constant::DirectMethodHandleDesc$Kind* kind$ = nullptr;
	::java::lang::constant::ClassDesc* owner$ = nullptr;
	$String* name = nullptr;
	::java::lang::constant::MethodTypeDesc* invocationType$ = nullptr;
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_DirectMethodHandleDescImpl_h_