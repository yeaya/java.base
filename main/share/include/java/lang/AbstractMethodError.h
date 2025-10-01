#ifndef _java_lang_AbstractMethodError_h_
#define _java_lang_AbstractMethodError_h_
//$ class java.lang.AbstractMethodError
//$ extends java.lang.IncompatibleClassChangeError

#include <java/lang/IncompatibleClassChangeError.h>

namespace java {
	namespace lang {

class $import AbstractMethodError : public ::java::lang::IncompatibleClassChangeError {
	$class(AbstractMethodError, $NO_CLASS_INIT, ::java::lang::IncompatibleClassChangeError)
public:
	AbstractMethodError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xE90A6C134ADDA2A2;
	AbstractMethodError(const AbstractMethodError& e);
	AbstractMethodError wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_AbstractMethodError_h_