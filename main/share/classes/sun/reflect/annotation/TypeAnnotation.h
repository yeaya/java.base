#ifndef _sun_reflect_annotation_TypeAnnotation_h_
#define _sun_reflect_annotation_TypeAnnotation_h_
//$ class sun.reflect.annotation.TypeAnnotation
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace reflect {
		namespace annotation {
			class TypeAnnotation$LocationInfo;
			class TypeAnnotation$TypeAnnotationTarget;
			class TypeAnnotation$TypeAnnotationTargetInfo;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace annotation {

class $export TypeAnnotation : public ::java::lang::Object {
	$class(TypeAnnotation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeAnnotation();
	void init$(::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTargetInfo* targetInfo, ::sun::reflect::annotation::TypeAnnotation$LocationInfo* loc, ::java::lang::annotation::Annotation* annotation, ::java::lang::reflect::AnnotatedElement* baseDeclaration);
	static ::java::util::List* filter($Array<::sun::reflect::annotation::TypeAnnotation>* typeAnnotations, ::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTarget* predicate);
	::java::lang::annotation::Annotation* getAnnotation();
	::java::lang::reflect::AnnotatedElement* getBaseDeclaration();
	::sun::reflect::annotation::TypeAnnotation$LocationInfo* getLocationInfo();
	::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTargetInfo* getTargetInfo();
	virtual $String* toString() override;
	::sun::reflect::annotation::TypeAnnotation$TypeAnnotationTargetInfo* targetInfo = nullptr;
	::sun::reflect::annotation::TypeAnnotation$LocationInfo* loc = nullptr;
	::java::lang::annotation::Annotation* annotation = nullptr;
	::java::lang::reflect::AnnotatedElement* baseDeclaration = nullptr;
};

		} // annotation
	} // reflect
} // sun

#endif // _sun_reflect_annotation_TypeAnnotation_h_