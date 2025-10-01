#ifndef _jdk_internal_reflect_UnsafeFieldAccessorFactory_h_
#define _jdk_internal_reflect_UnsafeFieldAccessorFactory_h_
//$ class jdk.internal.reflect.UnsafeFieldAccessorFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			class FieldAccessor;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class UnsafeFieldAccessorFactory : public ::java::lang::Object {
	$class(UnsafeFieldAccessorFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UnsafeFieldAccessorFactory();
	void init$();
	static ::jdk::internal::reflect::FieldAccessor* newFieldAccessor(::java::lang::reflect::Field* field, bool isReadOnly);
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_UnsafeFieldAccessorFactory_h_