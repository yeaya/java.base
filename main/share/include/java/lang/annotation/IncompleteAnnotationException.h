#ifndef _java_lang_annotation_IncompleteAnnotationException_h_
#define _java_lang_annotation_IncompleteAnnotationException_h_
//$ class java.lang.annotation.IncompleteAnnotationException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		namespace annotation {

class $import IncompleteAnnotationException : public ::java::lang::RuntimeException {
	$class(IncompleteAnnotationException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	IncompleteAnnotationException();
	void init$($Class* annotationType, $String* elementName);
	virtual $Class* annotationType();
	virtual $String* elementName();
	static const int64_t serialVersionUID = (int64_t)0x75330357FFFFEAC8;
	$Class* annotationType$ = nullptr;
	$String* elementName$ = nullptr;
	IncompleteAnnotationException(const IncompleteAnnotationException& e);
	IncompleteAnnotationException wrapper$();
	virtual void throwWrapper$() override;
};

		} // annotation
	} // lang
} // java

#endif // _java_lang_annotation_IncompleteAnnotationException_h_