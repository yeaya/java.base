#include <java/time/format/DateTimeFormatterBuilder$NumberPrinterParser.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/time/DateTimeException.h>
#include <java/time/format/DateTimeFormatterBuilder$2.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/format/DecimalStyle.h>
#include <java/time/format/SignStyle.h>
#include <java/time/temporal/TemporalField.h>
#include <jcpp.h>

#undef ALWAYS
#undef EXCEEDS_PAD
#undef EXCEED_POINTS
#undef MIN_VALUE
#undef NORMAL
#undef NOT_NEGATIVE
#undef TEN
#undef ZERO

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $DateTimeException = ::java::time::DateTimeException;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeFormatterBuilder$2 = ::java::time::format::DateTimeFormatterBuilder$2;
using $DateTimeFormatterBuilder$DateTimePrinterParser = ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $DecimalStyle = ::java::time::format::DecimalStyle;
using $SignStyle = ::java::time::format::SignStyle;
using $TemporalField = ::java::time::temporal::TemporalField;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$NumberPrinterParser_FieldInfo_[] = {
	{"EXCEED_POINTS", "[J", nullptr, $STATIC | $FINAL, $staticField(DateTimeFormatterBuilder$NumberPrinterParser, EXCEED_POINTS)},
	{"field", "Ljava/time/temporal/TemporalField;", nullptr, $FINAL, $field(DateTimeFormatterBuilder$NumberPrinterParser, field)},
	{"minWidth", "I", nullptr, $FINAL, $field(DateTimeFormatterBuilder$NumberPrinterParser, minWidth)},
	{"maxWidth", "I", nullptr, $FINAL, $field(DateTimeFormatterBuilder$NumberPrinterParser, maxWidth)},
	{"signStyle", "Ljava/time/format/SignStyle;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$NumberPrinterParser, signStyle)},
	{"subsequentWidth", "I", nullptr, $FINAL, $field(DateTimeFormatterBuilder$NumberPrinterParser, subsequentWidth)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$NumberPrinterParser_MethodInfo_[] = {
	{"<init>", "(Ljava/time/temporal/TemporalField;IILjava/time/format/SignStyle;)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$NumberPrinterParser::*)($TemporalField*,int32_t,int32_t,$SignStyle*)>(&DateTimeFormatterBuilder$NumberPrinterParser::init$))},
	{"<init>", "(Ljava/time/temporal/TemporalField;IILjava/time/format/SignStyle;I)V", nullptr, $PROTECTED, $method(static_cast<void(DateTimeFormatterBuilder$NumberPrinterParser::*)($TemporalField*,int32_t,int32_t,$SignStyle*,int32_t)>(&DateTimeFormatterBuilder$NumberPrinterParser::init$))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"getValue", "(Ljava/time/format/DateTimePrintContext;J)J", nullptr, 0},
	{"isFixedWidth", "(Ljava/time/format/DateTimeParseContext;)Z", nullptr, 0},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/time/format/DateTimeParseContext;JII)I", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withFixedWidth", "()Ljava/time/format/DateTimeFormatterBuilder$NumberPrinterParser;", nullptr, 0},
	{"withSubsequentWidth", "(I)Ljava/time/format/DateTimeFormatterBuilder$NumberPrinterParser;", nullptr, 0},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$NumberPrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$NumberPrinterParser", "java.time.format.DateTimeFormatterBuilder", "NumberPrinterParser", $STATIC},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$NumberPrinterParser_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$NumberPrinterParser",
	"java.lang.Object",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$NumberPrinterParser_FieldInfo_,
	_DateTimeFormatterBuilder$NumberPrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$NumberPrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$NumberPrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$NumberPrinterParser));
}


$longs* DateTimeFormatterBuilder$NumberPrinterParser::EXCEED_POINTS = nullptr;

void DateTimeFormatterBuilder$NumberPrinterParser::init$($TemporalField* field, int32_t minWidth, int32_t maxWidth, $SignStyle* signStyle) {
	$set(this, field, field);
	this->minWidth = minWidth;
	this->maxWidth = maxWidth;
	$set(this, signStyle, signStyle);
	this->subsequentWidth = 0;
}

void DateTimeFormatterBuilder$NumberPrinterParser::init$($TemporalField* field, int32_t minWidth, int32_t maxWidth, $SignStyle* signStyle, int32_t subsequentWidth) {
	$set(this, field, field);
	this->minWidth = minWidth;
	this->maxWidth = maxWidth;
	$set(this, signStyle, signStyle);
	this->subsequentWidth = subsequentWidth;
}

DateTimeFormatterBuilder$NumberPrinterParser* DateTimeFormatterBuilder$NumberPrinterParser::withFixedWidth() {
	if (this->subsequentWidth == -1) {
		return this;
	}
	return $new(DateTimeFormatterBuilder$NumberPrinterParser, this->field, this->minWidth, this->maxWidth, this->signStyle, -1);
}

DateTimeFormatterBuilder$NumberPrinterParser* DateTimeFormatterBuilder$NumberPrinterParser::withSubsequentWidth(int32_t subsequentWidth) {
	return $new(DateTimeFormatterBuilder$NumberPrinterParser, this->field, this->minWidth, this->maxWidth, this->signStyle, this->subsequentWidth + subsequentWidth);
}

bool DateTimeFormatterBuilder$NumberPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$useLocalCurrentObjectStackCache();
	$var($Long, valueLong, $nc(context)->getValue(this->field));
	if (valueLong == nullptr) {
		return false;
	}
	int64_t value = getValue(context, $nc(valueLong)->longValue());
	$var($DecimalStyle, decimalStyle, context->getDecimalStyle());
	$var($String, str, value == $Long::MIN_VALUE ? "9223372036854775808"_s : $Long::toString($Math::abs(value)));
	if ($nc(str)->length() > this->maxWidth) {
		$throwNew($DateTimeException, $$str({"Field "_s, this->field, " cannot be printed as the value "_s, $$str(value), " exceeds the maximum print width of "_s, $$str(this->maxWidth)}));
	}
	$assign(str, $nc(decimalStyle)->convertNumberToI18N(str));
	if (value >= 0) {
		$init($DateTimeFormatterBuilder$2);
		switch ($nc($DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle)->get((this->signStyle)->ordinal())) {
		case 1:
			{
				if (this->minWidth < 19 && value >= $nc(DateTimeFormatterBuilder$NumberPrinterParser::EXCEED_POINTS)->get(this->minWidth)) {
					$nc(buf)->append(decimalStyle->getPositiveSign());
				}
				break;
			}
		case 2:
			{
				$nc(buf)->append(decimalStyle->getPositiveSign());
				break;
			}
		}
	} else {
		$init($DateTimeFormatterBuilder$2);
		switch ($nc($DateTimeFormatterBuilder$2::$SwitchMap$java$time$format$SignStyle)->get((this->signStyle)->ordinal())) {
		case 3:
			{}
		case 1:
			{}
		case 2:
			{
				$nc(buf)->append(decimalStyle->getNegativeSign());
				break;
			}
		case 4:
			{
				$throwNew($DateTimeException, $$str({"Field "_s, this->field, " cannot be printed as the value "_s, $$str(value), " cannot be negative according to the SignStyle"_s}));
			}
		}
	}
	for (int32_t i = 0; i < this->minWidth - $nc(str)->length(); ++i) {
		$nc(buf)->append(decimalStyle->getZeroDigit());
	}
	$nc(buf)->append(str);
	return true;
}

int64_t DateTimeFormatterBuilder$NumberPrinterParser::getValue($DateTimePrintContext* context, int64_t value) {
	return value;
}

bool DateTimeFormatterBuilder$NumberPrinterParser::isFixedWidth($DateTimeParseContext* context) {
	$init($SignStyle);
	return this->subsequentWidth == -1 || (this->subsequentWidth > 0 && this->minWidth == this->maxWidth && this->signStyle == $SignStyle::NOT_NEGATIVE);
}

int32_t DateTimeFormatterBuilder$NumberPrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(text)->length();
	if (position == length) {
		return ~position;
	}
	char16_t sign = text->charAt(position);
	bool negative = false;
	bool positive = false;
	if (sign == $nc($($nc(context)->getDecimalStyle()))->getPositiveSign()) {
		if (this->signStyle->parse(true, context->isStrict(), this->minWidth == this->maxWidth) == false) {
			return ~position;
		}
		positive = true;
		++position;
	} else if (sign == $nc($(context->getDecimalStyle()))->getNegativeSign()) {
		if (this->signStyle->parse(false, context->isStrict(), this->minWidth == this->maxWidth) == false) {
			return ~position;
		}
		negative = true;
		++position;
	} else {
		$init($SignStyle);
		if (this->signStyle == $SignStyle::ALWAYS && context->isStrict()) {
			return ~position;
		}
	}
	bool var$0 = $nc(context)->isStrict();
	int32_t effMinWidth = (var$0 || isFixedWidth(context) ? this->minWidth : 1);
	int32_t minEndPos = position + effMinWidth;
	if (minEndPos > length) {
		return ~position;
	}
	bool var$2 = $nc(context)->isStrict();
	int32_t var$1 = (var$2 || isFixedWidth(context) ? this->maxWidth : 9);
	int32_t effMaxWidth = var$1 + $Math::max(this->subsequentWidth, 0);
	int64_t total = 0;
	$var($BigInteger, totalBig, nullptr);
	int32_t pos = position;
	for (int32_t pass = 0; pass < 2; ++pass) {
		int32_t maxEndPos = $Math::min(pos + effMaxWidth, length);
		while (pos < maxEndPos) {
			char16_t ch = text->charAt(pos++);
			int32_t digit = $nc($($nc(context)->getDecimalStyle()))->convertToDigit(ch);
			if (digit < 0) {
				--pos;
				if (pos < minEndPos) {
					return ~position;
				}
				break;
			}
			if ((pos - position) > 18) {
				if (totalBig == nullptr) {
					$assign(totalBig, $BigInteger::valueOf(total));
				}
				$init($BigInteger);
				$assign(totalBig, $nc($($nc(totalBig)->multiply($BigInteger::TEN)))->add($($BigInteger::valueOf((int64_t)digit))));
			} else {
				total = total * 10 + digit;
			}
		}
		if (this->subsequentWidth > 0 && pass == 0) {
			int32_t parseLen = pos - position;
			effMaxWidth = $Math::max(effMinWidth, parseLen - this->subsequentWidth);
			pos = position;
			total = 0;
			$assign(totalBig, nullptr);
		} else {
			break;
		}
	}
	if (negative) {
		if (totalBig != nullptr) {
			$init($BigInteger);
			bool var$3 = totalBig->equals($BigInteger::ZERO);
			if (var$3 && $nc(context)->isStrict()) {
				return ~(position - 1);
			}
			$assign(totalBig, totalBig->negate());
		} else {
			if (total == 0 && $nc(context)->isStrict()) {
				return ~(position - 1);
			}
			total = -total;
		}
	} else {
		$init($SignStyle);
		if (this->signStyle == $SignStyle::EXCEEDS_PAD && $nc(context)->isStrict()) {
			int32_t parseLen = pos - position;
			if (positive) {
				if (parseLen <= this->minWidth) {
					return ~(position - 1);
				}
			} else if (parseLen > this->minWidth) {
				return ~position;
			}
		}
	}
	if (totalBig != nullptr) {
		if (totalBig->bitLength() > 63) {
			$init($BigInteger);
			$assign(totalBig, totalBig->divide($BigInteger::TEN));
			--pos;
		}
		return setValue(context, totalBig->longValue(), position, pos);
	}
	return setValue(context, total, position, pos);
}

int32_t DateTimeFormatterBuilder$NumberPrinterParser::setValue($DateTimeParseContext* context, int64_t value, int32_t errorPos, int32_t successPos) {
	return $nc(context)->setParsedField(this->field, value, errorPos, successPos);
}

$String* DateTimeFormatterBuilder$NumberPrinterParser::toString() {
	$useLocalCurrentObjectStackCache();
	$init($SignStyle);
	if (this->minWidth == 1 && this->maxWidth == 19 && this->signStyle == $SignStyle::NORMAL) {
		return $str({"Value("_s, this->field, ")"_s});
	}
	if (this->minWidth == this->maxWidth && this->signStyle == $SignStyle::NOT_NEGATIVE) {
		return $str({"Value("_s, this->field, ","_s, $$str(this->minWidth), ")"_s});
	}
	return $str({"Value("_s, this->field, ","_s, $$str(this->minWidth), ","_s, $$str(this->maxWidth), ","_s, this->signStyle, ")"_s});
}

void clinit$DateTimeFormatterBuilder$NumberPrinterParser($Class* class$) {
	$assignStatic(DateTimeFormatterBuilder$NumberPrinterParser::EXCEED_POINTS, $new($longs, {
		(int64_t)0,
		(int64_t)10,
		(int64_t)100,
		(int64_t)1000,
		(int64_t)10000,
		(int64_t)100000,
		(int64_t)1000000,
		(int64_t)10000000,
		(int64_t)100000000,
		(int64_t)1000000000,
		(int64_t)0x00000002540BE400
	}));
}

DateTimeFormatterBuilder$NumberPrinterParser::DateTimeFormatterBuilder$NumberPrinterParser() {
}

$Class* DateTimeFormatterBuilder$NumberPrinterParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$NumberPrinterParser, name, initialize, &_DateTimeFormatterBuilder$NumberPrinterParser_ClassInfo_, clinit$DateTimeFormatterBuilder$NumberPrinterParser, allocate$DateTimeFormatterBuilder$NumberPrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$NumberPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java