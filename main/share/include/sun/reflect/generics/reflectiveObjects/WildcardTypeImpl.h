#ifndef _sun_reflect_generics_reflectiveObjects_WildcardTypeImpl_h_
#define _sun_reflect_generics_reflectiveObjects_WildcardTypeImpl_h_
//$ class sun.reflect.generics.reflectiveObjects.WildcardTypeImpl
//$ extends sun.reflect.generics.reflectiveObjects.LazyReflectiveObjectGenerator
//$ implements java.lang.reflect.WildcardType

#include <java/lang/Array.h>
#include <java/lang/reflect/WildcardType.h>
#include <sun/reflect/generics/reflectiveObjects/LazyReflectiveObjectGenerator.h>

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
			namespace reflectiveObjects {

class $import WildcardTypeImpl : public ::sun::reflect::generics::reflectiveObjects::LazyReflectiveObjectGenerator, public ::java::lang::reflect::WildcardType {
	$class(WildcardTypeImpl, 0, ::sun::reflect::generics::reflectiveObjects::LazyReflectiveObjectGenerator, ::java::lang::reflect::WildcardType)
public:
	WildcardTypeImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($Array<::sun::reflect::generics::tree::FieldTypeSignature>* ubs, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* lbs, ::sun::reflect::generics::factory::GenericsFactory* f);
	virtual bool equals(Object$* o) override;
	virtual $Array<::java::lang::reflect::Type>* getLowerBounds() override;
	virtual $Array<::java::lang::reflect::Type>* getUpperBounds() override;
	virtual int32_t hashCode() override;
	static ::sun::reflect::generics::reflectiveObjects::WildcardTypeImpl* make($Array<::sun::reflect::generics::tree::FieldTypeSignature>* ubs, $Array<::sun::reflect::generics::tree::FieldTypeSignature>* lbs, ::sun::reflect::generics::factory::GenericsFactory* f);
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	$volatile($ObjectArray*) upperBounds = nullptr;
	$volatile($ObjectArray*) lowerBounds = nullptr;
};

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_reflectiveObjects_WildcardTypeImpl_h_