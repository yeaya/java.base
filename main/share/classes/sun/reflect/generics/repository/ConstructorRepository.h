#ifndef _sun_reflect_generics_repository_ConstructorRepository_h_
#define _sun_reflect_generics_repository_ConstructorRepository_h_
//$ class sun.reflect.generics.repository.ConstructorRepository
//$ extends sun.reflect.generics.repository.GenericDeclRepository

#include <java/lang/Array.h>
#include <sun/reflect/generics/repository/GenericDeclRepository.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Type;
		}
	}
}
namespace sun {
	namespace reflect {
		namespace generics {
			namespace factory {
				class GenericsFactory;
			}
		}
	}
}
namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {
				class Tree;
			}
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace repository {

class ConstructorRepository : public ::sun::reflect::generics::repository::GenericDeclRepository {
	$class(ConstructorRepository, $NO_CLASS_INIT, ::sun::reflect::generics::repository::GenericDeclRepository)
public:
	ConstructorRepository();
	void init$($String* rawSig, ::sun::reflect::generics::factory::GenericsFactory* f);
	$Array<::java::lang::reflect::Type>* computeExceptionTypes();
	$Array<::java::lang::reflect::Type>* computeParameterTypes();
	virtual $Array<::java::lang::reflect::Type>* getExceptionTypes();
	virtual $Array<::java::lang::reflect::Type>* getParameterTypes();
	static ::sun::reflect::generics::repository::ConstructorRepository* make($String* rawSig, ::sun::reflect::generics::factory::GenericsFactory* f);
	virtual ::sun::reflect::generics::tree::Tree* parse($String* s) override;
	$volatile($Array<::java::lang::reflect::Type>*) parameterTypes = nullptr;
	$volatile($Array<::java::lang::reflect::Type>*) exceptionTypes = nullptr;
};

			} // repository
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_repository_ConstructorRepository_h_