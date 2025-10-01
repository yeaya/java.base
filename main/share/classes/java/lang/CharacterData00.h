#ifndef _java_lang_CharacterData00_h_
#define _java_lang_CharacterData00_h_
//$ class java.lang.CharacterData00
//$ extends java.lang.CharacterData

#include <java/lang/Array.h>
#include <java/lang/CharacterData.h>

#pragma push_macro("A")
#undef A
#pragma push_macro("B")
#undef B
#pragma push_macro("X")
#undef X
#pragma push_macro("Y")
#undef Y
#pragma push_macro("A_DATA")
#undef A_DATA

namespace java {
	namespace lang {

class CharacterData00 : public ::java::lang::CharacterData {
	$class(CharacterData00, 0, ::java::lang::CharacterData)
public:
	CharacterData00();
	void init$();
	virtual int32_t digit(int32_t ch, int32_t radix) override;
	virtual int32_t findInCharMap(int32_t ch);
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
	static bool $assertionsDisabled;
	static ::java::lang::CharacterData00* instance;
	static $Array<char16_t, 3>* charMap;
	static $chars* X;
	static $chars* Y;
	static $ints* A;
	static $String* A_DATA;
	static $chars* B;
};

	} // lang
} // java

#pragma pop_macro("A")
#pragma pop_macro("B")
#pragma pop_macro("X")
#pragma pop_macro("Y")
#pragma pop_macro("A_DATA")

#endif // _java_lang_CharacterData00_h_