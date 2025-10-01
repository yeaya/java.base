#ifndef _sun_reflect_generics_repository_FieldRepository_h_
#define _sun_reflect_generics_repository_FieldRepository_h_
//$ class sun.reflect.generics.repository.FieldRepository
//$ extends sun.reflect.generics.repository.AbstractRepository

#include <sun/reflect/generics/repository/AbstractRepository.h>

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

class FieldRepository : public ::sun::reflect::generics::repository::AbstractRepository {
	$class(FieldRepository, $NO_CLASS_INIT, ::sun::reflect::generics::repository::AbstractRepository)
public:
	FieldRepository();
	void init$($String* rawSig, ::sun::reflect::generics::factory::GenericsFactory* f);
	::java::lang::reflect::Type* computeGenericType();
	virtual ::java::lang::reflect::Type* getGenericType();
	static ::sun::reflect::generics::repository::FieldRepository* make($String* rawSig, ::sun::reflect::generics::factory::GenericsFactory* f);
	virtual ::sun::reflect::generics::tree::Tree* parse($String* s) override;
	$volatile(::java::lang::reflect::Type*) genericType = nullptr;
};

			} // repository
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_repository_FieldRepository_h_