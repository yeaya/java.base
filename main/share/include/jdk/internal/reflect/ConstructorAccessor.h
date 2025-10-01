#ifndef _jdk_internal_reflect_ConstructorAccessor_h_
#define _jdk_internal_reflect_ConstructorAccessor_h_
//$ interface jdk.internal.reflect.ConstructorAccessor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class $import ConstructorAccessor : public ::java::lang::Object {
	$interface(ConstructorAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* newInstance($ObjectArray* args) {return nullptr;}
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ConstructorAccessor_h_