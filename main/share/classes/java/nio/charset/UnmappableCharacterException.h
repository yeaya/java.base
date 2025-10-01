#ifndef _java_nio_charset_UnmappableCharacterException_h_
#define _java_nio_charset_UnmappableCharacterException_h_
//$ class java.nio.charset.UnmappableCharacterException
//$ extends java.nio.charset.CharacterCodingException

#include <java/nio/charset/CharacterCodingException.h>

namespace java {
	namespace nio {
		namespace charset {

class $export UnmappableCharacterException : public ::java::nio::charset::CharacterCodingException {
	$class(UnmappableCharacterException, $NO_CLASS_INIT, ::java::nio::charset::CharacterCodingException)
public:
	UnmappableCharacterException();
	void init$(int32_t inputLength);
	virtual int32_t getInputLength();
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0x9E7B36F41A756375;
	int32_t inputLength = 0;
	UnmappableCharacterException(const UnmappableCharacterException& e);
	UnmappableCharacterException wrapper$();
	virtual void throwWrapper$() override;
};

		} // charset
	} // nio
} // java

#endif // _java_nio_charset_UnmappableCharacterException_h_