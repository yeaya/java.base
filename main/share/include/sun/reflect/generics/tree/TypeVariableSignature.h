#ifndef _sun_reflect_generics_tree_TypeVariableSignature_h_
#define _sun_reflect_generics_tree_TypeVariableSignature_h_
//$ class sun.reflect.generics.tree.TypeVariableSignature
//$ extends sun.reflect.generics.tree.FieldTypeSignature

#include <sun/reflect/generics/tree/FieldTypeSignature.h>

namespace sun {
	namespace reflect {
		namespace generics {
			namespace visitor {
				class TypeTreeVisitor;
			}
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

class $import TypeVariableSignature : public ::sun::reflect::generics::tree::FieldTypeSignature {
	$class(TypeVariableSignature, $NO_CLASS_INIT, ::sun::reflect::generics::tree::FieldTypeSignature)
public:
	TypeVariableSignature();
	void init$($String* id);
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	virtual $String* getIdentifier();
	static ::sun::reflect::generics::tree::TypeVariableSignature* make($String* id);
	$String* identifier = nullptr;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_TypeVariableSignature_h_