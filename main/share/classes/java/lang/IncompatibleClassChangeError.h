#ifndef _java_lang_IncompatibleClassChangeError_h_
#define _java_lang_IncompatibleClassChangeError_h_
//$ class java.lang.IncompatibleClassChangeError
//$ extends java.lang.LinkageError

#include <java/lang/LinkageError.h>

namespace java {
	namespace lang {

class $export IncompatibleClassChangeError : public ::java::lang::LinkageError {
	$class(IncompatibleClassChangeError, $NO_CLASS_INIT, ::java::lang::LinkageError)
public:
	IncompatibleClassChangeError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xBBCA7FD1F19FC839;
	IncompatibleClassChangeError(const IncompatibleClassChangeError& e);
	IncompatibleClassChangeError wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_IncompatibleClassChangeError_h_