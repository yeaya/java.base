#ifndef _java_time_format_DateTimeFormatterBuilder$OffsetIdPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$OffsetIdPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$OffsetIdPrinterParser
//$ extends java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser

#include <java/lang/Array.h>
#include <java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser.h>

#pragma push_macro("INSTANCE_ID_Z")
#undef INSTANCE_ID_Z
#pragma push_macro("INSTANCE_ID_ZERO")
#undef INSTANCE_ID_ZERO
#pragma push_macro("PATTERNS")
#undef PATTERNS

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

class $export DateTimeFormatterBuilder$OffsetIdPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$OffsetIdPrinterParser, 0, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$OffsetIdPrinterParser();
	void init$($String* pattern, $String* noOffsetText);
	int32_t checkPattern($String* pattern);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	void formatZeroPad(bool colon, int32_t value, ::java::lang::StringBuilder* buf);
	bool isColon();
	bool isPaddedHour();
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	bool parseDigits(::java::lang::CharSequence* parseText, bool isColon, int32_t arrayIndex, $ints* array);
	void parseHour(::java::lang::CharSequence* parseText, bool paddedHour, $ints* array);
	void parseMinute(::java::lang::CharSequence* parseText, bool isColon, bool mandatory, $ints* array);
	void parseOptionalMinuteSecond(::java::lang::CharSequence* parseText, bool isColon, $ints* array);
	void parseSecond(::java::lang::CharSequence* parseText, bool isColon, bool mandatory, $ints* array);
	void parseVariableWidthDigits(::java::lang::CharSequence* parseText, int32_t minDigits, int32_t maxDigits, $ints* array);
	virtual $String* toString() override;
	static $StringArray* PATTERNS;
	static ::java::time::format::DateTimeFormatterBuilder$OffsetIdPrinterParser* INSTANCE_ID_Z;
	static ::java::time::format::DateTimeFormatterBuilder$OffsetIdPrinterParser* INSTANCE_ID_ZERO;
	$String* noOffsetText = nullptr;
	int32_t type = 0;
	int32_t style = 0;
};

		} // format
	} // time
} // java

#pragma pop_macro("INSTANCE_ID_Z")
#pragma pop_macro("INSTANCE_ID_ZERO")
#pragma pop_macro("PATTERNS")

#endif // _java_time_format_DateTimeFormatterBuilder$OffsetIdPrinterParser_h_