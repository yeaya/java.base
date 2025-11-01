#ifndef _java_lang_constant_AsTypeMethodHandleDesc_h_
#define _java_lang_constant_AsTypeMethodHandleDesc_h_
//$ class java.lang.constant.AsTypeMethodHandleDesc
//$ extends java.lang.constant.DynamicConstantDesc
//$ implements java.lang.constant.MethodHandleDesc

#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/lang/constant/MethodHandleDesc.h>

namespace java {
	namespace lang {
		namespace constant {
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

class AsTypeMethodHandleDesc : public ::java::lang::constant::DynamicConstantDesc, public ::java::lang::constant::MethodHandleDesc {
	$class(AsTypeMethodHandleDesc, $NO_CLASS_INIT, ::java::lang::constant::DynamicConstantDesc, ::java::lang::constant::MethodHandleDesc)
public:
	AsTypeMethodHandleDesc();
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::lang::constant::MethodHandleDesc* underlying, ::java::lang::constant::MethodTypeDesc* type);
	virtual ::java::lang::constant::MethodTypeDesc* invocationType() override;
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	virtual $String* toString() override;
	::java::lang::constant::MethodHandleDesc* underlying = nullptr;
	::java::lang::constant::MethodTypeDesc* type = nullptr;
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_AsTypeMethodHandleDesc_h_