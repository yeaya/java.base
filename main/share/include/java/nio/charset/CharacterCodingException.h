#ifndef _java_nio_charset_CharacterCodingException_h_
#define _java_nio_charset_CharacterCodingException_h_
//$ class java.nio.charset.CharacterCodingException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace nio {
		namespace charset {

class $import CharacterCodingException : public ::java::io::IOException {
	$class(CharacterCodingException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	CharacterCodingException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x74df4af22a143ec7;
	CharacterCodingException(const CharacterCodingException& e);
	virtual void throw$() override;
	inline CharacterCodingException* operator ->() const {
		return (CharacterCodingException*)throwing$;
	}
	inline operator CharacterCodingException*() const {
		return (CharacterCodingException*)throwing$;
	}
};

		} // charset
	} // nio
} // java

#endif // _java_nio_charset_CharacterCodingException_h_