#ifndef _sun_reflect_generics_tree_BooleanSignature_h_
#define _sun_reflect_generics_tree_BooleanSignature_h_
//$ class sun.reflect.generics.tree.BooleanSignature
//$ extends sun.reflect.generics.tree.BaseType

#include <sun/reflect/generics/tree/BaseType.h>

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

class $import BooleanSignature : public ::sun::reflect::generics::tree::BaseType {
	$class(BooleanSignature, 0, ::sun::reflect::generics::tree::BaseType)
public:
	BooleanSignature();
	void init$();
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	static ::sun::reflect::generics::tree::BooleanSignature* make();
	static ::sun::reflect::generics::tree::BooleanSignature* singleton;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_BooleanSignature_h_