#ifndef _java_time_format_DateTimeFormatterBuilder$NumberPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$NumberPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$NumberPrinterParser
//$ extends java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser

#include <java/lang/Array.h>
#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>

#pragma push_macro("EXCEED_POINTS")
#undef EXCEED_POINTS

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
			class SignStyle;
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

class $import DateTimeFormatterBuilder$NumberPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$NumberPrinterParser, 0, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$NumberPrinterParser();
	void init$(::java::time::temporal::TemporalField* field, int32_t minWidth, int32_t maxWidth, ::java::time::format::SignStyle* signStyle);
	void init$(::java::time::temporal::TemporalField* field, int32_t minWidth, int32_t maxWidth, ::java::time::format::SignStyle* signStyle, int32_t subsequentWidth);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual int64_t getValue(::java::time::format::DateTimePrintContext* context, int64_t value);
	virtual bool isFixedWidth(::java::time::format::DateTimeParseContext* context);
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	virtual int32_t setValue(::java::time::format::DateTimeParseContext* context, int64_t value, int32_t errorPos, int32_t successPos);
	virtual $String* toString() override;
	virtual ::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser* withFixedWidth();
	virtual ::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser* withSubsequentWidth(int32_t subsequentWidth);
	static $longs* EXCEED_POINTS;
	::java::time::temporal::TemporalField* field = nullptr;
	int32_t minWidth = 0;
	int32_t maxWidth = 0;
	::java::time::format::SignStyle* signStyle = nullptr;
	int32_t subsequentWidth = 0;
};

		} // format
	} // time
} // java

#pragma pop_macro("EXCEED_POINTS")

#endif // _java_time_format_DateTimeFormatterBuilder$NumberPrinterParser_h_