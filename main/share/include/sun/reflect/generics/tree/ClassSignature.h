#ifndef _sun_reflect_generics_tree_ClassSignature_h_
#define _sun_reflect_generics_tree_ClassSignature_h_
//$ class sun.reflect.generics.tree.ClassSignature
//$ extends sun.reflect.generics.tree.Signature

#include <java/lang/Array.h>
#include <sun/reflect/generics/tree/Signature.h>

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {
				class ClassTypeSignature;
				class FormalTypeParameter;
			}
		}
	}
}
namespace sun {
	namespace reflect {
		namespace generics {
			namespace visitor {
				class Visitor;
			}
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

class $import ClassSignature : public ::sun::reflect::generics::tree::Signature {
	$class(ClassSignature, $NO_CLASS_INIT, ::sun::reflect::generics::tree::Signature)
public:
	ClassSignature();
	void init$($Array<::sun::reflect::generics::tree::FormalTypeParameter>* ftps, ::sun::reflect::generics::tree::ClassTypeSignature* sc, $Array<::sun::reflect::generics::tree::ClassTypeSignature>* sis);
	virtual void accept(::sun::reflect::generics::visitor::Visitor* v);
	virtual $Array<::sun::reflect::generics::tree::FormalTypeParameter>* getFormalTypeParameters() override;
	virtual $Array<::sun::reflect::generics::tree::ClassTypeSignature>* getSuperInterfaces();
	virtual ::sun::reflect::generics::tree::ClassTypeSignature* getSuperclass();
	static ::sun::reflect::generics::tree::ClassSignature* make($Array<::sun::reflect::generics::tree::FormalTypeParameter>* ftps, ::sun::reflect::generics::tree::ClassTypeSignature* sc, $Array<::sun::reflect::generics::tree::ClassTypeSignature>* sis);
	$Array<::sun::reflect::generics::tree::FormalTypeParameter>* formalTypeParams = nullptr;
	::sun::reflect::generics::tree::ClassTypeSignature* superclass = nullptr;
	$Array<::sun::reflect::generics::tree::ClassTypeSignature>* superInterfaces = nullptr;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_ClassSignature_h_