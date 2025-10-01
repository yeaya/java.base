#ifndef _sun_reflect_generics_reflectiveObjects_LazyReflectiveObjectGenerator_h_
#define _sun_reflect_generics_reflectiveObjects_LazyReflectiveObjectGenerator_h_
//$ class sun.reflect.generics.reflectiveObjects.LazyReflectiveObjectGenerator
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
				class FieldTypeSignature;
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
			namespace reflectiveObjects {

class $export LazyReflectiveObjectGenerator : public ::java::lang::Object {
	$class(LazyReflectiveObjectGenerator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LazyReflectiveObjectGenerator();
	void init$(::sun::reflect::generics::factory::GenericsFactory* f);
	::sun::reflect::generics::factory::GenericsFactory* getFactory();
	virtual ::sun::reflect::generics::visitor::Reifier* getReifier();
	virtual $Array<::java::lang::reflect::Type>* reifyBounds($Array<::sun::reflect::generics::tree::FieldTypeSignature>* boundASTs);
	::sun::reflect::generics::factory::GenericsFactory* factory = nullptr;
};

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_reflectiveObjects_LazyReflectiveObjectGenerator_h_