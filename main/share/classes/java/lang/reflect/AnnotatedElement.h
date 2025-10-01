#ifndef _java_lang_reflect_AnnotatedElement_h_
#define _java_lang_reflect_AnnotatedElement_h_
//$ interface java.lang.reflect.AnnotatedElement
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

class $export AnnotatedElement : public ::java::lang::Object {
	$interface(AnnotatedElement, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) {return nullptr;}
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() {return nullptr;}
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationClass);
	virtual ::java::lang::annotation::Annotation* getDeclaredAnnotation($Class* annotationClass);
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() {return nullptr;}
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotationsByType($Class* annotationClass);
	virtual bool isAnnotationPresent($Class* annotationClass);
	static ::java::lang::annotation::Annotation* lambda$getDeclaredAnnotationsByType$0(::java::lang::annotation::Annotation* first, ::java::lang::annotation::Annotation* second);
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_AnnotatedElement_h_