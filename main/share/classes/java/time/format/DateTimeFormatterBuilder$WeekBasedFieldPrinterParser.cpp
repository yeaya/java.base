#include <java/time/format/DateTimeFormatterBuilder$WeekBasedFieldPrinterParser.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/LocalDate.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>
#include <java/time/format/DateTimeFormatterBuilder$NumberPrinterParser.h>
#include <java/time/format/DateTimeFormatterBuilder$ReducedPrinterParser.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/format/SignStyle.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/WeekFields.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef BASE_DATE
#undef EXCEEDS_PAD
#undef NORMAL
#undef NOT_NEGATIVE

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocalDate = ::java::time::LocalDate;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeFormatterBuilder$DateTimePrinterParser = ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser;
using $DateTimeFormatterBuilder$NumberPrinterParser = ::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser;
using $DateTimeFormatterBuilder$ReducedPrinterParser = ::java::time::format::DateTimeFormatterBuilder$ReducedPrinterParser;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $SignStyle = ::java::time::format::SignStyle;
using $TemporalField = ::java::time::temporal::TemporalField;
using $WeekFields = ::java::time::temporal::WeekFields;
using $Locale = ::java::util::Locale;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeFormatterBuilder$WeekBasedFieldPrinterParser_FieldInfo_[] = {
	{"chr", "C", nullptr, $PRIVATE, $field(DateTimeFormatterBuilder$WeekBasedFieldPrinterParser, chr)},
	{"count", "I", nullptr, $PRIVATE, $field(DateTimeFormatterBuilder$WeekBasedFieldPrinterParser, count)},
	{}
};

$MethodInfo _DateTimeFormatterBuilder$WeekBasedFieldPrinterParser_MethodInfo_[] = {
	{"<init>", "(CIII)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::*)(char16_t,int32_t,int32_t,int32_t)>(&DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::init$))},
	{"<init>", "(CIIII)V", nullptr, 0, $method(static_cast<void(DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::*)(char16_t,int32_t,int32_t,int32_t,int32_t)>(&DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::init$))},
	{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC},
	{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC},
	{"printerParser", "(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatterBuilder$DateTimePrinterParser;", nullptr, $PRIVATE, $method(static_cast<$DateTimeFormatterBuilder$DateTimePrinterParser*(DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::*)($Locale*)>(&DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::printerParser))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withFixedWidth", "()Ljava/time/format/DateTimeFormatterBuilder$WeekBasedFieldPrinterParser;", nullptr, 0},
	{"withSubsequentWidth", "(I)Ljava/time/format/DateTimeFormatterBuilder$WeekBasedFieldPrinterParser;", nullptr, 0},
	{}
};

$InnerClassInfo _DateTimeFormatterBuilder$WeekBasedFieldPrinterParser_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeFormatterBuilder$WeekBasedFieldPrinterParser", "java.time.format.DateTimeFormatterBuilder", "WeekBasedFieldPrinterParser", $STATIC | $FINAL},
	{"java.time.format.DateTimeFormatterBuilder$NumberPrinterParser", "java.time.format.DateTimeFormatterBuilder", "NumberPrinterParser", $STATIC},
	{}
};

$ClassInfo _DateTimeFormatterBuilder$WeekBasedFieldPrinterParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.format.DateTimeFormatterBuilder$WeekBasedFieldPrinterParser",
	"java.time.format.DateTimeFormatterBuilder$NumberPrinterParser",
	nullptr,
	_DateTimeFormatterBuilder$WeekBasedFieldPrinterParser_FieldInfo_,
	_DateTimeFormatterBuilder$WeekBasedFieldPrinterParser_MethodInfo_,
	nullptr,
	nullptr,
	_DateTimeFormatterBuilder$WeekBasedFieldPrinterParser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeFormatterBuilder"
};

$Object* allocate$DateTimeFormatterBuilder$WeekBasedFieldPrinterParser($Class* clazz) {
	return $of($alloc(DateTimeFormatterBuilder$WeekBasedFieldPrinterParser));
}

void DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::init$(char16_t chr, int32_t count, int32_t minWidth, int32_t maxWidth) {
	DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::init$(chr, count, minWidth, maxWidth, 0);
}

void DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::init$(char16_t chr, int32_t count, int32_t minWidth, int32_t maxWidth, int32_t subsequentWidth) {
	$init($SignStyle);
	$DateTimeFormatterBuilder$NumberPrinterParser::init$(nullptr, minWidth, maxWidth, $SignStyle::NOT_NEGATIVE, subsequentWidth);
	this->chr = chr;
	this->count = count;
}

DateTimeFormatterBuilder$WeekBasedFieldPrinterParser* DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::withFixedWidth() {
	if (this->subsequentWidth == -1) {
		return this;
	}
	return $new(DateTimeFormatterBuilder$WeekBasedFieldPrinterParser, this->chr, this->count, this->minWidth, this->maxWidth, -1);
}

DateTimeFormatterBuilder$WeekBasedFieldPrinterParser* DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::withSubsequentWidth(int32_t subsequentWidth) {
	return $new(DateTimeFormatterBuilder$WeekBasedFieldPrinterParser, this->chr, this->count, this->minWidth, this->maxWidth, this->subsequentWidth + subsequentWidth);
}

bool DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$useLocalCurrentObjectStackCache();
	return $nc($(printerParser($($nc(context)->getLocale()))))->format(context, buf);
}

int32_t DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	$useLocalCurrentObjectStackCache();
	return $nc($(printerParser($($nc(context)->getLocale()))))->parse(context, text, position);
}

$DateTimeFormatterBuilder$DateTimePrinterParser* DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::printerParser($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($WeekFields, weekDef, $WeekFields::of(locale));
	$var($TemporalField, field, nullptr);
	switch (this->chr) {
	case u'Y':
		{
			$assign(field, $nc(weekDef)->weekBasedYear());
			if (this->count == 2) {
				$init($DateTimeFormatterBuilder$ReducedPrinterParser);
				return $new($DateTimeFormatterBuilder$ReducedPrinterParser, field, 2, 2, 0, $DateTimeFormatterBuilder$ReducedPrinterParser::BASE_DATE, this->subsequentWidth);
			} else {
				$init($SignStyle);
				return $new($DateTimeFormatterBuilder$NumberPrinterParser, field, this->count, 19, (this->count < 4) ? $SignStyle::NORMAL : $SignStyle::EXCEEDS_PAD, this->subsequentWidth);
			}
		}
	case u'e':
		{}
	case u'c':
		{
			$assign(field, $nc(weekDef)->dayOfWeek());
			break;
		}
	case u'w':
		{
			$assign(field, $nc(weekDef)->weekOfWeekBasedYear());
			break;
		}
	case u'W':
		{
			$assign(field, $nc(weekDef)->weekOfMonth());
			break;
		}
	default:
		{
			$throwNew($IllegalStateException, "unreachable"_s);
		}
	}
	$init($SignStyle);
	return $new($DateTimeFormatterBuilder$NumberPrinterParser, field, this->minWidth, this->maxWidth, $SignStyle::NOT_NEGATIVE, this->subsequentWidth);
}

$String* DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::toString() {
	$var($StringBuilder, sb, $new($StringBuilder, 30));
	sb->append("Localized("_s);
	if (this->chr == u'Y') {
		if (this->count == 1) {
			sb->append("WeekBasedYear"_s);
		} else if (this->count == 2) {
			sb->append("ReducedValue(WeekBasedYear,2,2,2000-01-01)"_s);
		} else {
			$init($SignStyle);
			sb->append("WeekBasedYear,"_s)->append(this->count)->append(","_s)->append(19)->append(","_s)->append((this->count < 4) ? $of($SignStyle::NORMAL) : $of($SignStyle::EXCEEDS_PAD));
		}
	} else {
		switch (this->chr) {
		case u'c':
			{}
		case u'e':
			{
				sb->append("DayOfWeek"_s);
				break;
			}
		case u'w':
			{
				sb->append("WeekOfWeekBasedYear"_s);
				break;
			}
		case u'W':
			{
				sb->append("WeekOfMonth"_s);
				break;
			}
		default:
			{
				break;
			}
		}
		sb->append(","_s);
		sb->append(this->count);
	}
	sb->append(")"_s);
	return sb->toString();
}

DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::DateTimeFormatterBuilder$WeekBasedFieldPrinterParser() {
}

$Class* DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::load$($String* name, bool initialize) {
	$loadClass(DateTimeFormatterBuilder$WeekBasedFieldPrinterParser, name, initialize, &_DateTimeFormatterBuilder$WeekBasedFieldPrinterParser_ClassInfo_, allocate$DateTimeFormatterBuilder$WeekBasedFieldPrinterParser);
	return class$;
}

$Class* DateTimeFormatterBuilder$WeekBasedFieldPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java