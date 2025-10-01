#ifndef _java_time_format_DateTimeFormatterBuilder_h_
#define _java_time_format_DateTimeFormatterBuilder_h_
//$ class java.time.format.DateTimeFormatterBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FIELD_MAP")
#undef FIELD_MAP
#pragma push_macro("QUERY_REGION_ONLY")
#undef QUERY_REGION_ONLY

namespace java {
	namespace time {
		class ZoneId;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class Chronology;
		}
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatter;
			class DateTimeFormatterBuilder$DateTimePrinterParser;
			class DateTimeFormatterBuilder$NumberPrinterParser;
			class FormatStyle;
			class ResolverStyle;
			class SignStyle;
			class TextStyle;
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
		class List;
		class Locale;
		class Map;
		class Set;
	}
}

namespace java {
	namespace time {
		namespace format {

class $import DateTimeFormatterBuilder : public ::java::lang::Object {
	$class(DateTimeFormatterBuilder, 0, ::java::lang::Object)
public:
	DateTimeFormatterBuilder();
	void init$();
	void init$(::java::time::format::DateTimeFormatterBuilder* parent, bool optional);
	::java::time::format::DateTimeFormatterBuilder* append(::java::time::format::DateTimeFormatter* formatter);
	::java::time::format::DateTimeFormatterBuilder* appendChronologyId();
	::java::time::format::DateTimeFormatterBuilder* appendChronologyText(::java::time::format::TextStyle* textStyle);
	::java::time::format::DateTimeFormatterBuilder* appendDayPeriodText(::java::time::format::TextStyle* style);
	::java::time::format::DateTimeFormatterBuilder* appendFraction(::java::time::temporal::TemporalField* field, int32_t minWidth, int32_t maxWidth, bool decimalPoint);
	::java::time::format::DateTimeFormatterBuilder* appendGenericZoneText(::java::time::format::TextStyle* textStyle);
	::java::time::format::DateTimeFormatterBuilder* appendGenericZoneText(::java::time::format::TextStyle* textStyle, ::java::util::Set* preferredZones);
	::java::time::format::DateTimeFormatterBuilder* appendInstant();
	::java::time::format::DateTimeFormatterBuilder* appendInstant(int32_t fractionalDigits);
	int32_t appendInternal(::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser* pp);
	::java::time::format::DateTimeFormatterBuilder* appendLiteral(char16_t literal);
	::java::time::format::DateTimeFormatterBuilder* appendLiteral($String* literal);
	::java::time::format::DateTimeFormatterBuilder* appendLocalized(::java::time::format::FormatStyle* dateStyle, ::java::time::format::FormatStyle* timeStyle);
	::java::time::format::DateTimeFormatterBuilder* appendLocalizedOffset(::java::time::format::TextStyle* style);
	::java::time::format::DateTimeFormatterBuilder* appendOffset($String* pattern, $String* noOffsetText);
	::java::time::format::DateTimeFormatterBuilder* appendOffsetId();
	::java::time::format::DateTimeFormatterBuilder* appendOptional(::java::time::format::DateTimeFormatter* formatter);
	::java::time::format::DateTimeFormatterBuilder* appendPattern($String* pattern);
	::java::time::format::DateTimeFormatterBuilder* appendText(::java::time::temporal::TemporalField* field);
	::java::time::format::DateTimeFormatterBuilder* appendText(::java::time::temporal::TemporalField* field, ::java::time::format::TextStyle* textStyle);
	::java::time::format::DateTimeFormatterBuilder* appendText(::java::time::temporal::TemporalField* field, ::java::util::Map* textLookup);
	::java::time::format::DateTimeFormatterBuilder* appendValue(::java::time::temporal::TemporalField* field);
	::java::time::format::DateTimeFormatterBuilder* appendValue(::java::time::temporal::TemporalField* field, int32_t width);
	::java::time::format::DateTimeFormatterBuilder* appendValue(::java::time::temporal::TemporalField* field, int32_t minWidth, int32_t maxWidth, ::java::time::format::SignStyle* signStyle);
	::java::time::format::DateTimeFormatterBuilder* appendValue(::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser* pp);
	::java::time::format::DateTimeFormatterBuilder* appendValueReduced(::java::time::temporal::TemporalField* field, int32_t width, int32_t maxWidth, int32_t baseValue);
	::java::time::format::DateTimeFormatterBuilder* appendValueReduced(::java::time::temporal::TemporalField* field, int32_t width, int32_t maxWidth, ::java::time::chrono::ChronoLocalDate* baseDate);
	::java::time::format::DateTimeFormatterBuilder* appendZoneId();
	::java::time::format::DateTimeFormatterBuilder* appendZoneOrOffsetId();
	::java::time::format::DateTimeFormatterBuilder* appendZoneRegionId();
	::java::time::format::DateTimeFormatterBuilder* appendZoneText(::java::time::format::TextStyle* textStyle);
	::java::time::format::DateTimeFormatterBuilder* appendZoneText(::java::time::format::TextStyle* textStyle, ::java::util::Set* preferredZones);
	static int32_t convertStyle(::java::time::format::FormatStyle* style);
	static $String* getLocalizedDateTimePattern(::java::time::format::FormatStyle* dateStyle, ::java::time::format::FormatStyle* timeStyle, ::java::time::chrono::Chronology* chrono, ::java::util::Locale* locale);
	static ::java::time::ZoneId* lambda$static$0(::java::time::temporal::TemporalAccessor* temporal);
	::java::time::format::DateTimeFormatterBuilder* optionalEnd();
	::java::time::format::DateTimeFormatterBuilder* optionalStart();
	::java::time::format::DateTimeFormatterBuilder* padNext(int32_t padWidth);
	::java::time::format::DateTimeFormatterBuilder* padNext(int32_t padWidth, char16_t padChar);
	::java::time::format::DateTimeFormatterBuilder* parseCaseInsensitive();
	::java::time::format::DateTimeFormatterBuilder* parseCaseSensitive();
	::java::time::format::DateTimeFormatterBuilder* parseDefaulting(::java::time::temporal::TemporalField* field, int64_t value);
	void parseField(char16_t cur, int32_t count, ::java::time::temporal::TemporalField* field);
	::java::time::format::DateTimeFormatterBuilder* parseLenient();
	void parsePattern($String* pattern);
	::java::time::format::DateTimeFormatterBuilder* parseStrict();
	::java::time::format::DateTimeFormatter* toFormatter();
	::java::time::format::DateTimeFormatter* toFormatter(::java::util::Locale* locale);
	::java::time::format::DateTimeFormatter* toFormatter(::java::time::format::ResolverStyle* resolverStyle, ::java::time::chrono::Chronology* chrono);
	::java::time::format::DateTimeFormatter* toFormatter(::java::util::Locale* locale, ::java::time::format::ResolverStyle* resolverStyle, ::java::time::chrono::Chronology* chrono);
	static ::java::time::temporal::TemporalQuery* QUERY_REGION_ONLY;
	::java::time::format::DateTimeFormatterBuilder* active = nullptr;
	::java::time::format::DateTimeFormatterBuilder* parent = nullptr;
	::java::util::List* printerParsers = nullptr;
	bool optional = false;
	int32_t padNextWidth = 0;
	char16_t padNextChar = 0;
	int32_t valueParserIndex = 0;
	static ::java::util::Map* FIELD_MAP;
};

		} // format
	} // time
} // java

#pragma pop_macro("FIELD_MAP")
#pragma pop_macro("QUERY_REGION_ONLY")

#endif // _java_time_format_DateTimeFormatterBuilder_h_