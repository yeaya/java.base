#ifndef _sun_reflect_generics_scope_Scope_h_
#define _sun_reflect_generics_scope_Scope_h_
//$ interface sun.reflect.generics.scope.Scope
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace reflect {
			class TypeVariable;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace scope {

class Scope : public ::java::lang::Object {
	$interface(Scope, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::reflect::TypeVariable* lookup($String* name) {return nullptr;}
};

			} // scope
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_scope_Scope_h_