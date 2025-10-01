#ifndef _sun_reflect_generics_reflectiveObjects_GenericArrayTypeImpl_h_
#define _sun_reflect_generics_reflectiveObjects_GenericArrayTypeImpl_h_
//$ class sun.reflect.generics.reflectiveObjects.GenericArrayTypeImpl
//$ extends java.lang.reflect.GenericArrayType

#include <java/lang/reflect/GenericArrayType.h>

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

class $export GenericArrayTypeImpl : public ::java::lang::reflect::GenericArrayType {
	$class(GenericArrayTypeImpl, $NO_CLASS_INIT, ::java::lang::reflect::GenericArrayType)
public:
	GenericArrayTypeImpl();
	void init$(::java::lang::reflect::Type* ct);
	virtual bool equals(Object$* o) override;
	virtual ::java::lang::reflect::Type* getGenericComponentType() override;
	virtual int32_t hashCode() override;
	static ::sun::reflect::generics::reflectiveObjects::GenericArrayTypeImpl* make(::java::lang::reflect::Type* ct);
	virtual $String* toString() override;
	::java::lang::reflect::Type* genericComponentType = nullptr;
};

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun

#endif // _sun_reflect_generics_reflectiveObjects_GenericArrayTypeImpl_h_