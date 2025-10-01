#ifndef _sun_reflect_generics_tree_DoubleSignature_h_
#define _sun_reflect_generics_tree_DoubleSignature_h_
//$ class sun.reflect.generics.tree.DoubleSignature
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

class $export DoubleSignature : public ::sun::reflect::generics::tree::BaseType {
	$class(DoubleSignature, 0, ::sun::reflect::generics::tree::BaseType)
public:
	DoubleSignature();
	void init$();
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	static ::sun::reflect::generics::tree::DoubleSignature* make();
	static ::sun::reflect::generics::tree::DoubleSignature* singleton;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_DoubleSignature_h_