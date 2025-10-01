#ifndef _java_time_format_DateTimeFormatterBuilder$StringLiteralPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$StringLiteralPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$StringLiteralPrinterParser
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

class $export DateTimeFormatterBuilder$StringLiteralPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$StringLiteralPrinterParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$StringLiteralPrinterParser();
	void init$($String* literal);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	virtual $String* toString() override;
	$String* literal = nullptr;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$StringLiteralPrinterParser_h_