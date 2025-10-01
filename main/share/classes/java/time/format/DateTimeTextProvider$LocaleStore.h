#ifndef _java_time_format_DateTimeTextProvider$LocaleStore_h_
#define _java_time_format_DateTimeTextProvider$LocaleStore_h_
//$ class java.time.format.DateTimeTextProvider$LocaleStore
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace time {
		namespace format {
			class TextStyle;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
	}
}

namespace java {
	namespace time {
		namespace format {

class DateTimeTextProvider$LocaleStore : public ::java::lang::Object {
	$class(DateTimeTextProvider$LocaleStore, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DateTimeTextProvider$LocaleStore();
	void init$(::java::util::Map* valueTextMap);
	$String* getText(int64_t value, ::java::time::format::TextStyle* style);
	::java::util::Iterator* getTextIterator(::java::time::format::TextStyle* style);
	::java::util::Map* valueTextMap = nullptr;
	::java::util::Map* parsable = nullptr;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeTextProvider$LocaleStore_h_