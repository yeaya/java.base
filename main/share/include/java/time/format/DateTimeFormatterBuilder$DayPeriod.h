#ifndef _java_time_format_DateTimeFormatterBuilder$DayPeriod_h_
#define _java_time_format_DateTimeFormatterBuilder$DayPeriod_h_
//$ class java.time.format.DateTimeFormatterBuilder$DayPeriod
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DAYPERIOD_CACHE")
#undef DAYPERIOD_CACHE
#pragma push_macro("RULE")
#undef RULE
#pragma push_macro("DPCOMPARATOR")
#undef DPCOMPARATOR

namespace java {
	namespace time {
		class DateTimeException;
	}
}
namespace java {
	namespace util {
		class Comparator;
		class Locale;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace java {
	namespace time {
		namespace format {

class $import DateTimeFormatterBuilder$DayPeriod : public ::java::lang::Object {
	$class(DateTimeFormatterBuilder$DayPeriod, 0, ::java::lang::Object)
public:
	DateTimeFormatterBuilder$DayPeriod();
	void init$(int64_t from, int64_t to, int64_t index);
	int64_t duration();
	virtual bool equals(Object$* o) override;
	static ::java::util::Map* getDayPeriodMap(::java::util::Locale* locale);
	int64_t getIndex();
	virtual int32_t hashCode() override;
	bool includes(int64_t mod);
	static void lambda$getDayPeriodMap$1(::java::util::Map* periodMap, $String* rule);
	static ::java::util::Map* lambda$getDayPeriodMap$2(::java::util::Locale* l);
	static bool lambda$ofLocale$3(int64_t index, ::java::time::format::DateTimeFormatterBuilder$DayPeriod* dp);
	static ::java::time::DateTimeException* lambda$ofLocale$4(::java::util::Locale* locale, int64_t index);
	static int32_t lambda$static$0(::java::time::format::DateTimeFormatterBuilder$DayPeriod* dp1, ::java::time::format::DateTimeFormatterBuilder$DayPeriod* dp2);
	static int64_t mapToIndex($String* type);
	int64_t mid();
	static ::java::time::format::DateTimeFormatterBuilder$DayPeriod* ofLocale(::java::util::Locale* locale, int64_t index);
	virtual $String* toString() override;
	static ::java::util::Map* DAYPERIOD_CACHE;
	static ::java::util::Comparator* DPCOMPARATOR;
	static ::java::util::regex::Pattern* RULE;
	int64_t from = 0;
	int64_t to = 0;
	int64_t index = 0;
};

		} // format
	} // time
} // java

#pragma pop_macro("DAYPERIOD_CACHE")
#pragma pop_macro("RULE")
#pragma pop_macro("DPCOMPARATOR")

#endif // _java_time_format_DateTimeFormatterBuilder$DayPeriod_h_