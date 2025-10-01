#ifndef _java_time_format_DateTimeFormatterBuilder$CompositePrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$CompositePrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$CompositePrinterParser
//$ extends java.time.format.DateTimeFormatterBuilder$DateTimePrinterParser

#include <java/lang/Array.h>
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
	namespace util {
		class List;
	}
}

namespace java {
	namespace time {
		namespace format {

class $import DateTimeFormatterBuilder$CompositePrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$CompositePrinterParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$CompositePrinterParser();
	void init$(::java::util::List* printerParsers, bool optional);
	void init$($Array<::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser>* printerParsers, bool optional);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	virtual $String* toString() override;
	::java::time::format::DateTimeFormatterBuilder$CompositePrinterParser* withOptional(bool optional);
	$Array<::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser>* printerParsers = nullptr;
	bool optional = false;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$CompositePrinterParser_h_