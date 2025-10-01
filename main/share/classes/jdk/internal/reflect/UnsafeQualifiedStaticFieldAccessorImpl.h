#ifndef _jdk_internal_reflect_UnsafeQualifiedStaticFieldAccessorImpl_h_
#define _jdk_internal_reflect_UnsafeQualifiedStaticFieldAccessorImpl_h_
//$ class jdk.internal.reflect.UnsafeQualifiedStaticFieldAccessorImpl
//$ extends jdk.internal.reflect.UnsafeStaticFieldAccessorImpl

#include <jdk/internal/reflect/UnsafeStaticFieldAccessorImpl.h>

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

class UnsafeQualifiedStaticFieldAccessorImpl : public ::jdk::internal::reflect::UnsafeStaticFieldAccessorImpl {
	$class(UnsafeQualifiedStaticFieldAccessorImpl, $NO_CLASS_INIT, ::jdk::internal::reflect::UnsafeStaticFieldAccessorImpl)
public:
	UnsafeQualifiedStaticFieldAccessorImpl();
	void init$(::java::lang::reflect::Field* field, bool isReadOnly);
	bool isReadOnly = false;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_UnsafeQualifiedStaticFieldAccessorImpl_h_