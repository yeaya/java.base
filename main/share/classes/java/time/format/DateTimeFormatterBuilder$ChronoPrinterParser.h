#ifndef _java_time_format_DateTimeFormatterBuilder$ChronoPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$ChronoPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$ChronoPrinterParser
//$ extends java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser

#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>

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
			class DateTimeParseContext;
			class DateTimePrintContext;
			class TextStyle;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace time {
		namespace format {

class $export DateTimeFormatterBuilder$ChronoPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$ChronoPrinterParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$ChronoPrinterParser();
	void init$(::java::time::format::TextStyle* textStyle);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	$String* getChronologyName(::java::time::chrono::Chronology* chrono, ::java::util::Locale* locale);
	static $String* lambda$getChronologyName$0(::java::time::chrono::Chronology* chrono);
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	::java::time::format::TextStyle* textStyle = nullptr;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$ChronoPrinterParser_h_