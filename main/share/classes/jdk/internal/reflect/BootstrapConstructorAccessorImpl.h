#ifndef _jdk_internal_reflect_BootstrapConstructorAccessorImpl_h_
#define _jdk_internal_reflect_BootstrapConstructorAccessorImpl_h_
//$ class jdk.internal.reflect.BootstrapConstructorAccessorImpl
//$ extends jdk.internal.reflect.ConstructorAccessorImpl

#include <java/lang/Array.h>
#include <jdk/internal/reflect/ConstructorAccessorImpl.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class BootstrapConstructorAccessorImpl : public ::jdk::internal::reflect::ConstructorAccessorImpl {
	$class(BootstrapConstructorAccessorImpl, $NO_CLASS_INIT, ::jdk::internal::reflect::ConstructorAccessorImpl)
public:
	BootstrapConstructorAccessorImpl();
	void init$(::java::lang::reflect::Constructor* c);
	virtual $Object* newInstance($ObjectArray* args) override;
	::java::lang::reflect::Constructor* constructor = nullptr;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_BootstrapConstructorAccessorImpl_h_