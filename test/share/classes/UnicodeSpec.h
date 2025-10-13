#ifndef _UnicodeSpec_h_
#define _UnicodeSpec_h_
//$ class UnicodeSpec
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
#pragma push_macro("DIRECTIONALITY_CATEGORY_COUNT")
#undef DIRECTIONALITY_CATEGORY_COUNT
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
#pragma push_macro("FIELD_BIDI")
#undef FIELD_BIDI
#pragma push_macro("FIELD_CATEGORY")
#undef FIELD_CATEGORY
#pragma push_macro("FIELD_CLASS")
#undef FIELD_CLASS
#pragma push_macro("FIELD_COMMENT")
#undef FIELD_COMMENT
#pragma push_macro("FIELD_DECIMAL")
#undef FIELD_DECIMAL
#pragma push_macro("FIELD_DECOMPOSITION")
#undef FIELD_DECOMPOSITION
#pragma push_macro("FIELD_DIGIT")
#undef FIELD_DIGIT
#pragma push_macro("FIELD_LOWERCASE")
#undef FIELD_LOWERCASE
#pragma push_macro("FIELD_MIRRORED")
#undef FIELD_MIRRORED
#pragma push_macro("FIELD_NAME")
#undef FIELD_NAME
#pragma push_macro("FIELD_NUMERIC")
#undef FIELD_NUMERIC
#pragma push_macro("FIELD_OLDNAME")
#undef FIELD_OLDNAME
#pragma push_macro("FIELD_TITLECASE")
#undef FIELD_TITLECASE
#pragma push_macro("FIELD_UPPERCASE")
#undef FIELD_UPPERCASE
#pragma push_macro("FIELD_VALUE")
#undef FIELD_VALUE
#pragma push_macro("FINAL_QUOTE_PUNCTUATION")
#undef FINAL_QUOTE_PUNCTUATION
#pragma push_macro("FORMAT")
#undef FORMAT
#pragma push_macro("GENERAL_CATEGORY_COUNT")
#undef GENERAL_CATEGORY_COUNT
#pragma push_macro("INITIAL_QUOTE_PUNCTUATION")
#undef INITIAL_QUOTE_PUNCTUATION
#pragma push_macro("LETTER_NUMBER")
#undef LETTER_NUMBER
#pragma push_macro("LINE_SEPARATOR")
#undef LINE_SEPARATOR
#pragma push_macro("LONG")
#undef LONG
#pragma push_macro("LOWERCASE_LETTER")
#undef LOWERCASE_LETTER
#pragma push_macro("MATH_SYMBOL")
#undef MATH_SYMBOL
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
#pragma push_macro("REQUIRED_FIELDS")
#undef REQUIRED_FIELDS
#pragma push_macro("SHORT")
#undef SHORT
#pragma push_macro("SPACE_SEPARATOR")
#undef SPACE_SEPARATOR
#pragma push_macro("START_PUNCTUATION")
#undef START_PUNCTUATION
#pragma push_macro("SURROGATE")
#undef SURROGATE
#pragma push_macro("TITLECASE_LETTER")
#undef TITLECASE_LETTER
#pragma push_macro("UNASSIGNED")
#undef UNASSIGNED
#pragma push_macro("UPPERCASE_LETTER")
#undef UPPERCASE_LETTER

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

class $export UnicodeSpec : public ::java::lang::Object {
	$class(UnicodeSpec, 0, ::java::lang::Object)
public:
	UnicodeSpec();
	void init$();
	void init$(int32_t codePoint);
	virtual int8_t getBidiCategory();
	virtual int32_t getCodePoint();
	virtual int32_t getCombiningClass();
	virtual $String* getComment();
	virtual int32_t getDecimalValue();
	virtual $String* getDecomposition();
	virtual int32_t getDigitValue();
	virtual int8_t getGeneralCategory();
	virtual int32_t getLowerMap();
	virtual $String* getName();
	virtual $String* getNumericValue();
	virtual $String* getOldName();
	virtual int32_t getTitleMap();
	virtual int32_t getUpperMap();
	virtual bool hasLowerMap();
	virtual bool hasTitleMap();
	virtual bool hasUpperMap();
	static $String* hex4(int32_t n);
	static $String* hex6(int32_t n);
	virtual bool isDecimalValue();
	virtual bool isDigitValue();
	virtual bool isMirrored();
	virtual bool isNumericValue();
	static void main($StringArray* args);
	static ::UnicodeSpec* parse($String* s);
	static int8_t parseBidiCategory($String* s);
	static int32_t parseCodePoint($String* s);
	static int32_t parseCombiningClass($String* s);
	static $String* parseComment($String* s);
	static int32_t parseDecimalValue($String* s);
	static $String* parseDecomposition($String* s);
	static int32_t parseDigitValue($String* s);
	static int8_t parseGeneralCategory($String* s);
	static int32_t parseLowerMap($String* s);
	static bool parseMirrored($String* s);
	static $String* parseName($String* s);
	static $String* parseNumericValue($String* s);
	static $String* parseOldName($String* s);
	static int32_t parseTitleMap($String* s);
	static int32_t parseUpperMap($String* s);
	static $Array<UnicodeSpec>* readSpecFile(::java::io::File* file, int32_t plane);
	virtual void setBidiCategory(int8_t category);
	virtual void setCodePoint(int32_t value);
	virtual void setCombiningClass(int32_t combiningClass);
	virtual void setComment($String* comment);
	virtual void setDecimalValue(int32_t value);
	virtual void setDecomposition($String* decomposition);
	virtual void setDigitValue(int32_t value);
	virtual void setGeneralCategory(int8_t category);
	virtual void setLowerMap(int32_t ch);
	virtual void setMirrored(bool value);
	virtual void setName($String* name);
	virtual void setNumericValue($String* value);
	virtual void setOldName($String* name);
	virtual void setTitleMap(int32_t ch);
	virtual void setUpperMap(int32_t ch);
	virtual $String* toString() override;
	int32_t codePoint = 0;
	$String* name = nullptr;
	int8_t generalCategory = 0;
	int8_t bidiCategory = 0;
	int32_t combiningClass = 0;
	$String* decomposition = nullptr;
	int32_t decimalValue = 0;
	int32_t digitValue = 0;
	$String* numericValue = nullptr;
	bool mirrored = false;
	$String* oldName = nullptr;
	$String* comment = nullptr;
	int32_t upperMap = 0;
	int32_t lowerMap = 0;
	int32_t titleMap = 0;
	static const int32_t REQUIRED_FIELDS = 15;
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
	static const int8_t GENERAL_CATEGORY_COUNT = 31;
	static const int8_t SHORT = 0;
	static const int8_t LONG = 1;
	static $Array<::java::lang::String, 2>* generalCategoryList;
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
	static const int8_t DIRECTIONALITY_CATEGORY_COUNT = 23;
	static $Array<::java::lang::String, 2>* bidiCategoryList;
	static const int8_t FIELD_VALUE = 0;
	static const int8_t FIELD_NAME = 1;
	static const int8_t FIELD_CATEGORY = 2;
	static const int8_t FIELD_CLASS = 3;
	static const int8_t FIELD_BIDI = 4;
	static const int8_t FIELD_DECOMPOSITION = 5;
	static const int8_t FIELD_DECIMAL = 6;
	static const int8_t FIELD_DIGIT = 7;
	static const int8_t FIELD_NUMERIC = 8;
	static const int8_t FIELD_MIRRORED = 9;
	static const int8_t FIELD_OLDNAME = 10;
	static const int8_t FIELD_COMMENT = 11;
	static const int8_t FIELD_UPPERCASE = 12;
	static const int8_t FIELD_LOWERCASE = 13;
	static const int8_t FIELD_TITLECASE = 14;
	static ::java::util::regex::Pattern* tokenSeparator;
};

#pragma pop_macro("COMBINING_SPACING_MARK")
#pragma pop_macro("CONNECTOR_PUNCTUATION")
#pragma pop_macro("CONTROL")
#pragma pop_macro("CURRENCY_SYMBOL")
#pragma pop_macro("DASH_PUNCTUATION")
#pragma pop_macro("DECIMAL_DIGIT_NUMBER")
#pragma pop_macro("DIRECTIONALITY_ARABIC_NUMBER")
#pragma pop_macro("DIRECTIONALITY_BOUNDARY_NEUTRAL")
#pragma pop_macro("DIRECTIONALITY_CATEGORY_COUNT")
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
#pragma pop_macro("FIELD_BIDI")
#pragma pop_macro("FIELD_CATEGORY")
#pragma pop_macro("FIELD_CLASS")
#pragma pop_macro("FIELD_COMMENT")
#pragma pop_macro("FIELD_DECIMAL")
#pragma pop_macro("FIELD_DECOMPOSITION")
#pragma pop_macro("FIELD_DIGIT")
#pragma pop_macro("FIELD_LOWERCASE")
#pragma pop_macro("FIELD_MIRRORED")
#pragma pop_macro("FIELD_NAME")
#pragma pop_macro("FIELD_NUMERIC")
#pragma pop_macro("FIELD_OLDNAME")
#pragma pop_macro("FIELD_TITLECASE")
#pragma pop_macro("FIELD_UPPERCASE")
#pragma pop_macro("FIELD_VALUE")
#pragma pop_macro("FINAL_QUOTE_PUNCTUATION")
#pragma pop_macro("FORMAT")
#pragma pop_macro("GENERAL_CATEGORY_COUNT")
#pragma pop_macro("INITIAL_QUOTE_PUNCTUATION")
#pragma pop_macro("LETTER_NUMBER")
#pragma pop_macro("LINE_SEPARATOR")
#pragma pop_macro("LONG")
#pragma pop_macro("LOWERCASE_LETTER")
#pragma pop_macro("MATH_SYMBOL")
#pragma pop_macro("MODIFIER_LETTER")
#pragma pop_macro("MODIFIER_SYMBOL")
#pragma pop_macro("NON_SPACING_MARK")
#pragma pop_macro("OTHER_LETTER")
#pragma pop_macro("OTHER_NUMBER")
#pragma pop_macro("OTHER_PUNCTUATION")
#pragma pop_macro("OTHER_SYMBOL")
#pragma pop_macro("PARAGRAPH_SEPARATOR")
#pragma pop_macro("PRIVATE_USE")
#pragma pop_macro("REQUIRED_FIELDS")
#pragma pop_macro("SHORT")
#pragma pop_macro("SPACE_SEPARATOR")
#pragma pop_macro("START_PUNCTUATION")
#pragma pop_macro("SURROGATE")
#pragma pop_macro("TITLECASE_LETTER")
#pragma pop_macro("UNASSIGNED")
#pragma pop_macro("UPPERCASE_LETTER")

#endif // _UnicodeSpec_h_