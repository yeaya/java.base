#ifndef _jdk_internal_reflect_ByteVectorFactory_h_
#define _jdk_internal_reflect_ByteVectorFactory_h_
//$ class jdk.internal.reflect.ByteVectorFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace reflect {
			class ByteVector;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class ByteVectorFactory : public ::java::lang::Object {
	$class(ByteVectorFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ByteVectorFactory();
	void init$();
	static ::jdk::internal::reflect::ByteVector* create();
	static ::jdk::internal::reflect::ByteVector* create(int32_t sz);
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ByteVectorFactory_h_