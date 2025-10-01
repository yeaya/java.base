#ifndef _java_lang_InstantiationError_h_
#define _java_lang_InstantiationError_h_
//$ class java.lang.InstantiationError
//$ extends java.lang.IncompatibleClassChangeError

#include <java/lang/IncompatibleClassChangeError.h>

namespace java {
	namespace lang {

class $export InstantiationError : public ::java::lang::IncompatibleClassChangeError {
	$class(InstantiationError, $NO_CLASS_INIT, ::java::lang::IncompatibleClassChangeError)
public:
	InstantiationError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xBC321D17E0DEB76C;
	InstantiationError(const InstantiationError& e);
	InstantiationError wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_InstantiationError_h_