#ifndef _java_lang_AbstractMethodError_h_
#define _java_lang_AbstractMethodError_h_
//$ class java.lang.AbstractMethodError
//$ extends java.lang.IncompatibleClassChangeError

#include <java/lang/IncompatibleClassChangeError.h>

namespace java {
	namespace lang {

class $export AbstractMethodError : public ::java::lang::IncompatibleClassChangeError {
	$class(AbstractMethodError, $NO_CLASS_INIT, ::java::lang::IncompatibleClassChangeError)
public:
	AbstractMethodError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xe90a6c134adda2a2;
	AbstractMethodError(const AbstractMethodError& e);
	virtual void throw$() override;
	inline AbstractMethodError* operator ->() const {
		return (AbstractMethodError*)throwing$;
	}
	inline operator AbstractMethodError*() const {
		return (AbstractMethodError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_AbstractMethodError_h_