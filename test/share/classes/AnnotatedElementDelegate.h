#ifndef _AnnotatedElementDelegate_h_
#define _AnnotatedElementDelegate_h_
//$ class AnnotatedElementDelegate
//$ extends java.lang.reflect.AnnotatedElement

#include <java/lang/Array.h>
#include <java/lang/reflect/AnnotatedElement.h>

namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}

class AnnotatedElementDelegate : public ::java::lang::reflect::AnnotatedElement {
	$class(AnnotatedElementDelegate, $NO_CLASS_INIT, ::java::lang::reflect::AnnotatedElement)
public:
	AnnotatedElementDelegate();
	void init$(::java::lang::reflect::AnnotatedElement* base);
	static int32_t annotationArrayCheck($Array<::java::lang::annotation::Annotation>* delegate, $Array<::java::lang::annotation::Annotation>* base, $Class* annotationClass, $String* message);
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	virtual ::java::lang::reflect::AnnotatedElement* getBase();
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	static int32_t testDelegate(::AnnotatedElementDelegate* delegate, $Class* annotationClass);
	::java::lang::reflect::AnnotatedElement* base = nullptr;
};

#endif // _AnnotatedElementDelegate_h_