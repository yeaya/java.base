#ifndef _java_lang_UnsupportedClassVersionError_h_
#define _java_lang_UnsupportedClassVersionError_h_
//$ class java.lang.UnsupportedClassVersionError
//$ extends java.lang.ClassFormatError

#include <java/lang/ClassFormatError.h>

namespace java {
	namespace lang {

class $import UnsupportedClassVersionError : public ::java::lang::ClassFormatError {
	$class(UnsupportedClassVersionError, $NO_CLASS_INIT, ::java::lang::ClassFormatError)
public:
	UnsupportedClassVersionError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x9D25074BF027AE63;
	UnsupportedClassVersionError(const UnsupportedClassVersionError& e);
	virtual void throw$() override;
	inline UnsupportedClassVersionError* operator ->() {
		return (UnsupportedClassVersionError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_UnsupportedClassVersionError_h_