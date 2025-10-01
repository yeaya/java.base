#ifndef _java_time_format_DateTimeFormatterBuilder$DefaultValueParser_h_
#define _java_time_format_DateTimeFormatterBuilder$DefaultValueParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$DefaultValueParser
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
		namespace temporal {
			class TemporalField;
		}
	}
}

namespace java {
	namespace time {
		namespace format {

class $export DateTimeFormatterBuilder$DefaultValueParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$DefaultValueParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$DefaultValueParser();
	void init$(::java::time::temporal::TemporalField* field, int64_t value);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	::java::time::temporal::TemporalField* field = nullptr;
	int64_t value = 0;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$DefaultValueParser_h_