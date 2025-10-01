#ifndef _java_time_format_DateTimeFormatterBuilder$FractionPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$FractionPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$FractionPrinterParser
//$ extends java.time.format.DateTimeFormatterBuilder$NumberPrinterParser

#include <java/time/format/DateTimeFormatterBuilder$NumberPrinterParser.h>

namespace java {
	namespace lang {
		class CharSequence;
		class StringBuilder;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
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

class $export DateTimeFormatterBuilder$FractionPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser {
	$class(DateTimeFormatterBuilder$FractionPrinterParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser)
public:
	DateTimeFormatterBuilder$FractionPrinterParser();
	void init$(::java::time::temporal::TemporalField* field, int32_t minWidth, int32_t maxWidth, bool decimalPoint);
	void init$(::java::time::temporal::TemporalField* field, int32_t minWidth, int32_t maxWidth, bool decimalPoint, int32_t subsequentWidth);
	int64_t convertFromFraction(::java::math::BigDecimal* fraction);
	::java::math::BigDecimal* convertToFraction(int64_t value);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual bool isFixedWidth(::java::time::format::DateTimeParseContext* context) override;
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	virtual $String* toString() override;
	virtual ::java::time::format::DateTimeFormatterBuilder$FractionPrinterParser* withFixedWidth() override;
	virtual ::java::time::format::DateTimeFormatterBuilder$FractionPrinterParser* withSubsequentWidth(int32_t subsequentWidth) override;
	bool decimalPoint = false;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$FractionPrinterParser_h_