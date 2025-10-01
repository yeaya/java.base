#ifndef _jdk_internal_reflect_MethodAccessorImpl_h_
#define _jdk_internal_reflect_MethodAccessorImpl_h_
//$ class jdk.internal.reflect.MethodAccessorImpl
//$ extends jdk.internal.reflect.MagicAccessorImpl
//$ implements jdk.internal.reflect.MethodAccessor

#include <jdk/internal/reflect/MagicAccessorImpl.h>
#include <jdk/internal/reflect/MethodAccessor.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class MethodAccessorImpl : public ::jdk::internal::reflect::MagicAccessorImpl, public ::jdk::internal::reflect::MethodAccessor {
	$class(MethodAccessorImpl, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::reflect::MagicAccessorImpl, ::jdk::internal::reflect::MethodAccessor)
public:
	MethodAccessorImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* invoke(Object$* obj, $ObjectArray* args) override {return nullptr;}
	virtual $String* toString() override;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_MethodAccessorImpl_h_