#ifndef _sun_reflect_generics_tree_TypeTree_h_
#define _sun_reflect_generics_tree_TypeTree_h_
//$ interface sun.reflect.generics.tree.TypeTree
//$ extends sun.reflect.generics.tree.Tree

#include <sun/reflect/generics/tree/Tree.h>

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

class $export TypeTree : public ::sun::reflect::generics::tree::Tree {
	$interface(TypeTree, $NO_CLASS_INIT, ::sun::reflect::generics::tree::Tree)
public:
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) {}
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_TypeTree_h_