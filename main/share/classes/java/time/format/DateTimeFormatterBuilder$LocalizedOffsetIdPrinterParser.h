#ifndef _java_time_format_DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser
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
			class TextStyle;
		}
	}
}

namespace java {
	namespace time {
		namespace format {

class $export DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser();
	void init$(::java::time::format::TextStyle* style);
	static ::java::lang::StringBuilder* appendHMS(::java::lang::StringBuilder* buf, int32_t t);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	int32_t getDigit(::java::lang::CharSequence* text, int32_t position);
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	virtual $String* toString() override;
	::java::time::format::TextStyle* style = nullptr;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$LocalizedOffsetIdPrinterParser_h_