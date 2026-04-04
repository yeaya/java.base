#include <java/time/format/DateTimeFormatterBuilder$LocalizedPrinterParser.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/format/DateTimeFormatterBuilder$CompositePrinterParser.h>
#include <java/time/format/DateTimeFormatterBuilder.h>
#include <java/time/format/DateTimeParseContext.h>
#include <java/time/format/DateTimePrintContext.h>
#include <java/time/format/FormatStyle.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/util/Locale.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <jcpp.h>

#undef FORMATTER_CACHE

using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Chronology = ::java::time::chrono::Chronology;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $DateTimeFormatterBuilder = ::java::time::format::DateTimeFormatterBuilder;
using $DateTimeParseContext = ::java::time::format::DateTimeParseContext;
using $DateTimePrintContext = ::java::time::format::DateTimePrintContext;
using $FormatStyle = ::java::time::format::FormatStyle;
using $Locale = ::java::util::Locale;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;

namespace java {
	namespace time {
		namespace format {

$ConcurrentMap* DateTimeFormatterBuilder$LocalizedPrinterParser::FORMATTER_CACHE = nullptr;

void DateTimeFormatterBuilder$LocalizedPrinterParser::init$($FormatStyle* dateStyle, $FormatStyle* timeStyle) {
	$set(this, dateStyle, dateStyle);
	$set(this, timeStyle, timeStyle);
}

bool DateTimeFormatterBuilder$LocalizedPrinterParser::format($DateTimePrintContext* context, $StringBuilder* buf) {
	$useLocalObjectStack();
	$var($Chronology, chrono, $Chronology::from($($nc(context)->getTemporal())));
	return $$nc($$nc(formatter($(context->getLocale()), chrono))->toPrinterParser(false))->format(context, buf);
}

int32_t DateTimeFormatterBuilder$LocalizedPrinterParser::parse($DateTimeParseContext* context, $CharSequence* text, int32_t position) {
	$useLocalObjectStack();
	$var($Chronology, chrono, $nc(context)->getEffectiveChronology());
	return $$nc($$nc(formatter($(context->getLocale()), chrono))->toPrinterParser(false))->parse(context, text, position);
}

$DateTimeFormatter* DateTimeFormatterBuilder$LocalizedPrinterParser::formatter($Locale* locale, $Chronology* chrono) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc(chrono)->getId()));
	var$0->append(u'|');
	var$0->append($($nc(locale)->toString()));
	var$0->append(u'|');
	var$0->append(this->dateStyle);
	var$0->append(this->timeStyle);
	$var($String, key, $str(var$0));
	$var($DateTimeFormatter, formatter, $cast($DateTimeFormatter, DateTimeFormatterBuilder$LocalizedPrinterParser::FORMATTER_CACHE->get(key)));
	if (formatter == nullptr) {
		$var($String, pattern, $DateTimeFormatterBuilder::getLocalizedDateTimePattern(this->dateStyle, this->timeStyle, chrono, locale));
		$assign(formatter, $$nc($$new($DateTimeFormatterBuilder)->appendPattern(pattern))->toFormatter(locale));
		$var($DateTimeFormatter, old, $cast($DateTimeFormatter, DateTimeFormatterBuilder$LocalizedPrinterParser::FORMATTER_CACHE->putIfAbsent(key, formatter)));
		if (old != nullptr) {
			$assign(formatter, old);
		}
	}
	return formatter;
}

$String* DateTimeFormatterBuilder$LocalizedPrinterParser::toString() {
	return $str({"Localized("_s, (this->dateStyle != nullptr ? $cast($Serializable, this->dateStyle) : $cast($Serializable, ""_s)), ","_s, (this->timeStyle != nullptr ? $cast($Serializable, this->timeStyle) : $cast($Serializable, ""_s)), ")"_s});
}

void DateTimeFormatterBuilder$LocalizedPrinterParser::clinit$($Class* clazz) {
	$assignStatic(DateTimeFormatterBuilder$LocalizedPrinterParser::FORMATTER_CACHE, $new($ConcurrentHashMap, 16, 0.75f, 2));
}

DateTimeFormatterBuilder$LocalizedPrinterParser::DateTimeFormatterBuilder$LocalizedPrinterParser() {
}

$Class* DateTimeFormatterBuilder$LocalizedPrinterParser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FORMATTER_CACHE", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/String;Ljava/time/format/DateTimeFormatter;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DateTimeFormatterBuilder$LocalizedPrinterParser, FORMATTER_CACHE)},
		{"dateStyle", "Ljava/time/format/FormatStyle;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$LocalizedPrinterParser, dateStyle)},
		{"timeStyle", "Ljava/time/format/FormatStyle;", nullptr, $PRIVATE | $FINAL, $field(DateTimeFormatterBuilder$LocalizedPrinterParser, timeStyle)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;)V", nullptr, 0, $method(DateTimeFormatterBuilder$LocalizedPrinterParser, init$, void, $FormatStyle*, $FormatStyle*)},
		{"format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$LocalizedPrinterParser, format, bool, $DateTimePrintContext*, $StringBuilder*)},
		{"formatter", "(Ljava/util/Locale;Ljava/time/chrono/Chronology;)Ljava/time/format/DateTimeFormatter;", nullptr, $PRIVATE, $method(DateTimeFormatterBuilder$LocalizedPrinterParser, formatter, $DateTimeFormatter*, $Locale*, $Chronology*)},
		{"parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$LocalizedPrinterParser, parse, int32_t, $DateTimeParseContext*, $CharSequence*, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DateTimeFormatterBuilder$LocalizedPrinterParser, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.format.DateTimeFormatterBuilder$LocalizedPrinterParser", "java.time.format.DateTimeFormatterBuilder", "LocalizedPrinterParser", $STATIC | $FINAL},
		{"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser", "java.time.format.DateTimeFormatterBuilder", "DateTimePrinterParser", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.time.format.DateTimeFormatterBuilder$LocalizedPrinterParser",
		"java.lang.Object",
		"java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.format.DateTimeFormatterBuilder"
	};
	$loadClass(DateTimeFormatterBuilder$LocalizedPrinterParser, name, initialize, &classInfo$$, DateTimeFormatterBuilder$LocalizedPrinterParser::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DateTimeFormatterBuilder$LocalizedPrinterParser);
	});
	return class$;
}

$Class* DateTimeFormatterBuilder$LocalizedPrinterParser::class$ = nullptr;

		} // format
	} // time
} // java