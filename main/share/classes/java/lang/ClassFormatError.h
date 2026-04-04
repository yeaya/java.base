#ifndef _java_lang_ClassFormatError_h_
#define _java_lang_ClassFormatError_h_
//$ class java.lang.ClassFormatError
//$ extends java.lang.LinkageError

#include <java/lang/LinkageError.h>

namespace java {
	namespace lang {

class $export ClassFormatError : public ::java::lang::LinkageError {
	$class(ClassFormatError, $NO_CLASS_INIT, ::java::lang::LinkageError)
public:
	ClassFormatError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x8b25be211482f575;
	ClassFormatError(const ClassFormatError& e);
	virtual void throw$() override;
	inline ClassFormatError* operator ->() const {
		return (ClassFormatError*)throwing$;
	}
	inline operator ClassFormatError*() const {
		return (ClassFormatError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_ClassFormatError_h_