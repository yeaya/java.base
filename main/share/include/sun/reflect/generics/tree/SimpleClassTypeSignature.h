#ifndef _sun_reflect_generics_tree_SimpleClassTypeSignature_h_
#define _sun_reflect_generics_tree_SimpleClassTypeSignature_h_
//$ class sun.reflect.generics.tree.SimpleClassTypeSignature
//$ extends sun.reflect.generics.tree.FieldTypeSignature

#include <java/lang/Array.h>
#include <sun/reflect/generics/tree/FieldTypeSignature.h>

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {
				class TypeArgument;
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

class $import SimpleClassTypeSignature : public ::sun::reflect::generics::tree::FieldTypeSignature {
	$class(SimpleClassTypeSignature, $NO_CLASS_INIT, ::sun::reflect::generics::tree::FieldTypeSignature)
public:
	SimpleClassTypeSignature();
	void init$($String* n, bool dollar, $Array<::sun::reflect::generics::tree::TypeArgument>* tas);
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	virtual bool getDollar();
	virtual $String* getName();
	virtual $Array<::sun::reflect::generics::tree::TypeArgument>* getTypeArguments();
	static ::sun::reflect::generics::tree::SimpleClassTypeSignature* make($String* n, bool dollar, $Array<::sun::reflect::generics::tree::TypeArgument>* tas);
	bool dollar = false;
	$String* name = nullptr;
	$Array<::sun::reflect::generics::tree::TypeArgument>* typeArgs = nullptr;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_SimpleClassTypeSignature_h_