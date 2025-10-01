#ifndef _java_time_format_DateTimeFormatterBuilder$ZoneIdPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$ZoneIdPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$ZoneIdPrinterParser
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
			class DateTimeFormatterBuilder$OffsetIdPrinterParser;
			class DateTimeFormatterBuilder$PrefixTree;
			class DateTimeParseContext;
			class DateTimePrintContext;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalQuery;
		}
	}
}
namespace java {
	namespace util {
		class Map$Entry;
	}
}

namespace java {
	namespace time {
		namespace format {

class $export DateTimeFormatterBuilder$ZoneIdPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser {
	$class(DateTimeFormatterBuilder$ZoneIdPrinterParser, $NO_CLASS_INIT, ::java::time::format::DateTimeFormatterBuilder$DateTimePrinterParser)
public:
	DateTimeFormatterBuilder$ZoneIdPrinterParser();
	void init$(::java::time::temporal::TemporalQuery* query, $String* description);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	virtual ::java::time::format::DateTimeFormatterBuilder$PrefixTree* getTree(::java::time::format::DateTimeParseContext* context);
	virtual int32_t parse(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t position) override;
	int32_t parseOffsetBased(::java::time::format::DateTimeParseContext* context, ::java::lang::CharSequence* text, int32_t prefixPos, int32_t position, ::java::time::format::DateTimeFormatterBuilder$OffsetIdPrinterParser* parser);
	virtual $String* toString() override;
	::java::time::temporal::TemporalQuery* query = nullptr;
	$String* description = nullptr;
	static $volatile(::java::util::Map$Entry*) cachedPrefixTree;
	static $volatile(::java::util::Map$Entry*) cachedPrefixTreeCI;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$ZoneIdPrinterParser_h_