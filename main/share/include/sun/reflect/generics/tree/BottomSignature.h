#ifndef _sun_reflect_generics_tree_BottomSignature_h_
#define _sun_reflect_generics_tree_BottomSignature_h_
//$ class sun.reflect.generics.tree.BottomSignature
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

class $import BottomSignature : public ::sun::reflect::generics::tree::FieldTypeSignature {
	$class(BottomSignature, 0, ::sun::reflect::generics::tree::FieldTypeSignature)
public:
	BottomSignature();
	void init$();
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	static ::sun::reflect::generics::tree::BottomSignature* make();
	static ::sun::reflect::generics::tree::BottomSignature* singleton;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_BottomSignature_h_