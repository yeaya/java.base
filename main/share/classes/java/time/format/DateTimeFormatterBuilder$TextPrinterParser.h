#ifndef _java_time_format_DateTimeFormatterBuilder$TextPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$TextPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$TextPrinterParser
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
			class DateTimeFormatterBuilder$NumberPrinterParser;
			class DateTimeParseContext;
			class DateTimePrintContext;
			class DateTimeTextProvider;
			class TextStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalField;
		}
	}
}

namespace java {
	namespace time {
		namespace format {

class $export DateTimeFormatterBuilder$TextPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$TextPrinterParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$TextPrinterParser();
	void init$(::java::time::temporal::TemporalField* field, ::java::time::format::TextStyle* textStyle, ::java::time::format::DateTimeTextProvider* provider);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser* numberPrinterParser();
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* parseText, int32_t position) override;
	virtual $String* toString() override;
	::java::time::temporal::TemporalField* field = nullptr;
	::java::time::format::TextStyle* textStyle = nullptr;
	::java::time::format::DateTimeTextProvider* provider = nullptr;
	$volatile(::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser*) numberPrinterParser$ = nullptr;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$TextPrinterParser_h_