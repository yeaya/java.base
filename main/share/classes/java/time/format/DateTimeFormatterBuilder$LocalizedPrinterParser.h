#ifndef _java_time_format_DateTimeFormatterBuilder$LocalizedPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$LocalizedPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$LocalizedPrinterParser
//$ extends java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser

#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>

#pragma push_macro("FORMATTER_CACHE")
#undef FORMATTER_CACHE

namespace java {
	namespace lang {
		class CharSequence;
		class StringBuilder;
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
			class DateTimeFormatter;
			class DateTimeParseContext;
			class DateTimePrintContext;
			class FormatStyle;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
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

class $export DateTimeFormatterBuilder$LocalizedPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$LocalizedPrinterParser, 0, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$LocalizedPrinterParser();
	void init$(::java::time::format::FormatStyle* dateStyle, ::java::time::format::FormatStyle* timeStyle);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	::java::time::format::DateTimeFormatter* formatter(::java::util::Locale* locale, ::java::time::chrono::Chronology* chrono);
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	virtual $String* toString() override;
	static ::java::util::concurrent::ConcurrentMap* FORMATTER_CACHE;
	::java::time::format::FormatStyle* dateStyle = nullptr;
	::java::time::format::FormatStyle* timeStyle = nullptr;
};

		} // format
	} // time
} // java

#pragma pop_macro("FORMATTER_CACHE")

#endif // _java_time_format_DateTimeFormatterBuilder$LocalizedPrinterParser_h_