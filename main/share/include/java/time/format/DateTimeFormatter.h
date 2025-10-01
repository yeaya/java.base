#ifndef _java_time_format_DateTimeFormatter_h_
#define _java_time_format_DateTimeFormatter_h_
//$ class java.time.format.DateTimeFormatter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ISO_OFFSET_TIME")
#undef ISO_OFFSET_TIME
#pragma push_macro("ISO_LOCAL_DATE_TIME")
#undef ISO_LOCAL_DATE_TIME
#pragma push_macro("PARSED_EXCESS_DAYS")
#undef PARSED_EXCESS_DAYS
#pragma push_macro("RFC_1123_DATE_TIME")
#undef RFC_1123_DATE_TIME
#pragma push_macro("ISO_INSTANT")
#undef ISO_INSTANT
#pragma push_macro("ISO_ZONED_DATE_TIME")
#undef ISO_ZONED_DATE_TIME
#pragma push_macro("ISO_OFFSET_DATE_TIME")
#undef ISO_OFFSET_DATE_TIME
#pragma push_macro("ISO_DATE_TIME")
#undef ISO_DATE_TIME
#pragma push_macro("ISO_DATE")
#undef ISO_DATE
#pragma push_macro("ISO_TIME")
#undef ISO_TIME
#pragma push_macro("ISO_LOCAL_TIME")
#undef ISO_LOCAL_TIME
#pragma push_macro("ISO_OFFSET_DATE")
#undef ISO_OFFSET_DATE
#pragma push_macro("ISO_ORDINAL_DATE")
#undef ISO_ORDINAL_DATE
#pragma push_macro("ISO_LOCAL_DATE")
#undef ISO_LOCAL_DATE
#pragma push_macro("BASIC_ISO_DATE")
#undef BASIC_ISO_DATE
#pragma push_macro("ISO_WEEK_DATE")
#undef ISO_WEEK_DATE
#pragma push_macro("PARSED_LEAP_SECOND")
#undef PARSED_LEAP_SECOND

namespace java {
	namespace lang {
		class Appendable;
		class Boolean;
		class CharSequence;
		class RuntimeException;
	}
}
namespace java {
	namespace text {
		class Format;
		class ParsePosition;
	}
}
namespace java {
	namespace time {
		class Period;
		class ZoneId;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class Chronology;
		}
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatterBuilder$CompositePrinterParser;
			class DateTimeParseContext;
			class DateTimeParseException;
			class DecimalStyle;
			class FormatStyle;
			class ResolverStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalAccessor;
			class TemporalField;
			class TemporalQuery;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Set;
	}
}

namespace java {
	namespace time {
		namespace format {

class $import DateTimeFormatter : public ::java::lang::Object {
	$class(DateTimeFormatter, 0, ::java::lang::Object)
public:
	DateTimeFormatter();
	void init$(::java::time::format::DateTimeFormatterBuilder$CompositePrinterParser* printerParser, ::java::util::Locale* locale, ::java::time::format::DecimalStyle* decimalStyle, ::java::time::format::ResolverStyle* resolverStyle, ::java::util::Set* resolverFields, ::java::time::chrono::Chronology* chrono, ::java::time::ZoneId* zone);
	::java::time::format::DateTimeParseException* createError(::java::lang::CharSequence* text, ::java::lang::RuntimeException* ex);
	$String* format(::java::time::temporal::TemporalAccessor* temporal);
	void formatTo(::java::time::temporal::TemporalAccessor* temporal, ::java::lang::Appendable* appendable);
	::java::time::chrono::Chronology* getChronology();
	::java::time::format::DecimalStyle* getDecimalStyle();
	::java::util::Locale* getLocale();
	::java::util::Set* getResolverFields();
	::java::time::format::ResolverStyle* getResolverStyle();
	::java::time::ZoneId* getZone();
	static ::java::time::Period* lambda$static$0(::java::time::temporal::TemporalAccessor* t);
	static ::java::lang::Boolean* lambda$static$1(::java::time::temporal::TemporalAccessor* t);
	::java::time::format::DateTimeFormatter* localizedBy(::java::util::Locale* locale);
	static ::java::time::format::DateTimeFormatter* ofLocalizedDate(::java::time::format::FormatStyle* dateStyle);
	static ::java::time::format::DateTimeFormatter* ofLocalizedDateTime(::java::time::format::FormatStyle* dateTimeStyle);
	static ::java::time::format::DateTimeFormatter* ofLocalizedDateTime(::java::time::format::FormatStyle* dateStyle, ::java::time::format::FormatStyle* timeStyle);
	static ::java::time::format::DateTimeFormatter* ofLocalizedTime(::java::time::format::FormatStyle* timeStyle);
	static ::java::time::format::DateTimeFormatter* ofPattern($String* pattern);
	static ::java::time::format::DateTimeFormatter* ofPattern($String* pattern, ::java::util::Locale* locale);
	::java::time::temporal::TemporalAccessor* parse(::java::lang::CharSequence* text);
	::java::time::temporal::TemporalAccessor* parse(::java::lang::CharSequence* text, ::java::text::ParsePosition* position);
	$Object* parse(::java::lang::CharSequence* text, ::java::time::temporal::TemporalQuery* query);
	::java::time::temporal::TemporalAccessor* parseBest(::java::lang::CharSequence* text, $Array<::java::time::temporal::TemporalQuery>* queries);
	::java::time::temporal::TemporalAccessor* parseResolved0(::java::lang::CharSequence* text, ::java::text::ParsePosition* position);
	::java::time::temporal::TemporalAccessor* parseUnresolved(::java::lang::CharSequence* text, ::java::text::ParsePosition* position);
	::java::time::format::DateTimeParseContext* parseUnresolved0(::java::lang::CharSequence* text, ::java::text::ParsePosition* position);
	static ::java::time::temporal::TemporalQuery* parsedExcessDays();
	static ::java::time::temporal::TemporalQuery* parsedLeapSecond();
	::java::text::Format* toFormat();
	::java::text::Format* toFormat(::java::time::temporal::TemporalQuery* parseQuery);
	::java::time::format::DateTimeFormatterBuilder$CompositePrinterParser* toPrinterParser(bool optional);
	virtual $String* toString() override;
	::java::time::format::DateTimeFormatter* withChronology(::java::time::chrono::Chronology* chrono);
	::java::time::format::DateTimeFormatter* withDecimalStyle(::java::time::format::DecimalStyle* decimalStyle);
	::java::time::format::DateTimeFormatter* withLocale(::java::util::Locale* locale);
	::java::time::format::DateTimeFormatter* withResolverFields($Array<::java::time::temporal::TemporalField>* resolverFields);
	::java::time::format::DateTimeFormatter* withResolverFields(::java::util::Set* resolverFields);
	::java::time::format::DateTimeFormatter* withResolverStyle(::java::time::format::ResolverStyle* resolverStyle);
	::java::time::format::DateTimeFormatter* withZone(::java::time::ZoneId* zone);
	::java::time::format::DateTimeFormatterBuilder$CompositePrinterParser* printerParser = nullptr;
	::java::util::Locale* locale = nullptr;
	::java::time::format::DecimalStyle* decimalStyle = nullptr;
	::java::time::format::ResolverStyle* resolverStyle = nullptr;
	::java::util::Set* resolverFields = nullptr;
	::java::time::chrono::Chronology* chrono = nullptr;
	::java::time::ZoneId* zone = nullptr;
	static ::java::time::format::DateTimeFormatter* ISO_LOCAL_DATE;
	static ::java::time::format::DateTimeFormatter* ISO_OFFSET_DATE;
	static ::java::time::format::DateTimeFormatter* ISO_DATE;
	static ::java::time::format::DateTimeFormatter* ISO_LOCAL_TIME;
	static ::java::time::format::DateTimeFormatter* ISO_OFFSET_TIME;
	static ::java::time::format::DateTimeFormatter* ISO_TIME;
	static ::java::time::format::DateTimeFormatter* ISO_LOCAL_DATE_TIME;
	static ::java::time::format::DateTimeFormatter* ISO_OFFSET_DATE_TIME;
	static ::java::time::format::DateTimeFormatter* ISO_ZONED_DATE_TIME;
	static ::java::time::format::DateTimeFormatter* ISO_DATE_TIME;
	static ::java::time::format::DateTimeFormatter* ISO_ORDINAL_DATE;
	static ::java::time::format::DateTimeFormatter* ISO_WEEK_DATE;
	static ::java::time::format::DateTimeFormatter* ISO_INSTANT;
	static ::java::time::format::DateTimeFormatter* BASIC_ISO_DATE;
	static ::java::time::format::DateTimeFormatter* RFC_1123_DATE_TIME;
	static ::java::time::temporal::TemporalQuery* PARSED_EXCESS_DAYS;
	static ::java::time::temporal::TemporalQuery* PARSED_LEAP_SECOND;
};

		} // format
	} // time
} // java

#pragma pop_macro("ISO_OFFSET_TIME")
#pragma pop_macro("ISO_LOCAL_DATE_TIME")
#pragma pop_macro("PARSED_EXCESS_DAYS")
#pragma pop_macro("RFC_1123_DATE_TIME")
#pragma pop_macro("ISO_INSTANT")
#pragma pop_macro("ISO_ZONED_DATE_TIME")
#pragma pop_macro("ISO_OFFSET_DATE_TIME")
#pragma pop_macro("ISO_DATE_TIME")
#pragma pop_macro("ISO_DATE")
#pragma pop_macro("ISO_TIME")
#pragma pop_macro("ISO_LOCAL_TIME")
#pragma pop_macro("ISO_OFFSET_DATE")
#pragma pop_macro("ISO_ORDINAL_DATE")
#pragma pop_macro("ISO_LOCAL_DATE")
#pragma pop_macro("BASIC_ISO_DATE")
#pragma pop_macro("ISO_WEEK_DATE")
#pragma pop_macro("PARSED_LEAP_SECOND")

#endif // _java_time_format_DateTimeFormatter_h_