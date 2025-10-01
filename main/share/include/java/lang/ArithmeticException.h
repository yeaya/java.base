#ifndef _java_lang_ArithmeticException_h_
#define _java_lang_ArithmeticException_h_
//$ class java.lang.ArithmeticException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {

class $import ArithmeticException : public ::java::lang::RuntimeException {
	$class(ArithmeticException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ArithmeticException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x1F509E624AF9F007;
	ArithmeticException(const ArithmeticException& e);
	ArithmeticException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_ArithmeticException_h_