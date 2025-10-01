#ifndef _java_lang_annotation_AnnotationTypeMismatchException_h_
#define _java_lang_annotation_AnnotationTypeMismatchException_h_
//$ class java.lang.annotation.AnnotationTypeMismatchException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace java {
	namespace lang {
		namespace annotation {

class $export AnnotationTypeMismatchException : public ::java::lang::RuntimeException {
	$class(AnnotationTypeMismatchException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	AnnotationTypeMismatchException();
	void init$(::java::lang::reflect::Method* element, $String* foundType);
	virtual ::java::lang::reflect::Method* element();
	virtual $String* foundType();
	static const int64_t serialVersionUID = (int64_t)0x70C5160EDDBF1A8F;
	::java::lang::reflect::Method* element$ = nullptr;
	$String* foundType$ = nullptr;
	AnnotationTypeMismatchException(const AnnotationTypeMismatchException& e);
	AnnotationTypeMismatchException wrapper$();
	virtual void throwWrapper$() override;
};

		} // annotation
	} // lang
} // java

#endif // _java_lang_annotation_AnnotationTypeMismatchException_h_