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
	static const int64_t serialVersionUID = (int64_t)0x8B25BE211482F575;
	ClassFormatError(const ClassFormatError& e);
	virtual void throw$() override;
	inline ClassFormatError* operator ->() {
		return (ClassFormatError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_ClassFormatError_h_