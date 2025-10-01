#ifndef _jdk_internal_reflect_UnsafeStaticFieldAccessorImpl_h_
#define _jdk_internal_reflect_UnsafeStaticFieldAccessorImpl_h_
//$ class jdk.internal.reflect.UnsafeStaticFieldAccessorImpl
//$ extends jdk.internal.reflect.UnsafeFieldAccessorImpl

#include <jdk/internal/reflect/UnsafeFieldAccessorImpl.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class UnsafeStaticFieldAccessorImpl : public ::jdk::internal::reflect::UnsafeFieldAccessorImpl {
	$class(UnsafeStaticFieldAccessorImpl, 0, ::jdk::internal::reflect::UnsafeFieldAccessorImpl)
public:
	UnsafeStaticFieldAccessorImpl();
	void init$(::java::lang::reflect::Field* field);
	$Object* base = nullptr;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_UnsafeStaticFieldAccessorImpl_h_