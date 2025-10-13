#ifndef _java_text_DecimalFormat_h_
#define _java_text_DecimalFormat_h_
//$ class java.text.DecimalFormat
//$ extends java.text.NumberFormat

#include <java/lang/Array.h>
#include <java/lang/Integer.h>
#include <java/text/NumberFormat.h>

#pragma push_macro("CURRENCY_SIGN")
#undef CURRENCY_SIGN
#pragma push_macro("DOUBLE_FRACTION_DIGITS")
#undef DOUBLE_FRACTION_DIGITS
#pragma push_macro("DOUBLE_INTEGER_DIGITS")
#undef DOUBLE_INTEGER_DIGITS
#pragma push_macro("MAXIMUM_FRACTION_DIGITS")
#undef MAXIMUM_FRACTION_DIGITS
#pragma push_macro("MAXIMUM_INTEGER_DIGITS")
#undef MAXIMUM_INTEGER_DIGITS
#pragma push_macro("MAX_INT_AS_DOUBLE")
#undef MAX_INT_AS_DOUBLE
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("PATTERN_DECIMAL_SEPARATOR")
#undef PATTERN_DECIMAL_SEPARATOR
#pragma push_macro("PATTERN_DIGIT")
#undef PATTERN_DIGIT
#pragma push_macro("PATTERN_EXPONENT")
#undef PATTERN_EXPONENT
#pragma push_macro("PATTERN_GROUPING_SEPARATOR")
#undef PATTERN_GROUPING_SEPARATOR
#pragma push_macro("PATTERN_MINUS")
#undef PATTERN_MINUS
#pragma push_macro("PATTERN_PERCENT")
#undef PATTERN_PERCENT
#pragma push_macro("PATTERN_PER_MILLE")
#undef PATTERN_PER_MILLE
#pragma push_macro("PATTERN_SEPARATOR")
#undef PATTERN_SEPARATOR
#pragma push_macro("PATTERN_ZERO_DIGIT")
#undef PATTERN_ZERO_DIGIT
#pragma push_macro("QUOTE")
#undef QUOTE
#pragma push_macro("STATUS_INFINITE")
#undef STATUS_INFINITE
#pragma push_macro("STATUS_LENGTH")
#undef STATUS_LENGTH
#pragma push_macro("STATUS_POSITIVE")
#undef STATUS_POSITIVE

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
		class DecimalFormat$FastPathData;
		class DecimalFormatSymbols;
		class DigitList;
		class FieldPosition;
		class Format$Field;
		class Format$FieldDelegate;
		class ParsePosition;
	}
}
namespace java {
	namespace util {
		class Currency;
	}
}

namespace java {
	namespace text {

class $export DecimalFormat : public ::java::text::NumberFormat {
	$class(DecimalFormat, 0, ::java::text::NumberFormat)
public:
	DecimalFormat();
	using ::java::text::NumberFormat::format;
	void init$();
	void init$($String* pattern);
	void init$($String* pattern, ::java::text::DecimalFormatSymbols* symbols);
	void addAffixes($chars* container, $chars* prefix, $chars* suffix);
	void append(::java::lang::StringBuffer* result, $String* string, ::java::text::Format$FieldDelegate* delegate, $Array<::java::text::FieldPosition>* positions, ::java::text::Format$Field* signAttribute);
	void appendAffix(::java::lang::StringBuffer* buffer, $String* affixPattern, $String* expAffix, bool localized);
	void appendAffix(::java::lang::StringBuffer* buffer, $String* affix, bool localized);
	void appendSuffix($chars* suffix, int32_t len, $chars* container);
	virtual void applyLocalizedPattern($String* pattern);
	virtual void applyPattern($String* pattern);
	void applyPattern($String* pattern, bool localized);
	bool checkAndSetFastPathStatus();
	virtual $Object* clone() override;
	void collectFractionalDigits(int32_t number, $chars* digitsBuffer, int32_t startIndex);
	void collectIntegralDigits(int32_t number, $chars* digitsBuffer, int32_t backwardIndex);
	virtual ::java::lang::StringBuffer* doubleSubformat(double number, ::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate, bool isNegative);
	virtual bool equals(Object$* obj) override;
	bool exactRoundUp(double fractionalPart, int32_t scaledFractionalPartAsInt);
	$String* expandAffix($String* pattern, ::java::lang::StringBuffer* buffer);
	$Array<::java::text::FieldPosition>* expandAffix($String* pattern);
	void expandAffixes();
	void fastDoubleFormat(double d, bool negative);
	virtual $String* fastFormat(double d) override;
	virtual ::java::lang::StringBuffer* format(Object$* number, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) override;
	virtual ::java::lang::StringBuffer* format(double number, ::java::lang::StringBuffer* result, ::java::text::FieldPosition* fieldPosition) override;
	virtual ::java::lang::StringBuffer* format(double number, ::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate);
	virtual ::java::lang::StringBuffer* format(int64_t number, ::java::lang::StringBuffer* result, ::java::text::FieldPosition* fieldPosition) override;
	virtual ::java::lang::StringBuffer* format(int64_t number, ::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate);
	::java::lang::StringBuffer* format(::java::math::BigDecimal* number, ::java::lang::StringBuffer* result, ::java::text::FieldPosition* fieldPosition);
	virtual ::java::lang::StringBuffer* format(::java::math::BigDecimal* number, ::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate);
	::java::lang::StringBuffer* format(::java::math::BigInteger* number, ::java::lang::StringBuffer* result, ::java::text::FieldPosition* fieldPosition);
	virtual ::java::lang::StringBuffer* format(::java::math::BigInteger* number, ::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate, bool formatLong);
	virtual ::java::text::AttributedCharacterIterator* formatToCharacterIterator(Object$* obj) override;
	::java::math::BigDecimal* getBigDecimalMultiplier();
	::java::math::BigInteger* getBigIntegerMultiplier();
	virtual ::java::util::Currency* getCurrency() override;
	virtual ::java::text::DecimalFormatSymbols* getDecimalFormatSymbols();
	virtual int32_t getGroupingSize();
	virtual int32_t getMaximumFractionDigits() override;
	virtual int32_t getMaximumIntegerDigits() override;
	virtual int32_t getMinimumFractionDigits() override;
	virtual int32_t getMinimumIntegerDigits() override;
	virtual int32_t getMultiplier();
	virtual $String* getNegativePrefix();
	$Array<::java::text::FieldPosition>* getNegativePrefixFieldPositions();
	virtual $String* getNegativeSuffix();
	$Array<::java::text::FieldPosition>* getNegativeSuffixFieldPositions();
	virtual $String* getPositivePrefix();
	$Array<::java::text::FieldPosition>* getPositivePrefixFieldPositions();
	virtual $String* getPositiveSuffix();
	$Array<::java::text::FieldPosition>* getPositiveSuffixFieldPositions();
	virtual ::java::math::RoundingMode* getRoundingMode() override;
	virtual bool handleInfinity(double number, ::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate, bool isNegative);
	virtual bool handleNaN(double number, ::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate);
	virtual int32_t hashCode() override;
	virtual bool isDecimalSeparatorAlwaysShown();
	virtual bool isParseBigDecimal();
	void localizeDigits($chars* digitsBuffer);
	using ::java::text::NumberFormat::parse;
	virtual ::java::lang::Number* parse($String* text, ::java::text::ParsePosition* pos) override;
	using ::java::text::NumberFormat::parseObject;
	void prependPrefix($chars* prefix, int32_t len, $chars* container);
	void readObject(::java::io::ObjectInputStream* stream);
	void resetFastPathData(bool fastPathWasOn);
	virtual void setCurrency(::java::util::Currency* currency) override;
	virtual void setDecimalFormatSymbols(::java::text::DecimalFormatSymbols* newSymbols);
	virtual void setDecimalSeparatorAlwaysShown(bool newValue);
	virtual void setDigitList(::java::lang::Number* number, bool isNegative, int32_t maxDigits);
	virtual void setGroupingSize(int32_t newValue);
	virtual void setGroupingUsed(bool newValue) override;
	virtual void setMaximumFractionDigits(int32_t newValue) override;
	virtual void setMaximumIntegerDigits(int32_t newValue) override;
	virtual void setMinimumFractionDigits(int32_t newValue) override;
	virtual void setMinimumIntegerDigits(int32_t newValue) override;
	virtual void setMultiplier(int32_t newValue);
	virtual void setNegativePrefix($String* newValue);
	virtual void setNegativeSuffix($String* newValue);
	virtual void setParseBigDecimal(bool newValue);
	virtual void setPositivePrefix($String* newValue);
	virtual void setPositiveSuffix($String* newValue);
	virtual void setRoundingMode(::java::math::RoundingMode* roundingMode) override;
	::java::lang::StringBuffer* subformat(::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate, bool isNegative, bool isInteger, int32_t maxIntDigits, int32_t minIntDigits, int32_t maxFraDigits, int32_t minFraDigits);
	virtual void subformatNumber(::java::lang::StringBuffer* result, ::java::text::Format$FieldDelegate* delegate, bool isNegative, bool isInteger, int32_t maxIntDigits, int32_t minIntDigits, int32_t maxFraDigits, int32_t minFraDigits);
	bool subparse($String* text, ::java::text::ParsePosition* parsePosition, $String* positivePrefix, $String* negativePrefix, ::java::text::DigitList* digits, bool isExponent, $booleans* status);
	virtual int32_t subparseNumber($String* text, int32_t position, ::java::text::DigitList* digits, bool checkExponent, bool isExponent, $booleans* status);
	virtual $String* toLocalizedPattern();
	virtual $String* toPattern();
	$String* toPattern(bool localized);
	static bool $assertionsDisabled;
	::java::math::BigInteger* bigIntegerMultiplier = nullptr;
	::java::math::BigDecimal* bigDecimalMultiplier = nullptr;
	static const int32_t STATUS_INFINITE = 0;
	static const int32_t STATUS_POSITIVE = 1;
	static const int32_t STATUS_LENGTH = 2;
	::java::text::DigitList* digitList = nullptr;
	$String* positivePrefix = nullptr;
	$String* positiveSuffix = nullptr;
	$String* negativePrefix = nullptr;
	$String* negativeSuffix = nullptr;
	$String* posPrefixPattern = nullptr;
	$String* posSuffixPattern = nullptr;
	$String* negPrefixPattern = nullptr;
	$String* negSuffixPattern = nullptr;
	int32_t multiplier = 0;
	int8_t groupingSize = 0;
	bool decimalSeparatorAlwaysShown = false;
	bool parseBigDecimal = false;
	bool isCurrencyFormat = false;
	::java::text::DecimalFormatSymbols* symbols = nullptr;
	bool useExponentialNotation = false;
	$Array<::java::text::FieldPosition>* positivePrefixFieldPositions = nullptr;
	$Array<::java::text::FieldPosition>* positiveSuffixFieldPositions = nullptr;
	$Array<::java::text::FieldPosition>* negativePrefixFieldPositions = nullptr;
	$Array<::java::text::FieldPosition>* negativeSuffixFieldPositions = nullptr;
	int8_t minExponentDigits = 0;
	int32_t maximumIntegerDigits = 0;
	int32_t minimumIntegerDigits = 0;
	int32_t maximumFractionDigits = 0;
	int32_t minimumFractionDigits = 0;
	::java::math::RoundingMode* roundingMode = nullptr;
	bool isFastPath = false;
	bool fastPathCheckNeeded = false;
	::java::text::DecimalFormat$FastPathData* fastPathData = nullptr;
	static const int32_t currentSerialVersion = 4;
	int32_t serialVersionOnStream = 0;
	static double MAX_INT_AS_DOUBLE;
	static const char16_t PATTERN_ZERO_DIGIT = ((char16_t)48);
	static const char16_t PATTERN_GROUPING_SEPARATOR = ((char16_t)44);
	static const char16_t PATTERN_DECIMAL_SEPARATOR = ((char16_t)46);
	static const char16_t PATTERN_PER_MILLE = ((char16_t)8240);
	static const char16_t PATTERN_PERCENT = ((char16_t)37);
	static const char16_t PATTERN_DIGIT = ((char16_t)35);
	static const char16_t PATTERN_SEPARATOR = ((char16_t)59);
	static $String* PATTERN_EXPONENT;
	static const char16_t PATTERN_MINUS = ((char16_t)45);
	static const char16_t CURRENCY_SIGN = ((char16_t)164);
	static const char16_t QUOTE = ((char16_t)39);
	static $Array<::java::text::FieldPosition>* EmptyFieldPositionArray;
	static const int32_t DOUBLE_INTEGER_DIGITS = 309;
	static const int32_t DOUBLE_FRACTION_DIGITS = 340;
	static const int32_t MAXIMUM_INTEGER_DIGITS = ::java::lang::Integer::MAX_VALUE;
	static const int32_t MAXIMUM_FRACTION_DIGITS = ::java::lang::Integer::MAX_VALUE;
	static const int64_t serialVersionUID = (int64_t)0x0BFF0362D872303A;
};

	} // text
} // java

#pragma pop_macro("CURRENCY_SIGN")
#pragma pop_macro("DOUBLE_FRACTION_DIGITS")
#pragma pop_macro("DOUBLE_INTEGER_DIGITS")
#pragma pop_macro("MAXIMUM_FRACTION_DIGITS")
#pragma pop_macro("MAXIMUM_INTEGER_DIGITS")
#pragma pop_macro("MAX_INT_AS_DOUBLE")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("PATTERN_DECIMAL_SEPARATOR")
#pragma pop_macro("PATTERN_DIGIT")
#pragma pop_macro("PATTERN_EXPONENT")
#pragma pop_macro("PATTERN_GROUPING_SEPARATOR")
#pragma pop_macro("PATTERN_MINUS")
#pragma pop_macro("PATTERN_PERCENT")
#pragma pop_macro("PATTERN_PER_MILLE")
#pragma pop_macro("PATTERN_SEPARATOR")
#pragma pop_macro("PATTERN_ZERO_DIGIT")
#pragma pop_macro("QUOTE")
#pragma pop_macro("STATUS_INFINITE")
#pragma pop_macro("STATUS_LENGTH")
#pragma pop_macro("STATUS_POSITIVE")

#endif // _java_text_DecimalFormat_h_