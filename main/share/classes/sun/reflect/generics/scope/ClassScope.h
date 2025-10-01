#ifndef _sun_reflect_generics_scope_ClassScope_h_
#define _sun_reflect_generics_scope_ClassScope_h_
//$ class sun.reflect.generics.scope.ClassScope
//$ extends sun.reflect.generics.scope.AbstractScope

#include <sun/reflect/generics/scope/AbstractScope.h>

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

class ClassScope : public ::sun::reflect::generics::scope::AbstractScope {
	$class(ClassScope, $NO_CLASS_INIT, ::sun::reflect::generics::scope::AbstractScope)
public:
	ClassScope();
	void init$($Class* c);
	virtual ::sun::reflect::generics::scope::Scope* computeEnclosingScope() override;
	static ::sun::reflect::generics::scope::ClassScope* make($Class* c);
};

			} // scope
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_scope_ClassScope_h_