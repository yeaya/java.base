#ifndef _java_time_format_DateTimeFormatterBuilder$ZoneTextPrinterParser_h_
#define _java_time_format_DateTimeFormatterBuilder$ZoneTextPrinterParser_h_
//$ class java.time.format.DateTimeFormatterBuilder$ZoneTextPrinterParser
//$ extends java.time.format.DateTimeFormatterBuilder$ZoneIdPrinterParser

#include <java/time/format/DateTimeFormatterBuilder$ZoneIdPrinterParser.h>

#pragma push_macro("STD")
#undef STD
#pragma push_macro("GENERIC")
#undef GENERIC
#pragma push_macro("DST")
#undef DST

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatterBuilder$PrefixTree;
			class DateTimeParseContext;
			class DateTimePrintContext;
			class TextStyle;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
		class Set;
	}
}

namespace java {
	namespace time {
		namespace format {

class $export DateTimeFormatterBuilder$ZoneTextPrinterParser : public ::java::time::format::DateTimeFormatterBuilder$ZoneIdPrinterParser {
	$class(DateTimeFormatterBuilder$ZoneTextPrinterParser, 0, ::java::time::format::DateTimeFormatterBuilder$ZoneIdPrinterParser)
public:
	DateTimeFormatterBuilder$ZoneTextPrinterParser();
	void init$(::java::time::format::TextStyle* textStyle, ::java::util::Set* preferredZones, bool isGeneric);
	virtual bool format(::java::time::format::DateTimePrintContext* context, ::java::lang::StringBuilder* buf) override;
	$String* getDisplayName($String* id, int32_t type, ::java::util::Locale* locale);
	virtual ::java::time::format::DateTimeFormatterBuilder$PrefixTree* getTree(::java::time::format::DateTimeParseContext* context) override;
	static bool lambda$getTree$0($String* zid);
	void lambda$getTree$1(::java::util::Locale* locale, ::java::time::format::DateTimeFormatterBuilder$PrefixTree* t, $String* cid);
	::java::time::format::TextStyle* textStyle = nullptr;
	::java::util::Set* preferredZones = nullptr;
	bool isGeneric = false;
	static const int32_t STD = 0;
	static const int32_t DST = 1;
	static const int32_t GENERIC = 2;
	static ::java::util::Map* cache;
	::java::util::Map* cachedTree = nullptr;
	::java::util::Map* cachedTreeCI = nullptr;
};

		} // format
	} // time
} // java

#pragma pop_macro("STD")
#pragma pop_macro("GENERIC")
#pragma pop_macro("DST")

#endif // _java_time_format_DateTimeFormatterBuilder$ZoneTextPrinterParser_h_