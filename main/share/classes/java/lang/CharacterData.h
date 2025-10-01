#ifndef _java_lang_CharacterData_h_
#define _java_lang_CharacterData_h_
//$ class java.lang.CharacterData
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {

class CharacterData : public ::java::lang::Object {
	$class(CharacterData, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	CharacterData();
	void init$();
	virtual int32_t digit(int32_t ch, int32_t radix) {return 0;}
	virtual int8_t getDirectionality(int32_t ch) {return 0;}
	virtual int32_t getNumericValue(int32_t ch) {return 0;}
	virtual int32_t getProperties(int32_t ch) {return 0;}
	virtual int32_t getType(int32_t ch) {return 0;}
	virtual bool isDigit(int32_t ch) {return false;}
	virtual bool isIdentifierIgnorable(int32_t ch) {return false;}
	virtual bool isIdeographic(int32_t ch);
	virtual bool isJavaIdentifierPart(int32_t ch) {return false;}
	virtual bool isJavaIdentifierStart(int32_t ch) {return false;}
	virtual bool isLowerCase(int32_t ch) {return false;}
	virtual bool isMirrored(int32_t ch) {return false;}
	virtual bool isOtherAlphabetic(int32_t ch);
	virtual bool isUnicodeIdentifierPart(int32_t ch) {return false;}
	virtual bool isUnicodeIdentifierStart(int32_t ch) {return false;}
	virtual bool isUpperCase(int32_t ch) {return false;}
	virtual bool isWhitespace(int32_t ch) {return false;}
	static ::java::lang::CharacterData* of(int32_t ch);
	virtual int32_t toLowerCase(int32_t ch) {return 0;}
	virtual int32_t toTitleCase(int32_t ch) {return 0;}
	virtual int32_t toUpperCase(int32_t ch) {return 0;}
	virtual $chars* toUpperCaseCharArray(int32_t ch);
	virtual int32_t toUpperCaseEx(int32_t ch);
};

	} // lang
} // java

#endif // _java_lang_CharacterData_h_