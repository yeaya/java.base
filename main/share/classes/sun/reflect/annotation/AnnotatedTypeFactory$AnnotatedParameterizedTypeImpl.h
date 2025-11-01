#ifndef _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl_h_
#define _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl_h_
//$ class sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl
//$ extends sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl
//$ implements java.lang.reflect.AnnotatedParameterizedType

#include <java/lang/Array.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedTypeBaseImpl.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedElement;
			class AnnotatedType;
			class ParameterizedType;
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

class AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl : public ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedTypeBaseImpl, public ::java::lang::reflect::AnnotatedParameterizedType {
	$class(AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl, $NO_CLASS_INIT, ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedTypeBaseImpl, ::java::lang::reflect::AnnotatedParameterizedType)
public:
	AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotation) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotation) override;
	virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation($Class* annotation) override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotationsByType($Class* annotation) override;
	virtual ::java::lang::reflect::Type* getType() override;
	void init$(::java::lang::reflect::ParameterizedType* type, ::sun::reflect::annotation::TypeAnnotation$LocationInfo* location, $Array<::sun::reflect::annotation::TypeAnnotation>* actualTypeAnnotations, $Array<::sun::reflect::annotation::TypeAnnotation>* allOnSameTargetTypeAnnotations, ::java::lang::reflect::AnnotatedElement* decl);
	virtual bool equals(Object$* o) override;
	virtual $Array<::java::lang::reflect::AnnotatedType>* getAnnotatedActualTypeArguments() override;
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedOwnerType() override;
	::java::lang::reflect::ParameterizedType* getParameterizedType();
	virtual int32_t hashCode() override;
	virtual bool isAnnotationPresent($Class* annotationClass) override;
	virtual $String* toString() override;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedParameterizedTypeImpl_h_