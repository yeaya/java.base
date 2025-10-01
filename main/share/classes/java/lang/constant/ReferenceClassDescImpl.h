#ifndef _java_lang_constant_ReferenceClassDescImpl_h_
#define _java_lang_constant_ReferenceClassDescImpl_h_
//$ class java.lang.constant.ReferenceClassDescImpl
//$ extends java.lang.constant.ClassDesc

#include <java/lang/constant/ClassDesc.h>

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

class ReferenceClassDescImpl : public ::java::lang::constant::ClassDesc {
	$class(ReferenceClassDescImpl, $NO_CLASS_INIT, ::java::lang::constant::ClassDesc)
public:
	ReferenceClassDescImpl();
	void init$($String* descriptor);
	virtual $String* descriptorString() override;
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	virtual $Object* resolveConstantDesc(::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	virtual $String* toString() override;
	$String* descriptor = nullptr;
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_ReferenceClassDescImpl_h_