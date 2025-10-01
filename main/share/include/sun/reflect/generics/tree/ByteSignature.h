#ifndef _sun_reflect_generics_tree_ByteSignature_h_
#define _sun_reflect_generics_tree_ByteSignature_h_
//$ class sun.reflect.generics.tree.ByteSignature
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

class $import ByteSignature : public ::sun::reflect::generics::tree::BaseType {
	$class(ByteSignature, 0, ::sun::reflect::generics::tree::BaseType)
public:
	ByteSignature();
	void init$();
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	static ::sun::reflect::generics::tree::ByteSignature* make();
	static ::sun::reflect::generics::tree::ByteSignature* singleton;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_ByteSignature_h_