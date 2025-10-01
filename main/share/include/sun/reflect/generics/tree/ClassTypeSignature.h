#ifndef _sun_reflect_generics_tree_ClassTypeSignature_h_
#define _sun_reflect_generics_tree_ClassTypeSignature_h_
//$ class sun.reflect.generics.tree.ClassTypeSignature
//$ extends sun.reflect.generics.tree.FieldTypeSignature

#include <sun/reflect/generics/tree/FieldTypeSignature.h>

namespace java {
	namespace util {
		class List;
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

class $import ClassTypeSignature : public ::sun::reflect::generics::tree::FieldTypeSignature {
	$class(ClassTypeSignature, $NO_CLASS_INIT, ::sun::reflect::generics::tree::FieldTypeSignature)
public:
	ClassTypeSignature();
	void init$(::java::util::List* p);
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override;
	virtual ::java::util::List* getPath();
	static ::sun::reflect::generics::tree::ClassTypeSignature* make(::java::util::List* p);
	::java::util::List* path = nullptr;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_ClassTypeSignature_h_