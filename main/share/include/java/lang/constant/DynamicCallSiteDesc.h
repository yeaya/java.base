#ifndef _java_lang_constant_DynamicCallSiteDesc_h_
#define _java_lang_constant_DynamicCallSiteDesc_h_
//$ class java.lang.constant.DynamicCallSiteDesc
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace constant {
			class ConstantDesc;
			class DirectMethodHandleDesc;
			class MethodHandleDesc;
			class MethodTypeDesc;
		}
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class CallSite;
			class MethodHandles$Lookup;
		}
	}
}

namespace java {
	namespace lang {
		namespace constant {

class $import DynamicCallSiteDesc : public ::java::lang::Object {
	$class(DynamicCallSiteDesc, 0, ::java::lang::Object)
public:
	DynamicCallSiteDesc();
	void init$(::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod, $String* invocationName, ::java::lang::constant::MethodTypeDesc* invocationType, $Array<::java::lang::constant::ConstantDesc>* bootstrapArgs);
	virtual $Array<::java::lang::constant::ConstantDesc>* bootstrapArgs();
	virtual ::java::lang::constant::MethodHandleDesc* bootstrapMethod();
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $String* invocationName();
	virtual ::java::lang::constant::MethodTypeDesc* invocationType();
	static ::java::lang::constant::DynamicCallSiteDesc* of(::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod, $String* invocationName, ::java::lang::constant::MethodTypeDesc* invocationType, $Array<::java::lang::constant::ConstantDesc>* bootstrapArgs);
	static ::java::lang::constant::DynamicCallSiteDesc* of(::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod, $String* invocationName, ::java::lang::constant::MethodTypeDesc* invocationType);
	static ::java::lang::constant::DynamicCallSiteDesc* of(::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod, ::java::lang::constant::MethodTypeDesc* invocationType);
	virtual ::java::lang::invoke::CallSite* resolveCallSiteDesc(::java::lang::invoke::MethodHandles$Lookup* lookup);
	virtual $String* toString() override;
	virtual ::java::lang::constant::DynamicCallSiteDesc* withArgs($Array<::java::lang::constant::ConstantDesc>* bootstrapArgs);
	virtual ::java::lang::constant::DynamicCallSiteDesc* withNameAndType($String* invocationName, ::java::lang::constant::MethodTypeDesc* invocationType);
	static bool $assertionsDisabled;
	::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod$ = nullptr;
	$Array<::java::lang::constant::ConstantDesc>* bootstrapArgs$ = nullptr;
	$String* invocationName$ = nullptr;
	::java::lang::constant::MethodTypeDesc* invocationType$ = nullptr;
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_DynamicCallSiteDesc_h_