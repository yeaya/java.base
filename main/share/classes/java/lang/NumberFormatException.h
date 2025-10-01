#ifndef _java_lang_NumberFormatException_h_
#define _java_lang_NumberFormatException_h_
//$ class java.lang.NumberFormatException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

namespace java {
	namespace lang {

class $export NumberFormatException : public ::java::lang::IllegalArgumentException {
	$class(NumberFormatException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	NumberFormatException();
	void init$();
	void init$($String* s);
	static ::java::lang::NumberFormatException* forCharSequence(::java::lang::CharSequence* s, int32_t beginIndex, int32_t endIndex, int32_t errorIndex);
	static ::java::lang::NumberFormatException* forInputString($String* s, int32_t radix);
	static const int64_t serialVersionUID = (int64_t)0xD876893FFB8CEA12;
	NumberFormatException(const NumberFormatException& e);
	NumberFormatException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_NumberFormatException_h_