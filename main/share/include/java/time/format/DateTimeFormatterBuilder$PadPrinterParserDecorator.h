#ifndef _java_time_format_DateTimeFormatterBuilder$PadPrinterParserDecorator_h_
#define _java_time_format_DateTimeFormatterBuilder$PadPrinterParserDecorator_h_
//$ class java.time.format.DateTimeFormatterBuilder$PadPrinterParserDecorator
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

class $import DateTimeFormatterBuilder$PadPrinterParserDecorator : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$PadPrinterParserDecorator, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$PadPrinterParserDecorator();
	void init$(::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser* printerParser, int32_t padWidth, char16_t padChar);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	virtual $String* toString() override;
	::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser* printerParser = nullptr;
	int32_t padWidth = 0;
	char16_t padChar = 0;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$PadPrinterParserDecorator_h_