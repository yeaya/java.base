#ifndef _java_lang_CharacterDataUndefined_h_
#define _java_lang_CharacterDataUndefined_h_
//$ class java.lang.CharacterDataUndefined
//$ extends java.lang.CharacterData

#include <java/lang/CharacterData.h>

namespace java {
	namespace lang {

class CharacterDataUndefined : public ::java::lang::CharacterData {
	$class(CharacterDataUndefined, 0, ::java::lang::CharacterData)
public:
	CharacterDataUndefined();
	void init$();
	virtual int32_t digit(int32_t ch, int32_t radix) override;
	virtual int8_t getDirectionality(int32_t ch) override;
	virtual int32_t getNumericValue(int32_t ch) override;
	virtual int32_t getProperties(int32_t ch) override;
	virtual int32_t getType(int32_t ch) override;
	virtual bool isDigit(int32_t ch) override;
	virtual bool isIdentifierIgnorable(int32_t ch) override;
	virtual bool isJavaIdentifierPart(int32_t ch) override;
	virtual bool isJavaIdentifierStart(int32_t ch) override;
	virtual bool isLowerCase(int32_t ch) override;
	virtual bool isMirrored(int32_t ch) override;
	virtual bool isUnicodeIdentifierPart(int32_t ch) override;
	virtual bool isUnicodeIdentifierStart(int32_t ch) override;
	virtual bool isUpperCase(int32_t ch) override;
	virtual bool isWhitespace(int32_t ch) override;
	virtual int32_t toLowerCase(int32_t ch) override;
	virtual int32_t toTitleCase(int32_t ch) override;
	virtual int32_t toUpperCase(int32_t ch) override;
	static ::java::lang::CharacterData* instance;
};

	} // lang
} // java

#endif // _java_lang_CharacterDataUndefined_h_