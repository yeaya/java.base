#ifndef _java_lang_Character_h_
#define _java_lang_Character_h_
//$ class java.lang.Character
//$ extends java.io.Serializable
//$ implements java.lang.Comparable,java.lang.constant.Constable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Byte.h>

#pragma push_macro("BYTES")
#undef BYTES
#pragma push_macro("COMBINING_SPACING_MARK")
#undef COMBINING_SPACING_MARK
#pragma push_macro("CONNECTOR_PUNCTUATION")
#undef CONNECTOR_PUNCTUATION
#pragma push_macro("CONTROL")
#undef CONTROL
#pragma push_macro("CURRENCY_SYMBOL")
#undef CURRENCY_SYMBOL
#pragma push_macro("DASH_PUNCTUATION")
#undef DASH_PUNCTUATION
#pragma push_macro("DECIMAL_DIGIT_NUMBER")
#undef DECIMAL_DIGIT_NUMBER
#pragma push_macro("DIRECTIONALITY_ARABIC_NUMBER")
#undef DIRECTIONALITY_ARABIC_NUMBER
#pragma push_macro("DIRECTIONALITY_BOUNDARY_NEUTRAL")
#undef DIRECTIONALITY_BOUNDARY_NEUTRAL
#pragma push_macro("DIRECTIONALITY_COMMON_NUMBER_SEPARATOR")
#undef DIRECTIONALITY_COMMON_NUMBER_SEPARATOR
#pragma push_macro("DIRECTIONALITY_EUROPEAN_NUMBER")
#undef DIRECTIONALITY_EUROPEAN_NUMBER
#pragma push_macro("DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR")
#undef DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR
#pragma push_macro("DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR")
#undef DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR
#pragma push_macro("DIRECTIONALITY_FIRST_STRONG_ISOLATE")
#undef DIRECTIONALITY_FIRST_STRONG_ISOLATE
#pragma push_macro("DIRECTIONALITY_LEFT_TO_RIGHT")
#undef DIRECTIONALITY_LEFT_TO_RIGHT
#pragma push_macro("DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING")
#undef DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING
#pragma push_macro("DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE")
#undef DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE
#pragma push_macro("DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE")
#undef DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE
#pragma push_macro("DIRECTIONALITY_NONSPACING_MARK")
#undef DIRECTIONALITY_NONSPACING_MARK
#pragma push_macro("DIRECTIONALITY_OTHER_NEUTRALS")
#undef DIRECTIONALITY_OTHER_NEUTRALS
#pragma push_macro("DIRECTIONALITY_PARAGRAPH_SEPARATOR")
#undef DIRECTIONALITY_PARAGRAPH_SEPARATOR
#pragma push_macro("DIRECTIONALITY_POP_DIRECTIONAL_FORMAT")
#undef DIRECTIONALITY_POP_DIRECTIONAL_FORMAT
#pragma push_macro("DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE")
#undef DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE
#pragma push_macro("DIRECTIONALITY_RIGHT_TO_LEFT")
#undef DIRECTIONALITY_RIGHT_TO_LEFT
#pragma push_macro("DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC")
#undef DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC
#pragma push_macro("DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING")
#undef DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING
#pragma push_macro("DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE")
#undef DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE
#pragma push_macro("DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE")
#undef DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE
#pragma push_macro("DIRECTIONALITY_SEGMENT_SEPARATOR")
#undef DIRECTIONALITY_SEGMENT_SEPARATOR
#pragma push_macro("DIRECTIONALITY_UNDEFINED")
#undef DIRECTIONALITY_UNDEFINED
#pragma push_macro("DIRECTIONALITY_WHITESPACE")
#undef DIRECTIONALITY_WHITESPACE
#pragma push_macro("ENCLOSING_MARK")
#undef ENCLOSING_MARK
#pragma push_macro("END_PUNCTUATION")
#undef END_PUNCTUATION
#pragma push_macro("ERROR")
#undef ERROR
#pragma push_macro("FINAL_QUOTE_PUNCTUATION")
#undef FINAL_QUOTE_PUNCTUATION
#pragma push_macro("FORMAT")
#undef FORMAT
#pragma push_macro("INITIAL_QUOTE_PUNCTUATION")
#undef INITIAL_QUOTE_PUNCTUATION
#pragma push_macro("LETTER_NUMBER")
#undef LETTER_NUMBER
#pragma push_macro("LINE_SEPARATOR")
#undef LINE_SEPARATOR
#pragma push_macro("LOWERCASE_LETTER")
#undef LOWERCASE_LETTER
#pragma push_macro("MATH_SYMBOL")
#undef MATH_SYMBOL
#pragma push_macro("MAX_CODE_POINT")
#undef MAX_CODE_POINT
#pragma push_macro("MAX_HIGH_SURROGATE")
#undef MAX_HIGH_SURROGATE
#pragma push_macro("MAX_LOW_SURROGATE")
#undef MAX_LOW_SURROGATE
#pragma push_macro("MAX_RADIX")
#undef MAX_RADIX
#pragma push_macro("MAX_SURROGATE")
#undef MAX_SURROGATE
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("MIN_CODE_POINT")
#undef MIN_CODE_POINT
#pragma push_macro("MIN_HIGH_SURROGATE")
#undef MIN_HIGH_SURROGATE
#pragma push_macro("MIN_LOW_SURROGATE")
#undef MIN_LOW_SURROGATE
#pragma push_macro("MIN_RADIX")
#undef MIN_RADIX
#pragma push_macro("MIN_SUPPLEMENTARY_CODE_POINT")
#undef MIN_SUPPLEMENTARY_CODE_POINT
#pragma push_macro("MIN_SURROGATE")
#undef MIN_SURROGATE
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
#pragma push_macro("MODIFIER_LETTER")
#undef MODIFIER_LETTER
#pragma push_macro("MODIFIER_SYMBOL")
#undef MODIFIER_SYMBOL
#pragma push_macro("NON_SPACING_MARK")
#undef NON_SPACING_MARK
#pragma push_macro("OTHER_LETTER")
#undef OTHER_LETTER
#pragma push_macro("OTHER_NUMBER")
#undef OTHER_NUMBER
#pragma push_macro("OTHER_PUNCTUATION")
#undef OTHER_PUNCTUATION
#pragma push_macro("OTHER_SYMBOL")
#undef OTHER_SYMBOL
#pragma push_macro("PARAGRAPH_SEPARATOR")
#undef PARAGRAPH_SEPARATOR
#pragma push_macro("PRIVATE_USE")
#undef PRIVATE_USE
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("SPACE_SEPARATOR")
#undef SPACE_SEPARATOR
#pragma push_macro("START_PUNCTUATION")
#undef START_PUNCTUATION
#pragma push_macro("SURROGATE")
#undef SURROGATE
#pragma push_macro("TITLECASE_LETTER")
#undef TITLECASE_LETTER
#pragma push_macro("TYPE")
#undef TYPE
#pragma push_macro("UNASSIGNED")
#undef UNASSIGNED
#pragma push_macro("UPPERCASE_LETTER")
#undef UPPERCASE_LETTER

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace lang {

class $export Character : public ::java::io::Serializable, public ::java::lang::Comparable, public ::java::lang::constant::Constable {
	$class(Character, 0, ::java::io::Serializable, ::java::lang::Comparable, ::java::lang::constant::Constable)
public:
	Character();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(char16_t value);
	static int32_t charCount(int32_t codePoint);
	char16_t charValue();
	static int32_t codePointAt(::java::lang::CharSequence* seq, int32_t index);
	static int32_t codePointAt($chars* a, int32_t index);
	static int32_t codePointAt($chars* a, int32_t index, int32_t limit);
	static int32_t codePointAtImpl($chars* a, int32_t index, int32_t limit);
	static int32_t codePointBefore(::java::lang::CharSequence* seq, int32_t index);
	static int32_t codePointBefore($chars* a, int32_t index);
	static int32_t codePointBefore($chars* a, int32_t index, int32_t start);
	static int32_t codePointBeforeImpl($chars* a, int32_t index, int32_t start);
	static int32_t codePointCount(::java::lang::CharSequence* seq, int32_t beginIndex, int32_t endIndex);
	static int32_t codePointCount($chars* a, int32_t offset, int32_t count);
	static int32_t codePointCountImpl($chars* a, int32_t offset, int32_t count);
	static int32_t codePointOf($String* name);
	static int32_t compare(char16_t x, char16_t y);
	int32_t compareTo(::java::lang::Character* anotherCharacter);
	virtual int32_t compareTo(Object$* anotherCharacter) override;
	virtual ::java::util::Optional* describeConstable() override;
	static int32_t digit(char16_t ch, int32_t radix);
	static int32_t digit(int32_t codePoint, int32_t radix);
	virtual bool equals(Object$* obj) override;
	static char16_t forDigit(int32_t digit, int32_t radix);
	static int8_t getDirectionality(char16_t ch);
	static int8_t getDirectionality(int32_t codePoint);
	static $String* getName(int32_t codePoint);
	static int32_t getNumericValue(char16_t ch);
	static int32_t getNumericValue(int32_t codePoint);
	static int32_t getType(char16_t ch);
	static int32_t getType(int32_t codePoint);
	virtual int32_t hashCode() override;
	static int32_t hashCode(char16_t value);
	static char16_t highSurrogate(int32_t codePoint);
	static bool isAlphabetic(int32_t codePoint);
	static bool isBmpCodePoint(int32_t codePoint);
	static bool isDefined(char16_t ch);
	static bool isDefined(int32_t codePoint);
	static bool isDigit(char16_t ch);
	static bool isDigit(int32_t codePoint);
	static bool isHighSurrogate(char16_t ch);
	static bool isISOControl(char16_t ch);
	static bool isISOControl(int32_t codePoint);
	static bool isIdentifierIgnorable(char16_t ch);
	static bool isIdentifierIgnorable(int32_t codePoint);
	static bool isIdeographic(int32_t codePoint);
	static bool isJavaIdentifierPart(char16_t ch);
	static bool isJavaIdentifierPart(int32_t codePoint);
	static bool isJavaIdentifierStart(char16_t ch);
	static bool isJavaIdentifierStart(int32_t codePoint);
	static bool isJavaLetter(char16_t ch);
	static bool isJavaLetterOrDigit(char16_t ch);
	static bool isLetter(char16_t ch);
	static bool isLetter(int32_t codePoint);
	static bool isLetterOrDigit(char16_t ch);
	static bool isLetterOrDigit(int32_t codePoint);
	static bool isLowSurrogate(char16_t ch);
	static bool isLowerCase(char16_t ch);
	static bool isLowerCase(int32_t codePoint);
	static bool isMirrored(char16_t ch);
	static bool isMirrored(int32_t codePoint);
	static bool isSpace(char16_t ch);
	static bool isSpaceChar(char16_t ch);
	static bool isSpaceChar(int32_t codePoint);
	static bool isSupplementaryCodePoint(int32_t codePoint);
	static bool isSurrogate(char16_t ch);
	static bool isSurrogatePair(char16_t high, char16_t low);
	static bool isTitleCase(char16_t ch);
	static bool isTitleCase(int32_t codePoint);
	static bool isUnicodeIdentifierPart(char16_t ch);
	static bool isUnicodeIdentifierPart(int32_t codePoint);
	static bool isUnicodeIdentifierStart(char16_t ch);
	static bool isUnicodeIdentifierStart(int32_t codePoint);
	static bool isUpperCase(char16_t ch);
	static bool isUpperCase(int32_t codePoint);
	static bool isValidCodePoint(int32_t codePoint);
	static bool isWhitespace(char16_t ch);
	static bool isWhitespace(int32_t codePoint);
	static char16_t lowSurrogate(int32_t codePoint);
	static int32_t offsetByCodePoints(::java::lang::CharSequence* seq, int32_t index, int32_t codePointOffset);
	static int32_t offsetByCodePoints($chars* a, int32_t start, int32_t count, int32_t index, int32_t codePointOffset);
	static int32_t offsetByCodePointsImpl($chars* a, int32_t start, int32_t count, int32_t index, int32_t codePointOffset);
	static char16_t reverseBytes(char16_t ch);
	static int32_t toChars(int32_t codePoint, $chars* dst, int32_t dstIndex);
	static $chars* toChars(int32_t codePoint);
	static int32_t toCodePoint(char16_t high, char16_t low);
	static char16_t toLowerCase(char16_t ch);
	static int32_t toLowerCase(int32_t codePoint);
	virtual $String* toString() override;
	static $String* toString(char16_t c);
	static $String* toString(int32_t codePoint);
	static void toSurrogates(int32_t codePoint, $chars* dst, int32_t index);
	static char16_t toTitleCase(char16_t ch);
	static int32_t toTitleCase(int32_t codePoint);
	static char16_t toUpperCase(char16_t ch);
	static int32_t toUpperCase(int32_t codePoint);
	static $chars* toUpperCaseCharArray(int32_t codePoint);
	static int32_t toUpperCaseEx(int32_t codePoint);
	static ::java::lang::Character* valueOf(char16_t c);
	static bool $assertionsDisabled;
	static const int32_t MIN_RADIX = 2;
	static const int32_t MAX_RADIX = 36;
	static const char16_t MIN_VALUE = ((char16_t)0);
	static const char16_t MAX_VALUE = ((char16_t)65535);
	static $Class* TYPE;
	static const int8_t UNASSIGNED = 0;
	static const int8_t UPPERCASE_LETTER = 1;
	static const int8_t LOWERCASE_LETTER = 2;
	static const int8_t TITLECASE_LETTER = 3;
	static const int8_t MODIFIER_LETTER = 4;
	static const int8_t OTHER_LETTER = 5;
	static const int8_t NON_SPACING_MARK = 6;
	static const int8_t ENCLOSING_MARK = 7;
	static const int8_t COMBINING_SPACING_MARK = 8;
	static const int8_t DECIMAL_DIGIT_NUMBER = 9;
	static const int8_t LETTER_NUMBER = 10;
	static const int8_t OTHER_NUMBER = 11;
	static const int8_t SPACE_SEPARATOR = 12;
	static const int8_t LINE_SEPARATOR = 13;
	static const int8_t PARAGRAPH_SEPARATOR = 14;
	static const int8_t CONTROL = 15;
	static const int8_t FORMAT = 16;
	static const int8_t PRIVATE_USE = 18;
	static const int8_t SURROGATE = 19;
	static const int8_t DASH_PUNCTUATION = 20;
	static const int8_t START_PUNCTUATION = 21;
	static const int8_t END_PUNCTUATION = 22;
	static const int8_t CONNECTOR_PUNCTUATION = 23;
	static const int8_t OTHER_PUNCTUATION = 24;
	static const int8_t MATH_SYMBOL = 25;
	static const int8_t CURRENCY_SYMBOL = 26;
	static const int8_t MODIFIER_SYMBOL = 27;
	static const int8_t OTHER_SYMBOL = 28;
	static const int8_t INITIAL_QUOTE_PUNCTUATION = 29;
	static const int8_t FINAL_QUOTE_PUNCTUATION = 30;
	static const int32_t ERROR = (-1);
	static const int8_t DIRECTIONALITY_UNDEFINED = (-1);
	static const int8_t DIRECTIONALITY_LEFT_TO_RIGHT = 0;
	static const int8_t DIRECTIONALITY_RIGHT_TO_LEFT = 1;
	static const int8_t DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = 2;
	static const int8_t DIRECTIONALITY_EUROPEAN_NUMBER = 3;
	static const int8_t DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = 4;
	static const int8_t DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = 5;
	static const int8_t DIRECTIONALITY_ARABIC_NUMBER = 6;
	static const int8_t DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = 7;
	static const int8_t DIRECTIONALITY_NONSPACING_MARK = 8;
	static const int8_t DIRECTIONALITY_BOUNDARY_NEUTRAL = 9;
	static const int8_t DIRECTIONALITY_PARAGRAPH_SEPARATOR = 10;
	static const int8_t DIRECTIONALITY_SEGMENT_SEPARATOR = 11;
	static const int8_t DIRECTIONALITY_WHITESPACE = 12;
	static const int8_t DIRECTIONALITY_OTHER_NEUTRALS = 13;
	static const int8_t DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = 14;
	static const int8_t DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = 15;
	static const int8_t DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = 16;
	static const int8_t DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = 17;
	static const int8_t DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = 18;
	static const int8_t DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE = 19;
	static const int8_t DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE = 20;
	static const int8_t DIRECTIONALITY_FIRST_STRONG_ISOLATE = 21;
	static const int8_t DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE = 22;
	static const char16_t MIN_HIGH_SURROGATE = ((char16_t)55296);
	static const char16_t MAX_HIGH_SURROGATE = ((char16_t)56319);
	static const char16_t MIN_LOW_SURROGATE = ((char16_t)56320);
	static const char16_t MAX_LOW_SURROGATE = ((char16_t)57343);
	static const char16_t MIN_SURROGATE = MIN_HIGH_SURROGATE;
	static const char16_t MAX_SURROGATE = MAX_LOW_SURROGATE;
	static const int32_t MIN_SUPPLEMENTARY_CODE_POINT = 0x00010000;
	static const int32_t MIN_CODE_POINT = 0;
	static const int32_t MAX_CODE_POINT = 0x0010FFFF;
	char16_t value = 0;
	static const int64_t serialVersionUID = (int64_t)0x348B47D96B1A2678;
	static const int32_t SIZE = 16;
	static const int32_t BYTES = 2; // SIZE / ::java::lang::Byte::SIZE
};

	} // lang
} // java

#pragma pop_macro("BYTES")
#pragma pop_macro("COMBINING_SPACING_MARK")
#pragma pop_macro("CONNECTOR_PUNCTUATION")
#pragma pop_macro("CONTROL")
#pragma pop_macro("CURRENCY_SYMBOL")
#pragma pop_macro("DASH_PUNCTUATION")
#pragma pop_macro("DECIMAL_DIGIT_NUMBER")
#pragma pop_macro("DIRECTIONALITY_ARABIC_NUMBER")
#pragma pop_macro("DIRECTIONALITY_BOUNDARY_NEUTRAL")
#pragma pop_macro("DIRECTIONALITY_COMMON_NUMBER_SEPARATOR")
#pragma pop_macro("DIRECTIONALITY_EUROPEAN_NUMBER")
#pragma pop_macro("DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR")
#pragma pop_macro("DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR")
#pragma pop_macro("DIRECTIONALITY_FIRST_STRONG_ISOLATE")
#pragma pop_macro("DIRECTIONALITY_LEFT_TO_RIGHT")
#pragma pop_macro("DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING")
#pragma pop_macro("DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE")
#pragma pop_macro("DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE")
#pragma pop_macro("DIRECTIONALITY_NONSPACING_MARK")
#pragma pop_macro("DIRECTIONALITY_OTHER_NEUTRALS")
#pragma pop_macro("DIRECTIONALITY_PARAGRAPH_SEPARATOR")
#pragma pop_macro("DIRECTIONALITY_POP_DIRECTIONAL_FORMAT")
#pragma pop_macro("DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE")
#pragma pop_macro("DIRECTIONALITY_RIGHT_TO_LEFT")
#pragma pop_macro("DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC")
#pragma pop_macro("DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING")
#pragma pop_macro("DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE")
#pragma pop_macro("DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE")
#pragma pop_macro("DIRECTIONALITY_SEGMENT_SEPARATOR")
#pragma pop_macro("DIRECTIONALITY_UNDEFINED")
#pragma pop_macro("DIRECTIONALITY_WHITESPACE")
#pragma pop_macro("ENCLOSING_MARK")
#pragma pop_macro("END_PUNCTUATION")
#pragma pop_macro("ERROR")
#pragma pop_macro("FINAL_QUOTE_PUNCTUATION")
#pragma pop_macro("FORMAT")
#pragma pop_macro("INITIAL_QUOTE_PUNCTUATION")
#pragma pop_macro("LETTER_NUMBER")
#pragma pop_macro("LINE_SEPARATOR")
#pragma pop_macro("LOWERCASE_LETTER")
#pragma pop_macro("MATH_SYMBOL")
#pragma pop_macro("MAX_CODE_POINT")
#pragma pop_macro("MAX_HIGH_SURROGATE")
#pragma pop_macro("MAX_LOW_SURROGATE")
#pragma pop_macro("MAX_RADIX")
#pragma pop_macro("MAX_SURROGATE")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("MIN_CODE_POINT")
#pragma pop_macro("MIN_HIGH_SURROGATE")
#pragma pop_macro("MIN_LOW_SURROGATE")
#pragma pop_macro("MIN_RADIX")
#pragma pop_macro("MIN_SUPPLEMENTARY_CODE_POINT")
#pragma pop_macro("MIN_SURROGATE")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("MODIFIER_LETTER")
#pragma pop_macro("MODIFIER_SYMBOL")
#pragma pop_macro("NON_SPACING_MARK")
#pragma pop_macro("OTHER_LETTER")
#pragma pop_macro("OTHER_NUMBER")
#pragma pop_macro("OTHER_PUNCTUATION")
#pragma pop_macro("OTHER_SYMBOL")
#pragma pop_macro("PARAGRAPH_SEPARATOR")
#pragma pop_macro("PRIVATE_USE")
#pragma pop_macro("SIZE")
#pragma pop_macro("SPACE_SEPARATOR")
#pragma pop_macro("START_PUNCTUATION")
#pragma pop_macro("SURROGATE")
#pragma pop_macro("TITLECASE_LETTER")
#pragma pop_macro("TYPE")
#pragma pop_macro("UNASSIGNED")
#pragma pop_macro("UPPERCASE_LETTER")

#endif // _java_lang_Character_h_