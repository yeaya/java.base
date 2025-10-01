#ifndef _java_time_format_DateTimeFormatterBuilder$ReducedPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$ReducedPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$ReducedPrinterParser
//$ extends java.time.format.DateTimeFormatterBuilder$NumberPrinterParser

#include <java/time/format/DateTimeFormatterBuilder$NumberPrinterParser.h>

#pragma push_macro("BASE_DATE")
#undef BASE_DATE

namespace java {
	namespace time {
		class LocalDate;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class Chronology;
		}
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

class $export DateTimeFormatterBuilder$ReducedPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser {
	$class(DateTimeFormatterBuilder$ReducedPrinterParser, 0, ::java::time::format::DateTimeFormatterBuilder$NumberPrinterParser)
public:
	DateTimeFormatterBuilder$ReducedPrinterParser();
	void init$(::java::time::temporal::TemporalField* field, int32_t minWidth, int32_t maxWidth, int32_t baseValue, ::java::time::chrono::ChronoLocalDate* baseDate);
	void init$(::java::time::temporal::TemporalField* field, int32_t minWidth, int32_t maxWidth, int32_t baseValue, ::java::time::chrono::ChronoLocalDate* baseDate, int32_t subsequentWidth);
	virtual int64_t getValue(::java::time::format::DateTimePrintContext* context, int64_t value) override;
	virtual bool isFixedWidth(::java::time::format::DateTimeParseContext* context) override;
	void lambda$setValue$0(::java::time::format::DateTimeParseContext* context, int64_t initialValue, int32_t errorPos, int32_t successPos, ::java::time::chrono::Chronology* _unused);
	virtual int32_t setValue(::java::time::format::DateTimeParseContext* context, int64_t value, int32_t errorPos, int32_t successPos) override;
	virtual $String* toString() override;
	virtual ::java::time::format::DateTimeFormatterBuilder$ReducedPrinterParser* withFixedWidth() override;
	virtual ::java::time::format::DateTimeFormatterBuilder$ReducedPrinterParser* withSubsequentWidth(int32_t subsequentWidth) override;
	static ::java::time::LocalDate* BASE_DATE;
	int32_t baseValue = 0;
	::java::time::chrono::ChronoLocalDate* baseDate = nullptr;
};

		} // format
	} // time
} // java

#pragma pop_macro("BASE_DATE")

#endif // _java_time_format_DateTimeFormatterBuilder$ReducedPrinterParser_h_