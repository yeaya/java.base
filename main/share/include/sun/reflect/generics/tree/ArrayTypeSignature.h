#ifndef _sun_reflect_generics_tree_ArrayTypeSignature_h_
#define _sun_reflect_generics_tree_ArrayTypeSignature_h_
//$ class sun.reflect.generics.tree.ArrayTypeSignature
//$ extends sun.reflect.generics.tree.FieldTypeSignature

#include <sun/reflect/generics/tree/FieldTypeSignature.h>

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {
				class TypeSignature;
			}
		}
	}
}
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

class $import ArrayTypeSignature : public ::sun::reflect::generics::tree::FieldTypeSignature {
	$class(ArrayTypeSignature, $NO_CLASS_INIT, ::sun::reflect::generics::tree::FieldTypeSignature)
public:
	ArrayTypeSignature();
	void init$(::sun::reflect::generics::tree::TypeSignature* ct);
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	virtual ::sun::reflect::generics::tree::TypeSignature* getComponentType();
	static ::sun::reflect::generics::tree::ArrayTypeSignature* make(::sun::reflect::generics::tree::TypeSignature* ct);
	::sun::reflect::generics::tree::TypeSignature* componentType = nullptr;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_ArrayTypeSignature_h_