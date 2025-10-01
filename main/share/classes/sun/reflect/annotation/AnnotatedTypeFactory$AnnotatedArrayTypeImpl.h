#ifndef _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedArrayTypeImpl_h_
#define _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedArrayTypeImpl_h_
//$ class sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedArrayTypeImpl
//$ extends sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl
//$ implements java.lang.reflect.AnnotatedArrayType

#include <java/lang/Array.h>
#include <java/lang/reflect/AnnotatedArrayType.h>
#include <sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedTypeBaseImpl.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedElement;
			class AnnotatedType;
			class Type;
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

class AnnotatedTypeFactory$AnnotatedArrayTypeImpl : public ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedTypeBaseImpl, public ::java::lang::reflect::AnnotatedArrayType {
	$class(AnnotatedTypeFactory$AnnotatedArrayTypeImpl, $NO_CLASS_INIT, ::sun::reflect::annotation::AnnotatedTypeFactory$AnnotatedTypeBaseImpl, ::java::lang::reflect::AnnotatedArrayType)
public:
	AnnotatedTypeFactory$AnnotatedArrayTypeImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotation) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotation) override;
	virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation($Class* annotation) override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotationsByType($Class* annotation) override;
	virtual ::java::lang::reflect::Type* getType() override;
	void init$(::java::lang::reflect::Type* type, ::sun::reflect::annotation::TypeAnnotation$LocationInfo* location, $Array<::sun::reflect::annotation::TypeAnnotation>* actualTypeAnnotations, $Array<::sun::reflect::annotation::TypeAnnotation>* allOnSameTargetTypeAnnotations, ::java::lang::reflect::AnnotatedElement* decl);
	virtual bool equals(Object$* o) override;
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedGenericComponentType() override;
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedOwnerType() override;
	::java::lang::reflect::Type* getComponentType();
	virtual int32_t hashCode() override;
	virtual bool isAnnotationPresent($Class* annotationClass) override;
	virtual $String* toString() override;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedArrayTypeImpl_h_