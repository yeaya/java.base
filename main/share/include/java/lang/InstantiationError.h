#ifndef _java_lang_InstantiationError_h_
#define _java_lang_InstantiationError_h_
//$ class java.lang.InstantiationError
//$ extends java.lang.IncompatibleClassChangeError

#include <java/lang/IncompatibleClassChangeError.h>

namespace java {
	namespace lang {

class $import InstantiationError : public ::java::lang::IncompatibleClassChangeError {
	$class(InstantiationError, $NO_CLASS_INIT, ::java::lang::IncompatibleClassChangeError)
public:
	InstantiationError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xbc321d17e0deb76c;
	InstantiationError(const InstantiationError& e);
	virtual void throw$() override;
	inline InstantiationError* operator ->() const {
		return (InstantiationError*)throwing$;
	}
	inline operator InstantiationError*() const {
		return (InstantiationError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_InstantiationError_h_