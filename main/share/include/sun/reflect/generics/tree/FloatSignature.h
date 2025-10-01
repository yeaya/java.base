#ifndef _sun_reflect_generics_tree_FloatSignature_h_
#define _sun_reflect_generics_tree_FloatSignature_h_
//$ class sun.reflect.generics.tree.FloatSignature
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

class $import FloatSignature : public ::sun::reflect::generics::tree::BaseType {
	$class(FloatSignature, 0, ::sun::reflect::generics::tree::BaseType)
public:
	FloatSignature();
	void init$();
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	static ::sun::reflect::generics::tree::FloatSignature* make();
	static ::sun::reflect::generics::tree::FloatSignature* singleton;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_FloatSignature_h_