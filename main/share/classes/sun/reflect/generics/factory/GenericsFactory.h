#ifndef _sun_reflect_generics_factory_GenericsFactory_h_
#define _sun_reflect_generics_factory_GenericsFactory_h_
//$ interface sun.reflect.generics.factory.GenericsFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class ParameterizedType;
			class Type;
			class TypeVariable;
			class WildcardType;
		}
	}
}
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
			namespace factory {

class GenericsFactory : public ::java::lang::Object {
	$interface(GenericsFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::reflect::TypeVariable* findTypeVariable($String* name) {return nullptr;}
	virtual ::java::lang::reflect::Type* makeArrayType(::java::lang::reflect::Type* componentType) {return nullptr;}
	virtual ::java::lang::reflect::Type* makeBool() {return nullptr;}
	virtual ::java::lang::reflect::Type* makeByte() {return nullptr;}
	virtual ::java::lang::reflect::Type* makeChar() {return nullptr;}
	virtual ::java::lang::reflect::Type* makeDouble() {return nullptr;}
	virtual ::java::lang::reflect::Type* makeFloat() {return nullptr;}
	virtual ::java::lang::reflect::Type* makeInt() {return nullptr;}
	virtual ::java::lang::reflect::Type* makeLong() {return nullptr;}
	virtual ::java::lang::reflect::Type* makeNamedType($String* name) {return nullptr;}
	virtual ::java::lang::reflect::ParameterizedType* makeParameterizedType(::java::lang::reflect::Type* declaration, $Array<::java::lang::reflect::Type>* typeArgs, ::java::lang::reflect::Type* owner) {return nullptr;}
	virtual ::java::lang::reflect::Type* makeShort() {return nullptr;}
	virtual ::java::lang::reflect::TypeVariable* makeTypeVariable($String* name, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* bounds) {return nullptr;}
	virtual ::java::lang::reflect::Type* makeVoid() {return nullptr;}
	virtual ::java::lang::reflect::WildcardType* makeWildcard($Array<::sun::reflect::generics::tree::FieldTypeSignature>* ubs, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* lbs) {return nullptr;}
};

			} // factory
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_factory_GenericsFactory_h_