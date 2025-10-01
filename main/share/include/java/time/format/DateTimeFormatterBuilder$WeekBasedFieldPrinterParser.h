#ifndef _java_time_format_DateTimeFormatterBuilder$WeekBasedFieldPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$WeekBasedFieldPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$WeekBasedFieldPrinterParser
//$ extends java.time.format.DateTimeFormatterBuilder$NumberPrinterParser

#include <java/time/format/DateTimeFormatterBuilder$NumberPrinterParser.h>

namespace java {
	namespace lang {
		class CharSequence;
		class StringBuilder;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatterBuilder$DateTimePrinterParser;
			class DateTimeParseContext;
			class DateTimePrintContext;
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

class $import DateTimeFormatterBuilder$WeekBasedFieldPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser {
	$class(DateTimeFormatterBuilder$WeekBasedFieldPrinterParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser)
public:
	DateTimeFormatterBuilder$WeekBasedFieldPrinterParser();
	void init$(char16_t chr, int32_t count, int32_t minWidth, int32_t maxWidth);
	void init$(char16_t chr, int32_t count, int32_t minWidth, int32_t maxWidth, int32_t subsequentWidth);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser* printerParser(::java::util::Locale* locale);
	virtual $String* toString() override;
	virtual ::java::time::format::DateTimeFormatterBuilder$WeekBasedFieldPrinterParser* withFixedWidth() override;
	virtual ::java::time::format::DateTimeFormatterBuilder$WeekBasedFieldPrinterParser* withSubsequentWidth(int32_t subsequentWidth) override;
	char16_t chr = 0;
	int32_t count = 0;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$WeekBasedFieldPrinterParser_h_