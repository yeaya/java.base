#ifndef _java_lang_IllegalAccessError_h_
#define _java_lang_IllegalAccessError_h_
//$ class java.lang.IllegalAccessError
//$ extends java.lang.IncompatibleClassChangeError

#include <java/lang/IncompatibleClassChangeError.h>

namespace java {
	namespace lang {

class $export IllegalAccessError : public ::java::lang::IncompatibleClassChangeError {
	$class(IllegalAccessError, $NO_CLASS_INIT, ::java::lang::IncompatibleClassChangeError)
public:
	IllegalAccessError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x8340FF5E7A04039D;
	IllegalAccessError(const IllegalAccessError& e);
	virtual void throw$() override;
	inline IllegalAccessError* operator ->() {
		return (IllegalAccessError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_IllegalAccessError_h_