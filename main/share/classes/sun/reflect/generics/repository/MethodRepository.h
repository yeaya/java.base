#ifndef _sun_reflect_generics_repository_MethodRepository_h_
#define _sun_reflect_generics_repository_MethodRepository_h_
//$ class sun.reflect.generics.repository.MethodRepository
//$ extends sun.reflect.generics.repository.ConstructorRepository

#include <sun/reflect/generics/repository/ConstructorRepository.h>

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
			namespace repository {

class MethodRepository : public ::sun::reflect::generics::repository::ConstructorRepository {
	$class(MethodRepository, $NO_CLASS_INIT, ::sun::reflect::generics::repository::ConstructorRepository)
public:
	MethodRepository();
	void init$($String* rawSig, ::sun::reflect::generics::factory::GenericsFactory* f);
	::java::lang::reflect::Type* computeReturnType();
	virtual ::java::lang::reflect::Type* getReturnType();
	static ::sun::reflect::generics::repository::MethodRepository* make($String* rawSig, ::sun::reflect::generics::factory::GenericsFactory* f);
	$volatile(::java::lang::reflect::Type*) returnType = nullptr;
};

			} // repository
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_repository_MethodRepository_h_