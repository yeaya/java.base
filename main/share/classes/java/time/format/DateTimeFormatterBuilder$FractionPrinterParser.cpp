#include <java/time/format/DateTimeFormatterBuilder$FractionPrinterParser.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigDecimal.h>
#include <java/math/RoundingMode.h>
#include <java/time/format/DateTimeFormatterBuilder$NumberPrinterParser.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/format/DecimalStyle.h>
#include <java/time/format/SignStyle.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/ValueRange.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ZERO
#undef FLOOR
#undef ONE
#undef NOT_NEGATIVE

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $RoundingMode = ::java::math::RoundingMode;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeFormatterBuilder$NumberPrinterParser = ::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $DecimalStyle = ::java::time::format::DecimalStyle;
using $SignStyle = ::java::time::format::SignStyle;
using $TemporalField = ::java::time::temporal::TemporalField;
using $ValueRange = ::java::time::temporal::ValueRange;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$FractionPrinterParser_FieldInfo_[] = {
	{"decimalPoint", "Z", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$FractionPrinterParser, decimalPoint)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$FractionPrinterParser_MethodInfo_[] = {
	{"<init>", "(Ljava/time/temporal/TemporalField;IIZ)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$FractionPrinterParser::*)($TemporalField*,int32_t,int32_t,bool)>(&DateTimeFormatterBuilder$FractionPrinterParser::init$))},
	{"<init>", "(Ljava/time/temporal/TemporalField;IIZI)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$FractionPrinterParser::*)($TemporalField*,int32_t,int32_t,bool,int32_t)>(&DateTimeFormatterBuilder$FractionPrinterParser::init$))},
	{"convertFromFraction", "(Ljava/math/BigDecimal;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(DateTimeFormatterBuilder$FractionPrinterParser::*)($BigDecimal*)>(&DateTimeFormatterBuilder$FractionPrinterParser::convertFromFraction))},
	{"convertToFraction", "(J)Ljava/math/BigDecimal;", nullptr, $PRIVATE, $method(static_cast<$BigDecimal*(DateTimeFormatterBuilder$FractionPrinterParser::*)(int64_t)>(&DateTimeFormatterBuilder$FractionPrinterParser::convertToFraction))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"isFixedWidth", "(Ljava/time/format/DateTimeParseContext;)Z", nullptr, 0},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withFixedWidth", "()Ljava/time/format/DateTimeFormatterBuilder$FractionPrinterParser;", nullptr, 0},
	{"withSubsequentWidth", "(I)Ljava/time/format/DateTimeFormatterBuilder$FractionPrinterParser;", nullptr, 0},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$FractionPrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$FractionPrinterParser", "java.time.format.DateTimeFormatterBuilder", "FractionPrinterParser", $STATIC | $FINAL},
	{"java.time.format.DateTimeFormatterBuilder$NumberPrinterParser", "java.time.format.DateTimeFormatterBuilder", "NumberPrinterParser", $STATIC},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$FractionPrinterParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$FractionPrinterParser",
	"java.time.format.DateTimeFormatterBuilder$NumberPrinterParser",
	nullptr,
	_DateTimeFormatterBuilder$FractionPrinterParser_FieldInfo_,
	_DateTimeFormatterBuilder$FractionPrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$FractionPrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$FractionPrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$FractionPrinterParser));
}

void DateTimeFormatterBuilder$FractionPrinterParser::init$($TemporalField* field, int32_t minWidth, int32_t maxWidth, bool decimalPoint) {
	DateTimeFormatterBuilder$FractionPrinterParser::init$(field, minWidth, maxWidth, decimalPoint, 0);
	$Objects::requireNonNull($of(field), "field"_s);
	if ($nc($($nc(field)->range()))->isFixed() == false) {
		$throwNew($IllegalArgumentException, $$str({"Field must have a fixed set of values: "_s, field}));
	}
	if (minWidth < 0 || minWidth > 9) {
		$throwNew($IllegalArgumentException, $$str({"Minimum width must be from 0 to 9 inclusive but was "_s, $$str(minWidth)}));
	}
	if (maxWidth < 1 || maxWidth > 9) {
		$throwNew($IllegalArgumentException, $$str({"Maximum width must be from 1 to 9 inclusive but was "_s, $$str(maxWidth)}));
	}
	if (maxWidth < minWidth) {
		$throwNew($IllegalArgumentException, $$str({"Maximum width must exceed or equal the minimum width but "_s, $$str(maxWidth), " < "_s, $$str(minWidth)}));
	}
}

void DateTimeFormatterBuilder$FractionPrinterParser::init$($TemporalField* field, int32_t minWidth, int32_t maxWidth, bool decimalPoint, int32_t subsequentWidth) {
	$init($SignStyle);
	$DateTimeFormatterBuilder$NumberPrinterParser::init$(field, minWidth, maxWidth, $SignStyle::NOT_NEGATIVE, subsequentWidth);
	this->decimalPoint = decimalPoint;
}

DateTimeFormatterBuilder$FractionPrinterParser* DateTimeFormatterBuilder$FractionPrinterParser::withFixedWidth() {
	if (this->subsequentWidth == -1) {
		return this;
	}
	return $new(DateTimeFormatterBuilder$FractionPrinterParser, this->field, this->minWidth, this->maxWidth, this->decimalPoint, -1);
}

DateTimeFormatterBuilder$FractionPrinterParser* DateTimeFormatterBuilder$FractionPrinterParser::withSubsequentWidth(int32_t subsequentWidth) {
	return $new(DateTimeFormatterBuilder$FractionPrinterParser, this->field, this->minWidth, this->maxWidth, this->decimalPoint, this->subsequentWidth + subsequentWidth);
}

bool DateTimeFormatterBuilder$FractionPrinterParser::isFixedWidth($DateTimeParseContext* context) {
	if ($nc(context)->isStrict() && this->minWidth == this->maxWidth && this->decimalPoint == false) {
		return true;
	}
	return false;
}

bool DateTimeFormatterBuilder$FractionPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$var($Long, value, $nc(context)->getValue(this->field));
	if (value == nullptr) {
		return false;
	}
	$var($DecimalStyle, decimalStyle, context->getDecimalStyle());
	$var($BigDecimal, fraction, convertToFraction($nc(value)->longValue()));
	if ($nc(fraction)->scale() == 0) {
		if (this->minWidth > 0) {
			if (this->decimalPoint) {
				$nc(buf)->append($nc(decimalStyle)->getDecimalSeparator());
			}
			for (int32_t i = 0; i < this->minWidth; ++i) {
				$nc(buf)->append($nc(decimalStyle)->getZeroDigit());
			}
		}
	} else {
		int32_t outputScale = $Math::min($Math::max(fraction->scale(), this->minWidth), this->maxWidth);
		$init($RoundingMode);
		$assign(fraction, fraction->setScale(outputScale, $RoundingMode::FLOOR));
		$var($String, str, $nc($($nc(fraction)->toPlainString()))->substring(2));
		$assign(str, $nc(decimalStyle)->convertNumberToI18N(str));
		if (this->decimalPoint) {
			$nc(buf)->append(decimalStyle->getDecimalSeparator());
		}
		$nc(buf)->append(str);
	}
	return true;
}

int32_t DateTimeFormatterBuilder$FractionPrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	bool var$0 = $nc(context)->isStrict();
	int32_t effectiveMin = (var$0 || isFixedWidth(context) ? this->minWidth : 0);
	bool var$1 = $nc(context)->isStrict();
	int32_t effectiveMax = (var$1 || isFixedWidth(context) ? this->maxWidth : 9);
	int32_t length = $nc(text)->length();
	if (position == length) {
		return (effectiveMin > 0 ? ~position : position);
	}
	if (this->decimalPoint) {
		char16_t var$2 = text->charAt(position);
		if (var$2 != $nc($($nc(context)->getDecimalStyle()))->getDecimalSeparator()) {
			return (effectiveMin > 0 ? ~position : position);
		}
		++position;
	}
	int32_t minEndPos = position + effectiveMin;
	if (minEndPos > length) {
		return ~position;
	}
	int32_t maxEndPos = $Math::min(position + effectiveMax, length);
	int32_t total = 0;
	int32_t pos = position;
	while (pos < maxEndPos) {
		char16_t ch = text->charAt(pos++);
		int32_t digit = $nc($($nc(context)->getDecimalStyle()))->convertToDigit(ch);
		if (digit < 0) {
			if (pos <= minEndPos) {
				return ~position;
			}
			--pos;
			break;
		}
		total = total * 10 + digit;
	}
	$var($BigDecimal, fraction, $$new($BigDecimal, total)->movePointLeft(pos - position));
	int64_t value = convertFromFraction(fraction);
	return $nc(context)->setParsedField(this->field, value, position, pos);
}

$BigDecimal* DateTimeFormatterBuilder$FractionPrinterParser::convertToFraction(int64_t value) {
	$var($ValueRange, range, $nc(this->field)->range());
	$nc(range)->checkValidValue(value, this->field);
	$var($BigDecimal, minBD, $BigDecimal::valueOf(range->getMinimum()));
	$var($BigDecimal, rangeBD, $nc($($nc($($BigDecimal::valueOf(range->getMaximum())))->subtract(minBD)))->add($BigDecimal::ONE));
	$var($BigDecimal, valueBD, $nc($($BigDecimal::valueOf(value)))->subtract(minBD));
	$init($RoundingMode);
	$var($BigDecimal, fraction, $nc(valueBD)->divide(rangeBD, 9, $RoundingMode::FLOOR));
	return $nc(fraction)->compareTo($BigDecimal::ZERO) == 0 ? $BigDecimal::ZERO : $nc(fraction)->stripTrailingZeros();
}

int64_t DateTimeFormatterBuilder$FractionPrinterParser::convertFromFraction($BigDecimal* fraction) {
	$var($ValueRange, range, $nc(this->field)->range());
	$var($BigDecimal, minBD, $BigDecimal::valueOf($nc(range)->getMinimum()));
	$var($BigDecimal, rangeBD, $nc($($nc($($BigDecimal::valueOf($nc(range)->getMaximum())))->subtract(minBD)))->add($BigDecimal::ONE));
	$init($RoundingMode);
	$var($BigDecimal, valueBD, $nc($($nc($($nc(fraction)->multiply(rangeBD)))->setScale(0, $RoundingMode::FLOOR)))->add(minBD));
	return $nc(valueBD)->longValueExact();
}

$String* DateTimeFormatterBuilder$FractionPrinterParser::toString() {
	$var($String, decimal, this->decimalPoint ? ",DecimalPoint"_s : ""_s);
	return $str({"Fraction("_s, this->field, ","_s, $$str(this->minWidth), ","_s, $$str(this->maxWidth), decimal, ")"_s});
}

DateTimeFormatterBuilder$FractionPrinterParser::DateTimeFormatterBuilder$FractionPrinterParser() {
}

$Class* DateTimeFormatterBuilder$FractionPrinterParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$FractionPrinterParser, name, initialize, &_DateTimeFormatterBuilder$FractionPrinterParser_ClassInfo_, allocate$DateTimeFormatterBuilder$FractionPrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$FractionPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java