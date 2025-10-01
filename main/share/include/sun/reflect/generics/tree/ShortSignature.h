#ifndef _sun_reflect_generics_tree_ShortSignature_h_
#define _sun_reflect_generics_tree_ShortSignature_h_
//$ class sun.reflect.generics.tree.ShortSignature
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

class $import ShortSignature : public ::sun::reflect::generics::tree::BaseType {
	$class(ShortSignature, 0, ::sun::reflect::generics::tree::BaseType)
public:
	ShortSignature();
	void init$();
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	static ::sun::reflect::generics::tree::ShortSignature* make();
	static ::sun::reflect::generics::tree::ShortSignature* singleton;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_ShortSignature_h_