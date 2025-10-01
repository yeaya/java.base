#ifndef _sun_reflect_generics_tree_MethodTypeSignature_h_
#define _sun_reflect_generics_tree_MethodTypeSignature_h_
//$ class sun.reflect.generics.tree.MethodTypeSignature
//$ extends sun.reflect.generics.tree.Signature

#include <java/lang/Array.h>
#include <sun/reflect/generics/tree/Signature.h>

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {
				class FieldTypeSignature;
				class FormalTypeParameter;
				class ReturnType;
				class TypeSignature;
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

class $export MethodTypeSignature : public ::sun::reflect::generics::tree::Signature {
	$class(MethodTypeSignature, $NO_CLASS_INIT, ::sun::reflect::generics::tree::Signature)
public:
	MethodTypeSignature();
	void init$($Array<::sun::reflect::generics::tree::FormalTypeParameter>* ftps, $Array<::sun::reflect::generics::tree::TypeSignature>* pts, ::sun::reflect::generics::tree::ReturnType* rt, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* ets);
	virtual void accept(::sun::reflect::generics::visitor::Visitor* v);
	virtual $Array<::sun::reflect::generics::tree::FieldTypeSignature>* getExceptionTypes();
	virtual $Array<::sun::reflect::generics::tree::FormalTypeParameter>* getFormalTypeParameters() override;
	virtual $Array<::sun::reflect::generics::tree::TypeSignature>* getParameterTypes();
	virtual ::sun::reflect::generics::tree::ReturnType* getReturnType();
	static ::sun::reflect::generics::tree::MethodTypeSignature* make($Array<::sun::reflect::generics::tree::FormalTypeParameter>* ftps, $Array<::sun::reflect::generics::tree::TypeSignature>* pts, ::sun::reflect::generics::tree::ReturnType* rt, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* ets);
	$Array<::sun::reflect::generics::tree::FormalTypeParameter>* formalTypeParams = nullptr;
	$Array<::sun::reflect::generics::tree::TypeSignature>* parameterTypes = nullptr;
	::sun::reflect::generics::tree::ReturnType* returnType = nullptr;
	$Array<::sun::reflect::generics::tree::FieldTypeSignature>* exceptionTypes = nullptr;
};

			} // tree
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_tree_MethodTypeSignature_h_