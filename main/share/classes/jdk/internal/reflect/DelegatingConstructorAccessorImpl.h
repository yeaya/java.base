#ifndef _jdk_internal_reflect_DelegatingConstructorAccessorImpl_h_
#define _jdk_internal_reflect_DelegatingConstructorAccessorImpl_h_
//$ class jdk.internal.reflect.DelegatingConstructorAccessorImpl
//$ extends jdk.internal.reflect.ConstructorAccessorImpl

#include <java/lang/Array.h>
#include <jdk/internal/reflect/ConstructorAccessorImpl.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class DelegatingConstructorAccessorImpl : public ::jdk::internal::reflect::ConstructorAccessorImpl {
	$class(DelegatingConstructorAccessorImpl, $NO_CLASS_INIT, ::jdk::internal::reflect::ConstructorAccessorImpl)
public:
	DelegatingConstructorAccessorImpl();
	void init$(::jdk::internal::reflect::ConstructorAccessorImpl* delegate);
	virtual $Object* newInstance($ObjectArray* args) override;
	virtual void setDelegate(::jdk::internal::reflect::ConstructorAccessorImpl* delegate);
	::jdk::internal::reflect::ConstructorAccessorImpl* delegate = nullptr;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_DelegatingConstructorAccessorImpl_h_