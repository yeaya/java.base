#ifndef _java_lang_annotation_AnnotationFormatError_h_
#define _java_lang_annotation_AnnotationFormatError_h_
//$ class java.lang.annotation.AnnotationFormatError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {
		namespace annotation {

class $export AnnotationFormatError : public ::java::lang::Error {
	$class(AnnotationFormatError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	AnnotationFormatError();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xC4ED287B664055FC;
	AnnotationFormatError(const AnnotationFormatError& e);
	virtual void throw$() override;
	inline AnnotationFormatError* operator ->() {
		return (AnnotationFormatError*)throwing$;
	}
};

		} // annotation
	} // lang
} // java

#endif // _java_lang_annotation_AnnotationFormatError_h_