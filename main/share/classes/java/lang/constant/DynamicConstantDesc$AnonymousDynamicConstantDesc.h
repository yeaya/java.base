#ifndef _java_lang_constant_DynamicConstantDesc$AnonymousDynamicConstantDesc_h_
#define _java_lang_constant_DynamicConstantDesc$AnonymousDynamicConstantDesc_h_
//$ class java.lang.constant.DynamicConstantDesc$AnonymousDynamicConstantDesc
//$ extends java.lang.constant.DynamicConstantDesc

#include <java/lang/Array.h>
#include <java/lang/constant/DynamicConstantDesc.h>

namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
			class ConstantDesc;
			class DirectMethodHandleDesc;
		}
	}
}

namespace java {
	namespace lang {
		namespace constant {

class DynamicConstantDesc$AnonymousDynamicConstantDesc : public ::java::lang::constant::DynamicConstantDesc {
	$class(DynamicConstantDesc$AnonymousDynamicConstantDesc, $NO_CLASS_INIT, ::java::lang::constant::DynamicConstantDesc)
public:
	DynamicConstantDesc$AnonymousDynamicConstantDesc();
	void init$(::java::lang::constant::DirectMethodHandleDesc* bootstrapMethod, $String* constantName, ::java::lang::constant::ClassDesc* constantType, $Array<::java::lang::constant::ConstantDesc>* bootstrapArgs);
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_DynamicConstantDesc$AnonymousDynamicConstantDesc_h_