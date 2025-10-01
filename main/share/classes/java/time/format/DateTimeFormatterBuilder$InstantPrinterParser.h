#ifndef _java_time_format_DateTimeFormatterBuilder$InstantPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$InstantPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$InstantPrinterParser
//$ extends java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser

#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>

#pragma push_macro("SECONDS_0000_TO_1970")
#undef SECONDS_0000_TO_1970
#pragma push_macro("SECONDS_PER_10000_YEARS")
#undef SECONDS_PER_10000_YEARS

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

class $export DateTimeFormatterBuilder$InstantPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$InstantPrinterParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$InstantPrinterParser();
	void init$(int32_t fractionalDigits);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	virtual $String* toString() override;
	static const int64_t SECONDS_PER_10000_YEARS = 315569520000; // (int64_t)146097 * (int64_t)25 * (int64_t)86400
	static const int64_t SECONDS_0000_TO_1970 = 62167219200; // (((int64_t)146097 * (int64_t)5) - ((int64_t)30 * (int64_t)365 + (int64_t)7)) * (int64_t)86400
	int32_t fractionalDigits = 0;
};

		} // format
	} // time
} // java

#pragma pop_macro("SECONDS_0000_TO_1970")
#pragma pop_macro("SECONDS_PER_10000_YEARS")

#endif // _java_time_format_DateTimeFormatterBuilder$InstantPrinterParser_h_