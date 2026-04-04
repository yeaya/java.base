#ifndef _java_lang_IllegalCallerException_h_
#define _java_lang_IllegalCallerException_h_
//$ class java.lang.IllegalCallerException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $export IllegalCallerException : public ::java::lang::RuntimeException {
	$class(IllegalCallerException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	IllegalCallerException();
	void init$();
	void init$($String* s);
	void init$($String* message, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xdf652d36887353e8;
	IllegalCallerException(const IllegalCallerException& e);
	virtual void throw$() override;
	inline IllegalCallerException* operator ->() const {
		return (IllegalCallerException*)throwing$;
	}
	inline operator IllegalCallerException*() const {
		return (IllegalCallerException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_IllegalCallerException_h_