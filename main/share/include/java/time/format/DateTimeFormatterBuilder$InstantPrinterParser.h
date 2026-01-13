#ifndef _java_time_format_DateTimeFormatterBuilder$InstantPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$InstantPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$InstantPrinterParser
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
		namespace format {
			class DateTimeParseContext;
			class DateTimePrintContext;
		}
	}
}

namespace java {
	namespace time {
		namespace format {

class $import DateTimeFormatterBuilder$InstantPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$InstantPrinterParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$InstantPrinterParser();
	void init$(int32_t fractionalDigits);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	virtual $String* toString() override;
	static const int64_t SECONDS_PER_10000_YEARS = 315569520000; // 146097L * 25L * 86400L
	static const int64_t SECONDS_0000_TO_1970 = 62167219200; // ((146097L * 5L) - (30L * 365L + 7L)) * 86400L
	int32_t fractionalDigits = 0;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$InstantPrinterParser_h_