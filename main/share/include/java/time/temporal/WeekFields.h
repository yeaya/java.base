#ifndef _java_time_temporal_WeekFields_h_
#define _java_time_temporal_WeekFields_h_
//$ class java.time.temporal.WeekFields
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("SUNDAY_START")
#undef SUNDAY_START
#pragma push_macro("ISO")
#undef ISO
#pragma push_macro("WEEK_BASED_YEARS")
#undef WEEK_BASED_YEARS
#pragma push_macro("CACHE")
#undef CACHE

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		class DayOfWeek;
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalField;
			class TemporalUnit;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
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
		namespace temporal {

class $import WeekFields : public ::java::io::Serializable {
	$class(WeekFields, 0, ::java::io::Serializable)
public:
	WeekFields();
	void init$(::java::time::DayOfWeek* firstDayOfWeek, int32_t minimalDaysInFirstWeek);
	::java::time::temporal::TemporalField* dayOfWeek();
	virtual bool equals(Object$* object) override;
	::java::time::DayOfWeek* getFirstDayOfWeek();
	int32_t getMinimalDaysInFirstWeek();
	virtual int32_t hashCode() override;
	static ::java::time::temporal::WeekFields* of(::java::util::Locale* locale);
	static ::java::time::temporal::WeekFields* of(::java::time::DayOfWeek* firstDayOfWeek, int32_t minimalDaysInFirstWeek);
	void readObject(::java::io::ObjectInputStream* s);
	$Object* readResolve();
	virtual $String* toString() override;
	::java::time::temporal::TemporalField* weekBasedYear();
	::java::time::temporal::TemporalField* weekOfMonth();
	::java::time::temporal::TemporalField* weekOfWeekBasedYear();
	::java::time::temporal::TemporalField* weekOfYear();
	static ::java::util::concurrent::ConcurrentMap* CACHE;
	static ::java::time::temporal::WeekFields* ISO;
	static ::java::time::temporal::WeekFields* SUNDAY_START;
	static ::java::time::temporal::TemporalUnit* WEEK_BASED_YEARS;
	static const int64_t serialVersionUID = (int64_t)0xEFA92C928B0F09C7;
	::java::time::DayOfWeek* firstDayOfWeek = nullptr;
	int32_t minimalDays = 0;
	::java::time::temporal::TemporalField* dayOfWeek$ = nullptr;
	::java::time::temporal::TemporalField* weekOfMonth$ = nullptr;
	::java::time::temporal::TemporalField* weekOfYear$ = nullptr;
	::java::time::temporal::TemporalField* weekOfWeekBasedYear$ = nullptr;
	::java::time::temporal::TemporalField* weekBasedYear$ = nullptr;
};

		} // temporal
	} // time
} // java

#pragma pop_macro("SUNDAY_START")
#pragma pop_macro("ISO")
#pragma pop_macro("WEEK_BASED_YEARS")
#pragma pop_macro("CACHE")

#endif // _java_time_temporal_WeekFields_h_