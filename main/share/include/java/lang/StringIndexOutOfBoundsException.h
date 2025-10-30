#ifndef _java_lang_StringIndexOutOfBoundsException_h_
#define _java_lang_StringIndexOutOfBoundsException_h_
//$ class java.lang.StringIndexOutOfBoundsException
//$ extends java.lang.IndexOutOfBoundsException

#include <java/lang/IndexOutOfBoundsException.h>

namespace java {
	namespace lang {

class $import StringIndexOutOfBoundsException : public ::java::lang::IndexOutOfBoundsException {
	$class(StringIndexOutOfBoundsException, $NO_CLASS_INIT, ::java::lang::IndexOutOfBoundsException)
public:
	StringIndexOutOfBoundsException();
	void init$();
	void init$($String* s);
	void init$(int32_t index);
	static const int64_t serialVersionUID = (int64_t)0xA22550CD6F6344F6;
	StringIndexOutOfBoundsException(const StringIndexOutOfBoundsException& e);
	virtual void throw$() override;
	inline StringIndexOutOfBoundsException* operator ->() {
		return (StringIndexOutOfBoundsException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_StringIndexOutOfBoundsException_h_