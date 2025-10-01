#ifndef _sun_reflect_generics_tree_FormalTypeParameter_h_
#define _sun_reflect_generics_tree_FormalTypeParameter_h_
//$ class sun.reflect.generics.tree.FormalTypeParameter
//$ extends sun.reflect.generics.tree.TypeTree

#include <java/lang/Array.h>
#include <sun/reflect/generics/tree/TypeTree.h>

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {
				class FieldTypeSignature;
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

class $import FormalTypeParameter : public ::sun::reflect::generics::tree::TypeTree {
	$class(FormalTypeParameter, $NO_CLASS_INIT, ::sun::reflect::generics::tree::TypeTree)
public:
	FormalTypeParameter();
	void init$($String* n, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* bs);
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	virtual $Array<::sun::reflect::generics::tree::FieldTypeSignature>* getBounds();
	virtual $String* getName();
	static ::sun::reflect::generics::tree::FormalTypeParameter* make($String* n, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* bs);
	$String* name = nullptr;
	$Array<::sun::reflect::generics::tree::FieldTypeSignature>* bounds = nullptr;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_FormalTypeParameter_h_