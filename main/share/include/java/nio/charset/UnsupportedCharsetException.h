#ifndef _java_nio_charset_UnsupportedCharsetException_h_
#define _java_nio_charset_UnsupportedCharsetException_h_
//$ class java.nio.charset.UnsupportedCharsetException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace nio {
		namespace charset {

class $import UnsupportedCharsetException : public ::java::lang::IllegalArgumentException {
	$class(UnsupportedCharsetException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	UnsupportedCharsetException();
	void init$($String* charsetName);
	virtual $String* getCharsetName();
	static const int64_t serialVersionUID = (int64_t)0x14B04358A8C650FF;
	$String* charsetName = nullptr;
	UnsupportedCharsetException(const UnsupportedCharsetException& e);
	virtual void throw$() override;
	inline UnsupportedCharsetException* operator ->() {
		return (UnsupportedCharsetException*)throwing$;
	}
};

		} // charset
	} // nio
} // java

#endif // _java_nio_charset_UnsupportedCharsetException_h_