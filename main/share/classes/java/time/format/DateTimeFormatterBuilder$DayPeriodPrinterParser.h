#ifndef _java_time_format_DateTimeFormatterBuilder$DayPeriodPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$DayPeriodPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$DayPeriodPrinterParser
//$ extends java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser

#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>

#pragma push_macro("DAYPERIOD_LOCALESTORE")
#undef DAYPERIOD_LOCALESTORE

namespace java {
	namespace lang {
		class CharSequence;
		class Long;
		class StringBuilder;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatterBuilder$DayPeriod;
			class DateTimeParseContext;
			class DateTimePrintContext;
			class DateTimeTextProvider$LocaleStore;
			class TextStyle;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace java {
	namespace time {
		namespace format {

class $export DateTimeFormatterBuilder$DayPeriodPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$DayPeriodPrinterParser, 0, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$DayPeriodPrinterParser();
	void init$(::java::time::format::TextStyle* textStyle);
	static ::java::time::format::DateTimeTextProvider$LocaleStore* findDayPeriodStore(::java::util::Locale* locale);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	static void lambda$findDayPeriodStore$1(int32_t calStyle, ::java::util::Locale* loc, ::java::util::Map* map, ::java::util::Map* periodMap, ::java::time::format::DateTimeFormatterBuilder$DayPeriod* key, ::java::lang::Long* value);
	static ::java::time::format::DateTimeTextProvider$LocaleStore* lambda$findDayPeriodStore$2(::java::util::Locale* loc);
	static bool lambda$format$0(int64_t val, ::java::time::format::DateTimeFormatterBuilder$DayPeriod* k);
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* parseText, int32_t position) override;
	virtual $String* toString() override;
	::java::time::format::TextStyle* textStyle = nullptr;
	static ::java::util::concurrent::ConcurrentMap* DAYPERIOD_LOCALESTORE;
};

		} // format
	} // time
} // java

#pragma pop_macro("DAYPERIOD_LOCALESTORE")

#endif // _java_time_format_DateTimeFormatterBuilder$DayPeriodPrinterParser_h_