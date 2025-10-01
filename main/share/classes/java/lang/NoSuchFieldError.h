#ifndef _java_lang_NoSuchFieldError_h_
#define _java_lang_NoSuchFieldError_h_
//$ class java.lang.NoSuchFieldError
//$ extends java.lang.IncompatibleClassChangeError

#include <java/lang/IncompatibleClassChangeError.h>

namespace java {
	namespace lang {

class $export NoSuchFieldError : public ::java::lang::IncompatibleClassChangeError {
	$class(NoSuchFieldError, $NO_CLASS_INIT, ::java::lang::IncompatibleClassChangeError)
public:
	NoSuchFieldError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xD0084B0CBF460075;
	NoSuchFieldError(const NoSuchFieldError& e);
	NoSuchFieldError wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_NoSuchFieldError_h_