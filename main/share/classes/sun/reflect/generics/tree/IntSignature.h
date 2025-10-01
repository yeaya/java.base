#ifndef _sun_reflect_generics_tree_IntSignature_h_
#define _sun_reflect_generics_tree_IntSignature_h_
//$ class sun.reflect.generics.tree.IntSignature
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

class $export IntSignature : public ::sun::reflect::generics::tree::BaseType {
	$class(IntSignature, 0, ::sun::reflect::generics::tree::BaseType)
public:
	IntSignature();
	void init$();
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	static ::sun::reflect::generics::tree::IntSignature* make();
	static ::sun::reflect::generics::tree::IntSignature* singleton;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_IntSignature_h_