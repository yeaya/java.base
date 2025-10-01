#ifndef _sun_reflect_generics_tree_LongSignature_h_
#define _sun_reflect_generics_tree_LongSignature_h_
//$ class sun.reflect.generics.tree.LongSignature
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

class $export LongSignature : public ::sun::reflect::generics::tree::BaseType {
	$class(LongSignature, 0, ::sun::reflect::generics::tree::BaseType)
public:
	LongSignature();
	void init$();
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	static ::sun::reflect::generics::tree::LongSignature* make();
	static ::sun::reflect::generics::tree::LongSignature* singleton;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_LongSignature_h_