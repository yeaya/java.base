#ifndef _java_nio_charset_MalformedInputException_h_
#define _java_nio_charset_MalformedInputException_h_
//$ class java.nio.charset.MalformedInputException
//$ extends java.nio.charset.CharacterCodingException

#include <java/nio/charset/CharacterCodingException.h>

namespace java {
	namespace nio {
		namespace charset {

class $import MalformedInputException : public ::java::nio::charset::CharacterCodingException {
	$class(MalformedInputException, $NO_CLASS_INIT, ::java::nio::charset::CharacterCodingException)
public:
	MalformedInputException();
	void init$(int32_t inputLength);
	virtual int32_t getInputLength();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0xD046D856678B984E;
	int32_t inputLength = 0;
	MalformedInputException(const MalformedInputException& e);
	MalformedInputException wrapper$();
	virtual void throwWrapper$() override;
};

		} // charset
	} // nio
} // java

#endif // _java_nio_charset_MalformedInputException_h_