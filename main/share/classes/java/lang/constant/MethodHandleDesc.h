#ifndef _java_lang_constant_MethodHandleDesc_h_
#define _java_lang_constant_MethodHandleDesc_h_
//$ interface java.lang.constant.MethodHandleDesc
//$ extends java.lang.constant.ConstantDesc

#include <java/lang/Array.h>
#include <java/lang/constant/ConstantDesc.h>

namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
			class DirectMethodHandleDesc;
			class DirectMethodHandleDesc$Kind;
			class MethodTypeDesc;
		}
	}
}

namespace java {
	namespace lang {
		namespace constant {

class $export MethodHandleDesc : public ::java::lang::constant::ConstantDesc {
	$interface(MethodHandleDesc, $NO_CLASS_INIT, ::java::lang::constant::ConstantDesc)
public:
	virtual ::java::lang::constant::MethodHandleDesc* asType(::java::lang::constant::MethodTypeDesc* type);
	virtual bool equals(Object$* o) override;
	virtual ::java::lang::constant::MethodTypeDesc* invocationType() {return nullptr;}
	static ::java::lang::constant::DirectMethodHandleDesc* of(::java::lang::constant::DirectMethodHandleDesc$Kind* kind, ::java::lang::constant::ClassDesc* owner, $String* name, $String* lookupDescriptor);
	static ::java::lang::constant::DirectMethodHandleDesc* ofConstructor(::java::lang::constant::ClassDesc* owner, $Array<::java::lang::constant::ClassDesc>* paramTypes);
	static ::java::lang::constant::DirectMethodHandleDesc* ofField(::java::lang::constant::DirectMethodHandleDesc$Kind* kind, ::java::lang::constant::ClassDesc* owner, $String* fieldName, ::java::lang::constant::ClassDesc* fieldType);
	static ::java::lang::constant::DirectMethodHandleDesc* ofMethod(::java::lang::constant::DirectMethodHandleDesc$Kind* kind, ::java::lang::constant::ClassDesc* owner, $String* name, ::java::lang::constant::MethodTypeDesc* lookupMethodType);
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_MethodHandleDesc_h_