#ifndef _jdk_internal_reflect_UnsafeQualifiedFieldAccessorImpl_h_
#define _jdk_internal_reflect_UnsafeQualifiedFieldAccessorImpl_h_
//$ class jdk.internal.reflect.UnsafeQualifiedFieldAccessorImpl
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

class UnsafeQualifiedFieldAccessorImpl : public ::jdk::internal::reflect::UnsafeFieldAccessorImpl {
	$class(UnsafeQualifiedFieldAccessorImpl, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::reflect::UnsafeFieldAccessorImpl)
public:
	UnsafeQualifiedFieldAccessorImpl();
	void init$(::java::lang::reflect::Field* field, bool isReadOnly);
	bool isReadOnly = false;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_UnsafeQualifiedFieldAccessorImpl_h_