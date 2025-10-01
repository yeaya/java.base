#include <java/text/NumberFormat.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/math/RoundingMode.h>
#include <java/text/DontCareFieldPosition.h>
#include <java/text/FieldPosition.h>
#include <java/text/Format.h>
#include <java/text/NumberFormat$Style.h>
#include <java/text/ParseException.h>
#include <java/text/ParsePosition.h>
#include <java/text/spi/NumberFormatProvider.h>
#include <java/util/Currency.h>
#include <java/util/Locale$Category.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleServiceProviderPool.h>
#include <jcpp.h>

#undef NUMBERSTYLE
#undef PERCENTSTYLE
#undef CURRENCYSTYLE
#undef FORMAT
#undef FRACTION_FIELD
#undef SCIENTIFICSTYLE
#undef COMPACTSTYLE
#undef INSTANCE
#undef INTEGERSTYLE
#undef MAX_VALUE
#undef INTEGER_FIELD
#undef SHORT

using $LocaleArray = $Array<::java::util::Locale>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Short = ::java::lang::Short;
using $StringBuffer = ::java::lang::StringBuffer;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BigInteger = ::java::math::BigInteger;
using $RoundingMode = ::java::math::RoundingMode;
using $DontCareFieldPosition = ::java::text::DontCareFieldPosition;
using $FieldPosition = ::java::text::FieldPosition;
using $Format = ::java::text::Format;
using $NumberFormat$Style = ::java::text::NumberFormat$Style;
using $ParseException = ::java::text::ParseException;
using $ParsePosition = ::java::text::ParsePosition;
using $NumberFormatProvider = ::java::text::spi::NumberFormatProvider;
using $Currency = ::java::util::Currency;
using $Locale = ::java::util::Locale;
using $Locale$Category = ::java::util::Locale$Category;
using $Objects = ::java::util::Objects;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleServiceProviderPool = ::sun::util::locale::provider::LocaleServiceProviderPool;

namespace java {
	namespace text {

$FieldInfo _NumberFormat_FieldInfo_[] = {
	{"INTEGER_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumberFormat, INTEGER_FIELD)},
	{"FRACTION_FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NumberFormat, FRACTION_FIELD)},
	{"NUMBERSTYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberFormat, NUMBERSTYLE)},
	{"CURRENCYSTYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberFormat, CURRENCYSTYLE)},
	{"PERCENTSTYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberFormat, PERCENTSTYLE)},
	{"SCIENTIFICSTYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberFormat, SCIENTIFICSTYLE)},
	{"INTEGERSTYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberFormat, INTEGERSTYLE)},
	{"COMPACTSTYLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NumberFormat, COMPACTSTYLE)},
	{"groupingUsed", "Z", nullptr, $PRIVATE, $field(NumberFormat, groupingUsed)},
	{"maxIntegerDigits", "B", nullptr, $PRIVATE, $field(NumberFormat, maxIntegerDigits)},
	{"minIntegerDigits", "B", nullptr, $PRIVATE, $field(NumberFormat, minIntegerDigits)},
	{"maxFractionDigits", "B", nullptr, $PRIVATE, $field(NumberFormat, maxFractionDigits)},
	{"minFractionDigits", "B", nullptr, $PRIVATE, $field(NumberFormat, minFractionDigits)},
	{"parseIntegerOnly", "Z", nullptr, $PRIVATE, $field(NumberFormat, parseIntegerOnly)},
	{"maximumIntegerDigits", "I", nullptr, $PRIVATE, $field(NumberFormat, maximumIntegerDigits)},
	{"minimumIntegerDigits", "I", nullptr, $PRIVATE, $field(NumberFormat, minimumIntegerDigits)},
	{"maximumFractionDigits", "I", nullptr, $PRIVATE, $field(NumberFormat, maximumFractionDigits)},
	{"minimumFractionDigits", "I", nullptr, $PRIVATE, $field(NumberFormat, minimumFractionDigits)},
	{"currentSerialVersion", "I", nullptr, $STATIC | $FINAL, $constField(NumberFormat, currentSerialVersion)},
	{"serialVersionOnStream", "I", nullptr, $PRIVATE, $field(NumberFormat, serialVersionOnStream)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NumberFormat, serialVersionUID)},
	{}
};

$MethodInfo _NumberFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(NumberFormat::*)()>(&NumberFormat::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"fastFormat", "(D)Ljava/lang/String;", nullptr, 0},
	{"format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC},
	{"format", "(D)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(NumberFormat::*)(double)>(&NumberFormat::format))},
	{"format", "(J)Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(NumberFormat::*)(int64_t)>(&NumberFormat::format))},
	{"format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LocaleArray*(*)()>(&NumberFormat::getAvailableLocales))},
	{"getCompactNumberInstance", "()Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumberFormat*(*)()>(&NumberFormat::getCompactNumberInstance))},
	{"getCompactNumberInstance", "(Ljava/util/Locale;Ljava/text/NumberFormat$Style;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumberFormat*(*)($Locale*,$NumberFormat$Style*)>(&NumberFormat::getCompactNumberInstance))},
	{"getCurrency", "()Ljava/util/Currency;", nullptr, $PUBLIC},
	{"getCurrencyInstance", "()Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<NumberFormat*(*)()>(&NumberFormat::getCurrencyInstance))},
	{"getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumberFormat*(*)($Locale*)>(&NumberFormat::getCurrencyInstance))},
	{"getInstance", "()Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<NumberFormat*(*)()>(&NumberFormat::getInstance))},
	{"getInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumberFormat*(*)($Locale*)>(&NumberFormat::getInstance))},
	{"getInstance", "(Ljava/util/Locale;Ljava/text/NumberFormat$Style;I)Ljava/text/NumberFormat;", nullptr, $PRIVATE | $STATIC, $method(static_cast<NumberFormat*(*)($Locale*,$NumberFormat$Style*,int32_t)>(&NumberFormat::getInstance))},
	{"getInstance", "(Lsun/util/locale/provider/LocaleProviderAdapter;Ljava/util/Locale;Ljava/text/NumberFormat$Style;I)Ljava/text/NumberFormat;", nullptr, $PRIVATE | $STATIC, $method(static_cast<NumberFormat*(*)($LocaleProviderAdapter*,$Locale*,$NumberFormat$Style*,int32_t)>(&NumberFormat::getInstance))},
	{"getIntegerInstance", "()Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<NumberFormat*(*)()>(&NumberFormat::getIntegerInstance))},
	{"getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumberFormat*(*)($Locale*)>(&NumberFormat::getIntegerInstance))},
	{"getMaximumFractionDigits", "()I", nullptr, $PUBLIC},
	{"getMaximumIntegerDigits", "()I", nullptr, $PUBLIC},
	{"getMinimumFractionDigits", "()I", nullptr, $PUBLIC},
	{"getMinimumIntegerDigits", "()I", nullptr, $PUBLIC},
	{"getNumberInstance", "()Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<NumberFormat*(*)()>(&NumberFormat::getNumberInstance))},
	{"getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumberFormat*(*)($Locale*)>(&NumberFormat::getNumberInstance))},
	{"getPercentInstance", "()Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<NumberFormat*(*)()>(&NumberFormat::getPercentInstance))},
	{"getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<NumberFormat*(*)($Locale*)>(&NumberFormat::getPercentInstance))},
	{"getRoundingMode", "()Ljava/math/RoundingMode;", nullptr, $PUBLIC},
	{"getScientificInstance", "()Ljava/text/NumberFormat;", nullptr, $STATIC | $FINAL, $method(static_cast<NumberFormat*(*)()>(&NumberFormat::getScientificInstance))},
	{"getScientificInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;", nullptr, $STATIC, $method(static_cast<NumberFormat*(*)($Locale*)>(&NumberFormat::getScientificInstance))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isGroupingUsed", "()Z", nullptr, $PUBLIC},
	{"isParseIntegerOnly", "()Z", nullptr, $PUBLIC},
	{"parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;", nullptr, $PUBLIC | $ABSTRACT},
	{"parse", "(Ljava/lang/String;)Ljava/lang/Number;", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{"parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(NumberFormat::*)($ObjectInputStream*)>(&NumberFormat::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setCurrency", "(Ljava/util/Currency;)V", nullptr, $PUBLIC},
	{"setGroupingUsed", "(Z)V", nullptr, $PUBLIC},
	{"setMaximumFractionDigits", "(I)V", nullptr, $PUBLIC},
	{"setMaximumIntegerDigits", "(I)V", nullptr, $PUBLIC},
	{"setMinimumFractionDigits", "(I)V", nullptr, $PUBLIC},
	{"setMinimumIntegerDigits", "(I)V", nullptr, $PUBLIC},
	{"setParseIntegerOnly", "(Z)V", nullptr, $PUBLIC},
	{"setRoundingMode", "(Ljava/math/RoundingMode;)V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(NumberFormat::*)($ObjectOutputStream*)>(&NumberFormat::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _NumberFormat_InnerClassesInfo_[] = {
	{"java.text.NumberFormat$Style", "java.text.NumberFormat", "Style", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.text.NumberFormat$Field", "java.text.NumberFormat", "Field", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _NumberFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.text.NumberFormat",
	"java.text.Format",
	nullptr,
	_NumberFormat_FieldInfo_,
	_NumberFormat_MethodInfo_,
	nullptr,
	nullptr,
	_NumberFormat_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.text.NumberFormat$Style,java.text.NumberFormat$Field"
};

$Object* allocate$NumberFormat($Class* clazz) {
	return $of($alloc(NumberFormat));
}

void NumberFormat::init$() {
	$Format::init$();
	this->groupingUsed = true;
	this->maxIntegerDigits = (int8_t)40;
	this->minIntegerDigits = (int8_t)1;
	this->maxFractionDigits = (int8_t)3;
	this->minFractionDigits = (int8_t)0;
	this->parseIntegerOnly = false;
	this->maximumIntegerDigits = 40;
	this->minimumIntegerDigits = 1;
	this->maximumFractionDigits = 3;
	this->minimumFractionDigits = 0;
	this->serialVersionOnStream = NumberFormat::currentSerialVersion;
}

$StringBuffer* NumberFormat::format(Object$* number, $StringBuffer* toAppendTo, $FieldPosition* pos) {
	if ($instanceOf($Long, number) || $instanceOf($Integer, number) || $instanceOf($Short, number) || $instanceOf($Byte, number) || $instanceOf($AtomicInteger, number) || $instanceOf($AtomicLong, number) || ($instanceOf($BigInteger, number) && $nc(($cast($BigInteger, number)))->bitLength() < 64)) {
		return format($nc(($cast($Number, number)))->longValue(), toAppendTo, pos);
	} else if ($instanceOf($Number, number)) {
		return format($nc(($cast($Number, number)))->doubleValue(), toAppendTo, pos);
	} else {
		$throwNew($IllegalArgumentException, "Cannot format given Object as a Number"_s);
	}
}

$Object* NumberFormat::parseObject($String* source, $ParsePosition* pos) {
	return $of(parse(source, pos));
}

$String* NumberFormat::format(double number) {
	$var($String, result, fastFormat(number));
	if (result != nullptr) {
		return result;
	}
	$init($DontCareFieldPosition);
	return $nc($(format(number, $$new($StringBuffer), $DontCareFieldPosition::INSTANCE)))->toString();
}

$String* NumberFormat::fastFormat(double number) {
	return nullptr;
}

$String* NumberFormat::format(int64_t number) {
	$init($DontCareFieldPosition);
	return $nc($(format(number, $$new($StringBuffer), $DontCareFieldPosition::INSTANCE)))->toString();
}

$Number* NumberFormat::parse($String* source) {
	$var($ParsePosition, parsePosition, $new($ParsePosition, 0));
	$var($Number, result, parse(source, parsePosition));
	if (parsePosition->index == 0) {
		$throwNew($ParseException, $$str({"Unparseable number: \""_s, source, "\""_s}), parsePosition->errorIndex);
	}
	return result;
}

bool NumberFormat::isParseIntegerOnly() {
	return this->parseIntegerOnly;
}

void NumberFormat::setParseIntegerOnly(bool value) {
	this->parseIntegerOnly = value;
}

NumberFormat* NumberFormat::getInstance() {
	$init(NumberFormat);
	$init($Locale$Category);
	return getInstance($($Locale::getDefault($Locale$Category::FORMAT)), nullptr, NumberFormat::NUMBERSTYLE);
}

NumberFormat* NumberFormat::getInstance($Locale* inLocale) {
	$init(NumberFormat);
	return getInstance(inLocale, nullptr, NumberFormat::NUMBERSTYLE);
}

NumberFormat* NumberFormat::getNumberInstance() {
	$init(NumberFormat);
	$init($Locale$Category);
	return getInstance($($Locale::getDefault($Locale$Category::FORMAT)), nullptr, NumberFormat::NUMBERSTYLE);
}

NumberFormat* NumberFormat::getNumberInstance($Locale* inLocale) {
	$init(NumberFormat);
	return getInstance(inLocale, nullptr, NumberFormat::NUMBERSTYLE);
}

NumberFormat* NumberFormat::getIntegerInstance() {
	$init(NumberFormat);
	$init($Locale$Category);
	return getInstance($($Locale::getDefault($Locale$Category::FORMAT)), nullptr, NumberFormat::INTEGERSTYLE);
}

NumberFormat* NumberFormat::getIntegerInstance($Locale* inLocale) {
	$init(NumberFormat);
	return getInstance(inLocale, nullptr, NumberFormat::INTEGERSTYLE);
}

NumberFormat* NumberFormat::getCurrencyInstance() {
	$init(NumberFormat);
	$init($Locale$Category);
	return getInstance($($Locale::getDefault($Locale$Category::FORMAT)), nullptr, NumberFormat::CURRENCYSTYLE);
}

NumberFormat* NumberFormat::getCurrencyInstance($Locale* inLocale) {
	$init(NumberFormat);
	return getInstance(inLocale, nullptr, NumberFormat::CURRENCYSTYLE);
}

NumberFormat* NumberFormat::getPercentInstance() {
	$init(NumberFormat);
	$init($Locale$Category);
	return getInstance($($Locale::getDefault($Locale$Category::FORMAT)), nullptr, NumberFormat::PERCENTSTYLE);
}

NumberFormat* NumberFormat::getPercentInstance($Locale* inLocale) {
	$init(NumberFormat);
	return getInstance(inLocale, nullptr, NumberFormat::PERCENTSTYLE);
}

NumberFormat* NumberFormat::getScientificInstance() {
	$init(NumberFormat);
	$init($Locale$Category);
	return getInstance($($Locale::getDefault($Locale$Category::FORMAT)), nullptr, NumberFormat::SCIENTIFICSTYLE);
}

NumberFormat* NumberFormat::getScientificInstance($Locale* inLocale) {
	$init(NumberFormat);
	return getInstance(inLocale, nullptr, NumberFormat::SCIENTIFICSTYLE);
}

NumberFormat* NumberFormat::getCompactNumberInstance() {
	$init(NumberFormat);
	$init($Locale$Category);
	$init($NumberFormat$Style);
	return getInstance($($Locale::getDefault($Locale$Category::FORMAT)), $NumberFormat$Style::SHORT, NumberFormat::COMPACTSTYLE);
}

NumberFormat* NumberFormat::getCompactNumberInstance($Locale* locale, $NumberFormat$Style* formatStyle) {
	$init(NumberFormat);
	$Objects::requireNonNull(locale);
	$Objects::requireNonNull(formatStyle);
	return getInstance(locale, formatStyle, NumberFormat::COMPACTSTYLE);
}

$LocaleArray* NumberFormat::getAvailableLocales() {
	$init(NumberFormat);
	$load($NumberFormatProvider);
	$var($LocaleServiceProviderPool, pool, $LocaleServiceProviderPool::getPool($NumberFormatProvider::class$));
	return $nc(pool)->getAvailableLocales();
}

int32_t NumberFormat::hashCode() {
	return this->maximumIntegerDigits * 37 + this->maxFractionDigits;
}

bool NumberFormat::equals(Object$* obj) {
	if (obj == nullptr) {
		return false;
	}
	if ($equals(this, obj)) {
		return true;
	}
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	$var(NumberFormat, other, $cast(NumberFormat, obj));
	return (this->maximumIntegerDigits == $nc(other)->maximumIntegerDigits && this->minimumIntegerDigits == other->minimumIntegerDigits && this->maximumFractionDigits == other->maximumFractionDigits && this->minimumFractionDigits == other->minimumFractionDigits && this->groupingUsed == other->groupingUsed && this->parseIntegerOnly == other->parseIntegerOnly);
}

$Object* NumberFormat::clone() {
	$var(NumberFormat, other, $cast(NumberFormat, $Format::clone()));
	return $of(other);
}

bool NumberFormat::isGroupingUsed() {
	return this->groupingUsed;
}

void NumberFormat::setGroupingUsed(bool newValue) {
	this->groupingUsed = newValue;
}

int32_t NumberFormat::getMaximumIntegerDigits() {
	return this->maximumIntegerDigits;
}

void NumberFormat::setMaximumIntegerDigits(int32_t newValue) {
	this->maximumIntegerDigits = $Math::max(0, newValue);
	if (this->minimumIntegerDigits > this->maximumIntegerDigits) {
		this->minimumIntegerDigits = this->maximumIntegerDigits;
	}
}

int32_t NumberFormat::getMinimumIntegerDigits() {
	return this->minimumIntegerDigits;
}

void NumberFormat::setMinimumIntegerDigits(int32_t newValue) {
	this->minimumIntegerDigits = $Math::max(0, newValue);
	if (this->minimumIntegerDigits > this->maximumIntegerDigits) {
		this->maximumIntegerDigits = this->minimumIntegerDigits;
	}
}

int32_t NumberFormat::getMaximumFractionDigits() {
	return this->maximumFractionDigits;
}

void NumberFormat::setMaximumFractionDigits(int32_t newValue) {
	this->maximumFractionDigits = $Math::max(0, newValue);
	if (this->maximumFractionDigits < this->minimumFractionDigits) {
		this->minimumFractionDigits = this->maximumFractionDigits;
	}
}

int32_t NumberFormat::getMinimumFractionDigits() {
	return this->minimumFractionDigits;
}

void NumberFormat::setMinimumFractionDigits(int32_t newValue) {
	this->minimumFractionDigits = $Math::max(0, newValue);
	if (this->maximumFractionDigits < this->minimumFractionDigits) {
		this->maximumFractionDigits = this->minimumFractionDigits;
	}
}

$Currency* NumberFormat::getCurrency() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void NumberFormat::setCurrency($Currency* currency) {
	$throwNew($UnsupportedOperationException);
}

$RoundingMode* NumberFormat::getRoundingMode() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

void NumberFormat::setRoundingMode($RoundingMode* roundingMode) {
	$throwNew($UnsupportedOperationException);
}

NumberFormat* NumberFormat::getInstance($Locale* desiredLocale, $NumberFormat$Style* formatStyle, int32_t choice) {
	$init(NumberFormat);
	$var($LocaleProviderAdapter, adapter, nullptr);
	$load($NumberFormatProvider);
	$assign(adapter, $LocaleProviderAdapter::getAdapter($NumberFormatProvider::class$, desiredLocale));
	$var(NumberFormat, numberFormat, getInstance(adapter, desiredLocale, formatStyle, choice));
	if (numberFormat == nullptr) {
		$assign(numberFormat, getInstance($($LocaleProviderAdapter::forJRE()), desiredLocale, formatStyle, choice));
	}
	return numberFormat;
}

NumberFormat* NumberFormat::getInstance($LocaleProviderAdapter* adapter, $Locale* locale, $NumberFormat$Style* formatStyle, int32_t choice) {
	$init(NumberFormat);
	$var($NumberFormatProvider, provider, $nc(adapter)->getNumberFormatProvider());

	$var(NumberFormat, var$0, nullptr)
	switch (choice) {
	case NumberFormat::NUMBERSTYLE:
		{
			$assign(var$0, $nc(provider)->getNumberInstance(locale));
			break;
		}
	case NumberFormat::PERCENTSTYLE:
		{
			$assign(var$0, $nc(provider)->getPercentInstance(locale));
			break;
		}
	case NumberFormat::CURRENCYSTYLE:
		{
			$assign(var$0, $nc(provider)->getCurrencyInstance(locale));
			break;
		}
	case NumberFormat::INTEGERSTYLE:
		{
			$assign(var$0, $nc(provider)->getIntegerInstance(locale));
			break;
		}
	case NumberFormat::COMPACTSTYLE:
		{
			$assign(var$0, $nc(provider)->getCompactNumberInstance(locale, formatStyle));
			break;
		}
	default:
		{
			$assign(var$0, nullptr);
			break;
		}
	}
	return var$0;
}

void NumberFormat::readObject($ObjectInputStream* stream) {
	$nc(stream)->defaultReadObject();
	if (this->serialVersionOnStream < 1) {
		this->maximumIntegerDigits = this->maxIntegerDigits;
		this->minimumIntegerDigits = this->minIntegerDigits;
		this->maximumFractionDigits = this->maxFractionDigits;
		this->minimumFractionDigits = this->minFractionDigits;
	}
	if (this->minimumIntegerDigits > this->maximumIntegerDigits || this->minimumFractionDigits > this->maximumFractionDigits || this->minimumIntegerDigits < 0 || this->minimumFractionDigits < 0) {
		$throwNew($InvalidObjectException, "Digit count range invalid"_s);
	}
	this->serialVersionOnStream = NumberFormat::currentSerialVersion;
}

void NumberFormat::writeObject($ObjectOutputStream* stream) {
	this->maxIntegerDigits = (this->maximumIntegerDigits > $Byte::MAX_VALUE) ? $Byte::MAX_VALUE : (int8_t)this->maximumIntegerDigits;
	this->minIntegerDigits = (this->minimumIntegerDigits > $Byte::MAX_VALUE) ? $Byte::MAX_VALUE : (int8_t)this->minimumIntegerDigits;
	this->maxFractionDigits = (this->maximumFractionDigits > $Byte::MAX_VALUE) ? $Byte::MAX_VALUE : (int8_t)this->maximumFractionDigits;
	this->minFractionDigits = (this->minimumFractionDigits > $Byte::MAX_VALUE) ? $Byte::MAX_VALUE : (int8_t)this->minimumFractionDigits;
	$nc(stream)->defaultWriteObject();
}

NumberFormat::NumberFormat() {
}

$Class* NumberFormat::load$($String* name, bool initialize) {
	$loadClass(NumberFormat, name, initialize, &_NumberFormat_ClassInfo_, allocate$NumberFormat);
	return class$;
}

$Class* NumberFormat::class$ = nullptr;

	} // text
} // java