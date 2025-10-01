#ifndef _sun_reflect_generics_scope_ConstructorScope_h_
#define _sun_reflect_generics_scope_ConstructorScope_h_
//$ class sun.reflect.generics.scope.ConstructorScope
//$ extends sun.reflect.generics.scope.AbstractScope

#include <sun/reflect/generics/scope/AbstractScope.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace sun {
	namespace reflect {
		namespace generics {
			namespace scope {
				class Scope;
			}
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace scope {

class ConstructorScope : public ::sun::reflect::generics::scope::AbstractScope {
	$class(ConstructorScope, $NO_CLASS_INIT, ::sun::reflect::generics::scope::AbstractScope)
public:
	ConstructorScope();
	void init$(::java::lang::reflect::Constructor* c);
	virtual ::sun::reflect::generics::scope::Scope* computeEnclosingScope() override;
	$Class* getEnclosingClass();
	static ::sun::reflect::generics::scope::ConstructorScope* make(::java::lang::reflect::Constructor* c);
};

			} // scope
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_scope_ConstructorScope_h_