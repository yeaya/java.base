#ifndef _java_lang_ArithmeticException_h_
#define _java_lang_ArithmeticException_h_
//$ class java.lang.ArithmeticException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {

class $export ArithmeticException : public ::java::lang::RuntimeException {
	$class(ArithmeticException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ArithmeticException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x1F509E624AF9F007;
	ArithmeticException(const ArithmeticException& e);
	virtual void throw$() override;
	inline ArithmeticException* operator ->() {
		return (ArithmeticException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_ArithmeticException_h_