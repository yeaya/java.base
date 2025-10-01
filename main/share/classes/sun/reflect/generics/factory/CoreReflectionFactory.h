#ifndef _sun_reflect_generics_factory_CoreReflectionFactory_h_
#define _sun_reflect_generics_factory_CoreReflectionFactory_h_
//$ class sun.reflect.generics.factory.CoreReflectionFactory
//$ extends sun.reflect.generics.factory.GenericsFactory

#include <java/lang/Array.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class GenericDeclaration;
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
			namespace scope {
				class Scope;
			}
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

class CoreReflectionFactory : public ::sun::reflect::generics::factory::GenericsFactory {
	$class(CoreReflectionFactory, 0, ::sun::reflect::generics::factory::GenericsFactory)
public:
	CoreReflectionFactory();
	void init$(::java::lang::reflect::GenericDeclaration* d, ::sun::reflect::generics::scope::Scope* s);
	virtual ::java::lang::reflect::TypeVariable* findTypeVariable($String* name) override;
	::java::lang::reflect::GenericDeclaration* getDecl();
	::java::lang::ClassLoader* getDeclsLoader();
	::sun::reflect::generics::scope::Scope* getScope();
	static ::sun::reflect::generics::factory::CoreReflectionFactory* make(::java::lang::reflect::GenericDeclaration* d, ::sun::reflect::generics::scope::Scope* s);
	virtual ::java::lang::reflect::Type* makeArrayType(::java::lang::reflect::Type* componentType) override;
	virtual ::java::lang::reflect::Type* makeBool() override;
	virtual ::java::lang::reflect::Type* makeByte() override;
	virtual ::java::lang::reflect::Type* makeChar() override;
	virtual ::java::lang::reflect::Type* makeDouble() override;
	virtual ::java::lang::reflect::Type* makeFloat() override;
	virtual ::java::lang::reflect::Type* makeInt() override;
	virtual ::java::lang::reflect::Type* makeLong() override;
	virtual ::java::lang::reflect::Type* makeNamedType($String* name) override;
	virtual ::java::lang::reflect::ParameterizedType* makeParameterizedType(::java::lang::reflect::Type* declaration, $Array<::java::lang::reflect::Type>* typeArgs, ::java::lang::reflect::Type* owner) override;
	virtual ::java::lang::reflect::Type* makeShort() override;
	virtual ::java::lang::reflect::TypeVariable* makeTypeVariable($String* name, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* bounds) override;
	virtual ::java::lang::reflect::Type* makeVoid() override;
	virtual ::java::lang::reflect::WildcardType* makeWildcard($Array<::sun::reflect::generics::tree::FieldTypeSignature>* ubs, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* lbs) override;
	static bool $assertionsDisabled;
	::java::lang::reflect::GenericDeclaration* decl = nullptr;
	::sun::reflect::generics::scope::Scope* scope = nullptr;
};

			} // factory
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_factory_CoreReflectionFactory_h_