#ifndef _java_lang_CharacterDataLatin1_h_
#define _java_lang_CharacterDataLatin1_h_
//$ class java.lang.CharacterDataLatin1
//$ extends java.lang.CharacterData

#include <java/lang/Array.h>
#include <java/lang/CharacterData.h>

#pragma push_macro("A")
#undef A
#pragma push_macro("B")
#undef B
#pragma push_macro("DIGITS")
#undef DIGITS

namespace java {
	namespace lang {

class CharacterDataLatin1 : public ::java::lang::CharacterData {
	$class(CharacterDataLatin1, $PRELOAD, ::java::lang::CharacterData)
public:
	CharacterDataLatin1();
	void init$();
	virtual int32_t digit(int32_t ch, int32_t radix) override;
	virtual int8_t getDirectionality(int32_t ch) override;
	virtual int32_t getNumericValue(int32_t ch) override;
	virtual int32_t getProperties(int32_t ch) override;
	virtual int32_t getPropertiesEx(int32_t ch);
	virtual int32_t getType(int32_t ch) override;
	virtual bool isDigit(int32_t ch) override;
	virtual bool isIdentifierIgnorable(int32_t ch) override;
	virtual bool isIdeographic(int32_t ch) override;
	virtual bool isJavaIdentifierPart(int32_t ch) override;
	virtual bool isJavaIdentifierStart(int32_t ch) override;
	virtual bool isLowerCase(int32_t ch) override;
	virtual bool isMirrored(int32_t ch) override;
	virtual bool isOtherAlphabetic(int32_t ch) override;
	virtual bool isUnicodeIdentifierPart(int32_t ch) override;
	virtual bool isUnicodeIdentifierStart(int32_t ch) override;
	virtual bool isUpperCase(int32_t ch) override;
	virtual bool isWhitespace(int32_t ch) override;
	virtual int32_t toLowerCase(int32_t ch) override;
	virtual int32_t toTitleCase(int32_t ch) override;
	virtual int32_t toUpperCase(int32_t ch) override;
	virtual $chars* toUpperCaseCharArray(int32_t ch) override;
	virtual int32_t toUpperCaseEx(int32_t ch) override;
	static $bytes* DIGITS;
	static $chars* sharpsMap;
	static ::java::lang::CharacterDataLatin1* instance;
	static $ints* A;
	static $bytes* B;
};

	} // lang
} // java

#pragma pop_macro("A")
#pragma pop_macro("B")
#pragma pop_macro("DIGITS")

#endif // _java_lang_CharacterDataLatin1_h_