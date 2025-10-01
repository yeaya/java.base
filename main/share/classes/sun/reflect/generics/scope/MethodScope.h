#ifndef _sun_reflect_generics_scope_MethodScope_h_
#define _sun_reflect_generics_scope_MethodScope_h_
//$ class sun.reflect.generics.scope.MethodScope
//$ extends sun.reflect.generics.scope.AbstractScope

#include <sun/reflect/generics/scope/AbstractScope.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
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

class MethodScope : public ::sun::reflect::generics::scope::AbstractScope {
	$class(MethodScope, $NO_CLASS_INIT, ::sun::reflect::generics::scope::AbstractScope)
public:
	MethodScope();
	void init$(::java::lang::reflect::Method* m);
	virtual ::sun::reflect::generics::scope::Scope* computeEnclosingScope() override;
	$Class* getEnclosingClass();
	static ::sun::reflect::generics::scope::MethodScope* make(::java::lang::reflect::Method* m);
};

			} // scope
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_scope_MethodScope_h_