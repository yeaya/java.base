#ifndef _sun_reflect_generics_repository_ClassRepository_h_
#define _sun_reflect_generics_repository_ClassRepository_h_
//$ class sun.reflect.generics.repository.ClassRepository
//$ extends sun.reflect.generics.repository.GenericDeclRepository

#include <java/lang/Array.h>
#include <sun/reflect/generics/repository/GenericDeclRepository.h>

#pragma push_macro("NONE")
#undef NONE

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

class ClassRepository : public ::sun::reflect::generics::repository::GenericDeclRepository {
	$class(ClassRepository, 0, ::sun::reflect::generics::repository::GenericDeclRepository)
public:
	ClassRepository();
	void init$($String* rawSig, ::sun::reflect::generics::factory::GenericsFactory* f);
	$Array<::java::lang::reflect::Type>* computeSuperInterfaces();
	::java::lang::reflect::Type* computeSuperclass();
	virtual $Array<::java::lang::reflect::Type>* getSuperInterfaces();
	virtual ::java::lang::reflect::Type* getSuperclass();
	static ::sun::reflect::generics::repository::ClassRepository* make($String* rawSig, ::sun::reflect::generics::factory::GenericsFactory* f);
	virtual ::sun::reflect::generics::tree::Tree* parse($String* s) override;
	static ::sun::reflect::generics::repository::ClassRepository* NONE;
	$volatile(::java::lang::reflect::Type*) superclass = nullptr;
	$volatile($Array<::java::lang::reflect::Type>*) superInterfaces = nullptr;
};

			} // repository
		} // generics
	} // reflect
} // sun

#pragma pop_macro("NONE")

#endif // _sun_reflect_generics_repository_ClassRepository_h_