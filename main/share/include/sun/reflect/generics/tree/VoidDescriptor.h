#ifndef _sun_reflect_generics_tree_VoidDescriptor_h_
#define _sun_reflect_generics_tree_VoidDescriptor_h_
//$ class sun.reflect.generics.tree.VoidDescriptor
//$ extends sun.reflect.generics.tree.ReturnType

#include <sun/reflect/generics/tree/ReturnType.h>

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

class $import VoidDescriptor : public ::sun::reflect::generics::tree::ReturnType {
	$class(VoidDescriptor, 0, ::sun::reflect::generics::tree::ReturnType)
public:
	VoidDescriptor();
	void init$();
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	static ::sun::reflect::generics::tree::VoidDescriptor* make();
	static ::sun::reflect::generics::tree::VoidDescriptor* singleton;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_VoidDescriptor_h_