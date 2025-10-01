#ifndef _java_time_temporal_TemporalAdjusters_h_
#define _java_time_temporal_TemporalAdjusters_h_
//$ class java.time.temporal.TemporalAdjusters
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace time {
		class DayOfWeek;
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalAdjuster;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class UnaryOperator;
		}
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $export TemporalAdjusters : public ::java::lang::Object {
	$class(TemporalAdjusters, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TemporalAdjusters();
	void init$();
	static ::java::time::temporal::TemporalAdjuster* dayOfWeekInMonth(int32_t ordinal, ::java::time::DayOfWeek* dayOfWeek);
	static ::java::time::temporal::TemporalAdjuster* firstDayOfMonth();
	static ::java::time::temporal::TemporalAdjuster* firstDayOfNextMonth();
	static ::java::time::temporal::TemporalAdjuster* firstDayOfNextYear();
	static ::java::time::temporal::TemporalAdjuster* firstDayOfYear();
	static ::java::time::temporal::TemporalAdjuster* firstInMonth(::java::time::DayOfWeek* dayOfWeek);
	static ::java::time::temporal::Temporal* lambda$dayOfWeekInMonth$7(int32_t dowValue, int32_t ordinal, ::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$dayOfWeekInMonth$8(int32_t dowValue, int32_t ordinal, ::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$firstDayOfMonth$1(::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$firstDayOfNextMonth$3(::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$firstDayOfNextYear$6(::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$firstDayOfYear$4(::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$lastDayOfMonth$2(::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$lastDayOfYear$5(::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$next$9(int32_t dowValue, ::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$nextOrSame$10(int32_t dowValue, ::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$ofDateAdjuster$0(::java::util::function::UnaryOperator* dateBasedAdjuster, ::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$previous$11(int32_t dowValue, ::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::Temporal* lambda$previousOrSame$12(int32_t dowValue, ::java::time::temporal::Temporal* temporal);
	static ::java::time::temporal::TemporalAdjuster* lastDayOfMonth();
	static ::java::time::temporal::TemporalAdjuster* lastDayOfYear();
	static ::java::time::temporal::TemporalAdjuster* lastInMonth(::java::time::DayOfWeek* dayOfWeek);
	static ::java::time::temporal::TemporalAdjuster* next(::java::time::DayOfWeek* dayOfWeek);
	static ::java::time::temporal::TemporalAdjuster* nextOrSame(::java::time::DayOfWeek* dayOfWeek);
	static ::java::time::temporal::TemporalAdjuster* ofDateAdjuster(::java::util::function::UnaryOperator* dateBasedAdjuster);
	static ::java::time::temporal::TemporalAdjuster* previous(::java::time::DayOfWeek* dayOfWeek);
	static ::java::time::temporal::TemporalAdjuster* previousOrSame(::java::time::DayOfWeek* dayOfWeek);
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_TemporalAdjusters_h_