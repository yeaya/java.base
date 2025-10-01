#ifndef _jdk_internal_reflect_ClassDefiner_h_
#define _jdk_internal_reflect_ClassDefiner_h_
//$ class jdk.internal.reflect.ClassDefiner
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JLA")
#undef JLA

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class ClassDefiner : public ::java::lang::Object {
	$class(ClassDefiner, 0, ::java::lang::Object)
public:
	ClassDefiner();
	void init$();
	static $Class* defineClass($String* name, $bytes* bytes, int32_t off, int32_t len, ::java::lang::ClassLoader* parentClassLoader);
	static ::jdk::internal::access::JavaLangAccess* JLA;
};

		} // reflect
	} // internal
} // jdk

#pragma pop_macro("JLA")

#endif // _jdk_internal_reflect_ClassDefiner_h_