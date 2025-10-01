#ifndef _sun_reflect_generics_tree_Signature_h_
#define _sun_reflect_generics_tree_Signature_h_
//$ interface sun.reflect.generics.tree.Signature
//$ extends sun.reflect.generics.tree.Tree

#include <java/lang/Array.h>
#include <sun/reflect/generics/tree/Tree.h>

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {
				class FormalTypeParameter;
			}
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

class $export Signature : public ::sun::reflect::generics::tree::Tree {
	$interface(Signature, $NO_CLASS_INIT, ::sun::reflect::generics::tree::Tree)
public:
	virtual $Array<::sun::reflect::generics::tree::FormalTypeParameter>* getFormalTypeParameters() {return nullptr;}
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_Signature_h_