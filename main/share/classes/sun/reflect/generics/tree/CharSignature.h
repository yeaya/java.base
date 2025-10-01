#ifndef _sun_reflect_generics_tree_CharSignature_h_
#define _sun_reflect_generics_tree_CharSignature_h_
//$ class sun.reflect.generics.tree.CharSignature
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

class $export CharSignature : public ::sun::reflect::generics::tree::BaseType {
	$class(CharSignature, 0, ::sun::reflect::generics::tree::BaseType)
public:
	CharSignature();
	void init$();
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	static ::sun::reflect::generics::tree::CharSignature* make();
	static ::sun::reflect::generics::tree::CharSignature* singleton;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_CharSignature_h_