#ifndef _java_nio_charset_IllegalCharsetNameException_h_
#define _java_nio_charset_IllegalCharsetNameException_h_
//$ class java.nio.charset.IllegalCharsetNameException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace nio {
		namespace charset {

class $export IllegalCharsetNameException : public ::java::lang::IllegalArgumentException {
	$class(IllegalCharsetNameException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	IllegalCharsetNameException();
	void init$($String* charsetName);
	virtual $String* getCharsetName();
	static const int64_t serialVersionUID = (int64_t)0x143A2B975ABA792D;
	$String* charsetName = nullptr;
	IllegalCharsetNameException(const IllegalCharsetNameException& e);
	virtual void throw$() override;
	inline IllegalCharsetNameException* operator ->() {
		return (IllegalCharsetNameException*)throwing$;
	}
};

		} // charset
	} // nio
} // java

#endif // _java_nio_charset_IllegalCharsetNameException_h_