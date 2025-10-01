#ifndef _jdk_internal_reflect_InstantiationExceptionConstructorAccessorImpl_h_
#define _jdk_internal_reflect_InstantiationExceptionConstructorAccessorImpl_h_
//$ class jdk.internal.reflect.InstantiationExceptionConstructorAccessorImpl
//$ extends jdk.internal.reflect.ConstructorAccessorImpl

#include <java/lang/Array.h>
#include <jdk/internal/reflect/ConstructorAccessorImpl.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class InstantiationExceptionConstructorAccessorImpl : public ::jdk::internal::reflect::ConstructorAccessorImpl {
	$class(InstantiationExceptionConstructorAccessorImpl, $NO_CLASS_INIT, ::jdk::internal::reflect::ConstructorAccessorImpl)
public:
	InstantiationExceptionConstructorAccessorImpl();
	void init$($String* message);
	virtual $Object* newInstance($ObjectArray* args) override;
	$String* message = nullptr;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_InstantiationExceptionConstructorAccessorImpl_h_