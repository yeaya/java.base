#ifndef _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedTypeBaseImpl_h_
#define _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedTypeBaseImpl_h_
//$ class sun.reflect.annotation.AnnotatedTypeFactory$AnnotatedTypeBaseImpl
//$ extends java.lang.reflect.AnnotatedType

#include <java/lang/Array.h>
#include <java/lang/reflect/AnnotatedType.h>

namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class AnnotatedElement;
			class Type;
		}
	}
}
namespace java {
	namespace util {
		class Map;
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

class AnnotatedTypeFactory$AnnotatedTypeBaseImpl : public ::java::lang::reflect::AnnotatedType {
	$class(AnnotatedTypeFactory$AnnotatedTypeBaseImpl, $NO_CLASS_INIT, ::java::lang::reflect::AnnotatedType)
public:
	AnnotatedTypeFactory$AnnotatedTypeBaseImpl();
	void init$(::java::lang::reflect::Type* type, ::sun::reflect::annotation::TypeAnnotation$LocationInfo* location, $Array<::sun::reflect::annotation::TypeAnnotation>* actualTypeAnnotations, $Array<::sun::reflect::annotation::TypeAnnotation>* allOnSameTargetTypeAnnotations, ::java::lang::reflect::AnnotatedElement* decl);
	virtual $String* annotationsToString($Array<::java::lang::annotation::Annotation>* annotations, bool leadingSpace);
	virtual int32_t baseHashCode();
	virtual bool equals(Object$* o) override;
	virtual bool equalsTypeAndAnnotations(::java::lang::reflect::AnnotatedType* that);
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedOwnerType() override;
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotation) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotation) override;
	::java::lang::reflect::AnnotatedElement* getDecl();
	virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation($Class* annotation) override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotationsByType($Class* annotation) override;
	::sun::reflect::annotation::TypeAnnotation$LocationInfo* getLocation();
	virtual ::java::lang::reflect::Type* getType() override;
	$Array<::sun::reflect::annotation::TypeAnnotation>* getTypeAnnotations();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::java::lang::reflect::Type* type = nullptr;
	::java::lang::reflect::AnnotatedElement* decl = nullptr;
	::sun::reflect::annotation::TypeAnnotation$LocationInfo* location = nullptr;
	$Array<::sun::reflect::annotation::TypeAnnotation>* allOnSameTargetTypeAnnotations = nullptr;
	::java::util::Map* annotations = nullptr;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_AnnotatedTypeFactory$AnnotatedTypeBaseImpl_h_