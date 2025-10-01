#ifndef _sun_reflect_generics_repository_GenericDeclRepository_h_
#define _sun_reflect_generics_repository_GenericDeclRepository_h_
//$ class sun.reflect.generics.repository.GenericDeclRepository
//$ extends sun.reflect.generics.repository.AbstractRepository

#include <java/lang/Array.h>
#include <sun/reflect/generics/repository/AbstractRepository.h>

namespace java {
	namespace lang {
		namespace reflect {
			class TypeVariable;
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
			namespace repository {

class GenericDeclRepository : public ::sun::reflect::generics::repository::AbstractRepository {
	$class(GenericDeclRepository, $NO_CLASS_INIT, ::sun::reflect::generics::repository::AbstractRepository)
public:
	GenericDeclRepository();
	void init$($String* rawSig, ::sun::reflect::generics::factory::GenericsFactory* f);
	$Array<::java::lang::reflect::TypeVariable>* computeTypeParameters();
	virtual $Array<::java::lang::reflect::TypeVariable>* getTypeParameters();
	$volatile($Array<::java::lang::reflect::TypeVariable>*) typeParameters = nullptr;
};

			} // repository
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_repository_GenericDeclRepository_h_