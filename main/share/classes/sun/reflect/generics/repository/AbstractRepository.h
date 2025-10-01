#ifndef _sun_reflect_generics_repository_AbstractRepository_h_
#define _sun_reflect_generics_repository_AbstractRepository_h_
//$ class sun.reflect.generics.repository.AbstractRepository
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			namespace visitor {
				class Reifier;
			}
		}
	}
}

namespace sun {
	namespace reflect {
		namespace generics {
			namespace repository {

class AbstractRepository : public ::java::lang::Object {
	$class(AbstractRepository, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractRepository();
	void init$($String* rawSig, ::sun::reflect::generics::factory::GenericsFactory* f);
	::sun::reflect::generics::factory::GenericsFactory* getFactory();
	virtual ::sun::reflect::generics::visitor::Reifier* getReifier();
	virtual ::sun::reflect::generics::tree::Tree* getTree();
	virtual ::sun::reflect::generics::tree::Tree* parse($String* s) {return nullptr;}
	::sun::reflect::generics::factory::GenericsFactory* factory = nullptr;
	::sun::reflect::generics::tree::Tree* tree = nullptr;
};

			} // repository
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_repository_AbstractRepository_h_