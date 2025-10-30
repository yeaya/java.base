#ifndef _java_lang_invoke_WrongMethodTypeException_h_
#define _java_lang_invoke_WrongMethodTypeException_h_
//$ class java.lang.invoke.WrongMethodTypeException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $import WrongMethodTypeException : public ::java::lang::RuntimeException {
	$class(WrongMethodTypeException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	WrongMethodTypeException();
	void init$();
	void init$($String* s);
	void init$($String* s, $Throwable* cause);
	void init$($Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)292;
	WrongMethodTypeException(const WrongMethodTypeException& e);
	virtual void throw$() override;
	inline WrongMethodTypeException* operator ->() {
		return (WrongMethodTypeException*)throwing$;
	}
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_WrongMethodTypeException_h_