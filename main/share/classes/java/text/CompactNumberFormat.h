#ifndef _java_text_CompactNumberFormat_h_
#define _java_text_CompactNumberFormat_h_
//$ class java.text.CompactNumberFormat
//$ extends java.text.NumberFormat

#include <java/lang/Array.h>
#include <java/text/NumberFormat.h>

#pragma push_macro("CONDITION")
#undef CONDITION
#pragma push_macro("COUNT_PATTERN")
#undef COUNT_PATTERN
#pragma push_macro("CURRENCY_SIGN")
#undef CURRENCY_SIGN
#pragma push_macro("DECIMAL_SEPARATOR")
#undef DECIMAL_SEPARATOR
#pragma push_macro("DIGIT")
#undef DIGIT
#pragma push_macro("DIGITS")
#undef DIGITS
#pragma push_macro("EXPR")
#undef EXPR
#pragma push_macro("EXPR_PATTERN")
#undef EXPR_PATTERN
#pragma push_macro("GROUPING_SEPARATOR")
#undef GROUPING_SEPARATOR
#pragma push_macro("MINUS_SIGN")
#undef MINUS_SIGN
#pragma push_macro("NAMED_EXPR")
#undef NAMED_EXPR
#pragma push_macro("NAMED_RELATION")
#undef NAMED_RELATION
#pragma push_macro("NAMED_VALUE_RANGE")
#undef NAMED_VALUE_RANGE
#pragma push_macro("PERCENT")
#undef PERCENT
#pragma push_macro("PER_MILLE")
#undef PER_MILLE
#pragma push_macro("PLURALRULES_PATTERN")
#undef PLURALRULES_PATTERN
#pragma push_macro("PLURALS")
#undef PLURALS
#pragma push_macro("QUOTE")
#undef QUOTE
#pragma push_macro("RANGE_MULTIPLIER")
#undef RANGE_MULTIPLIER
#pragma push_macro("RELATION")
#undef RELATION
#pragma push_macro("RELATION_PATTERN")
#undef RELATION_PATTERN
#pragma push_macro("SEPARATOR")
#undef SEPARATOR
#pragma push_macro("SPECIAL_PATTERN")
#undef SPECIAL_PATTERN
#pragma push_macro("STATUS_INFINITE")
#undef STATUS_INFINITE
#pragma push_macro("STATUS_LENGTH")
#undef STATUS_LENGTH
#pragma push_macro("STATUS_POSITIVE")
#undef STATUS_POSITIVE
#pragma push_macro("VALUE_RANGE")
#undef VALUE_RANGE
#pragma push_macro("VALUE_RANGE_PATTERN")
#undef VALUE_RANGE_PATTERN
#pragma push_macro("ZERO_DIGIT")
#undef ZERO_DIGIT

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Number;
		class StringBuffer;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
		class BigInteger;
		class RoundingMode;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class DecimalFormat;
		class DecimalFormatSymbols;
		class DigitList;
		class FieldPosition;
		class Format$FieldDelegate;
		class NumberFormat$Field;
		class ParsePosition;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Map$Entry;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class MatchResult;
			class Matcher;
			class Pattern;
		}
	}
}

namespace java {
	namespace text {

class $export CompactNumberFormat : public ::java::text::NumberFormat {
	$class(CompactNumberFormat, 0, ::java::text::NumberFormat)
public:
	CompactNumberFormat();
	using ::java::text::NumberFormat::format;
	void init$($String* decimalPattern, ::java::text::DecimalFormatSymbols* symbols, $StringArray* compactPatterns);
	void init$($String* decimalPattern, ::java::text::DecimalFormatSymbols* symbols, $StringArray* compactPatterns, $String* pluralRules);
	void append(::java::lang::StringBuffer* result, $String* string, ::java::text::Format$FieldDelegate* delegate, ::java::util::List* positions);
	void appendPrefix(::java::lang::StringBuffer* result, $String* prefix, ::java::text::Format$FieldDelegate* delegate);
	void appendSuffix(::java::lang::StringBuffer* result, $String* suffix, ::java::text::Format$FieldDelegate* delegate);
	void applyPattern($String* count, $String* pattern, int32_t index);
	::java::util::Map* buildPluralRulesMap();
	virtual $Object* clone() override;
	::java::lang::Number* computeDivisor($String* minIntDigits, int32_t patternIndex);
	::java::lang::Number* computeParseMultiplier($String* text, ::java::text::ParsePosition* parsePosition, $String* matchedPrefix, $booleans* status, bool gotPositive, bool gotNegative, double num);
	::java::lang::Number* convertIfNegative(::java::lang::Number* number, $booleans* status, bool gotLongMin);
	virtual bool equals(Object$* obj) override;
	static double evalLOperand(::java::util::regex::Matcher* expr, double input);
	$String* expandAffix($String* pattern);
	void expandAffixPatterns();
	virtual ::java::lang::StringBuffer* format(Object$* number, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* fieldPosition) override;
	virtual ::java::lang::StringBuffer* format(double number, ::java::lang::StringBuffer* result, ::java::text::FieldPosition* fieldPosition) override;
	::java::lang::StringBuffer* format(double number, ::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate);
	virtual ::java::lang::StringBuffer* format(int64_t number, ::java::lang::StringBuffer* result, ::java::text::FieldPosition* fieldPosition) override;
	::java::lang::StringBuffer* format(int64_t number, ::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate);
	::java::lang::StringBuffer* format(::java::math::BigDecimal* number, ::java::lang::StringBuffer* result, ::java::text::FieldPosition* fieldPosition);
	::java::lang::StringBuffer* format(::java::math::BigDecimal* number, ::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate);
	::java::lang::StringBuffer* format(::java::math::BigInteger* number, ::java::lang::StringBuffer* result, ::java::text::FieldPosition* fieldPosition);
	::java::lang::StringBuffer* format(::java::math::BigInteger* number, ::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate, bool formatLong);
	virtual ::java::text::AttributedCharacterIterator* formatToCharacterIterator(Object$* obj) override;
	::java::lang::Number* generateParseResult(::java::lang::Number* number, bool gotDouble, bool gotLongMin, $booleans* status, ::java::lang::Number* cnfMultiplier);
	$String* getAffix(bool isExpanded, bool isPrefix, bool isNegative, int32_t compactDataIndex, int32_t iPart);
	::java::util::List* getFieldPositions($String* pattern, ::java::text::NumberFormat$Field* field);
	int32_t getGroupingSize();
	int32_t getIntegerPart(double number, double divisor);
	$String* getPluralCategory(double input);
	virtual ::java::math::RoundingMode* getRoundingMode() override;
	virtual int32_t hashCode() override;
	virtual bool isGroupingUsed() override;
	bool isParseBigDecimal();
	virtual bool isParseIntegerOnly() override;
	static $String* lambda$buildPluralRulesMap$1($String* r);
	static $String* lambda$buildPluralRulesMap$2($String* r);
	static bool lambda$getPluralCategory$3(double input, ::java::util::Map$Entry* e);
	static bool lambda$matchPluralRule$4(double input, $String* r);
	static bool lambda$matchPluralRule$5(double input, $String* and_condition);
	void lambda$processCompactPatterns$0(int32_t idx, ::java::util::regex::MatchResult* mr);
	static bool lambda$relationCheck$6(double lop, $String* c);
	bool matchAffix($String* text, int32_t position, $String* affix, $String* defaultAffix, $String* matchedAffix);
	static bool matchPluralRule($String* condition, double input);
	bool matchPrefixAndSuffix($String* text, int32_t position, $String* prefix, $String* matchedPrefix, $String* defaultPrefix, $String* suffix, $String* matchedSuffix, $String* defaultSuffix);
	using ::java::text::NumberFormat::parse;
	virtual ::java::lang::Number* parse($String* text, ::java::text::ParsePosition* pos) override;
	double parseNumberPart($String* text, int32_t position);
	using ::java::text::NumberFormat::parseObject;
	void processCompactPatterns();
	void readObject(::java::io::ObjectInputStream* inStream);
	static bool relationCheck($String* relation, double input);
	int32_t selectCompactPattern(int64_t number);
	int32_t selectCompactPattern(::java::math::BigInteger* number);
	void setGroupingSize(int32_t newValue);
	virtual void setGroupingUsed(bool newValue) override;
	virtual void setMaximumFractionDigits(int32_t newValue) override;
	virtual void setMaximumIntegerDigits(int32_t newValue) override;
	virtual void setMinimumFractionDigits(int32_t newValue) override;
	virtual void setMinimumIntegerDigits(int32_t newValue) override;
	void setParseBigDecimal(bool newValue);
	virtual void setParseIntegerOnly(bool value) override;
	virtual void setRoundingMode(::java::math::RoundingMode* roundingMode) override;
	static bool valOrRangeMatches($String* valueOrRange, double input);
	$String* validateRule($String* rule);
	static const int64_t serialVersionUID = (int64_t)0x62ED0C37B8207CF6;
	$StringArray* compactPatterns = nullptr;
	::java::util::List* positivePrefixPatterns = nullptr;
	::java::util::List* negativePrefixPatterns = nullptr;
	::java::util::List* positiveSuffixPatterns = nullptr;
	::java::util::List* negativeSuffixPatterns = nullptr;
	::java::util::List* divisors = nullptr;
	::java::util::List* placeHolderPatterns = nullptr;
	::java::text::DecimalFormatSymbols* symbols = nullptr;
	$String* decimalPattern = nullptr;
	::java::text::DecimalFormat* decimalFormat = nullptr;
	::java::text::DecimalFormat* defaultDecimalFormat = nullptr;
	int8_t groupingSize = 0;
	bool parseBigDecimal = false;
	::java::math::RoundingMode* roundingMode = nullptr;
	$String* pluralRules = nullptr;
	::java::util::Map* rulesMap = nullptr;
	static $String* SPECIAL_PATTERN;
	static const int32_t RANGE_MULTIPLIER = 10;
	static ::java::util::regex::Pattern* PLURALS;
	static ::java::util::regex::Pattern* COUNT_PATTERN;
	static $String* EXPR;
	static $String* RELATION;
	static $String* VALUE_RANGE;
	static $String* CONDITION;
	static ::java::util::regex::Pattern* PLURALRULES_PATTERN;
	::java::text::DigitList* digitList = nullptr;
	static const int32_t STATUS_INFINITE = 0;
	static const int32_t STATUS_POSITIVE = 1;
	static const int32_t STATUS_LENGTH = 2;
	static const char16_t ZERO_DIGIT = ((char16_t)48);
	static const char16_t DIGIT = ((char16_t)35);
	static const char16_t DECIMAL_SEPARATOR = ((char16_t)46);
	static const char16_t GROUPING_SEPARATOR = ((char16_t)44);
	static const char16_t MINUS_SIGN = ((char16_t)45);
	static const char16_t PERCENT = ((char16_t)37);
	static const char16_t PER_MILLE = ((char16_t)8240);
	static const char16_t SEPARATOR = ((char16_t)59);
	static const char16_t CURRENCY_SIGN = ((char16_t)164);
	static const char16_t QUOTE = ((char16_t)39);
	::java::util::List* positivePrefixes = nullptr;
	::java::util::List* negativePrefixes = nullptr;
	::java::util::List* positiveSuffixes = nullptr;
	::java::util::List* negativeSuffixes = nullptr;
	static ::java::util::regex::Pattern* DIGITS;
	static $String* NAMED_EXPR;
	static $String* NAMED_RELATION;
	static $String* NAMED_VALUE_RANGE;
	static ::java::util::regex::Pattern* EXPR_PATTERN;
	static ::java::util::regex::Pattern* RELATION_PATTERN;
	static ::java::util::regex::Pattern* VALUE_RANGE_PATTERN;
};

	} // text
} // java

#pragma pop_macro("CONDITION")
#pragma pop_macro("COUNT_PATTERN")
#pragma pop_macro("CURRENCY_SIGN")
#pragma pop_macro("DECIMAL_SEPARATOR")
#pragma pop_macro("DIGIT")
#pragma pop_macro("DIGITS")
#pragma pop_macro("EXPR")
#pragma pop_macro("EXPR_PATTERN")
#pragma pop_macro("GROUPING_SEPARATOR")
#pragma pop_macro("MINUS_SIGN")
#pragma pop_macro("NAMED_EXPR")
#pragma pop_macro("NAMED_RELATION")
#pragma pop_macro("NAMED_VALUE_RANGE")
#pragma pop_macro("PERCENT")
#pragma pop_macro("PER_MILLE")
#pragma pop_macro("PLURALRULES_PATTERN")
#pragma pop_macro("PLURALS")
#pragma pop_macro("QUOTE")
#pragma pop_macro("RANGE_MULTIPLIER")
#pragma pop_macro("RELATION")
#pragma pop_macro("RELATION_PATTERN")
#pragma pop_macro("SEPARATOR")
#pragma pop_macro("SPECIAL_PATTERN")
#pragma pop_macro("STATUS_INFINITE")
#pragma pop_macro("STATUS_LENGTH")
#pragma pop_macro("STATUS_POSITIVE")
#pragma pop_macro("VALUE_RANGE")
#pragma pop_macro("VALUE_RANGE_PATTERN")
#pragma pop_macro("ZERO_DIGIT")

#endif // _java_text_CompactNumberFormat_h_