#ifndef _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedWildcardTypeImpl_h_
#define _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedWildcardTypeImpl_h_
//$ class sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedWildcardTypeImpl
//$ extends sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl
//$ implements java.lang.reflect.AnnotatedWildcardType

#include <java/lang/Array.h>
#include <java/lang/reflect/AnnotatedWildcardType.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedTypeBaseImpl.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedElement;
			class AnnotatedType;
			class Type;
			class WildcardType;
		}
	}
}
namespace sun {
	namespace reflect {
		namespace annotation {
			class TypeAnnotation;
			class TypeAnnotation$LocationInfo;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class AnnotatedTypeFactory$AnnotatedWildcardTypeImpl : public ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedTypeBaseImpl, public ::java::lang::reflect::AnnotatedWildcardType {
	$class(AnnotatedTypeFactory$AnnotatedWildcardTypeImpl, $NO_CLASS_INIT, ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedTypeBaseImpl, ::java::lang::reflect::AnnotatedWildcardType)
public:
	AnnotatedTypeFactory$AnnotatedWildcardTypeImpl();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotation) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotation) override;
	virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation($Class* annotation) override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotationsByType($Class* annotation) override;
	virtual ::java::lang::reflect::Type* getType() override;
	void init$(::java::lang::reflect::WildcardType* type, ::sun::reflect::annotation::TypeAnnotation$LocationInfo* location, $Array<::sun::reflect::annotation::TypeAnnotation>* actualTypeAnnotations, $Array<::sun::reflect::annotation::TypeAnnotation>* allOnSameTargetTypeAnnotations, ::java::lang::reflect::AnnotatedElement* decl);
	virtual bool equals(Object$* o) override;
	$Array<::java::lang::reflect::AnnotatedType>* getAnnotatedBounds($Array<::java::lang::reflect::Type>* bounds);
	virtual $Array<::java::lang::reflect::AnnotatedType>* getAnnotatedLowerBounds() override;
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedOwnerType() override;
	virtual $Array<::java::lang::reflect::AnnotatedType>* getAnnotatedUpperBounds() override;
	::java::lang::reflect::WildcardType* getWildcardType();
	bool hasUpperBounds();
	virtual int32_t hashCode() override;
	virtual bool isAnnotationPresent($Class* annotationClass) override;
	virtual $String* toString() override;
	bool hasUpperBounds$ = false;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedWildcardTypeImpl_h_