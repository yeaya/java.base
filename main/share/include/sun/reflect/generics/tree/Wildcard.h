#ifndef _sun_reflect_generics_tree_Wildcard_h_
#define _sun_reflect_generics_tree_Wildcard_h_
//$ class sun.reflect.generics.tree.Wildcard
//$ extends sun.reflect.generics.tree.TypeArgument

#include <java/lang/Array.h>
#include <sun/reflect/generics/tree/TypeArgument.h>

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

class $import Wildcard : public ::sun::reflect::generics::tree::TypeArgument {
	$class(Wildcard, 0, ::sun::reflect::generics::tree::TypeArgument)
public:
	Wildcard();
	void init$($Array<::sun::reflect::generics::tree::FieldTypeSignature>* ubs, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* lbs);
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	virtual $Array<::sun::reflect::generics::tree::FieldTypeSignature>* getLowerBounds();
	virtual $Array<::sun::reflect::generics::tree::FieldTypeSignature>* getUpperBounds();
	static ::sun::reflect::generics::tree::Wildcard* make($Array<::sun::reflect::generics::tree::FieldTypeSignature>* ubs, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* lbs);
	$Array<::sun::reflect::generics::tree::FieldTypeSignature>* upperBounds = nullptr;
	$Array<::sun::reflect::generics::tree::FieldTypeSignature>* lowerBounds = nullptr;
	static $Array<::sun::reflect::generics::tree::FieldTypeSignature>* emptyBounds;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_Wildcard_h_