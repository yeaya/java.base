#ifndef _jdk_internal_access_JavaBeansAccess_h_
#define _jdk_internal_access_JavaBeansAccess_h_
//$ interface jdk.internal.access.JavaBeansAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaBeansAccess : public ::java::lang::Object {
	$interface(JavaBeansAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $StringArray* getConstructorPropertiesValue(::java::lang::reflect::Constructor* ctr) {return nullptr;}
	virtual ::java::lang::reflect::Method* getReadMethod($Class* clazz, $String* property) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaBeansAccess_h_