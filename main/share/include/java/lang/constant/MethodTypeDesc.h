#ifndef _java_lang_constant_MethodTypeDesc_h_
#define _java_lang_constant_MethodTypeDesc_h_
//$ interface java.lang.constant.MethodTypeDesc
//$ extends java.lang.constant.ConstantDesc,java.lang.invoke.TypeDescriptor$OfMethod

#include <java/lang/Array.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/invoke/TypeDescriptor$OfMethod.h>

namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
		}
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class TypeDescriptor$OfField;
		}
	}
}

namespace java {
	namespace lang {
		namespace constant {

class $import MethodTypeDesc : public ::java::lang::constant::ConstantDesc, public ::java::lang::invoke::TypeDescriptor$OfMethod {
	$interface(MethodTypeDesc, $NO_CLASS_INIT, ::java::lang::constant::ConstantDesc, ::java::lang::invoke::TypeDescriptor$OfMethod)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual ::java::lang::constant::MethodTypeDesc* changeParameterType(int32_t index, ::java::lang::constant::ClassDesc* paramType) {return nullptr;}
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* changeParameterType(int32_t index, ::java::lang::invoke::TypeDescriptor$OfField* paramType) override;
	virtual ::java::lang::constant::MethodTypeDesc* changeReturnType(::java::lang::constant::ClassDesc* returnType) {return nullptr;}
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* changeReturnType(::java::lang::invoke::TypeDescriptor$OfField* returnType) override;
	virtual $Object* clone() override;
	virtual $String* descriptorString() override;
	virtual $String* displayDescriptor();
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* dropParameterTypes(int32_t start, int32_t end) override {return nullptr;}
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual ::java::lang::constant::MethodTypeDesc* insertParameterTypes(int32_t pos, $Array<::java::lang::constant::ClassDesc>* paramTypes) {return nullptr;}
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* insertParameterTypes(int32_t pos, $Array<::java::lang::invoke::TypeDescriptor$OfField>* paramTypes) override;
	static ::java::lang::constant::MethodTypeDesc* of(::java::lang::constant::ClassDesc* returnDesc, $Array<::java::lang::constant::ClassDesc>* paramDescs);
	static ::java::lang::constant::MethodTypeDesc* ofDescriptor($String* descriptor);
	virtual $Array<::java::lang::invoke::TypeDescriptor$OfField>* parameterArray() override {return nullptr;}
	virtual int32_t parameterCount() override {return 0;}
	virtual ::java::util::List* parameterList() override {return nullptr;}
	virtual ::java::lang::invoke::TypeDescriptor$OfField* parameterType(int32_t index) override {return nullptr;}
	virtual ::java::lang::invoke::TypeDescriptor$OfField* returnType() override {return nullptr;}
	virtual $String* toString() override;
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_MethodTypeDesc_h_