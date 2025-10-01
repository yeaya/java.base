#ifndef _java_lang_constant_MethodTypeDescImpl_h_
#define _java_lang_constant_MethodTypeDescImpl_h_
//$ class java.lang.constant.MethodTypeDescImpl
//$ extends java.lang.constant.MethodTypeDesc

#include <java/lang/Array.h>
#include <java/lang/constant/MethodTypeDesc.h>

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
			class MethodHandles$Lookup;
			class TypeDescriptor$OfField;
			class TypeDescriptor$OfMethod;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace lang {
		namespace constant {

class MethodTypeDescImpl : public ::java::lang::constant::MethodTypeDesc {
	$class(MethodTypeDescImpl, $NO_CLASS_INIT, ::java::lang::constant::MethodTypeDesc)
public:
	MethodTypeDescImpl();
	void init$(::java::lang::constant::ClassDesc* returnType, $Array<::java::lang::constant::ClassDesc>* argTypes);
	virtual ::java::lang::constant::MethodTypeDesc* changeParameterType(int32_t index, ::java::lang::constant::ClassDesc* paramType) override;
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* changeParameterType(int32_t index, ::java::lang::invoke::TypeDescriptor$OfField* paramType) override;
	virtual ::java::lang::constant::MethodTypeDesc* changeReturnType(::java::lang::constant::ClassDesc* returnType) override;
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* changeReturnType(::java::lang::invoke::TypeDescriptor$OfField* returnType) override;
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* dropParameterTypes(int32_t start, int32_t end) override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual ::java::lang::constant::MethodTypeDesc* insertParameterTypes(int32_t pos, $Array<::java::lang::constant::ClassDesc>* paramTypes) override;
	virtual ::java::lang::invoke::TypeDescriptor$OfMethod* insertParameterTypes(int32_t pos, $Array<::java::lang::invoke::TypeDescriptor$OfField>* paramTypes) override;
	static $Array<::java::lang::constant::ClassDesc>* lambda$ofDescriptor$0(int32_t x$0);
	static ::java::lang::constant::MethodTypeDescImpl* ofDescriptor($String* descriptor);
	virtual $Array<::java::lang::invoke::TypeDescriptor$OfField>* parameterArray() override;
	virtual int32_t parameterCount() override;
	virtual ::java::util::List* parameterList() override;
	virtual ::java::lang::invoke::TypeDescriptor$OfField* parameterType(int32_t index) override;
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	virtual ::java::lang::invoke::TypeDescriptor$OfField* returnType() override;
	virtual $String* toString() override;
	::java::lang::constant::ClassDesc* returnType$ = nullptr;
	$Array<::java::lang::constant::ClassDesc>* argTypes = nullptr;
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_MethodTypeDescImpl_h_