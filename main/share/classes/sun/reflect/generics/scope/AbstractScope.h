#ifndef _sun_reflect_generics_scope_AbstractScope_h_
#define _sun_reflect_generics_scope_AbstractScope_h_
//$ class sun.reflect.generics.scope.AbstractScope
//$ extends sun.reflect.generics.scope.Scope

#include <sun/reflect/generics/scope/Scope.h>

namespace java {
	namespace lang {
		namespace reflect {
			class GenericDeclaration;
			class TypeVariable;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace scope {

class AbstractScope : public ::sun::reflect::generics::scope::Scope {
	$class(AbstractScope, $NO_CLASS_INIT, ::sun::reflect::generics::scope::Scope)
public:
	AbstractScope();
	void init$(::java::lang::reflect::GenericDeclaration* decl);
	virtual ::sun::reflect::generics::scope::Scope* computeEnclosingScope() {return nullptr;}
	virtual ::sun::reflect::generics::scope::Scope* getEnclosingScope();
	virtual ::java::lang::reflect::GenericDeclaration* getRecvr();
	virtual ::java::lang::reflect::TypeVariable* lookup($String* name) override;
	::java::lang::reflect::GenericDeclaration* recvr = nullptr;
	$volatile(::sun::reflect::generics::scope::Scope*) enclosingScope = nullptr;
};

			} // scope
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_scope_AbstractScope_h_