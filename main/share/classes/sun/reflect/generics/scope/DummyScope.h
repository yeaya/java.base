#ifndef _sun_reflect_generics_scope_DummyScope_h_
#define _sun_reflect_generics_scope_DummyScope_h_
//$ class sun.reflect.generics.scope.DummyScope
//$ extends sun.reflect.generics.scope.Scope

#include <sun/reflect/generics/scope/Scope.h>

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

class DummyScope : public ::sun::reflect::generics::scope::Scope {
	$class(DummyScope, 0, ::sun::reflect::generics::scope::Scope)
public:
	DummyScope();
	void init$();
	virtual ::java::lang::reflect::TypeVariable* lookup($String* name) override;
	static ::sun::reflect::generics::scope::DummyScope* make();
	static ::sun::reflect::generics::scope::DummyScope* singleton;
};

			} // scope
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_scope_DummyScope_h_