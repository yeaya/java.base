#include <java/time/format/DateTimeFormatterBuilder$InstantPrinterParser.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/time/LocalDateTime.h>
#include <java/time/ZoneOffset.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/format/DateTimeFormatterBuilder$CompositePrinterParser.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <jcpp.h>

#undef DAY_OF_MONTH
#undef HOUR_OF_DAY
#undef INSTANT_SECONDS
#undef ISO_LOCAL_DATE
#undef MINUTE_OF_HOUR
#undef MONTH_OF_YEAR
#undef NANO_OF_SECOND
#undef OFFSET_SECONDS
#undef SECOND_OF_MINUTE
#undef UTC
#undef YEAR

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $LocalDateTime = ::java::time::LocalDateTime;
using $ZoneOffset = ::java::time::ZoneOffset;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeFormatterBuilder$CompositePrinterParser = ::java::time::format::DateTimeFormatterBuilder$CompositePrinterParser;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$InstantPrinterParser_FieldInfo_[] = {
	{"SECONDS_PER_10000_YEARS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DateTimeFormatterBuilder$InstantPrinterParser, SECONDS_PER_10000_YEARS)},
	{"SECONDS_0000_TO_1970", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DateTimeFormatterBuilder$InstantPrinterParser, SECONDS_0000_TO_1970)},
	{"fractionalDigits", "I", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$InstantPrinterParser, fractionalDigits)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$InstantPrinterParser_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(DateTimeFormatterBuilder$InstantPrinterParser, init$, void, int32_t)},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$InstantPrinterParser, format, bool, $DateTimePrintContext*, $StringBuilder*)},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$InstantPrinterParser, parse, int32_t, $DateTimeParseContext*, $CharSequence*, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$InstantPrinterParser, toString, $String*)},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$InstantPrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$InstantPrinterParser", "java.time.format.DateTimeFormatterBuilder", "InstantPrinterParser", $STATIC | $FINAL},
	{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$InstantPrinterParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$InstantPrinterParser",
	"java.lang.Object",
	"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
	_DateTimeFormatterBuilder$InstantPrinterParser_FieldInfo_,
	_DateTimeFormatterBuilder$InstantPrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$InstantPrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$InstantPrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$InstantPrinterParser));
}

void DateTimeFormatterBuilder$InstantPrinterParser::init$(int32_t fractionalDigits) {
	this->fractionalDigits = fractionalDigits;
}

bool DateTimeFormatterBuilder$InstantPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$useLocalCurrentObjectStackCache();
	$init($ChronoField);
	$var($Long, inSecs, $nc(context)->getValue(static_cast<$TemporalField*>($ChronoField::INSTANT_SECONDS)));
	$var($Long, inNanos, nullptr);
	if ($nc($(context->getTemporal()))->isSupported($ChronoField::NANO_OF_SECOND)) {
		$assign(inNanos, $Long::valueOf($nc($(context->getTemporal()))->getLong($ChronoField::NANO_OF_SECOND)));
	}
	if (inSecs == nullptr) {
		return false;
	}
	int64_t inSec = $nc(inSecs)->longValue();
	int32_t inNano = $ChronoField::NANO_OF_SECOND->checkValidIntValue(inNanos != nullptr ? $nc(inNanos)->longValue() : (int64_t)0);
	if (inSec >= -DateTimeFormatterBuilder$InstantPrinterParser::SECONDS_0000_TO_1970) {
		int64_t zeroSecs = inSec - DateTimeFormatterBuilder$InstantPrinterParser::SECONDS_PER_10000_YEARS + DateTimeFormatterBuilder$InstantPrinterParser::SECONDS_0000_TO_1970;
		int64_t hi = $Math::floorDiv(zeroSecs, DateTimeFormatterBuilder$InstantPrinterParser::SECONDS_PER_10000_YEARS) + 1;
		int64_t lo = $Math::floorMod(zeroSecs, DateTimeFormatterBuilder$InstantPrinterParser::SECONDS_PER_10000_YEARS);
		$init($ZoneOffset);
		$var($LocalDateTime, ldt, $LocalDateTime::ofEpochSecond(lo - DateTimeFormatterBuilder$InstantPrinterParser::SECONDS_0000_TO_1970, 0, $ZoneOffset::UTC));
		if (hi > 0) {
			$nc(buf)->append(u'+')->append(hi);
		}
		$nc(buf)->append($of(ldt));
		if ($nc(ldt)->getSecond() == 0) {
			buf->append(":00"_s);
		}
	} else {
		int64_t zeroSecs = inSec + DateTimeFormatterBuilder$InstantPrinterParser::SECONDS_0000_TO_1970;
		int64_t hi = $div(zeroSecs, DateTimeFormatterBuilder$InstantPrinterParser::SECONDS_PER_10000_YEARS);
		int64_t lo = $mod(zeroSecs, DateTimeFormatterBuilder$InstantPrinterParser::SECONDS_PER_10000_YEARS);
		$init($ZoneOffset);
		$var($LocalDateTime, ldt, $LocalDateTime::ofEpochSecond(lo - DateTimeFormatterBuilder$InstantPrinterParser::SECONDS_0000_TO_1970, 0, $ZoneOffset::UTC));
		int32_t pos = $nc(buf)->length();
		buf->append($of(ldt));
		if ($nc(ldt)->getSecond() == 0) {
			buf->append(":00"_s);
		}
		if (hi < 0) {
			if ($nc(ldt)->getYear() == -10000) {
				buf->replace(pos, pos + 2, $($Long::toString(hi - 1)));
			} else if (lo == 0) {
				buf->insert(pos, hi);
			} else {
				buf->insert(pos + 1, $Math::abs(hi));
			}
		}
	}
	if ((this->fractionalDigits < 0 && inNano > 0) || this->fractionalDigits > 0) {
		$nc(buf)->append(u'.');
		int32_t div = 0x05F5E100;
		for (int32_t i = 0; ((this->fractionalDigits == -1 && inNano > 0) || (this->fractionalDigits == -2 && (inNano > 0 || (i % 3) != 0)) || i < this->fractionalDigits); ++i) {
			int32_t digit = $div(inNano, div);
			buf->append((char16_t)(digit + u'0'));
			inNano = inNano - (digit * div);
			div = div / 10;
		}
	}
	$nc(buf)->append(u'Z');
	return true;
}

int32_t DateTimeFormatterBuilder$InstantPrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	$useLocalCurrentObjectStackCache();
	int32_t minDigits = (this->fractionalDigits < 0 ? 0 : this->fractionalDigits);
	int32_t maxDigits = (this->fractionalDigits < 0 ? 9 : this->fractionalDigits);
	$init($DateTimeFormatter);
	$init($ChronoField);
	$var($DateTimeFormatterBuilder$CompositePrinterParser, parser, $nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($$new($DateTimeFormatterBuilder)->append($DateTimeFormatter::ISO_LOCAL_DATE)))->appendLiteral(u'T')))->appendValue($ChronoField::HOUR_OF_DAY, 2)))->appendLiteral(u':')))->appendValue($ChronoField::MINUTE_OF_HOUR, 2)))->appendLiteral(u':')))->appendValue($ChronoField::SECOND_OF_MINUTE, 2)))->appendFraction($ChronoField::NANO_OF_SECOND, minDigits, maxDigits, true)))->appendOffsetId()))->toFormatter()))->toPrinterParser(false));
	$var($DateTimeParseContext, newContext, $nc(context)->copy());
	int32_t pos = $nc(parser)->parse(newContext, text, position);
	if (pos < 0) {
		return pos;
	}
	int64_t yearParsed = $nc($($nc(newContext)->getParsed($ChronoField::YEAR)))->longValue();
	int32_t month = $nc($(newContext->getParsed($ChronoField::MONTH_OF_YEAR)))->intValue();
	int32_t day = $nc($(newContext->getParsed($ChronoField::DAY_OF_MONTH)))->intValue();
	int32_t hour = $nc($(newContext->getParsed($ChronoField::HOUR_OF_DAY)))->intValue();
	int32_t min = $nc($(newContext->getParsed($ChronoField::MINUTE_OF_HOUR)))->intValue();
	$var($Long, secVal, newContext->getParsed($ChronoField::SECOND_OF_MINUTE));
	$var($Long, nanoVal, newContext->getParsed($ChronoField::NANO_OF_SECOND));
	int32_t sec = (secVal != nullptr ? $nc(secVal)->intValue() : 0);
	int32_t nano = (nanoVal != nullptr ? $nc(nanoVal)->intValue() : 0);
	int32_t offset = $nc($(newContext->getParsed($ChronoField::OFFSET_SECONDS)))->intValue();
	int32_t days = 0;
	if (hour == 24 && min == 0 && sec == 0 && nano == 0) {
		hour = 0;
		days = 1;
	} else if (hour == 23 && min == 59 && sec == 60) {
		context->setParsedLeapSecond();
		sec = 59;
	}
	int32_t year = (int32_t)yearParsed % 10000;
	int64_t instantSecs = 0;
	try {
		$var($LocalDateTime, ldt, $nc($($LocalDateTime::of(year, month, day, hour, min, sec, 0)))->plusDays(days));
		instantSecs = $nc(ldt)->toEpochSecond($($ZoneOffset::ofTotalSeconds(offset)));
		instantSecs += $Math::multiplyExact($div(yearParsed, (int64_t)10000), DateTimeFormatterBuilder$InstantPrinterParser::SECONDS_PER_10000_YEARS);
	} catch ($RuntimeException& ex) {
		return ~position;
	}
	int32_t successPos = pos;
	successPos = context->setParsedField($ChronoField::INSTANT_SECONDS, instantSecs, position, successPos);
	return context->setParsedField($ChronoField::NANO_OF_SECOND, nano, position, successPos);
}

$String* DateTimeFormatterBuilder$InstantPrinterParser::toString() {
	return "Instant()"_s;
}

DateTimeFormatterBuilder$InstantPrinterParser::DateTimeFormatterBuilder$InstantPrinterParser() {
}

$Class* DateTimeFormatterBuilder$InstantPrinterParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$InstantPrinterParser, name, initialize, &_DateTimeFormatterBuilder$InstantPrinterParser_ClassInfo_, allocate$DateTimeFormatterBuilder$InstantPrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$InstantPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java