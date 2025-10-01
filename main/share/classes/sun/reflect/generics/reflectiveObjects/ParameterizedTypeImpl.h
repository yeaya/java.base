#ifndef _sun_reflect_generics_reflectiveObjects_ParameterizedTypeImpl_h_
#define _sun_reflect_generics_reflectiveObjects_ParameterizedTypeImpl_h_
//$ class sun.reflect.generics.reflectiveObjects.ParameterizedTypeImpl
//$ extends java.lang.reflect.ParameterizedType

#include <java/lang/Array.h>
#include <java/lang/reflect/ParameterizedType.h>

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
			namespace reflectiveObjects {

class $export ParameterizedTypeImpl : public ::java::lang::reflect::ParameterizedType {
	$class(ParameterizedTypeImpl, $NO_CLASS_INIT, ::java::lang::reflect::ParameterizedType)
public:
	ParameterizedTypeImpl();
	void init$($Class* rawType, $Array<::java::lang::reflect::Type>* actualTypeArguments, ::java::lang::reflect::Type* ownerType);
	virtual bool equals(Object$* o) override;
	virtual $Array<::java::lang::reflect::Type>* getActualTypeArguments() override;
	virtual ::java::lang::reflect::Type* getOwnerType() override;
	virtual ::java::lang::reflect::Type* getRawType() override;
	virtual int32_t hashCode() override;
	static ::sun::reflect::generics::reflectiveObjects::ParameterizedTypeImpl* make($Class* rawType, $Array<::java::lang::reflect::Type>* actualTypeArguments, ::java::lang::reflect::Type* ownerType);
	virtual $String* toString() override;
	void validateConstructorArguments();
	$Array<::java::lang::reflect::Type>* actualTypeArguments = nullptr;
	$Class* rawType = nullptr;
	::java::lang::reflect::Type* ownerType = nullptr;
};

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_reflectiveObjects_ParameterizedTypeImpl_h_