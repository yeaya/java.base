#ifndef _java_lang_constant_PrimitiveClassDescImpl_h_
#define _java_lang_constant_PrimitiveClassDescImpl_h_
//$ class java.lang.constant.PrimitiveClassDescImpl
//$ extends java.lang.constant.DynamicConstantDesc
//$ implements java.lang.constant.ClassDesc

#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>

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

class PrimitiveClassDescImpl : public ::java::lang::constant::DynamicConstantDesc, public ::java::lang::constant::ClassDesc {
	$class(PrimitiveClassDescImpl, $NO_CLASS_INIT, ::java::lang::constant::DynamicConstantDesc, ::java::lang::constant::ClassDesc)
public:
	PrimitiveClassDescImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* o) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* descriptor);
	virtual $String* descriptorString() override;
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	virtual $String* toString() override;
	$String* descriptor = nullptr;
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_PrimitiveClassDescImpl_h_