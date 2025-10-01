#ifndef _java_time_format_DateTimeFormatterBuilder$DateTimePrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$DateTimePrinterParser_h_
//$ interface java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import DateTimeFormatterBuilder$DateTimePrinterParser : public ::java::lang::Object {
	$interface(DateTimeFormatterBuilder$DateTimePrinterParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) {return false;}
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) {return 0;}
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$DateTimePrinterParser_h_