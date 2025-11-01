#ifndef _jdk_internal_reflect_ConstructorAccessorImpl_h_
#define _jdk_internal_reflect_ConstructorAccessorImpl_h_
//$ class jdk.internal.reflect.ConstructorAccessorImpl
//$ extends jdk.internal.reflect.MagicAccessorImpl
//$ implements jdk.internal.reflect.ConstructorAccessor

#include <jdk/internal/reflect/ConstructorAccessor.h>
#include <jdk/internal/reflect/MagicAccessorImpl.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class ConstructorAccessorImpl : public ::jdk::internal::reflect::MagicAccessorImpl, public ::jdk::internal::reflect::ConstructorAccessor {
	$class(ConstructorAccessorImpl, $NO_CLASS_INIT, ::jdk::internal::reflect::MagicAccessorImpl, ::jdk::internal::reflect::ConstructorAccessor)
public:
	ConstructorAccessorImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* newInstance($ObjectArray* args) override {return nullptr;}
	virtual $String* toString() override;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ConstructorAccessorImpl_h_