#ifndef _sun_reflect_generics_tree_FieldTypeSignature_h_
#define _sun_reflect_generics_tree_FieldTypeSignature_h_
//$ interface sun.reflect.generics.tree.FieldTypeSignature
//$ extends sun.reflect.generics.tree.BaseType,sun.reflect.generics.tree.TypeArgument

#include <sun/reflect/generics/tree/BaseType.h>
#include <sun/reflect/generics/tree/TypeArgument.h>

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

class $import FieldTypeSignature : public ::sun::reflect::generics::tree::BaseType, public ::sun::reflect::generics::tree::TypeArgument {
	$interface(FieldTypeSignature, $NO_CLASS_INIT, ::sun::reflect::generics::tree::BaseType, ::sun::reflect::generics::tree::TypeArgument)
public:
	virtual void accept(::sun::reflect::generics::visitor::TypeTreeVisitor* v) override {}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_FieldTypeSignature_h_