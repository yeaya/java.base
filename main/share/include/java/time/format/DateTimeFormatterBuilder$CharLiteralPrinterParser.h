#ifndef _java_time_format_DateTimeFormatterBuilder$CharLiteralPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$CharLiteralPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$CharLiteralPrinterParser
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

class $import DateTimeFormatterBuilder$CharLiteralPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$CharLiteralPrinterParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$CharLiteralPrinterParser();
	void init$(char16_t literal);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	virtual $String* toString() override;
	char16_t literal = 0;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$CharLiteralPrinterParser_h_