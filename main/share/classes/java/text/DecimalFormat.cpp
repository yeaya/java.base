#include <java/text/DecimalFormat.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/ArithmeticException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Number.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/math/RoundingMode.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/CharacterIteratorFieldDelegate.h>
#include <java/text/DecimalFormat$DigitArrays.h>
#include <java/text/DecimalFormat$FastPathData.h>
#include <java/text/DecimalFormatSymbols.h>
#include <java/text/DigitList.h>
#include <java/text/DontCareFieldPosition.h>
#include <java/text/FieldPosition.h>
#include <java/text/Format$Field.h>
#include <java/text/Format$FieldDelegate.h>
#include <java/text/NumberFormat$Field.h>
#include <java/text/NumberFormat.h>
#include <java/text/ParsePosition.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <java/util/ArrayList.h>
#include <java/util/Currency.h>
#include <java/util/Locale$Category.h>
#include <java/util/Locale.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <sun/util/locale/provider/ResourceBundleBasedAdapter.h>
#include <jcpp.h>

#undef CURRENCY
#undef CURRENCY_SIGN
#undef DECIMAL_SEPARATOR
#undef DOUBLE_FRACTION_DIGITS
#undef DOUBLE_INTEGER_DIGITS
#undef EXPONENT
#undef EXPONENT_SIGN
#undef EXPONENT_SYMBOL
#undef FORMAT
#undef FRACTION
#undef FRACTION_FIELD
#undef GROUPING_SEPARATOR
#undef HALF_EVEN
#undef INSTANCE
#undef INTEGER
#undef INTEGER_FIELD
#undef MAXIMUM_FRACTION_DIGITS
#undef MAXIMUM_INTEGER_DIGITS
#undef MAX_INT_AS_DOUBLE
#undef MAX_VALUE
#undef NEGATIVE_INFINITY
#undef PATTERN_DECIMAL_SEPARATOR
#undef PATTERN_DIGIT
#undef PATTERN_EXPONENT
#undef PATTERN_GROUPING_SEPARATOR
#undef PATTERN_MINUS
#undef PATTERN_PERCENT
#undef PATTERN_PER_MILLE
#undef PATTERN_SEPARATOR
#undef PATTERN_ZERO_DIGIT
#undef PERCENT
#undef PERMILLE
#undef POSITIVE_INFINITY
#undef QUOTE
#undef SIGN
#undef STATUS_INFINITE
#undef STATUS_LENGTH
#undef STATUS_POSITIVE

using $FieldPositionArray = $Array<::java::text::FieldPosition>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $AssertionError = ::java::lang::AssertionError;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Number = ::java::lang::Number;
using $Short = ::java::lang::Short;
using $StringBuffer = ::java::lang::StringBuffer;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $RoundingMode = ::java::math::RoundingMode;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $CharacterIteratorFieldDelegate = ::java::text::CharacterIteratorFieldDelegate;
using $DecimalFormat$DigitArrays = ::java::text::DecimalFormat$DigitArrays;
using $DecimalFormat$FastPathData = ::java::text::DecimalFormat$FastPathData;
using $DecimalFormatSymbols = ::java::text::DecimalFormatSymbols;
using $DigitList = ::java::text::DigitList;
using $DontCareFieldPosition = ::java::text::DontCareFieldPosition;
using $FieldPosition = ::java::text::FieldPosition;
using $Format$Field = ::java::text::Format$Field;
using $Format$FieldDelegate = ::java::text::Format$FieldDelegate;
using $NumberFormat = ::java::text::NumberFormat;
using $NumberFormat$Field = ::java::text::NumberFormat$Field;
using $ParsePosition = ::java::text::ParsePosition;
using $NumberFormatProvider = ::java::text::spi::NumberFormatProvider;
using $ArrayList = ::java::util::ArrayList;
using $Currency = ::java::util::Currency;
using $Locale = ::java::util::Locale;
using $Locale$Category = ::java::util::Locale$Category;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;
using $ResourceBundleBasedAdapter = ::sun::util::locale::provider::ResourceBundleBasedAdapter;

namespace java {
	namespace text {

$FieldInfo _DecimalFormat_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DecimalFormat, $assertionsDisabled)},
	{"bigIntegerMultiplier", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $TRANSIENT, $field(DecimalFormat, bigIntegerMultiplier)},
	{"bigDecimalMultiplier", "Ljava/math/BigDecimal;", nullptr, $PRIVATE | $TRANSIENT, $field(DecimalFormat, bigDecimalMultiplier)},
	{"STATUS_INFINITE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, STATUS_INFINITE)},
	{"STATUS_POSITIVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, STATUS_POSITIVE)},
	{"STATUS_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, STATUS_LENGTH)},
	{"digitList", "Ljava/text/DigitList;", nullptr, $PRIVATE | $TRANSIENT, $field(DecimalFormat, digitList)},
	{"positivePrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DecimalFormat, positivePrefix)},
	{"positiveSuffix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DecimalFormat, positiveSuffix)},
	{"negativePrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DecimalFormat, negativePrefix)},
	{"negativeSuffix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DecimalFormat, negativeSuffix)},
	{"posPrefixPattern", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DecimalFormat, posPrefixPattern)},
	{"posSuffixPattern", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DecimalFormat, posSuffixPattern)},
	{"negPrefixPattern", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DecimalFormat, negPrefixPattern)},
	{"negSuffixPattern", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DecimalFormat, negSuffixPattern)},
	{"multiplier", "I", nullptr, $PRIVATE, $field(DecimalFormat, multiplier)},
	{"groupingSize", "B", nullptr, $PRIVATE, $field(DecimalFormat, groupingSize)},
	{"decimalSeparatorAlwaysShown", "Z", nullptr, $PRIVATE, $field(DecimalFormat, decimalSeparatorAlwaysShown)},
	{"parseBigDecimal", "Z", nullptr, $PRIVATE, $field(DecimalFormat, parseBigDecimal)},
	{"isCurrencyFormat", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(DecimalFormat, isCurrencyFormat)},
	{"symbols", "Ljava/text/DecimalFormatSymbols;", nullptr, $PRIVATE, $field(DecimalFormat, symbols)},
	{"useExponentialNotation", "Z", nullptr, $PRIVATE, $field(DecimalFormat, useExponentialNotation)},
	{"positivePrefixFieldPositions", "[Ljava/text/FieldPosition;", nullptr, $PRIVATE | $TRANSIENT, $field(DecimalFormat, positivePrefixFieldPositions)},
	{"positiveSuffixFieldPositions", "[Ljava/text/FieldPosition;", nullptr, $PRIVATE | $TRANSIENT, $field(DecimalFormat, positiveSuffixFieldPositions)},
	{"negativePrefixFieldPositions", "[Ljava/text/FieldPosition;", nullptr, $PRIVATE | $TRANSIENT, $field(DecimalFormat, negativePrefixFieldPositions)},
	{"negativeSuffixFieldPositions", "[Ljava/text/FieldPosition;", nullptr, $PRIVATE | $TRANSIENT, $field(DecimalFormat, negativeSuffixFieldPositions)},
	{"minExponentDigits", "B", nullptr, $PRIVATE, $field(DecimalFormat, minExponentDigits)},
	{"maximumIntegerDigits", "I", nullptr, $PRIVATE, $field(DecimalFormat, maximumIntegerDigits)},
	{"minimumIntegerDigits", "I", nullptr, $PRIVATE, $field(DecimalFormat, minimumIntegerDigits)},
	{"maximumFractionDigits", "I", nullptr, $PRIVATE, $field(DecimalFormat, maximumFractionDigits)},
	{"minimumFractionDigits", "I", nullptr, $PRIVATE, $field(DecimalFormat, minimumFractionDigits)},
	{"roundingMode", "Ljava/math/RoundingMode;", nullptr, $PRIVATE, $field(DecimalFormat, roundingMode)},
	{"isFastPath", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(DecimalFormat, isFastPath)},
	{"fastPathCheckNeeded", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(DecimalFormat, fastPathCheckNeeded)},
	{"fastPathData", "Ljava/text/DecimalFormat$FastPathData;", nullptr, $PRIVATE | $TRANSIENT, $field(DecimalFormat, fastPathData)},
	{"currentSerialVersion", "I", nullptr, $STATIC | $FINAL, $constField(DecimalFormat, currentSerialVersion)},
	{"serialVersionOnStream", "I", nullptr, $PRIVATE, $field(DecimalFormat, serialVersionOnStream)},
	{"MAX_INT_AS_DOUBLE", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DecimalFormat, MAX_INT_AS_DOUBLE)},
	{"PATTERN_ZERO_DIGIT", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, PATTERN_ZERO_DIGIT)},
	{"PATTERN_GROUPING_SEPARATOR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, PATTERN_GROUPING_SEPARATOR)},
	{"PATTERN_DECIMAL_SEPARATOR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, PATTERN_DECIMAL_SEPARATOR)},
	{"PATTERN_PER_MILLE", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, PATTERN_PER_MILLE)},
	{"PATTERN_PERCENT", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, PATTERN_PERCENT)},
	{"PATTERN_DIGIT", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, PATTERN_DIGIT)},
	{"PATTERN_SEPARATOR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, PATTERN_SEPARATOR)},
	{"PATTERN_EXPONENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DecimalFormat, PATTERN_EXPONENT)},
	{"PATTERN_MINUS", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, PATTERN_MINUS)},
	{"CURRENCY_SIGN", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, CURRENCY_SIGN)},
	{"QUOTE", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DecimalFormat, QUOTE)},
	{"EmptyFieldPositionArray", "[Ljava/text/FieldPosition;", nullptr, $PRIVATE | $STATIC, $staticField(DecimalFormat, EmptyFieldPositionArray)},
	{"DOUBLE_INTEGER_DIGITS", "I", nullptr, $STATIC | $FINAL, $constField(DecimalFormat, DOUBLE_INTEGER_DIGITS)},
	{"DOUBLE_FRACTION_DIGITS", "I", nullptr, $STATIC | $FINAL, $constField(DecimalFormat, DOUBLE_FRACTION_DIGITS)},
	{"MAXIMUM_INTEGER_DIGITS", "I", nullptr, $STATIC | $FINAL, $constField(DecimalFormat, MAXIMUM_INTEGER_DIGITS)},
	{"MAXIMUM_FRACTION_DIGITS", "I", nullptr, $STATIC | $FINAL, $constField(DecimalFormat, MAXIMUM_FRACTION_DIGITS)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DecimalFormat, serialVersionUID)},
	{}
};

$MethodInfo _DecimalFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DecimalFormat::*)()>(&DecimalFormat::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DecimalFormat::*)($String*)>(&DecimalFormat::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V", nullptr, $PUBLIC, $method(static_cast<void(DecimalFormat::*)($String*,$DecimalFormatSymbols*)>(&DecimalFormat::init$))},
	{"addAffixes", "([C[C[C)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)($chars*,$chars*,$chars*)>(&DecimalFormat::addAffixes))},
	{"append", "(Ljava/lang/StringBuffer;Ljava/lang/String;Ljava/text/Format$FieldDelegate;[Ljava/text/FieldPosition;Ljava/text/Format$Field;)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)($StringBuffer*,$String*,$Format$FieldDelegate*,$FieldPositionArray*,$Format$Field*)>(&DecimalFormat::append))},
	{"appendAffix", "(Ljava/lang/StringBuffer;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)($StringBuffer*,$String*,$String*,bool)>(&DecimalFormat::appendAffix))},
	{"appendAffix", "(Ljava/lang/StringBuffer;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)($StringBuffer*,$String*,bool)>(&DecimalFormat::appendAffix))},
	{"appendSuffix", "([CI[C)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)($chars*,int32_t,$chars*)>(&DecimalFormat::appendSuffix))},
	{"applyLocalizedPattern", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"applyPattern", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"applyPattern", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)($String*,bool)>(&DecimalFormat::applyPattern))},
	{"checkAndSetFastPathStatus", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(DecimalFormat::*)()>(&DecimalFormat::checkAndSetFastPathStatus))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"collectFractionalDigits", "(I[CI)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)(int32_t,$chars*,int32_t)>(&DecimalFormat::collectFractionalDigits))},
	{"collectIntegralDigits", "(I[CI)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)(int32_t,$chars*,int32_t)>(&DecimalFormat::collectIntegralDigits))},
	{"doubleSubformat", "(DLjava/lang/StringBuffer;Ljava/text/Format$FieldDelegate;Z)Ljava/lang/StringBuffer;", nullptr, 0},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"exactRoundUp", "(DI)Z", nullptr, $PRIVATE, $method(static_cast<bool(DecimalFormat::*)(double,int32_t)>(&DecimalFormat::exactRoundUp))},
	{"expandAffix", "(Ljava/lang/String;Ljava/lang/StringBuffer;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DecimalFormat::*)($String*,$StringBuffer*)>(&DecimalFormat::expandAffix))},
	{"expandAffix", "(Ljava/lang/String;)[Ljava/text/FieldPosition;", nullptr, $PRIVATE, $method(static_cast<$FieldPositionArray*(DecimalFormat::*)($String*)>(&DecimalFormat::expandAffix))},
	{"expandAffixes", "()V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)()>(&DecimalFormat::expandAffixes))},
	{"fastDoubleFormat", "(DZ)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)(double,bool)>(&DecimalFormat::fastDoubleFormat))},
	{"fastFormat", "(D)Ljava/lang/String;", nullptr, 0},
	{"format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $FINAL},
	{"format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC},
	{"format", "(DLjava/lang/StringBuffer;Ljava/text/Format$FieldDelegate;)Ljava/lang/StringBuffer;", nullptr, 0},
	{"format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC},
	{"format", "(JLjava/lang/StringBuffer;Ljava/text/Format$FieldDelegate;)Ljava/lang/StringBuffer;", nullptr, 0},
	{"format", "(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $method(static_cast<$StringBuffer*(DecimalFormat::*)($BigDecimal*,$StringBuffer*,$FieldPosition*)>(&DecimalFormat::format))},
	{"format", "(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/Format$FieldDelegate;)Ljava/lang/StringBuffer;", nullptr, 0},
	{"format", "(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $method(static_cast<$StringBuffer*(DecimalFormat::*)($BigInteger*,$StringBuffer*,$FieldPosition*)>(&DecimalFormat::format))},
	{"format", "(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/Format$FieldDelegate;Z)Ljava/lang/StringBuffer;", nullptr, 0},
	{"formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"getBigDecimalMultiplier", "()Ljava/math/BigDecimal;", nullptr, $PRIVATE, $method(static_cast<$BigDecimal*(DecimalFormat::*)()>(&DecimalFormat::getBigDecimalMultiplier))},
	{"getBigIntegerMultiplier", "()Ljava/math/BigInteger;", nullptr, $PRIVATE, $method(static_cast<$BigInteger*(DecimalFormat::*)()>(&DecimalFormat::getBigIntegerMultiplier))},
	{"getCurrency", "()Ljava/util/Currency;", nullptr, $PUBLIC},
	{"getDecimalFormatSymbols", "()Ljava/text/DecimalFormatSymbols;", nullptr, $PUBLIC},
	{"getGroupingSize", "()I", nullptr, $PUBLIC},
	{"getMaximumFractionDigits", "()I", nullptr, $PUBLIC},
	{"getMaximumIntegerDigits", "()I", nullptr, $PUBLIC},
	{"getMinimumFractionDigits", "()I", nullptr, $PUBLIC},
	{"getMinimumIntegerDigits", "()I", nullptr, $PUBLIC},
	{"getMultiplier", "()I", nullptr, $PUBLIC},
	{"getNegativePrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNegativePrefixFieldPositions", "()[Ljava/text/FieldPosition;", nullptr, $PRIVATE, $method(static_cast<$FieldPositionArray*(DecimalFormat::*)()>(&DecimalFormat::getNegativePrefixFieldPositions))},
	{"getNegativeSuffix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNegativeSuffixFieldPositions", "()[Ljava/text/FieldPosition;", nullptr, $PRIVATE, $method(static_cast<$FieldPositionArray*(DecimalFormat::*)()>(&DecimalFormat::getNegativeSuffixFieldPositions))},
	{"getPositivePrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPositivePrefixFieldPositions", "()[Ljava/text/FieldPosition;", nullptr, $PRIVATE, $method(static_cast<$FieldPositionArray*(DecimalFormat::*)()>(&DecimalFormat::getPositivePrefixFieldPositions))},
	{"getPositiveSuffix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPositiveSuffixFieldPositions", "()[Ljava/text/FieldPosition;", nullptr, $PRIVATE, $method(static_cast<$FieldPositionArray*(DecimalFormat::*)()>(&DecimalFormat::getPositiveSuffixFieldPositions))},
	{"getRoundingMode", "()Ljava/math/RoundingMode;", nullptr, $PUBLIC},
	{"handleInfinity", "(DLjava/lang/StringBuffer;Ljava/text/Format$FieldDelegate;Z)Z", nullptr, 0},
	{"handleNaN", "(DLjava/lang/StringBuffer;Ljava/text/Format$FieldDelegate;)Z", nullptr, 0},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDecimalSeparatorAlwaysShown", "()Z", nullptr, $PUBLIC},
	{"isParseBigDecimal", "()Z", nullptr, $PUBLIC},
	{"localizeDigits", "([C)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)($chars*)>(&DecimalFormat::localizeDigits))},
	{"parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;", nullptr, $PUBLIC},
	{"prependPrefix", "([CI[C)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)($chars*,int32_t,$chars*)>(&DecimalFormat::prependPrefix))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)($ObjectInputStream*)>(&DecimalFormat::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"resetFastPathData", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(DecimalFormat::*)(bool)>(&DecimalFormat::resetFastPathData))},
	{"setCurrency", "(Ljava/util/Currency;)V", nullptr, $PUBLIC},
	{"setDecimalFormatSymbols", "(Ljava/text/DecimalFormatSymbols;)V", nullptr, $PUBLIC},
	{"setDecimalSeparatorAlwaysShown", "(Z)V", nullptr, $PUBLIC},
	{"setDigitList", "(Ljava/lang/Number;ZI)V", nullptr, 0},
	{"setGroupingSize", "(I)V", nullptr, $PUBLIC},
	{"setGroupingUsed", "(Z)V", nullptr, $PUBLIC},
	{"setMaximumFractionDigits", "(I)V", nullptr, $PUBLIC},
	{"setMaximumIntegerDigits", "(I)V", nullptr, $PUBLIC},
	{"setMinimumFractionDigits", "(I)V", nullptr, $PUBLIC},
	{"setMinimumIntegerDigits", "(I)V", nullptr, $PUBLIC},
	{"setMultiplier", "(I)V", nullptr, $PUBLIC},
	{"setNegativePrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setNegativeSuffix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setParseBigDecimal", "(Z)V", nullptr, $PUBLIC},
	{"setPositivePrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPositiveSuffix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setRoundingMode", "(Ljava/math/RoundingMode;)V", nullptr, $PUBLIC},
	{"subformat", "(Ljava/lang/StringBuffer;Ljava/text/Format$FieldDelegate;ZZIIII)Ljava/lang/StringBuffer;", nullptr, $PRIVATE, $method(static_cast<$StringBuffer*(DecimalFormat::*)($StringBuffer*,$Format$FieldDelegate*,bool,bool,int32_t,int32_t,int32_t,int32_t)>(&DecimalFormat::subformat))},
	{"subformatNumber", "(Ljava/lang/StringBuffer;Ljava/text/Format$FieldDelegate;ZZIIII)V", nullptr, 0},
	{"subparse", "(Ljava/lang/String;Ljava/text/ParsePosition;Ljava/lang/String;Ljava/lang/String;Ljava/text/DigitList;Z[Z)Z", nullptr, $PRIVATE | $FINAL, $method(static_cast<bool(DecimalFormat::*)($String*,$ParsePosition*,$String*,$String*,$DigitList*,bool,$booleans*)>(&DecimalFormat::subparse))},
	{"subparseNumber", "(Ljava/lang/String;ILjava/text/DigitList;ZZ[Z)I", nullptr, 0},
	{"toLocalizedPattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toPattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toPattern", "(Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DecimalFormat::*)(bool)>(&DecimalFormat::toPattern))},
	{}
};

$InnerClassInfo _DecimalFormat_InnerClassesInfo_[] = {
	{"java.text.DecimalFormat$DigitArrays", "java.text.DecimalFormat", "DigitArrays", $PRIVATE | $STATIC},
	{"java.text.DecimalFormat$FastPathData", "java.text.DecimalFormat", "FastPathData", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DecimalFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.text.DecimalFormat",
	"java.text.NumberFormat",
	nullptr,
	_DecimalFormat_FieldInfo_,
	_DecimalFormat_MethodInfo_,
	nullptr,
	nullptr,
	_DecimalFormat_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.text.DecimalFormat$DigitArrays,java.text.DecimalFormat$FastPathData"
};

$Object* allocate$DecimalFormat($Class* clazz) {
	return $of($alloc(DecimalFormat));
}

bool DecimalFormat::$assertionsDisabled = false;

double DecimalFormat::MAX_INT_AS_DOUBLE = 0.0;
$String* DecimalFormat::PATTERN_EXPONENT = nullptr;
$FieldPositionArray* DecimalFormat::EmptyFieldPositionArray = nullptr;

void DecimalFormat::init$() {
	$useLocalCurrentObjectStackCache();
	$NumberFormat::init$();
	$set(this, digitList, $new($DigitList));
	$set(this, positivePrefix, ""_s);
	$set(this, positiveSuffix, ""_s);
	$set(this, negativePrefix, "-"_s);
	$set(this, negativeSuffix, ""_s);
	this->multiplier = 1;
	this->groupingSize = (int8_t)3;
	this->decimalSeparatorAlwaysShown = false;
	this->parseBigDecimal = false;
	this->isCurrencyFormat = false;
	$set(this, symbols, nullptr);
	this->maximumIntegerDigits = $NumberFormat::getMaximumIntegerDigits();
	this->minimumIntegerDigits = $NumberFormat::getMinimumIntegerDigits();
	this->maximumFractionDigits = $NumberFormat::getMaximumFractionDigits();
	this->minimumFractionDigits = $NumberFormat::getMinimumFractionDigits();
	$init($RoundingMode);
	$set(this, roundingMode, $RoundingMode::HALF_EVEN);
	this->isFastPath = false;
	this->fastPathCheckNeeded = true;
	this->serialVersionOnStream = DecimalFormat::currentSerialVersion;
	$init($Locale$Category);
	$var($Locale, def, $Locale::getDefault($Locale$Category::FORMAT));
	$load($NumberFormatProvider);
	$var($LocaleProviderAdapter, adapter, $LocaleProviderAdapter::getAdapter($NumberFormatProvider::class$, def));
	if (!($instanceOf($ResourceBundleBasedAdapter, adapter))) {
		$assign(adapter, $LocaleProviderAdapter::getResourceBundleBased());
	}
	$var($StringArray, all, $nc($($nc(adapter)->getLocaleResources(def)))->getNumberPatterns());
	$set(this, symbols, $DecimalFormatSymbols::getInstance(def));
	applyPattern($nc(all)->get(0), false);
}

void DecimalFormat::init$($String* pattern) {
	$NumberFormat::init$();
	$set(this, digitList, $new($DigitList));
	$set(this, positivePrefix, ""_s);
	$set(this, positiveSuffix, ""_s);
	$set(this, negativePrefix, "-"_s);
	$set(this, negativeSuffix, ""_s);
	this->multiplier = 1;
	this->groupingSize = (int8_t)3;
	this->decimalSeparatorAlwaysShown = false;
	this->parseBigDecimal = false;
	this->isCurrencyFormat = false;
	$set(this, symbols, nullptr);
	this->maximumIntegerDigits = $NumberFormat::getMaximumIntegerDigits();
	this->minimumIntegerDigits = $NumberFormat::getMinimumIntegerDigits();
	this->maximumFractionDigits = $NumberFormat::getMaximumFractionDigits();
	this->minimumFractionDigits = $NumberFormat::getMinimumFractionDigits();
	$init($RoundingMode);
	$set(this, roundingMode, $RoundingMode::HALF_EVEN);
	this->isFastPath = false;
	this->fastPathCheckNeeded = true;
	this->serialVersionOnStream = DecimalFormat::currentSerialVersion;
	$init($Locale$Category);
	$set(this, symbols, $DecimalFormatSymbols::getInstance($($Locale::getDefault($Locale$Category::FORMAT))));
	applyPattern(pattern, false);
}

void DecimalFormat::init$($String* pattern, $DecimalFormatSymbols* symbols) {
	$NumberFormat::init$();
	$set(this, digitList, $new($DigitList));
	$set(this, positivePrefix, ""_s);
	$set(this, positiveSuffix, ""_s);
	$set(this, negativePrefix, "-"_s);
	$set(this, negativeSuffix, ""_s);
	this->multiplier = 1;
	this->groupingSize = (int8_t)3;
	this->decimalSeparatorAlwaysShown = false;
	this->parseBigDecimal = false;
	this->isCurrencyFormat = false;
	$set(this, symbols, nullptr);
	this->maximumIntegerDigits = $NumberFormat::getMaximumIntegerDigits();
	this->minimumIntegerDigits = $NumberFormat::getMinimumIntegerDigits();
	this->maximumFractionDigits = $NumberFormat::getMaximumFractionDigits();
	this->minimumFractionDigits = $NumberFormat::getMinimumFractionDigits();
	$init($RoundingMode);
	$set(this, roundingMode, $RoundingMode::HALF_EVEN);
	this->isFastPath = false;
	this->fastPathCheckNeeded = true;
	this->serialVersionOnStream = DecimalFormat::currentSerialVersion;
	$set(this, symbols, $cast($DecimalFormatSymbols, $nc(symbols)->clone()));
	applyPattern(pattern, false);
}

$StringBuffer* DecimalFormat::format(Object$* number, $StringBuffer* toAppendTo, $FieldPosition* pos) {
	if ($instanceOf($Long, number) || $instanceOf($Integer, number) || $instanceOf($Short, number) || $instanceOf($Byte, number) || $instanceOf($AtomicInteger, number) || $instanceOf($AtomicLong, number) || ($instanceOf($BigInteger, number) && $nc(($cast($BigInteger, number)))->bitLength() < 64)) {
		return format($nc(($cast($Number, number)))->longValue(), toAppendTo, pos);
	} else if ($instanceOf($BigDecimal, number)) {
		return format($cast($BigDecimal, number), toAppendTo, pos);
	} else if ($instanceOf($BigInteger, number)) {
		return format($cast($BigInteger, number), toAppendTo, pos);
	} else if ($instanceOf($Number, number)) {
		return format($nc(($cast($Number, number)))->doubleValue(), toAppendTo, pos);
	} else {
		$throwNew($IllegalArgumentException, "Cannot format given Object as a Number"_s);
	}
}

$StringBuffer* DecimalFormat::format(double number, $StringBuffer* result, $FieldPosition* fieldPosition) {
	$useLocalCurrentObjectStackCache();
	bool tryFastPath = false;
	$init($DontCareFieldPosition);
	if (fieldPosition == $DontCareFieldPosition::INSTANCE) {
		tryFastPath = true;
	} else {
		$nc(fieldPosition)->setBeginIndex(0);
		fieldPosition->setEndIndex(0);
	}
	if (tryFastPath) {
		$var($String, tempResult, fastFormat(number));
		if (tempResult != nullptr) {
			$nc(result)->append(tempResult);
			return result;
		}
	}
	return format(number, result, $($nc(fieldPosition)->getFieldDelegate()));
}

$StringBuffer* DecimalFormat::format(double number, $StringBuffer* result, $Format$FieldDelegate* delegate) {
	bool nanOrInfinity = handleNaN(number, result, delegate);
	if (nanOrInfinity) {
		return result;
	}
	bool isNegative = ((number < 0.0) || (number == 0.0 && 1 / number < 0.0)) ^ (this->multiplier < 0);
	if (this->multiplier != 1) {
		number *= this->multiplier;
	}
	nanOrInfinity = handleInfinity(number, result, delegate, isNegative);
	if (nanOrInfinity) {
		return result;
	}
	if (isNegative) {
		number = -number;
	}
	if (!DecimalFormat::$assertionsDisabled && !(number >= 0 && !$Double::isInfinite(number))) {
		$throwNew($AssertionError);
	}
	return doubleSubformat(number, result, delegate, isNegative);
}

bool DecimalFormat::handleNaN(double number, $StringBuffer* result, $Format$FieldDelegate* delegate) {
	bool var$0 = $Double::isNaN(number);
	if (var$0 || ($Double::isInfinite(number) && this->multiplier == 0)) {
		int32_t iFieldStart = $nc(result)->length();
		result->append($($nc(this->symbols)->getNaN()));
		$init($NumberFormat$Field);
		$nc(delegate)->formatted($NumberFormat::INTEGER_FIELD, $NumberFormat$Field::INTEGER, $NumberFormat$Field::INTEGER, iFieldStart, result->length(), result);
		return true;
	}
	return false;
}

bool DecimalFormat::handleInfinity(double number, $StringBuffer* result, $Format$FieldDelegate* delegate, bool isNegative) {
	$useLocalCurrentObjectStackCache();
	if ($Double::isInfinite(number)) {
		if (isNegative) {
			$init($NumberFormat$Field);
			append(result, this->negativePrefix, delegate, $(getNegativePrefixFieldPositions()), $NumberFormat$Field::SIGN);
		} else {
			$init($NumberFormat$Field);
			append(result, this->positivePrefix, delegate, $(getPositivePrefixFieldPositions()), $NumberFormat$Field::SIGN);
		}
		int32_t iFieldStart = $nc(result)->length();
		result->append($($nc(this->symbols)->getInfinity()));
		$init($NumberFormat$Field);
		$nc(delegate)->formatted($NumberFormat::INTEGER_FIELD, $NumberFormat$Field::INTEGER, $NumberFormat$Field::INTEGER, iFieldStart, result->length(), result);
		if (isNegative) {
			append(result, this->negativeSuffix, delegate, $(getNegativeSuffixFieldPositions()), $NumberFormat$Field::SIGN);
		} else {
			append(result, this->positiveSuffix, delegate, $(getPositiveSuffixFieldPositions()), $NumberFormat$Field::SIGN);
		}
		return true;
	}
	return false;
}

$StringBuffer* DecimalFormat::doubleSubformat(double number, $StringBuffer* result, $Format$FieldDelegate* delegate, bool isNegative) {
	$synchronized(this->digitList) {
		int32_t maxIntDigits = $NumberFormat::getMaximumIntegerDigits();
		int32_t minIntDigits = $NumberFormat::getMinimumIntegerDigits();
		int32_t maxFraDigits = $NumberFormat::getMaximumFractionDigits();
		int32_t minFraDigits = $NumberFormat::getMinimumFractionDigits();
		$nc(this->digitList)->set(isNegative, number, this->useExponentialNotation ? maxIntDigits + maxFraDigits : maxFraDigits, !this->useExponentialNotation);
		return subformat(result, delegate, isNegative, false, maxIntDigits, minIntDigits, maxFraDigits, minFraDigits);
	}
}

$StringBuffer* DecimalFormat::format(int64_t number, $StringBuffer* result, $FieldPosition* fieldPosition) {
	$nc(fieldPosition)->setBeginIndex(0);
	fieldPosition->setEndIndex(0);
	return format(number, result, $(fieldPosition->getFieldDelegate()));
}

$StringBuffer* DecimalFormat::format(int64_t number, $StringBuffer* result, $Format$FieldDelegate* delegate) {
	bool isNegative = (number < 0);
	if (isNegative) {
		number = -number;
	}
	bool useBigInteger = false;
	if (number < 0) {
		if (this->multiplier != 0) {
			useBigInteger = true;
		}
	} else if (this->multiplier != 1 && this->multiplier != 0) {
		int64_t cutoff = $div($Long::MAX_VALUE, this->multiplier);
		if (cutoff < 0) {
			cutoff = -cutoff;
		}
		useBigInteger = (number > cutoff);
	}
	if (useBigInteger) {
		if (isNegative) {
			number = -number;
		}
		$var($BigInteger, bigIntegerValue, $BigInteger::valueOf(number));
		return format(bigIntegerValue, result, delegate, true);
	}
	number *= this->multiplier;
	if (number == 0) {
		isNegative = false;
	} else if (this->multiplier < 0) {
		number = -number;
		isNegative = !isNegative;
	}
	$synchronized(this->digitList) {
		int32_t maxIntDigits = $NumberFormat::getMaximumIntegerDigits();
		int32_t minIntDigits = $NumberFormat::getMinimumIntegerDigits();
		int32_t maxFraDigits = $NumberFormat::getMaximumFractionDigits();
		int32_t minFraDigits = $NumberFormat::getMinimumFractionDigits();
		$nc(this->digitList)->set(isNegative, number, this->useExponentialNotation ? maxIntDigits + maxFraDigits : 0);
		return subformat(result, delegate, isNegative, true, maxIntDigits, minIntDigits, maxFraDigits, minFraDigits);
	}
}

$StringBuffer* DecimalFormat::format($BigDecimal* number, $StringBuffer* result, $FieldPosition* fieldPosition) {
	$nc(fieldPosition)->setBeginIndex(0);
	fieldPosition->setEndIndex(0);
	return format(number, result, $(fieldPosition->getFieldDelegate()));
}

$StringBuffer* DecimalFormat::format($BigDecimal* number$renamed, $StringBuffer* result, $Format$FieldDelegate* delegate) {
	$useLocalCurrentObjectStackCache();
	$var($BigDecimal, number, number$renamed);
	if (this->multiplier != 1) {
		$assign(number, $nc(number)->multiply($(getBigDecimalMultiplier())));
	}
	bool isNegative = $nc(number)->signum() == -1;
	if (isNegative) {
		$assign(number, number->negate());
	}
	$synchronized(this->digitList) {
		int32_t maxIntDigits = getMaximumIntegerDigits();
		int32_t minIntDigits = getMinimumIntegerDigits();
		int32_t maxFraDigits = getMaximumFractionDigits();
		int32_t minFraDigits = getMinimumFractionDigits();
		int32_t maximumDigits = maxIntDigits + maxFraDigits;
		$nc(this->digitList)->set(isNegative, number, this->useExponentialNotation ? ((maximumDigits < 0) ? $Integer::MAX_VALUE : maximumDigits) : maxFraDigits, !this->useExponentialNotation);
		return subformat(result, delegate, isNegative, false, maxIntDigits, minIntDigits, maxFraDigits, minFraDigits);
	}
}

$StringBuffer* DecimalFormat::format($BigInteger* number, $StringBuffer* result, $FieldPosition* fieldPosition) {
	$nc(fieldPosition)->setBeginIndex(0);
	fieldPosition->setEndIndex(0);
	return format(number, result, $(fieldPosition->getFieldDelegate()), false);
}

$StringBuffer* DecimalFormat::format($BigInteger* number$renamed, $StringBuffer* result, $Format$FieldDelegate* delegate, bool formatLong) {
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, number, number$renamed);
	if (this->multiplier != 1) {
		$assign(number, $nc(number)->multiply($(getBigIntegerMultiplier())));
	}
	bool isNegative = $nc(number)->signum() == -1;
	if (isNegative) {
		$assign(number, number->negate());
	}
	$synchronized(this->digitList) {
		int32_t maxIntDigits = 0;
		int32_t minIntDigits = 0;
		int32_t maxFraDigits = 0;
		int32_t minFraDigits = 0;
		int32_t maximumDigits = 0;
		if (formatLong) {
			maxIntDigits = $NumberFormat::getMaximumIntegerDigits();
			minIntDigits = $NumberFormat::getMinimumIntegerDigits();
			maxFraDigits = $NumberFormat::getMaximumFractionDigits();
			minFraDigits = $NumberFormat::getMinimumFractionDigits();
			maximumDigits = maxIntDigits + maxFraDigits;
		} else {
			maxIntDigits = getMaximumIntegerDigits();
			minIntDigits = getMinimumIntegerDigits();
			maxFraDigits = getMaximumFractionDigits();
			minFraDigits = getMinimumFractionDigits();
			maximumDigits = maxIntDigits + maxFraDigits;
			if (maximumDigits < 0) {
				maximumDigits = $Integer::MAX_VALUE;
			}
		}
		$nc(this->digitList)->set(isNegative, number, this->useExponentialNotation ? maximumDigits : 0);
		return subformat(result, delegate, isNegative, true, maxIntDigits, minIntDigits, maxFraDigits, minFraDigits);
	}
}

$AttributedCharacterIterator* DecimalFormat::formatToCharacterIterator(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	$var($CharacterIteratorFieldDelegate, delegate, $new($CharacterIteratorFieldDelegate));
	$var($StringBuffer, sb, $new($StringBuffer));
	if ($instanceOf($Double, obj) || $instanceOf($Float, obj)) {
		format($nc(($cast($Number, obj)))->doubleValue(), sb, static_cast<$Format$FieldDelegate*>(delegate));
	} else if ($instanceOf($Long, obj) || $instanceOf($Integer, obj) || $instanceOf($Short, obj) || $instanceOf($Byte, obj) || $instanceOf($AtomicInteger, obj) || $instanceOf($AtomicLong, obj)) {
		format($nc(($cast($Number, obj)))->longValue(), sb, static_cast<$Format$FieldDelegate*>(delegate));
	} else if ($instanceOf($BigDecimal, obj)) {
		format($cast($BigDecimal, obj), sb, static_cast<$Format$FieldDelegate*>(delegate));
	} else if ($instanceOf($BigInteger, obj)) {
		format($cast($BigInteger, obj), sb, delegate, false);
	} else if (obj == nullptr) {
		$throwNew($NullPointerException, "formatToCharacterIterator must be passed non-null object"_s);
	} else {
		$throwNew($IllegalArgumentException, "Cannot format given Object as a Number"_s);
	}
	return delegate->getIterator($(sb->toString()));
}

bool DecimalFormat::checkAndSetFastPathStatus() {
	bool fastPathWasOn = this->isFastPath;
	$init($RoundingMode);
	if ((this->roundingMode == $RoundingMode::HALF_EVEN) && (isGroupingUsed()) && (this->groupingSize == 3) && (this->multiplier == 1) && (!this->decimalSeparatorAlwaysShown) && (!this->useExponentialNotation)) {
		this->isFastPath = ((this->minimumIntegerDigits == 1) && (this->maximumIntegerDigits >= 10));
		if (this->isFastPath) {
			if (this->isCurrencyFormat) {
				if ((this->minimumFractionDigits != 2) || (this->maximumFractionDigits != 2)) {
					this->isFastPath = false;
				}
			} else if ((this->minimumFractionDigits != 0) || (this->maximumFractionDigits != 3)) {
				this->isFastPath = false;
			}
		}
	} else {
		this->isFastPath = false;
	}
	resetFastPathData(fastPathWasOn);
	this->fastPathCheckNeeded = false;
	return true;
}

void DecimalFormat::resetFastPathData(bool fastPathWasOn) {
	if (this->isFastPath) {
		if (this->fastPathData == nullptr) {
			$set(this, fastPathData, $new($DecimalFormat$FastPathData));
		}
		$nc(this->fastPathData)->zeroDelta = $nc(this->symbols)->getZeroDigit() - u'0';
		$nc(this->fastPathData)->groupingChar = this->isCurrencyFormat ? $nc(this->symbols)->getMonetaryGroupingSeparator() : $nc(this->symbols)->getGroupingSeparator();
		$nc(this->fastPathData)->fractionalMaxIntBound = (this->isCurrencyFormat) ? 99 : 999;
		$nc(this->fastPathData)->fractionalScaleFactor = (this->isCurrencyFormat) ? 100.0 : 1000.0;
		bool var$0 = !$nc(this->positivePrefix)->isEmpty();
		$nc(this->fastPathData)->positiveAffixesRequired = var$0 || !$nc(this->positiveSuffix)->isEmpty();
		bool var$1 = !$nc(this->negativePrefix)->isEmpty();
		$nc(this->fastPathData)->negativeAffixesRequired = var$1 || !$nc(this->negativeSuffix)->isEmpty();
		int32_t maxNbIntegralDigits = 10;
		int32_t maxNbGroups = 3;
		int32_t var$3 = $nc(this->positivePrefix)->length();
		int32_t var$2 = $Math::max(var$3, $nc(this->negativePrefix)->length()) + maxNbIntegralDigits + maxNbGroups + 1 + this->maximumFractionDigits;
		int32_t var$5 = $nc(this->positiveSuffix)->length();
		int32_t var$4 = $Math::max(var$5, $nc(this->negativeSuffix)->length());
		int32_t containerSize = var$2 + var$4;
		$set($nc(this->fastPathData), fastPathContainer, $new($chars, containerSize));
		$set($nc(this->fastPathData), charsPositiveSuffix, $nc(this->positiveSuffix)->toCharArray());
		$set($nc(this->fastPathData), charsNegativeSuffix, $nc(this->negativeSuffix)->toCharArray());
		$set($nc(this->fastPathData), charsPositivePrefix, $nc(this->positivePrefix)->toCharArray());
		$set($nc(this->fastPathData), charsNegativePrefix, $nc(this->negativePrefix)->toCharArray());
		int32_t var$6 = $nc(this->positivePrefix)->length();
		int32_t longestPrefixLength = $Math::max(var$6, $nc(this->negativePrefix)->length());
		int32_t decimalPointIndex = maxNbIntegralDigits + maxNbGroups + longestPrefixLength;
		$nc(this->fastPathData)->integralLastIndex = decimalPointIndex - 1;
		$nc(this->fastPathData)->fractionalFirstIndex = decimalPointIndex + 1;
		$nc($nc(this->fastPathData)->fastPathContainer)->set(decimalPointIndex, this->isCurrencyFormat ? $nc(this->symbols)->getMonetaryDecimalSeparator() : $nc(this->symbols)->getDecimalSeparator());
	} else if (fastPathWasOn) {
		$set($nc(this->fastPathData), fastPathContainer, nullptr);
		$set($nc(this->fastPathData), charsPositiveSuffix, nullptr);
		$set($nc(this->fastPathData), charsNegativeSuffix, nullptr);
		$set($nc(this->fastPathData), charsPositivePrefix, nullptr);
		$set($nc(this->fastPathData), charsNegativePrefix, nullptr);
	}
}

bool DecimalFormat::exactRoundUp(double fractionalPart, int32_t scaledFractionalPartAsInt) {
	double approxMax = 0.0;
	double approxMedium = 0.0;
	double approxMin = 0.0;
	double fastTwoSumApproximation = 0.0;
	double fastTwoSumRoundOff = 0.0;
	double bVirtual = 0.0;
	if (this->isCurrencyFormat) {
		approxMax = fractionalPart * 128.0;
		approxMedium = -(fractionalPart * 32.0);
		approxMin = fractionalPart * 4.0;
	} else {
		approxMax = fractionalPart * 1024.0;
		approxMedium = -(fractionalPart * 16.0);
		approxMin = -(fractionalPart * 8.0);
	}
	if (!DecimalFormat::$assertionsDisabled && !(-approxMedium >= $Math::abs(approxMin))) {
		$throwNew($AssertionError);
	}
	fastTwoSumApproximation = approxMedium + approxMin;
	bVirtual = fastTwoSumApproximation - approxMedium;
	fastTwoSumRoundOff = approxMin - bVirtual;
	double approxS1 = fastTwoSumApproximation;
	double roundoffS1 = fastTwoSumRoundOff;
	if (!DecimalFormat::$assertionsDisabled && !(approxMax >= $Math::abs(approxS1))) {
		$throwNew($AssertionError);
	}
	fastTwoSumApproximation = approxMax + approxS1;
	bVirtual = fastTwoSumApproximation - approxMax;
	fastTwoSumRoundOff = approxS1 - bVirtual;
	double roundoff1000 = fastTwoSumRoundOff;
	double approx1000 = fastTwoSumApproximation;
	double roundoffTotal = roundoffS1 + roundoff1000;
	if (!DecimalFormat::$assertionsDisabled && !(approx1000 >= $Math::abs(roundoffTotal))) {
		$throwNew($AssertionError);
	}
	fastTwoSumApproximation = approx1000 + roundoffTotal;
	bVirtual = fastTwoSumApproximation - approx1000;
	double scaledFractionalRoundoff = roundoffTotal - bVirtual;
	if (scaledFractionalRoundoff > 0.0) {
		return true;
	} else if (scaledFractionalRoundoff < 0.0) {
		return false;
	} else if (((int32_t)(scaledFractionalPartAsInt & (uint32_t)1)) != 0) {
		return true;
	}
	return false;
}

void DecimalFormat::collectIntegralDigits(int32_t number, $chars* digitsBuffer, int32_t backwardIndex) {
	int32_t index = backwardIndex;
	int32_t q = 0;
	int32_t r = 0;
	while (number > 999) {
		q = number / 1000;
		r = number - (q << 10) + (q << 4) + (q << 3);
		number = q;
		$init($DecimalFormat$DigitArrays);
		$nc(digitsBuffer)->set(index--, $nc($DecimalFormat$DigitArrays::DigitOnes1000)->get(r));
		digitsBuffer->set(index--, $nc($DecimalFormat$DigitArrays::DigitTens1000)->get(r));
		digitsBuffer->set(index--, $nc($DecimalFormat$DigitArrays::DigitHundreds1000)->get(r));
		digitsBuffer->set(index--, $nc(this->fastPathData)->groupingChar);
	}
	$init($DecimalFormat$DigitArrays);
	$nc(digitsBuffer)->set(index, $nc($DecimalFormat$DigitArrays::DigitOnes1000)->get(number));
	if (number > 9) {
		digitsBuffer->set(--index, $nc($DecimalFormat$DigitArrays::DigitTens1000)->get(number));
		if (number > 99) {
			digitsBuffer->set(--index, $nc($DecimalFormat$DigitArrays::DigitHundreds1000)->get(number));
		}
	}
	$nc(this->fastPathData)->firstUsedIndex = index;
}

void DecimalFormat::collectFractionalDigits(int32_t number, $chars* digitsBuffer, int32_t startIndex) {
	int32_t index = startIndex;
	$init($DecimalFormat$DigitArrays);
	char16_t digitOnes = $nc($DecimalFormat$DigitArrays::DigitOnes1000)->get(number);
	char16_t digitTens = $nc($DecimalFormat$DigitArrays::DigitTens1000)->get(number);
	if (this->isCurrencyFormat) {
		$nc(digitsBuffer)->set(index++, digitTens);
		digitsBuffer->set(index++, digitOnes);
	} else if (number != 0) {
		$nc(digitsBuffer)->set(index++, $nc($DecimalFormat$DigitArrays::DigitHundreds1000)->get(number));
		if (digitOnes != u'0') {
			digitsBuffer->set(index++, digitTens);
			digitsBuffer->set(index++, digitOnes);
		} else if (digitTens != u'0') {
			digitsBuffer->set(index++, digitTens);
		}
	} else {
		--index;
	}
	$nc(this->fastPathData)->lastFreeIndex = index;
}

void DecimalFormat::addAffixes($chars* container, $chars* prefix, $chars* suffix) {
	int32_t pl = $nc(prefix)->length;
	int32_t sl = $nc(suffix)->length;
	if (pl != 0) {
		prependPrefix(prefix, pl, container);
	}
	if (sl != 0) {
		appendSuffix(suffix, sl, container);
	}
}

void DecimalFormat::prependPrefix($chars* prefix, int32_t len, $chars* container) {
	$nc(this->fastPathData)->firstUsedIndex -= len;
	int32_t startIndex = $nc(this->fastPathData)->firstUsedIndex;
	if (len == 1) {
		$nc(container)->set(startIndex, $nc(prefix)->get(0));
	} else if (len <= 4) {
		int32_t dstLower = startIndex;
		int32_t dstUpper = dstLower + len - 1;
		int32_t srcUpper = len - 1;
		$nc(container)->set(dstLower, $nc(prefix)->get(0));
		container->set(dstUpper, prefix->get(srcUpper));
		if (len > 2) {
			container->set(++dstLower, prefix->get(1));
		}
		if (len == 4) {
			container->set(--dstUpper, prefix->get(2));
		}
	} else {
		$System::arraycopy(prefix, 0, container, startIndex, len);
	}
}

void DecimalFormat::appendSuffix($chars* suffix, int32_t len, $chars* container) {
	int32_t startIndex = $nc(this->fastPathData)->lastFreeIndex;
	if (len == 1) {
		$nc(container)->set(startIndex, $nc(suffix)->get(0));
	} else if (len <= 4) {
		int32_t dstLower = startIndex;
		int32_t dstUpper = dstLower + len - 1;
		int32_t srcUpper = len - 1;
		$nc(container)->set(dstLower, $nc(suffix)->get(0));
		container->set(dstUpper, suffix->get(srcUpper));
		if (len > 2) {
			container->set(++dstLower, suffix->get(1));
		}
		if (len == 4) {
			container->set(--dstUpper, suffix->get(2));
		}
	} else {
		$System::arraycopy(suffix, 0, container, startIndex, len);
	}
	$nc(this->fastPathData)->lastFreeIndex += len;
}

void DecimalFormat::localizeDigits($chars* digitsBuffer) {
	int32_t digitsCounter = $nc(this->fastPathData)->lastFreeIndex - $nc(this->fastPathData)->fractionalFirstIndex;
	if (digitsCounter < 0) {
		digitsCounter = this->groupingSize;
	}
	for (int32_t cursor = $nc(this->fastPathData)->lastFreeIndex - 1; cursor >= $nc(this->fastPathData)->firstUsedIndex; --cursor) {
		if (digitsCounter != 0) {
			(*$nc(digitsBuffer))[cursor] += $nc(this->fastPathData)->zeroDelta;
			--digitsCounter;
		} else {
			digitsCounter = this->groupingSize;
		}
	}
}

void DecimalFormat::fastDoubleFormat(double d, bool negative) {
	$var($chars, container, $nc(this->fastPathData)->fastPathContainer);
	int32_t integralPartAsInt = $cast(int32_t, d);
	double exactFractionalPart = d - (double)integralPartAsInt;
	double scaledFractional = exactFractionalPart * $nc(this->fastPathData)->fractionalScaleFactor;
	int32_t fractionalPartAsInt = $cast(int32_t, scaledFractional);
	scaledFractional = scaledFractional - (double)fractionalPartAsInt;
	bool roundItUp = false;
	if (scaledFractional >= 0.5) {
		if (scaledFractional == 0.5) {
			roundItUp = exactRoundUp(exactFractionalPart, fractionalPartAsInt);
		} else {
			roundItUp = true;
		}
		if (roundItUp) {
			if (fractionalPartAsInt < $nc(this->fastPathData)->fractionalMaxIntBound) {
				++fractionalPartAsInt;
			} else {
				fractionalPartAsInt = 0;
				++integralPartAsInt;
			}
		}
	}
	collectFractionalDigits(fractionalPartAsInt, container, $nc(this->fastPathData)->fractionalFirstIndex);
	collectIntegralDigits(integralPartAsInt, container, $nc(this->fastPathData)->integralLastIndex);
	if ($nc(this->fastPathData)->zeroDelta != 0) {
		localizeDigits(container);
	}
	if (negative) {
		if ($nc(this->fastPathData)->negativeAffixesRequired) {
			addAffixes(container, $nc(this->fastPathData)->charsNegativePrefix, $nc(this->fastPathData)->charsNegativeSuffix);
		}
	} else if ($nc(this->fastPathData)->positiveAffixesRequired) {
		addAffixes(container, $nc(this->fastPathData)->charsPositivePrefix, $nc(this->fastPathData)->charsPositiveSuffix);
	}
}

$String* DecimalFormat::fastFormat(double d) {
	bool isDataSet = false;
	if (this->fastPathCheckNeeded) {
		isDataSet = checkAndSetFastPathStatus();
	}
	if (!this->isFastPath) {
		return nullptr;
	}
	if (!$Double::isFinite(d)) {
		return nullptr;
	}
	bool negative = false;
	if (d < 0.0) {
		negative = true;
		d = -d;
	} else if (d == 0.0) {
		negative = ($Math::copySign(1.0, d) == -1.0);
		d = +0.0;
	}
	if (d > DecimalFormat::MAX_INT_AS_DOUBLE) {
		return nullptr;
	} else {
		if (!isDataSet) {
			resetFastPathData(this->isFastPath);
		}
		fastDoubleFormat(d, negative);
	}
	return $new($String, $nc(this->fastPathData)->fastPathContainer, $nc(this->fastPathData)->firstUsedIndex, $nc(this->fastPathData)->lastFreeIndex - $nc(this->fastPathData)->firstUsedIndex);
}

void DecimalFormat::setDigitList($Number* number, bool isNegative, int32_t maxDigits) {
	if ($instanceOf($Double, number)) {
		$nc(this->digitList)->set(isNegative, $nc(($cast($Double, number)))->doubleValue(), maxDigits, true);
	} else if ($instanceOf($BigDecimal, number)) {
		$nc(this->digitList)->set(isNegative, $cast($BigDecimal, number), maxDigits, true);
	} else if ($instanceOf($Long, number)) {
		$nc(this->digitList)->set(isNegative, $nc(($cast($Long, number)))->longValue(), maxDigits);
	} else if ($instanceOf($BigInteger, number)) {
		$nc(this->digitList)->set(isNegative, $cast($BigInteger, number), maxDigits);
	}
}

$StringBuffer* DecimalFormat::subformat($StringBuffer* result, $Format$FieldDelegate* delegate, bool isNegative, bool isInteger, int32_t maxIntDigits, int32_t minIntDigits, int32_t maxFraDigits, int32_t minFraDigits) {
	$useLocalCurrentObjectStackCache();
	if (isNegative) {
		$init($NumberFormat$Field);
		append(result, this->negativePrefix, delegate, $(getNegativePrefixFieldPositions()), $NumberFormat$Field::SIGN);
	} else {
		$init($NumberFormat$Field);
		append(result, this->positivePrefix, delegate, $(getPositivePrefixFieldPositions()), $NumberFormat$Field::SIGN);
	}
	subformatNumber(result, delegate, isNegative, isInteger, maxIntDigits, minIntDigits, maxFraDigits, minFraDigits);
	if (isNegative) {
		$init($NumberFormat$Field);
		append(result, this->negativeSuffix, delegate, $(getNegativeSuffixFieldPositions()), $NumberFormat$Field::SIGN);
	} else {
		$init($NumberFormat$Field);
		append(result, this->positiveSuffix, delegate, $(getPositiveSuffixFieldPositions()), $NumberFormat$Field::SIGN);
	}
	return result;
}

void DecimalFormat::subformatNumber($StringBuffer* result, $Format$FieldDelegate* delegate, bool isNegative, bool isInteger, int32_t maxIntDigits, int32_t minIntDigits, int32_t maxFraDigits, int32_t minFraDigits) {
	$useLocalCurrentObjectStackCache();
	char16_t grouping = this->isCurrencyFormat ? $nc(this->symbols)->getMonetaryGroupingSeparator() : $nc(this->symbols)->getGroupingSeparator();
	char16_t zero = $nc(this->symbols)->getZeroDigit();
	int32_t zeroDelta = zero - u'0';
	char16_t decimal = this->isCurrencyFormat ? $nc(this->symbols)->getMonetaryDecimalSeparator() : $nc(this->symbols)->getDecimalSeparator();
	if ($nc(this->digitList)->isZero()) {
		$nc(this->digitList)->decimalAt = 0;
	}
	if (this->useExponentialNotation) {
		int32_t iFieldStart = $nc(result)->length();
		int32_t iFieldEnd = -1;
		int32_t fFieldStart = -1;
		int32_t exponent = $nc(this->digitList)->decimalAt;
		int32_t repeat = maxIntDigits;
		int32_t minimumIntegerDigits = minIntDigits;
		if (repeat > 1 && repeat > minIntDigits) {
			if (exponent >= 1) {
				exponent = ($div((exponent - 1), repeat)) * repeat;
			} else {
				exponent = ($div((exponent - repeat), repeat)) * repeat;
			}
			minimumIntegerDigits = 1;
		} else {
			exponent -= minimumIntegerDigits;
		}
		int32_t minimumDigits = minIntDigits + minFraDigits;
		if (minimumDigits < 0) {
			minimumDigits = $Integer::MAX_VALUE;
		}
		int32_t integerDigits = $nc(this->digitList)->isZero() ? minimumIntegerDigits : $nc(this->digitList)->decimalAt - exponent;
		if (minimumDigits < integerDigits) {
			minimumDigits = integerDigits;
		}
		int32_t totalDigits = $nc(this->digitList)->count;
		if (minimumDigits > totalDigits) {
			totalDigits = minimumDigits;
		}
		bool addedDecimalSeparator = false;
		for (int32_t i = 0; i < totalDigits; ++i) {
			if (i == integerDigits) {
				iFieldEnd = result->length();
				result->append(decimal);
				addedDecimalSeparator = true;
				fFieldStart = result->length();
			}
			result->append((i < $nc(this->digitList)->count) ? (char16_t)($nc($nc(this->digitList)->digits)->get(i) + zeroDelta) : zero);
		}
		if (this->decimalSeparatorAlwaysShown && totalDigits == integerDigits) {
			iFieldEnd = result->length();
			result->append(decimal);
			addedDecimalSeparator = true;
			fFieldStart = result->length();
		}
		if (iFieldEnd == -1) {
			iFieldEnd = result->length();
		}
		$init($NumberFormat$Field);
		$nc(delegate)->formatted($NumberFormat::INTEGER_FIELD, $NumberFormat$Field::INTEGER, $NumberFormat$Field::INTEGER, iFieldStart, iFieldEnd, result);
		if (addedDecimalSeparator) {
			delegate->formatted($NumberFormat$Field::DECIMAL_SEPARATOR, $NumberFormat$Field::DECIMAL_SEPARATOR, iFieldEnd, fFieldStart, result);
		}
		if (fFieldStart == -1) {
			fFieldStart = result->length();
		}
		delegate->formatted($NumberFormat::FRACTION_FIELD, $NumberFormat$Field::FRACTION, $NumberFormat$Field::FRACTION, fFieldStart, result->length(), result);
		int32_t fieldStart = result->length();
		result->append($($nc(this->symbols)->getExponentSeparator()));
		delegate->formatted($NumberFormat$Field::EXPONENT_SYMBOL, $NumberFormat$Field::EXPONENT_SYMBOL, fieldStart, result->length(), result);
		if ($nc(this->digitList)->isZero()) {
			exponent = 0;
		}
		bool negativeExponent = exponent < 0;
		if (negativeExponent) {
			exponent = -exponent;
			fieldStart = result->length();
			result->append($($nc(this->symbols)->getMinusSignText()));
			delegate->formatted($NumberFormat$Field::EXPONENT_SIGN, $NumberFormat$Field::EXPONENT_SIGN, fieldStart, result->length(), result);
		}
		$nc(this->digitList)->set(negativeExponent, exponent);
		int32_t eFieldStart = result->length();
		for (int32_t i = $nc(this->digitList)->decimalAt; i < this->minExponentDigits; ++i) {
			result->append(zero);
		}
		for (int32_t i = 0; i < $nc(this->digitList)->decimalAt; ++i) {
			result->append((i < $nc(this->digitList)->count) ? (char16_t)($nc($nc(this->digitList)->digits)->get(i) + zeroDelta) : zero);
		}
		delegate->formatted($NumberFormat$Field::EXPONENT, $NumberFormat$Field::EXPONENT, eFieldStart, result->length(), result);
	} else {
		int32_t iFieldStart = $nc(result)->length();
		int32_t count = minIntDigits;
		int32_t digitIndex = 0;
		if ($nc(this->digitList)->decimalAt > 0 && count < $nc(this->digitList)->decimalAt) {
			count = $nc(this->digitList)->decimalAt;
		}
		if (count > maxIntDigits) {
			count = maxIntDigits;
			digitIndex = $nc(this->digitList)->decimalAt - count;
		}
		int32_t sizeBeforeIntegerPart = result->length();
		for (int32_t i = count - 1; i >= 0; --i) {
			if (i < $nc(this->digitList)->decimalAt && digitIndex < $nc(this->digitList)->count) {
				result->append((char16_t)($nc($nc(this->digitList)->digits)->get(digitIndex++) + zeroDelta));
			} else {
				result->append(zero);
			}
			if (isGroupingUsed() && i > 0 && (this->groupingSize != 0) && ($mod(i, this->groupingSize) == 0)) {
				int32_t gStart = result->length();
				result->append(grouping);
				$init($NumberFormat$Field);
				$nc(delegate)->formatted($NumberFormat$Field::GROUPING_SEPARATOR, $NumberFormat$Field::GROUPING_SEPARATOR, gStart, result->length(), result);
			}
		}
		bool fractionPresent = (minFraDigits > 0) || (!isInteger && digitIndex < $nc(this->digitList)->count);
		if (!fractionPresent && result->length() == sizeBeforeIntegerPart) {
			result->append(zero);
		}
		$init($NumberFormat$Field);
		$nc(delegate)->formatted($NumberFormat::INTEGER_FIELD, $NumberFormat$Field::INTEGER, $NumberFormat$Field::INTEGER, iFieldStart, result->length(), result);
		int32_t sStart = result->length();
		if (this->decimalSeparatorAlwaysShown || fractionPresent) {
			result->append(decimal);
		}
		if (sStart != result->length()) {
			delegate->formatted($NumberFormat$Field::DECIMAL_SEPARATOR, $NumberFormat$Field::DECIMAL_SEPARATOR, sStart, result->length(), result);
		}
		int32_t fFieldStart = result->length();
		for (int32_t i = 0; i < maxFraDigits; ++i) {
			if (i >= minFraDigits && (isInteger || digitIndex >= $nc(this->digitList)->count)) {
				break;
			}
			if (-1 - i > ($nc(this->digitList)->decimalAt - 1)) {
				result->append(zero);
				continue;
			}
			if (!isInteger && digitIndex < $nc(this->digitList)->count) {
				result->append((char16_t)($nc($nc(this->digitList)->digits)->get(digitIndex++) + zeroDelta));
			} else {
				result->append(zero);
			}
		}
		delegate->formatted($NumberFormat::FRACTION_FIELD, $NumberFormat$Field::FRACTION, $NumberFormat$Field::FRACTION, fFieldStart, result->length(), result);
	}
}

void DecimalFormat::append($StringBuffer* result, $String* string, $Format$FieldDelegate* delegate, $FieldPositionArray* positions, $Format$Field* signAttribute) {
	$useLocalCurrentObjectStackCache();
	int32_t start = $nc(result)->length();
	if (!$nc(string)->isEmpty()) {
		result->append(string);
		{
			int32_t counter = 0;
			int32_t max = $nc(positions)->length;
			for (; counter < max; ++counter) {
				$var($FieldPosition, fp, positions->get(counter));
				$var($Format$Field, attribute, $nc(fp)->getFieldAttribute());
				$init($NumberFormat$Field);
				if ($equals(attribute, $NumberFormat$Field::SIGN)) {
					$assign(attribute, signAttribute);
				}
				$var($Format$Field, var$0, attribute);
				$var($Object, var$1, $of(attribute));
				int32_t var$2 = start + fp->getBeginIndex();
				$nc(delegate)->formatted(var$0, var$1, var$2, start + fp->getEndIndex(), result);
			}
		}
	}
}

$Number* DecimalFormat::parse($String* text, $ParsePosition* pos) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(pos)->index;
	$var($String, var$1, $nc(this->symbols)->getNaN());
	if ($nc(text)->regionMatches(var$0, var$1, 0, $nc($($nc(this->symbols)->getNaN()))->length())) {
		$nc(pos)->index = pos->index + $nc($($nc(this->symbols)->getNaN()))->length();
		$init($Double);
		return $Double::valueOf($Double::NaN);
	}
	$var($booleans, status, $new($booleans, DecimalFormat::STATUS_LENGTH));
	if (!subparse(text, pos, this->positivePrefix, this->negativePrefix, this->digitList, false, status)) {
		return nullptr;
	}
	if (status->get(DecimalFormat::STATUS_INFINITE)) {
		if (status->get(DecimalFormat::STATUS_POSITIVE) == (this->multiplier >= 0)) {
			$init($Double);
			return $Double::valueOf($Double::POSITIVE_INFINITY);
		} else {
			$init($Double);
			return $Double::valueOf($Double::NEGATIVE_INFINITY);
		}
	}
	if (this->multiplier == 0) {
		if ($nc(this->digitList)->isZero()) {
			$init($Double);
			return $Double::valueOf($Double::NaN);
		} else if (status->get(DecimalFormat::STATUS_POSITIVE)) {
			$init($Double);
			return $Double::valueOf($Double::POSITIVE_INFINITY);
		} else {
			$init($Double);
			return $Double::valueOf($Double::NEGATIVE_INFINITY);
		}
	}
	if (isParseBigDecimal()) {
		$var($BigDecimal, bigDecimalResult, $nc(this->digitList)->getBigDecimal());
		if (this->multiplier != 1) {
			try {
				$assign(bigDecimalResult, $nc(bigDecimalResult)->divide($(getBigDecimalMultiplier())));
			} catch ($ArithmeticException&) {
				$var($ArithmeticException, e, $catch());
				$assign(bigDecimalResult, $nc(bigDecimalResult)->divide($(getBigDecimalMultiplier()), this->roundingMode));
			}
		}
		if (!status->get(DecimalFormat::STATUS_POSITIVE)) {
			$assign(bigDecimalResult, $nc(bigDecimalResult)->negate());
		}
		return bigDecimalResult;
	} else {
		bool gotDouble = true;
		bool gotLongMinimum = false;
		double doubleResult = 0.0;
		int64_t longResult = 0;
		if ($nc(this->digitList)->fitsIntoLong(status->get(DecimalFormat::STATUS_POSITIVE), isParseIntegerOnly())) {
			gotDouble = false;
			longResult = $nc(this->digitList)->getLong();
			if (longResult < 0) {
				gotLongMinimum = true;
			}
		} else {
			doubleResult = $nc(this->digitList)->getDouble();
		}
		if (this->multiplier != 1) {
			if (gotDouble) {
				doubleResult /= this->multiplier;
			} else if ($mod(longResult, this->multiplier) == 0) {
				longResult /= this->multiplier;
			} else {
				doubleResult = ((double)longResult) / this->multiplier;
				gotDouble = true;
			}
		}
		if (!status->get(DecimalFormat::STATUS_POSITIVE) && !gotLongMinimum) {
			doubleResult = -doubleResult;
			longResult = -longResult;
		}
		if (this->multiplier != 1 && gotDouble) {
			longResult = $cast(int64_t, doubleResult);
			gotDouble = ((doubleResult != (double)longResult) || (doubleResult == 0.0 && 1 / doubleResult < 0.0)) && !isParseIntegerOnly();
		}
		return gotDouble ? static_cast<$Number*>($Double::valueOf(doubleResult)) : static_cast<$Number*>($Long::valueOf(longResult));
	}
}

$BigInteger* DecimalFormat::getBigIntegerMultiplier() {
	if (this->bigIntegerMultiplier == nullptr) {
		$set(this, bigIntegerMultiplier, $BigInteger::valueOf((int64_t)this->multiplier));
	}
	return this->bigIntegerMultiplier;
}

$BigDecimal* DecimalFormat::getBigDecimalMultiplier() {
	if (this->bigDecimalMultiplier == nullptr) {
		$set(this, bigDecimalMultiplier, $new($BigDecimal, this->multiplier));
	}
	return this->bigDecimalMultiplier;
}

bool DecimalFormat::subparse($String* text, $ParsePosition* parsePosition, $String* positivePrefix, $String* negativePrefix, $DigitList* digits, bool isExponent, $booleans* status) {
	int32_t position = $nc(parsePosition)->index;
	int32_t oldStart = parsePosition->index;
	bool gotPositive = false;
	bool gotNegative = false;
	gotPositive = $nc(text)->regionMatches(position, positivePrefix, 0, $nc(positivePrefix)->length());
	gotNegative = text->regionMatches(position, negativePrefix, 0, $nc(negativePrefix)->length());
	if (gotPositive && gotNegative) {
		int32_t var$0 = $nc(positivePrefix)->length();
		if (var$0 > $nc(negativePrefix)->length()) {
			gotNegative = false;
		} else {
			int32_t var$2 = positivePrefix->length();
			if (var$2 < negativePrefix->length()) {
				gotPositive = false;
			}
		}
	}
	if (gotPositive) {
		position += $nc(positivePrefix)->length();
	} else if (gotNegative) {
		position += $nc(negativePrefix)->length();
	} else {
		parsePosition->errorIndex = position;
		return false;
	}
	position = subparseNumber(text, position, digits, true, isExponent, status);
	if (position == -1) {
		parsePosition->index = oldStart;
		parsePosition->errorIndex = oldStart;
		return false;
	}
	if (!isExponent) {
		if (gotPositive) {
			gotPositive = text->regionMatches(position, this->positiveSuffix, 0, $nc(this->positiveSuffix)->length());
		}
		if (gotNegative) {
			gotNegative = text->regionMatches(position, this->negativeSuffix, 0, $nc(this->negativeSuffix)->length());
		}
		if (gotPositive && gotNegative) {
			int32_t var$3 = $nc(this->positiveSuffix)->length();
			if (var$3 > $nc(this->negativeSuffix)->length()) {
				gotNegative = false;
			} else {
				int32_t var$5 = $nc(this->positiveSuffix)->length();
				if (var$5 < $nc(this->negativeSuffix)->length()) {
					gotPositive = false;
				}
			}
		}
		if (gotPositive == gotNegative) {
			parsePosition->errorIndex = position;
			return false;
		}
		parsePosition->index = position + (gotPositive ? $nc(this->positiveSuffix)->length() : $nc(this->negativeSuffix)->length());
	} else {
		parsePosition->index = position;
	}
	$nc(status)->set(DecimalFormat::STATUS_POSITIVE, gotPositive);
	if (parsePosition->index == oldStart) {
		parsePosition->errorIndex = position;
		return false;
	}
	return true;
}

int32_t DecimalFormat::subparseNumber($String* text, int32_t position, $DigitList* digits, bool checkExponent, bool isExponent, $booleans* status) {
	$useLocalCurrentObjectStackCache();
	$nc(status)->set(DecimalFormat::STATUS_INFINITE, false);
	bool var$0 = !isExponent;
	if (var$0) {
		int32_t var$1 = position;
		$var($String, var$2, $nc(this->symbols)->getInfinity());
		var$0 = $nc(text)->regionMatches(var$1, var$2, 0, $nc($($nc(this->symbols)->getInfinity()))->length());
	}
	if (var$0) {
		position += $nc($($nc(this->symbols)->getInfinity()))->length();
		status->set(DecimalFormat::STATUS_INFINITE, true);
	} else {
		$nc(digits)->decimalAt = (digits->count = 0);
		char16_t zero = $nc(this->symbols)->getZeroDigit();
		char16_t decimal = this->isCurrencyFormat ? $nc(this->symbols)->getMonetaryDecimalSeparator() : $nc(this->symbols)->getDecimalSeparator();
		char16_t grouping = this->isCurrencyFormat ? $nc(this->symbols)->getMonetaryGroupingSeparator() : $nc(this->symbols)->getGroupingSeparator();
		$var($String, exponentString, $nc(this->symbols)->getExponentSeparator());
		bool sawDecimal = false;
		bool sawExponent = false;
		bool sawDigit = false;
		int32_t exponent = 0;
		int32_t digitCount = 0;
		int32_t backup = -1;
		for (; position < text->length(); ++position) {
			char16_t ch = text->charAt(position);
			int32_t digit = ch - zero;
			if (digit < 0 || digit > 9) {
				digit = $Character::digit(ch, 10);
			}
			if (digit == 0) {
				backup = -1;
				sawDigit = true;
				if (digits->count == 0) {
					if (!sawDecimal) {
						continue;
					}
					--digits->decimalAt;
				} else {
					++digitCount;
					digits->append((char16_t)(digit + u'0'));
				}
			} else if (digit > 0 && digit <= 9) {
				sawDigit = true;
				++digitCount;
				digits->append((char16_t)(digit + u'0'));
				backup = -1;
			} else if (!isExponent && ch == decimal) {
				if (isParseIntegerOnly() || sawDecimal) {
					break;
				}
				digits->decimalAt = digitCount;
				sawDecimal = true;
			} else if (!isExponent && ch == grouping && isGroupingUsed()) {
				if (sawDecimal) {
					break;
				}
				backup = position;
			} else if (checkExponent && !isExponent && text->regionMatches(position, exponentString, 0, $nc(exponentString)->length()) && !sawExponent) {
				$var($ParsePosition, pos, $new($ParsePosition, position + $nc(exponentString)->length()));
				$var($booleans, stat, $new($booleans, DecimalFormat::STATUS_LENGTH));
				$var($DigitList, exponentDigits, $new($DigitList));
				bool var$3 = subparse(text, pos, ""_s, $($nc(this->symbols)->getMinusSignText()), exponentDigits, true, stat);
				if (var$3 && exponentDigits->fitsIntoLong(stat->get(DecimalFormat::STATUS_POSITIVE), true)) {
					position = pos->index;
					exponent = (int32_t)exponentDigits->getLong();
					if (!stat->get(DecimalFormat::STATUS_POSITIVE)) {
						exponent = -exponent;
					}
					sawExponent = true;
				}
				break;
			} else {
				break;
			}
		}
		if (backup != -1) {
			position = backup;
		}
		if (!sawDecimal) {
			digits->decimalAt = digitCount;
		}
		digits->decimalAt += exponent;
		if (!sawDigit && digitCount == 0) {
			return -1;
		}
	}
	return position;
}

$DecimalFormatSymbols* DecimalFormat::getDecimalFormatSymbols() {
	try {
		return $cast($DecimalFormatSymbols, $nc(this->symbols)->clone());
	} catch ($Exception&) {
		$var($Exception, foo, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

void DecimalFormat::setDecimalFormatSymbols($DecimalFormatSymbols* newSymbols) {
	try {
		$set(this, symbols, $cast($DecimalFormatSymbols, $nc(newSymbols)->clone()));
		expandAffixes();
		this->fastPathCheckNeeded = true;
	} catch ($Exception&) {
		$catch();
	}
}

$String* DecimalFormat::getPositivePrefix() {
	return this->positivePrefix;
}

void DecimalFormat::setPositivePrefix($String* newValue) {
	$set(this, positivePrefix, newValue);
	$set(this, posPrefixPattern, nullptr);
	$set(this, positivePrefixFieldPositions, nullptr);
	this->fastPathCheckNeeded = true;
}

$FieldPositionArray* DecimalFormat::getPositivePrefixFieldPositions() {
	if (this->positivePrefixFieldPositions == nullptr) {
		if (this->posPrefixPattern != nullptr) {
			$set(this, positivePrefixFieldPositions, expandAffix(this->posPrefixPattern));
		} else {
			$set(this, positivePrefixFieldPositions, DecimalFormat::EmptyFieldPositionArray);
		}
	}
	return this->positivePrefixFieldPositions;
}

$String* DecimalFormat::getNegativePrefix() {
	return this->negativePrefix;
}

void DecimalFormat::setNegativePrefix($String* newValue) {
	$set(this, negativePrefix, newValue);
	$set(this, negPrefixPattern, nullptr);
	this->fastPathCheckNeeded = true;
}

$FieldPositionArray* DecimalFormat::getNegativePrefixFieldPositions() {
	if (this->negativePrefixFieldPositions == nullptr) {
		if (this->negPrefixPattern != nullptr) {
			$set(this, negativePrefixFieldPositions, expandAffix(this->negPrefixPattern));
		} else {
			$set(this, negativePrefixFieldPositions, DecimalFormat::EmptyFieldPositionArray);
		}
	}
	return this->negativePrefixFieldPositions;
}

$String* DecimalFormat::getPositiveSuffix() {
	return this->positiveSuffix;
}

void DecimalFormat::setPositiveSuffix($String* newValue) {
	$set(this, positiveSuffix, newValue);
	$set(this, posSuffixPattern, nullptr);
	this->fastPathCheckNeeded = true;
}

$FieldPositionArray* DecimalFormat::getPositiveSuffixFieldPositions() {
	if (this->positiveSuffixFieldPositions == nullptr) {
		if (this->posSuffixPattern != nullptr) {
			$set(this, positiveSuffixFieldPositions, expandAffix(this->posSuffixPattern));
		} else {
			$set(this, positiveSuffixFieldPositions, DecimalFormat::EmptyFieldPositionArray);
		}
	}
	return this->positiveSuffixFieldPositions;
}

$String* DecimalFormat::getNegativeSuffix() {
	return this->negativeSuffix;
}

void DecimalFormat::setNegativeSuffix($String* newValue) {
	$set(this, negativeSuffix, newValue);
	$set(this, negSuffixPattern, nullptr);
	this->fastPathCheckNeeded = true;
}

$FieldPositionArray* DecimalFormat::getNegativeSuffixFieldPositions() {
	if (this->negativeSuffixFieldPositions == nullptr) {
		if (this->negSuffixPattern != nullptr) {
			$set(this, negativeSuffixFieldPositions, expandAffix(this->negSuffixPattern));
		} else {
			$set(this, negativeSuffixFieldPositions, DecimalFormat::EmptyFieldPositionArray);
		}
	}
	return this->negativeSuffixFieldPositions;
}

int32_t DecimalFormat::getMultiplier() {
	return this->multiplier;
}

void DecimalFormat::setMultiplier(int32_t newValue) {
	this->multiplier = newValue;
	$set(this, bigDecimalMultiplier, nullptr);
	$set(this, bigIntegerMultiplier, nullptr);
	this->fastPathCheckNeeded = true;
}

void DecimalFormat::setGroupingUsed(bool newValue) {
	$NumberFormat::setGroupingUsed(newValue);
	this->fastPathCheckNeeded = true;
}

int32_t DecimalFormat::getGroupingSize() {
	return this->groupingSize;
}

void DecimalFormat::setGroupingSize(int32_t newValue) {
	$useLocalCurrentObjectStackCache();
	if (newValue < 0 || newValue > $Byte::MAX_VALUE) {
		$throwNew($IllegalArgumentException, $$str({"newValue is out of valid range. value: "_s, $$str(newValue)}));
	}
	this->groupingSize = (int8_t)newValue;
	this->fastPathCheckNeeded = true;
}

bool DecimalFormat::isDecimalSeparatorAlwaysShown() {
	return this->decimalSeparatorAlwaysShown;
}

void DecimalFormat::setDecimalSeparatorAlwaysShown(bool newValue) {
	this->decimalSeparatorAlwaysShown = newValue;
	this->fastPathCheckNeeded = true;
}

bool DecimalFormat::isParseBigDecimal() {
	return this->parseBigDecimal;
}

void DecimalFormat::setParseBigDecimal(bool newValue) {
	this->parseBigDecimal = newValue;
}

$Object* DecimalFormat::clone() {
	$var(DecimalFormat, other, $cast(DecimalFormat, $NumberFormat::clone()));
	$set($nc(other), symbols, $cast($DecimalFormatSymbols, $nc(this->symbols)->clone()));
	$set(other, digitList, $cast($DigitList, $nc(this->digitList)->clone()));
	other->fastPathCheckNeeded = true;
	other->isFastPath = false;
	$set(other, fastPathData, nullptr);
	return $of(other);
}

bool DecimalFormat::equals(Object$* obj) {
	if (obj == nullptr) {
		return false;
	}
	if (!$NumberFormat::equals(obj)) {
		return false;
	}
	$var(DecimalFormat, other, $cast(DecimalFormat, obj));
	bool var$4 = (this->posPrefixPattern == $nc(other)->posPrefixPattern && $nc(this->positivePrefix)->equals(other->positivePrefix));
	bool var$3 = (var$4 || (this->posPrefixPattern != nullptr && $nc(this->posPrefixPattern)->equals($nc(other)->posPrefixPattern)));
	if (var$3) {
		bool var$5 = (this->posSuffixPattern == $nc(other)->posSuffixPattern && $nc(this->positiveSuffix)->equals(other->positiveSuffix));
		var$3 = (var$5 || (this->posSuffixPattern != nullptr && $nc(this->posSuffixPattern)->equals($nc(other)->posSuffixPattern)));
	}
	bool var$2 = var$3;
	if (var$2) {
		bool var$6 = (this->negPrefixPattern == $nc(other)->negPrefixPattern && $nc(this->negativePrefix)->equals(other->negativePrefix));
		var$2 = (var$6 || (this->negPrefixPattern != nullptr && $nc(this->negPrefixPattern)->equals($nc(other)->negPrefixPattern)));
	}
	bool var$1 = var$2;
	if (var$1) {
		bool var$7 = (this->negSuffixPattern == $nc(other)->negSuffixPattern && $nc(this->negativeSuffix)->equals(other->negativeSuffix));
		var$1 = (var$7 || (this->negSuffixPattern != nullptr && $nc(this->negSuffixPattern)->equals($nc(other)->negSuffixPattern)));
	}
	bool var$0 = var$1 && this->multiplier == $nc(other)->multiplier && this->groupingSize == other->groupingSize && this->decimalSeparatorAlwaysShown == other->decimalSeparatorAlwaysShown && this->parseBigDecimal == other->parseBigDecimal && this->useExponentialNotation == other->useExponentialNotation && (!this->useExponentialNotation || this->minExponentDigits == $nc(other)->minExponentDigits) && this->maximumIntegerDigits == other->maximumIntegerDigits && this->minimumIntegerDigits == other->minimumIntegerDigits && this->maximumFractionDigits == other->maximumFractionDigits && this->minimumFractionDigits == other->minimumFractionDigits && this->roundingMode == other->roundingMode;
	return var$0 && $nc(this->symbols)->equals(other->symbols);
}

int32_t DecimalFormat::hashCode() {
	int32_t var$0 = $NumberFormat::hashCode() * 37;
	return var$0 + $nc(this->positivePrefix)->hashCode();
}

$String* DecimalFormat::toPattern() {
	return toPattern(false);
}

$String* DecimalFormat::toLocalizedPattern() {
	return toPattern(true);
}

void DecimalFormat::expandAffixes() {
	$var($StringBuffer, buffer, $new($StringBuffer));
	if (this->posPrefixPattern != nullptr) {
		$set(this, positivePrefix, expandAffix(this->posPrefixPattern, buffer));
		$set(this, positivePrefixFieldPositions, nullptr);
	}
	if (this->posSuffixPattern != nullptr) {
		$set(this, positiveSuffix, expandAffix(this->posSuffixPattern, buffer));
		$set(this, positiveSuffixFieldPositions, nullptr);
	}
	if (this->negPrefixPattern != nullptr) {
		$set(this, negativePrefix, expandAffix(this->negPrefixPattern, buffer));
		$set(this, negativePrefixFieldPositions, nullptr);
	}
	if (this->negSuffixPattern != nullptr) {
		$set(this, negativeSuffix, expandAffix(this->negSuffixPattern, buffer));
		$set(this, negativeSuffixFieldPositions, nullptr);
	}
}

$String* DecimalFormat::expandAffix($String* pattern, $StringBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	$nc(buffer)->setLength(0);
	for (int32_t i = 0; i < $nc(pattern)->length();) {
		char16_t c = pattern->charAt(i++);
		if (c == DecimalFormat::QUOTE) {
			c = pattern->charAt(i++);
			switch (c) {
			case DecimalFormat::CURRENCY_SIGN:
				{
					bool var$0 = i < pattern->length();
					if (var$0 && pattern->charAt(i) == DecimalFormat::CURRENCY_SIGN) {
						++i;
						buffer->append($($nc(this->symbols)->getInternationalCurrencySymbol()));
					} else {
						buffer->append($($nc(this->symbols)->getCurrencySymbol()));
					}
					continue;
				}
			case DecimalFormat::PATTERN_PERCENT:
				{
					buffer->append($($nc(this->symbols)->getPercentText()));
					continue;
				}
			case DecimalFormat::PATTERN_PER_MILLE:
				{
					buffer->append($($nc(this->symbols)->getPerMillText()));
					continue;
				}
			case DecimalFormat::PATTERN_MINUS:
				{
					buffer->append($($nc(this->symbols)->getMinusSignText()));
					continue;
				}
			}
		}
		buffer->append(c);
	}
	return buffer->toString();
}

$FieldPositionArray* DecimalFormat::expandAffix($String* pattern) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, positions, nullptr);
	int32_t stringIndex = 0;
	for (int32_t i = 0; i < $nc(pattern)->length();) {
		char16_t c = pattern->charAt(i++);
		if (c == DecimalFormat::QUOTE) {
			$var($Format$Field, fieldID, nullptr);
			$var($String, string, nullptr);
			c = pattern->charAt(i++);
			switch (c) {
			case DecimalFormat::CURRENCY_SIGN:
				{
					bool var$0 = i < pattern->length();
					if (var$0 && pattern->charAt(i) == DecimalFormat::CURRENCY_SIGN) {
						++i;
						$assign(string, $nc(this->symbols)->getInternationalCurrencySymbol());
					} else {
						$assign(string, $nc(this->symbols)->getCurrencySymbol());
					}
					$init($NumberFormat$Field);
					$assign(fieldID, $NumberFormat$Field::CURRENCY);
					break;
				}
			case DecimalFormat::PATTERN_PERCENT:
				{
					$assign(string, $nc(this->symbols)->getPercentText());
					$init($NumberFormat$Field);
					$assign(fieldID, $NumberFormat$Field::PERCENT);
					break;
				}
			case DecimalFormat::PATTERN_PER_MILLE:
				{
					$assign(string, $nc(this->symbols)->getPerMillText());
					$init($NumberFormat$Field);
					$assign(fieldID, $NumberFormat$Field::PERMILLE);
					break;
				}
			case DecimalFormat::PATTERN_MINUS:
				{
					$assign(string, $nc(this->symbols)->getMinusSignText());
					$init($NumberFormat$Field);
					$assign(fieldID, $NumberFormat$Field::SIGN);
					break;
				}
			}
			if (fieldID != nullptr && !$nc(string)->isEmpty()) {
				if (positions == nullptr) {
					$assign(positions, $new($ArrayList, 2));
				}
				$var($FieldPosition, fp, $new($FieldPosition, fieldID));
				fp->setBeginIndex(stringIndex);
				fp->setEndIndex(stringIndex + string->length());
				$nc(positions)->add(fp);
				stringIndex += string->length();
				continue;
			}
		}
		++stringIndex;
	}
	if (positions != nullptr) {
		return $fcast($FieldPositionArray, positions->toArray(DecimalFormat::EmptyFieldPositionArray));
	}
	return DecimalFormat::EmptyFieldPositionArray;
}

void DecimalFormat::appendAffix($StringBuffer* buffer, $String* affixPattern, $String* expAffix, bool localized) {
	$useLocalCurrentObjectStackCache();
	if (affixPattern == nullptr) {
		appendAffix(buffer, expAffix, localized);
	} else {
		int32_t i = 0;
		for (int32_t pos = 0; pos < $nc(affixPattern)->length(); pos = i) {
			i = affixPattern->indexOf((int32_t)DecimalFormat::QUOTE, pos);
			if (i < 0) {
				appendAffix(buffer, $(affixPattern->substring(pos)), localized);
				break;
			}
			if (i > pos) {
				appendAffix(buffer, $(affixPattern->substring(pos, i)), localized);
			}
			char16_t c = affixPattern->charAt(++i);
			++i;
			if (c == DecimalFormat::QUOTE) {
				$nc(buffer)->append(c);
			} else {
				bool var$1 = c == DecimalFormat::CURRENCY_SIGN && i < affixPattern->length();
				if (var$1 && affixPattern->charAt(i) == DecimalFormat::CURRENCY_SIGN) {
					++i;
					$nc(buffer)->append(c);
				} else if (localized) {
					switch (c) {
					case DecimalFormat::PATTERN_PERCENT:
						{
							$nc(buffer)->append($($nc(this->symbols)->getPercentText()));
							continue;
						}
					case DecimalFormat::PATTERN_PER_MILLE:
						{
							$nc(buffer)->append($($nc(this->symbols)->getPerMillText()));
							continue;
						}
					case DecimalFormat::PATTERN_MINUS:
						{
							$nc(buffer)->append($($nc(this->symbols)->getMinusSignText()));
							continue;
						}
					}
				}
			}
			$nc(buffer)->append(c);
		}
	}
}

void DecimalFormat::appendAffix($StringBuffer* buffer, $String* affix, bool localized) {
	$useLocalCurrentObjectStackCache();
	bool needQuote = false;
	if (localized) {
		bool var$7 = $nc(affix)->indexOf((int32_t)$nc(this->symbols)->getZeroDigit()) >= 0;
		bool var$6 = var$7 || $nc(affix)->indexOf((int32_t)$nc(this->symbols)->getGroupingSeparator()) >= 0;
		bool var$5 = var$6 || $nc(affix)->indexOf((int32_t)$nc(this->symbols)->getDecimalSeparator()) >= 0;
		bool var$4 = var$5 || $nc(affix)->indexOf($($nc(this->symbols)->getPercentText())) >= 0;
		bool var$3 = var$4 || $nc(affix)->indexOf($($nc(this->symbols)->getPerMillText())) >= 0;
		bool var$2 = var$3 || $nc(affix)->indexOf((int32_t)$nc(this->symbols)->getDigit()) >= 0;
		bool var$1 = var$2 || $nc(affix)->indexOf((int32_t)$nc(this->symbols)->getPatternSeparator()) >= 0;
		bool var$0 = var$1 || $nc(affix)->indexOf($($nc(this->symbols)->getMinusSignText())) >= 0;
		needQuote = var$0 || $nc(affix)->indexOf((int32_t)DecimalFormat::CURRENCY_SIGN) >= 0;
	} else {
		bool var$15 = $nc(affix)->indexOf((int32_t)DecimalFormat::PATTERN_ZERO_DIGIT) >= 0;
		bool var$14 = var$15 || $nc(affix)->indexOf((int32_t)DecimalFormat::PATTERN_GROUPING_SEPARATOR) >= 0;
		bool var$13 = var$14 || $nc(affix)->indexOf((int32_t)DecimalFormat::PATTERN_DECIMAL_SEPARATOR) >= 0;
		bool var$12 = var$13 || $nc(affix)->indexOf((int32_t)DecimalFormat::PATTERN_PERCENT) >= 0;
		bool var$11 = var$12 || $nc(affix)->indexOf((int32_t)DecimalFormat::PATTERN_PER_MILLE) >= 0;
		bool var$10 = var$11 || $nc(affix)->indexOf((int32_t)DecimalFormat::PATTERN_DIGIT) >= 0;
		bool var$9 = var$10 || $nc(affix)->indexOf((int32_t)DecimalFormat::PATTERN_SEPARATOR) >= 0;
		bool var$8 = var$9 || $nc(affix)->indexOf((int32_t)DecimalFormat::PATTERN_MINUS) >= 0;
		needQuote = var$8 || $nc(affix)->indexOf((int32_t)DecimalFormat::CURRENCY_SIGN) >= 0;
	}
	if (needQuote) {
		$nc(buffer)->append(u'\'');
	}
	if ($nc(affix)->indexOf((int32_t)u'\'') < 0) {
		$nc(buffer)->append(affix);
	} else {
		for (int32_t j = 0; j < affix->length(); ++j) {
			char16_t c = affix->charAt(j);
			$nc(buffer)->append(c);
			if (c == u'\'') {
				buffer->append(c);
			}
		}
	}
	if (needQuote) {
		$nc(buffer)->append(u'\'');
	}
}

$String* DecimalFormat::toPattern(bool localized) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, result, $new($StringBuffer));
	for (int32_t j = 1; j >= 0; --j) {
		if (j == 1) {
			appendAffix(result, this->posPrefixPattern, this->positivePrefix, localized);
		} else {
			appendAffix(result, this->negPrefixPattern, this->negativePrefix, localized);
		}
		int32_t i = 0;
		int32_t digitCount = this->useExponentialNotation ? getMaximumIntegerDigits() : $Math::max((int32_t)this->groupingSize, getMinimumIntegerDigits()) + 1;
		for (i = digitCount; i > 0; --i) {
			if (i != digitCount && isGroupingUsed() && this->groupingSize != 0 && $mod(i, this->groupingSize) == 0) {
				result->append(localized ? $nc(this->symbols)->getGroupingSeparator() : DecimalFormat::PATTERN_GROUPING_SEPARATOR);
			}
			result->append(i <= getMinimumIntegerDigits() ? (localized ? $nc(this->symbols)->getZeroDigit() : DecimalFormat::PATTERN_ZERO_DIGIT) : (localized ? $nc(this->symbols)->getDigit() : DecimalFormat::PATTERN_DIGIT));
		}
		if (getMaximumFractionDigits() > 0 || this->decimalSeparatorAlwaysShown) {
			result->append(localized ? $nc(this->symbols)->getDecimalSeparator() : DecimalFormat::PATTERN_DECIMAL_SEPARATOR);
		}
		for (i = 0; i < getMaximumFractionDigits(); ++i) {
			if (i < getMinimumFractionDigits()) {
				result->append(localized ? $nc(this->symbols)->getZeroDigit() : DecimalFormat::PATTERN_ZERO_DIGIT);
			} else {
				result->append(localized ? $nc(this->symbols)->getDigit() : DecimalFormat::PATTERN_DIGIT);
			}
		}
		if (this->useExponentialNotation) {
			result->append(localized ? $($nc(this->symbols)->getExponentSeparator()) : DecimalFormat::PATTERN_EXPONENT);
			for (i = 0; i < this->minExponentDigits; ++i) {
				result->append(localized ? $nc(this->symbols)->getZeroDigit() : DecimalFormat::PATTERN_ZERO_DIGIT);
			}
		}
		if (j == 1) {
			appendAffix(result, this->posSuffixPattern, this->positiveSuffix, localized);
			bool var$0 = (this->negSuffixPattern == this->posSuffixPattern && $nc(this->negativeSuffix)->equals(this->positiveSuffix));
			if (var$0 || (this->negSuffixPattern != nullptr && $nc(this->negSuffixPattern)->equals(this->posSuffixPattern))) {
				bool var$1 = (this->negPrefixPattern != nullptr && this->posPrefixPattern != nullptr && $nc(this->negPrefixPattern)->equals($$str({"\'-"_s, this->posPrefixPattern})));
				if (var$1 || (this->negPrefixPattern == this->posPrefixPattern && $nc(this->negativePrefix)->equals($$str({$($nc(this->symbols)->getMinusSignText()), this->positivePrefix})))) {
					break;
				}
			}
			result->append(localized ? $nc(this->symbols)->getPatternSeparator() : DecimalFormat::PATTERN_SEPARATOR);
		} else {
			appendAffix(result, this->negSuffixPattern, this->negativeSuffix, localized);
		}
	}
	return result->toString();
}

void DecimalFormat::applyPattern($String* pattern) {
	applyPattern(pattern, false);
}

void DecimalFormat::applyLocalizedPattern($String* pattern) {
	applyPattern(pattern, true);
}

void DecimalFormat::applyPattern($String* pattern, bool localized) {
	$useLocalCurrentObjectStackCache();
	char16_t zeroDigit = DecimalFormat::PATTERN_ZERO_DIGIT;
	char16_t groupingSeparator = DecimalFormat::PATTERN_GROUPING_SEPARATOR;
	char16_t decimalSeparator = DecimalFormat::PATTERN_DECIMAL_SEPARATOR;
	char16_t percent = DecimalFormat::PATTERN_PERCENT;
	char16_t perMill = DecimalFormat::PATTERN_PER_MILLE;
	char16_t digit = DecimalFormat::PATTERN_DIGIT;
	char16_t separator = DecimalFormat::PATTERN_SEPARATOR;
	$var($String, exponent, DecimalFormat::PATTERN_EXPONENT);
	char16_t minus = DecimalFormat::PATTERN_MINUS;
	if (localized) {
		zeroDigit = $nc(this->symbols)->getZeroDigit();
		groupingSeparator = $nc(this->symbols)->getGroupingSeparator();
		decimalSeparator = $nc(this->symbols)->getDecimalSeparator();
		percent = $nc(this->symbols)->getPercent();
		perMill = $nc(this->symbols)->getPerMill();
		digit = $nc(this->symbols)->getDigit();
		separator = $nc(this->symbols)->getPatternSeparator();
		$assign(exponent, $nc(this->symbols)->getExponentSeparator());
		minus = $nc(this->symbols)->getMinusSign();
	}
	bool gotNegative = false;
	this->decimalSeparatorAlwaysShown = false;
	this->isCurrencyFormat = false;
	this->useExponentialNotation = false;
	int32_t start = 0;
	for (int32_t j = 1; j >= 0 && start < $nc(pattern)->length(); --j) {
		bool inQuote = false;
		$var($StringBuffer, prefix, $new($StringBuffer));
		$var($StringBuffer, suffix, $new($StringBuffer));
		int32_t decimalPos = -1;
		int32_t multiplier = 1;
		int32_t digitLeftCount = 0;
		int32_t zeroDigitCount = 0;
		int32_t digitRightCount = 0;
		int8_t groupingCount = (int8_t)-1;
		int32_t phase = 0;
		$var($StringBuffer, affix, prefix);
		for (int32_t pos = start; pos < pattern->length(); ++pos) {
			char16_t ch = pattern->charAt(pos);
			switch (phase) {
			case 0:
				{}
			case 2:
				{
					if (inQuote) {
						if (ch == DecimalFormat::QUOTE) {
							bool var$0 = (pos + 1) < pattern->length();
							if (var$0 && pattern->charAt(pos + 1) == DecimalFormat::QUOTE) {
								++pos;
								affix->append("\'\'"_s);
							} else {
								inQuote = false;
							}
							continue;
						}
					} else if (ch == digit || ch == zeroDigit || ch == groupingSeparator || ch == decimalSeparator) {
						phase = 1;
						--pos;
						continue;
					} else if (ch == DecimalFormat::CURRENCY_SIGN) {
						bool var$1 = (pos + 1) < pattern->length();
						bool doubled = var$1 && pattern->charAt(pos + 1) == DecimalFormat::CURRENCY_SIGN;
						if (doubled) {
							++pos;
						}
						this->isCurrencyFormat = true;
						affix->append(doubled ? u"\'\u00a4\u00a4"_s : u"\'\u00a4"_s);
						continue;
					} else if (ch == DecimalFormat::QUOTE) {
						if (ch == DecimalFormat::QUOTE) {
							bool var$2 = (pos + 1) < pattern->length();
							if (var$2 && pattern->charAt(pos + 1) == DecimalFormat::QUOTE) {
								++pos;
								affix->append("\'\'"_s);
							} else {
								inQuote = true;
							}
							continue;
						}
					} else if (ch == separator) {
						if (phase == 0 || j == 0) {
							$throwNew($IllegalArgumentException, $$str({"Unquoted special character \'"_s, $$str(ch), "\' in pattern \""_s, pattern, $$str(u'\"')}));
						}
						start = pos + 1;
						pos = pattern->length();
						continue;
					} else if (ch == percent) {
						if (multiplier != 1) {
							$throwNew($IllegalArgumentException, $$str({"Too many percent/per mille characters in pattern \""_s, pattern, $$str(u'\"')}));
						}
						multiplier = 100;
						affix->append("\'%"_s);
						continue;
					} else if (ch == perMill) {
						if (multiplier != 1) {
							$throwNew($IllegalArgumentException, $$str({"Too many percent/per mille characters in pattern \""_s, pattern, $$str(u'\"')}));
						}
						multiplier = 1000;
						affix->append(u"\'\u2030"_s);
						continue;
					} else if (ch == minus) {
						affix->append("\'-"_s);
						continue;
					}
					affix->append(ch);
					break;
				}
			case 1:
				{
					if (j == 0) {
						while (pos < pattern->length()) {
							char16_t negPatternChar = pattern->charAt(pos);
							if (negPatternChar == digit || negPatternChar == zeroDigit || negPatternChar == groupingSeparator || negPatternChar == decimalSeparator) {
								++pos;
							} else if (pattern->regionMatches(pos, exponent, 0, $nc(exponent)->length())) {
								pos = pos + $nc(exponent)->length();
							} else {
								--pos;
								phase = 2;
								$assign(affix, suffix);
								break;
							}
						}
						continue;
					}
					if (ch == digit) {
						if (zeroDigitCount > 0) {
							++digitRightCount;
						} else {
							++digitLeftCount;
						}
						if (groupingCount >= 0 && decimalPos < 0) {
							++groupingCount;
						}
					} else if (ch == zeroDigit) {
						if (digitRightCount > 0) {
							$throwNew($IllegalArgumentException, $$str({"Unexpected \'0\' in pattern \""_s, pattern, $$str(u'\"')}));
						}
						++zeroDigitCount;
						if (groupingCount >= 0 && decimalPos < 0) {
							++groupingCount;
						}
					} else if (ch == groupingSeparator) {
						groupingCount = (int8_t)0;
					} else if (ch == decimalSeparator) {
						if (decimalPos >= 0) {
							$throwNew($IllegalArgumentException, $$str({"Multiple decimal separators in pattern \""_s, pattern, $$str(u'\"')}));
						}
						decimalPos = digitLeftCount + zeroDigitCount + digitRightCount;
					} else if (pattern->regionMatches(pos, exponent, 0, $nc(exponent)->length())) {
						if (this->useExponentialNotation) {
							$throwNew($IllegalArgumentException, $$str({"Multiple exponential symbols in pattern \""_s, pattern, $$str(u'\"')}));
						}
						this->useExponentialNotation = true;
						this->minExponentDigits = (int8_t)0;
						pos = pos + $nc(exponent)->length();
						while (true) {
							bool var$3 = pos < pattern->length();
							if (!(var$3 && pattern->charAt(pos) == zeroDigit)) {
								break;
							}
							{
								++this->minExponentDigits;
								++pos;
							}
						}
						if ((digitLeftCount + zeroDigitCount) < 1 || this->minExponentDigits < 1) {
							$throwNew($IllegalArgumentException, $$str({"Malformed exponential pattern \""_s, pattern, $$str(u'\"')}));
						}
						phase = 2;
						$assign(affix, suffix);
						--pos;
						continue;
					} else {
						phase = 2;
						$assign(affix, suffix);
						--pos;
						continue;
					}
					break;
				}
			}
		}
		if (zeroDigitCount == 0 && digitLeftCount > 0 && decimalPos >= 0) {
			int32_t n = decimalPos;
			if (n == 0) {
				++n;
			}
			digitRightCount = digitLeftCount - n;
			digitLeftCount = n - 1;
			zeroDigitCount = 1;
		}
		if ((decimalPos < 0 && digitRightCount > 0) || (decimalPos >= 0 && (decimalPos < digitLeftCount || decimalPos > (digitLeftCount + zeroDigitCount))) || groupingCount == 0 || inQuote) {
			$throwNew($IllegalArgumentException, $$str({"Malformed pattern \""_s, pattern, $$str(u'\"')}));
		}
		if (j == 1) {
			$set(this, posPrefixPattern, prefix->toString());
			$set(this, posSuffixPattern, suffix->toString());
			$set(this, negPrefixPattern, this->posPrefixPattern);
			$set(this, negSuffixPattern, this->posSuffixPattern);
			int32_t digitTotalCount = digitLeftCount + zeroDigitCount + digitRightCount;
			int32_t effectiveDecimalPos = decimalPos >= 0 ? decimalPos : digitTotalCount;
			setMinimumIntegerDigits(effectiveDecimalPos - digitLeftCount);
			setMaximumIntegerDigits(this->useExponentialNotation ? digitLeftCount + getMinimumIntegerDigits() : DecimalFormat::MAXIMUM_INTEGER_DIGITS);
			setMaximumFractionDigits(decimalPos >= 0 ? (digitTotalCount - decimalPos) : 0);
			setMinimumFractionDigits(decimalPos >= 0 ? (digitLeftCount + zeroDigitCount - decimalPos) : 0);
			setGroupingUsed(groupingCount > 0);
			this->groupingSize = (groupingCount > 0) ? groupingCount : (int8_t)0;
			this->multiplier = multiplier;
			setDecimalSeparatorAlwaysShown(decimalPos == 0 || decimalPos == digitTotalCount);
		} else {
			$set(this, negPrefixPattern, prefix->toString());
			$set(this, negSuffixPattern, suffix->toString());
			gotNegative = true;
		}
	}
	if ($nc(pattern)->isEmpty()) {
		$set(this, posPrefixPattern, ($assignField(this, posSuffixPattern, ""_s)));
		setMinimumIntegerDigits(0);
		setMaximumIntegerDigits(DecimalFormat::MAXIMUM_INTEGER_DIGITS);
		setMinimumFractionDigits(0);
		setMaximumFractionDigits(DecimalFormat::MAXIMUM_FRACTION_DIGITS);
	}
	bool var$4 = !gotNegative;
	if (!var$4) {
		bool var$5 = $nc(this->negPrefixPattern)->equals(this->posPrefixPattern);
		var$4 = (var$5 && $nc(this->negSuffixPattern)->equals(this->posSuffixPattern));
	}
	if (var$4) {
		$set(this, negSuffixPattern, this->posSuffixPattern);
		$set(this, negPrefixPattern, $str({"\'-"_s, this->posPrefixPattern}));
	}
	expandAffixes();
}

void DecimalFormat::setMaximumIntegerDigits(int32_t newValue) {
	this->maximumIntegerDigits = $Math::min($Math::max(0, newValue), DecimalFormat::MAXIMUM_INTEGER_DIGITS);
	$NumberFormat::setMaximumIntegerDigits((this->maximumIntegerDigits > DecimalFormat::DOUBLE_INTEGER_DIGITS) ? DecimalFormat::DOUBLE_INTEGER_DIGITS : this->maximumIntegerDigits);
	if (this->minimumIntegerDigits > this->maximumIntegerDigits) {
		this->minimumIntegerDigits = this->maximumIntegerDigits;
		$NumberFormat::setMinimumIntegerDigits((this->minimumIntegerDigits > DecimalFormat::DOUBLE_INTEGER_DIGITS) ? DecimalFormat::DOUBLE_INTEGER_DIGITS : this->minimumIntegerDigits);
	}
	this->fastPathCheckNeeded = true;
}

void DecimalFormat::setMinimumIntegerDigits(int32_t newValue) {
	this->minimumIntegerDigits = $Math::min($Math::max(0, newValue), DecimalFormat::MAXIMUM_INTEGER_DIGITS);
	$NumberFormat::setMinimumIntegerDigits((this->minimumIntegerDigits > DecimalFormat::DOUBLE_INTEGER_DIGITS) ? DecimalFormat::DOUBLE_INTEGER_DIGITS : this->minimumIntegerDigits);
	if (this->minimumIntegerDigits > this->maximumIntegerDigits) {
		this->maximumIntegerDigits = this->minimumIntegerDigits;
		$NumberFormat::setMaximumIntegerDigits((this->maximumIntegerDigits > DecimalFormat::DOUBLE_INTEGER_DIGITS) ? DecimalFormat::DOUBLE_INTEGER_DIGITS : this->maximumIntegerDigits);
	}
	this->fastPathCheckNeeded = true;
}

void DecimalFormat::setMaximumFractionDigits(int32_t newValue) {
	this->maximumFractionDigits = $Math::min($Math::max(0, newValue), DecimalFormat::MAXIMUM_FRACTION_DIGITS);
	$NumberFormat::setMaximumFractionDigits((this->maximumFractionDigits > DecimalFormat::DOUBLE_FRACTION_DIGITS) ? DecimalFormat::DOUBLE_FRACTION_DIGITS : this->maximumFractionDigits);
	if (this->minimumFractionDigits > this->maximumFractionDigits) {
		this->minimumFractionDigits = this->maximumFractionDigits;
		$NumberFormat::setMinimumFractionDigits((this->minimumFractionDigits > DecimalFormat::DOUBLE_FRACTION_DIGITS) ? DecimalFormat::DOUBLE_FRACTION_DIGITS : this->minimumFractionDigits);
	}
	this->fastPathCheckNeeded = true;
}

void DecimalFormat::setMinimumFractionDigits(int32_t newValue) {
	this->minimumFractionDigits = $Math::min($Math::max(0, newValue), DecimalFormat::MAXIMUM_FRACTION_DIGITS);
	$NumberFormat::setMinimumFractionDigits((this->minimumFractionDigits > DecimalFormat::DOUBLE_FRACTION_DIGITS) ? DecimalFormat::DOUBLE_FRACTION_DIGITS : this->minimumFractionDigits);
	if (this->minimumFractionDigits > this->maximumFractionDigits) {
		this->maximumFractionDigits = this->minimumFractionDigits;
		$NumberFormat::setMaximumFractionDigits((this->maximumFractionDigits > DecimalFormat::DOUBLE_FRACTION_DIGITS) ? DecimalFormat::DOUBLE_FRACTION_DIGITS : this->maximumFractionDigits);
	}
	this->fastPathCheckNeeded = true;
}

int32_t DecimalFormat::getMaximumIntegerDigits() {
	return this->maximumIntegerDigits;
}

int32_t DecimalFormat::getMinimumIntegerDigits() {
	return this->minimumIntegerDigits;
}

int32_t DecimalFormat::getMaximumFractionDigits() {
	return this->maximumFractionDigits;
}

int32_t DecimalFormat::getMinimumFractionDigits() {
	return this->minimumFractionDigits;
}

$Currency* DecimalFormat::getCurrency() {
	return $nc(this->symbols)->getCurrency();
}

void DecimalFormat::setCurrency($Currency* currency) {
	if (currency != $nc(this->symbols)->getCurrency()) {
		$nc(this->symbols)->setCurrency(currency);
		if (this->isCurrencyFormat) {
			expandAffixes();
		}
	}
	this->fastPathCheckNeeded = true;
}

$RoundingMode* DecimalFormat::getRoundingMode() {
	return this->roundingMode;
}

void DecimalFormat::setRoundingMode($RoundingMode* roundingMode) {
	if (roundingMode == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, roundingMode, roundingMode);
	$nc(this->digitList)->setRoundingMode(roundingMode);
	this->fastPathCheckNeeded = true;
}

void DecimalFormat::readObject($ObjectInputStream* stream) {
	$nc(stream)->defaultReadObject();
	$set(this, digitList, $new($DigitList));
	this->fastPathCheckNeeded = true;
	this->isFastPath = false;
	$set(this, fastPathData, nullptr);
	if (this->serialVersionOnStream < 4) {
		$init($RoundingMode);
		setRoundingMode($RoundingMode::HALF_EVEN);
	} else {
		setRoundingMode($(getRoundingMode()));
	}
	bool var$0 = $NumberFormat::getMaximumIntegerDigits() > DecimalFormat::DOUBLE_INTEGER_DIGITS;
	if (var$0 || $NumberFormat::getMaximumFractionDigits() > DecimalFormat::DOUBLE_FRACTION_DIGITS) {
		$throwNew($InvalidObjectException, "Digit count out of range"_s);
	}
	if (this->serialVersionOnStream < 3) {
		setMaximumIntegerDigits($NumberFormat::getMaximumIntegerDigits());
		setMinimumIntegerDigits($NumberFormat::getMinimumIntegerDigits());
		setMaximumFractionDigits($NumberFormat::getMaximumFractionDigits());
		setMinimumFractionDigits($NumberFormat::getMinimumFractionDigits());
	}
	if (this->serialVersionOnStream < 1) {
		this->useExponentialNotation = false;
	}
	if (this->groupingSize < 0) {
		this->groupingSize = (int8_t)3;
	}
	this->serialVersionOnStream = DecimalFormat::currentSerialVersion;
}

void clinit$DecimalFormat($Class* class$) {
	DecimalFormat::MAX_INT_AS_DOUBLE = (double)$Integer::MAX_VALUE;
	$assignStatic(DecimalFormat::PATTERN_EXPONENT, "E"_s);
	DecimalFormat::$assertionsDisabled = !DecimalFormat::class$->desiredAssertionStatus();
	$assignStatic(DecimalFormat::EmptyFieldPositionArray, $new($FieldPositionArray, 0));
}

DecimalFormat::DecimalFormat() {
}

$Class* DecimalFormat::load$($String* name, bool initialize) {
	$loadClass(DecimalFormat, name, initialize, &_DecimalFormat_ClassInfo_, clinit$DecimalFormat, allocate$DecimalFormat);
	return class$;
}

$Class* DecimalFormat::class$ = nullptr;

	} // text
} // java