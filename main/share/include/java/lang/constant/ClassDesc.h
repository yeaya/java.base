#ifndef _java_lang_constant_ClassDesc_h_
#define _java_lang_constant_ClassDesc_h_
//$ interface java.lang.constant.ClassDesc
//$ extends java.lang.constant.ConstantDesc,java.lang.invoke.TypeDescriptor$OfField

#include <java/lang/Array.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>

namespace java {
	namespace lang {
		namespace constant {

class $import ClassDesc : public ::java::lang::constant::ConstantDesc, public ::java::lang::invoke::TypeDescriptor$OfField {
	$interface(ClassDesc, $NO_CLASS_INIT, ::java::lang::constant::ConstantDesc, ::java::lang::invoke::TypeDescriptor$OfField)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual ::java::lang::invoke::TypeDescriptor$OfField* arrayType() override;
	virtual ::java::lang::constant::ClassDesc* arrayType(int32_t rank);
	virtual $Object* clone() override;
	virtual ::java::lang::invoke::TypeDescriptor$OfField* componentType() override;
	virtual $String* descriptorString() override {return nullptr;}
	virtual $String* displayName();
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual bool isArray() override;
	virtual bool isClassOrInterface();
	virtual bool isPrimitive() override;
	virtual ::java::lang::constant::ClassDesc* nested($String* nestedName);
	virtual ::java::lang::constant::ClassDesc* nested($String* firstNestedName, $StringArray* moreNestedNames);
	static ::java::lang::constant::ClassDesc* of($String* name);
	static ::java::lang::constant::ClassDesc* of($String* packageName, $String* className);
	static ::java::lang::constant::ClassDesc* ofDescriptor($String* descriptor);
	virtual $String* packageName();
	virtual $String* toString() override;
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_ClassDesc_h_