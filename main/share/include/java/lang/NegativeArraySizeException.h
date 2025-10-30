#ifndef _java_lang_NegativeArraySizeException_h_
#define _java_lang_NegativeArraySizeException_h_
//$ class java.lang.NegativeArraySizeException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {

class $import NegativeArraySizeException : public ::java::lang::RuntimeException {
	$class(NegativeArraySizeException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	NegativeArraySizeException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x83A7441933C37C8B;
	NegativeArraySizeException(const NegativeArraySizeException& e);
	virtual void throw$() override;
	inline NegativeArraySizeException* operator ->() {
		return (NegativeArraySizeException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_NegativeArraySizeException_h_