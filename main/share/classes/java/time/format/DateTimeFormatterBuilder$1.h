#ifndef _java_time_format_DateTimeFormatterBuilder$1_h_
#define _java_time_format_DateTimeFormatterBuilder$1_h_
//$ class java.time.format.DateTimeFormatterBuilder$1
//$ extends java.time.format.DateTimeTextProvider

#include <java/time/format/DateTimeTextProvider.h>

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
			class DateTimeFormatterBuilder;
			class DateTimeTextProvider$LocaleStore;
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
		class Iterator;
		class Locale;
	}
}

namespace java {
	namespace time {
		namespace format {

class DateTimeFormatterBuilder$1 : public ::java::time::format::DateTimeTextProvider {
	$class(DateTimeFormatterBuilder$1, $NO_CLASS_INIT, ::java::time::format::DateTimeTextProvider)
public:
	DateTimeFormatterBuilder$1();
	void init$(::java::time::format::DateTimeFormatterBuilder* this$0, ::java::time::format::DateTimeTextProvider$LocaleStore* val$store);
	virtual $String* getText(::java::time::chrono::Chronology* chrono, ::java::time::temporal::TemporalField* field, int64_t value, ::java::time::format::TextStyle* style, ::java::util::Locale* locale) override;
	virtual $String* getText(::java::time::temporal::TemporalField* field, int64_t value, ::java::time::format::TextStyle* style, ::java::util::Locale* locale) override;
	virtual ::java::util::Iterator* getTextIterator(::java::time::chrono::Chronology* chrono, ::java::time::temporal::TemporalField* field, ::java::time::format::TextStyle* style, ::java::util::Locale* locale) override;
	virtual ::java::util::Iterator* getTextIterator(::java::time::temporal::TemporalField* field, ::java::time::format::TextStyle* style, ::java::util::Locale* locale) override;
	::java::time::format::DateTimeFormatterBuilder* this$0 = nullptr;
	::java::time::format::DateTimeTextProvider$LocaleStore* val$store = nullptr;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatterBuilder$1_h_