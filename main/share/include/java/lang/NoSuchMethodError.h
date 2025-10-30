#ifndef _java_lang_NoSuchMethodError_h_
#define _java_lang_NoSuchMethodError_h_
//$ class java.lang.NoSuchMethodError
//$ extends java.lang.IncompatibleClassChangeError

#include <java/lang/IncompatibleClassChangeError.h>

namespace java {
	namespace lang {

class $import NoSuchMethodError : public ::java::lang::IncompatibleClassChangeError {
	$class(NoSuchMethodError, $NO_CLASS_INIT, ::java::lang::IncompatibleClassChangeError)
public:
	NoSuchMethodError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xCBBE2E32E1403799;
	NoSuchMethodError(const NoSuchMethodError& e);
	virtual void throw$() override;
	inline NoSuchMethodError* operator ->() {
		return (NoSuchMethodError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_NoSuchMethodError_h_