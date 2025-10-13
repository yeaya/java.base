#ifndef _java_time_format_DateTimeTextProvider_h_
#define _java_time_format_DateTimeTextProvider_h_
//$ class java.time.format.DateTimeTextProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CACHE")
#undef CACHE
#pragma push_macro("COMPARATOR")
#undef COMPARATOR
#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace time {
		namespace chrono {
			class Chronology;
		}
	}
}
namespace java {
	namespace time {
		namespace format {
			class TextStyle;
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
	namespace util {
		class Comparator;
		class Iterator;
		class Locale;
		class Map$Entry;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace java {
	namespace time {
		namespace format {

class DateTimeTextProvider : public ::java::lang::Object {
	$class(DateTimeTextProvider, 0, ::java::lang::Object)
public:
	DateTimeTextProvider();
	void init$();
	static ::java::util::Map$Entry* createEntry(Object$* text, Object$* field);
	$Object* createStore(::java::time::temporal::TemporalField* field, ::java::util::Locale* locale);
	$Object* findStore(::java::time::temporal::TemporalField* field, ::java::util::Locale* locale);
	static ::java::time::format::DateTimeTextProvider* getInstance();
	static $Object* getLocalizedResource($String* key, ::java::util::Locale* locale);
	virtual $String* getText(::java::time::temporal::TemporalField* field, int64_t value, ::java::time::format::TextStyle* style, ::java::util::Locale* locale);
	virtual $String* getText(::java::time::chrono::Chronology* chrono, ::java::time::temporal::TemporalField* field, int64_t value, ::java::time::format::TextStyle* style, ::java::util::Locale* locale);
	virtual ::java::util::Iterator* getTextIterator(::java::time::temporal::TemporalField* field, ::java::time::format::TextStyle* style, ::java::util::Locale* locale);
	virtual ::java::util::Iterator* getTextIterator(::java::time::chrono::Chronology* chrono, ::java::time::temporal::TemporalField* field, ::java::time::format::TextStyle* style, ::java::util::Locale* locale);
	static int32_t toWeekDay(int32_t calWeekDay);
	static ::java::util::concurrent::ConcurrentMap* CACHE;
	static ::java::util::Comparator* COMPARATOR;
	static ::java::time::format::DateTimeTextProvider* INSTANCE;
};

		} // format
	} // time
} // java

#pragma pop_macro("CACHE")
#pragma pop_macro("COMPARATOR")
#pragma pop_macro("INSTANCE")

#endif // _java_time_format_DateTimeTextProvider_h_