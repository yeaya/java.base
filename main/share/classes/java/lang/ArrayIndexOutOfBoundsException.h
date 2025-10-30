#ifndef _java_lang_ArrayIndexOutOfBoundsException_h_
#define _java_lang_ArrayIndexOutOfBoundsException_h_
//$ class java.lang.ArrayIndexOutOfBoundsException
//$ extends java.lang.IndexOutOfBoundsException

#include <java/lang/IndexOutOfBoundsException.h>

namespace java {
	namespace lang {

class $export ArrayIndexOutOfBoundsException : public ::java::lang::IndexOutOfBoundsException {
	$class(ArrayIndexOutOfBoundsException, $NO_CLASS_INIT, ::java::lang::IndexOutOfBoundsException)
public:
	ArrayIndexOutOfBoundsException();
	void init$();
	void init$($String* s);
	void init$(int32_t index);
	static const int64_t serialVersionUID = (int64_t)0xB8FFF521577EA444;
	ArrayIndexOutOfBoundsException(const ArrayIndexOutOfBoundsException& e);
	virtual void throw$() override;
	inline ArrayIndexOutOfBoundsException* operator ->() {
		return (ArrayIndexOutOfBoundsException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_ArrayIndexOutOfBoundsException_h_