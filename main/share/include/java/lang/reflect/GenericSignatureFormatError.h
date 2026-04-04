#ifndef _java_lang_reflect_GenericSignatureFormatError_h_
#define _java_lang_reflect_GenericSignatureFormatError_h_
//$ class java.lang.reflect.GenericSignatureFormatError
//$ extends java.lang.ClassFormatError

#include <java/lang/ClassFormatError.h>

namespace java {
	namespace lang {
		namespace reflect {

class $import GenericSignatureFormatError : public ::java::lang::ClassFormatError {
	$class(GenericSignatureFormatError, $NO_CLASS_INIT, ::java::lang::ClassFormatError)
public:
	GenericSignatureFormatError();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x5d1e6be9e4bf48fa;
	GenericSignatureFormatError(const GenericSignatureFormatError& e);
	virtual void throw$() override;
	inline GenericSignatureFormatError* operator ->() const {
		return (GenericSignatureFormatError*)throwing$;
	}
	inline operator GenericSignatureFormatError*() const {
		return (GenericSignatureFormatError*)throwing$;
	}
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_GenericSignatureFormatError_h_