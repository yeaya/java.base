#ifndef _java_lang_NoSuchFieldError_h_
#define _java_lang_NoSuchFieldError_h_
//$ class java.lang.NoSuchFieldError
//$ extends java.lang.IncompatibleClassChangeError

#include <java/lang/IncompatibleClassChangeError.h>

namespace java {
	namespace lang {

class $import NoSuchFieldError : public ::java::lang::IncompatibleClassChangeError {
	$class(NoSuchFieldError, $NO_CLASS_INIT, ::java::lang::IncompatibleClassChangeError)
public:
	NoSuchFieldError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xD0084B0CBF460075;
	NoSuchFieldError(const NoSuchFieldError& e);
	virtual void throw$() override;
	inline NoSuchFieldError* operator ->() {
		return (NoSuchFieldError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_NoSuchFieldError_h_