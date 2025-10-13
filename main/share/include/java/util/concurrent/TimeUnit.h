#ifndef _java_util_concurrent_TimeUnit_h_
#define _java_util_concurrent_TimeUnit_h_
//$ class java.util.concurrent.TimeUnit
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DAYS")
#undef DAYS
#pragma push_macro("DAY_SCALE")
#undef DAY_SCALE
#pragma push_macro("HOURS")
#undef HOURS
#pragma push_macro("HOUR_SCALE")
#undef HOUR_SCALE
#pragma push_macro("MICROSECONDS")
#undef MICROSECONDS
#pragma push_macro("MICRO_SCALE")
#undef MICRO_SCALE
#pragma push_macro("MILLISECONDS")
#undef MILLISECONDS
#pragma push_macro("MILLI_SCALE")
#undef MILLI_SCALE
#pragma push_macro("MINUTES")
#undef MINUTES
#pragma push_macro("MINUTE_SCALE")
#undef MINUTE_SCALE
#pragma push_macro("NANOSECONDS")
#undef NANOSECONDS
#pragma push_macro("NANO_SCALE")
#undef NANO_SCALE
#pragma push_macro("SECONDS")
#undef SECONDS
#pragma push_macro("SECOND_SCALE")
#undef SECOND_SCALE

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace time {
		class Duration;
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class ChronoUnit;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $import TimeUnit : public ::java::lang::Enum {
	$class(TimeUnit, 0, ::java::lang::Enum)
public:
	TimeUnit();
	static $Array<::java::util::concurrent::TimeUnit>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int64_t s);
	virtual int64_t convert(int64_t sourceDuration, ::java::util::concurrent::TimeUnit* sourceUnit);
	virtual int64_t convert(::java::time::Duration* duration);
	static int64_t cvt(int64_t d, int64_t dst, int64_t src);
	int32_t excessNanos(int64_t d, int64_t m);
	static ::java::util::concurrent::TimeUnit* of(::java::time::temporal::ChronoUnit* chronoUnit);
	virtual void sleep(int64_t timeout);
	virtual void timedJoin($Thread* thread, int64_t timeout);
	virtual void timedWait(Object$* obj, int64_t timeout);
	virtual ::java::time::temporal::ChronoUnit* toChronoUnit();
	virtual int64_t toDays(int64_t duration);
	virtual int64_t toHours(int64_t duration);
	virtual int64_t toMicros(int64_t duration);
	virtual int64_t toMillis(int64_t duration);
	virtual int64_t toMinutes(int64_t duration);
	virtual int64_t toNanos(int64_t duration);
	virtual int64_t toSeconds(int64_t duration);
	static ::java::util::concurrent::TimeUnit* valueOf($String* name);
	static $Array<::java::util::concurrent::TimeUnit>* values();
	static ::java::util::concurrent::TimeUnit* NANOSECONDS;
	static ::java::util::concurrent::TimeUnit* MICROSECONDS;
	static ::java::util::concurrent::TimeUnit* MILLISECONDS;
	static ::java::util::concurrent::TimeUnit* SECONDS;
	static ::java::util::concurrent::TimeUnit* MINUTES;
	static ::java::util::concurrent::TimeUnit* HOURS;
	static ::java::util::concurrent::TimeUnit* DAYS;
	static $Array<::java::util::concurrent::TimeUnit>* $VALUES;
	static const int64_t NANO_SCALE = (int64_t)1;
	static const int64_t MICRO_SCALE = 1000; // (int64_t)1000 * NANO_SCALE
	static const int64_t MILLI_SCALE = 1000000; // (int64_t)1000 * MICRO_SCALE
	static const int64_t SECOND_SCALE = 1000000000; // (int64_t)1000 * MILLI_SCALE
	static const int64_t MINUTE_SCALE = 60000000000; // (int64_t)60 * SECOND_SCALE
	static const int64_t HOUR_SCALE = 3600000000000; // (int64_t)60 * MINUTE_SCALE
	static const int64_t DAY_SCALE = 86400000000000; // (int64_t)24 * HOUR_SCALE
	int64_t scale = 0;
	int64_t maxNanos = 0;
	int64_t maxMicros = 0;
	int64_t maxMillis = 0;
	int64_t maxSecs = 0;
	int64_t microRatio = 0;
	int32_t milliRatio = 0;
	int32_t secRatio = 0;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("DAYS")
#pragma pop_macro("DAY_SCALE")
#pragma pop_macro("HOURS")
#pragma pop_macro("HOUR_SCALE")
#pragma pop_macro("MICROSECONDS")
#pragma pop_macro("MICRO_SCALE")
#pragma pop_macro("MILLISECONDS")
#pragma pop_macro("MILLI_SCALE")
#pragma pop_macro("MINUTES")
#pragma pop_macro("MINUTE_SCALE")
#pragma pop_macro("NANOSECONDS")
#pragma pop_macro("NANO_SCALE")
#pragma pop_macro("SECONDS")
#pragma pop_macro("SECOND_SCALE")

#endif // _java_util_concurrent_TimeUnit_h_