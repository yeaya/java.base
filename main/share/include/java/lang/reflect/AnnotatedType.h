#ifndef _java_lang_reflect_AnnotatedType_h_
#define _java_lang_reflect_AnnotatedType_h_
//$ interface java.lang.reflect.AnnotatedType
//$ extends java.lang.reflect.AnnotatedElement

#include <java/lang/reflect/AnnotatedElement.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Type;
		}
	}
}

namespace java {
	namespace lang {
		namespace reflect {

class $import AnnotatedType : public ::java::lang::reflect::AnnotatedElement {
	$interface(AnnotatedType, $NO_CLASS_INIT, ::java::lang::reflect::AnnotatedElement)
public:
	virtual ::java::lang::reflect::AnnotatedType* getAnnotatedOwnerType();
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) override {return nullptr;}
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override {return nullptr;}
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override {return nullptr;}
	virtual ::java::lang::reflect::Type* getType() {return nullptr;}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_AnnotatedType_h_