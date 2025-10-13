#ifndef _java_time_temporal_WeekFields$ComputedDayOfField_h_
#define _java_time_temporal_WeekFields$ComputedDayOfField_h_
//$ class java.time.temporal.WeekFields$ComputedDayOfField
//$ extends java.time.temporal.TemporalField

#include <java/time/temporal/TemporalField.h>

#pragma push_macro("DAY_OF_WEEK_RANGE")
#undef DAY_OF_WEEK_RANGE
#pragma push_macro("WEEK_OF_MONTH_RANGE")
#undef WEEK_OF_MONTH_RANGE
#pragma push_macro("WEEK_OF_WEEK_BASED_YEAR_RANGE")
#undef WEEK_OF_WEEK_BASED_YEAR_RANGE
#pragma push_macro("WEEK_OF_YEAR_RANGE")
#undef WEEK_OF_YEAR_RANGE

namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class Chronology;
		}
	}
}
namespace java {
	namespace time {
		namespace format {
			class ResolverStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalAccessor;
			class TemporalUnit;
			class ValueRange;
			class WeekFields;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $export WeekFields$ComputedDayOfField : public ::java::time::temporal::TemporalField {
	$class(WeekFields$ComputedDayOfField, 0, ::java::time::temporal::TemporalField)
public:
	WeekFields$ComputedDayOfField();
	void init$($String* name, ::java::time::temporal::WeekFields* weekDef, ::java::time::temporal::TemporalUnit* baseUnit, ::java::time::temporal::TemporalUnit* rangeUnit, ::java::time::temporal::ValueRange* range);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal, int64_t newValue) override;
	int32_t computeWeek(int32_t offset, int32_t day);
	virtual ::java::time::temporal::TemporalUnit* getBaseUnit() override;
	virtual $String* getDisplayName(::java::util::Locale* locale) override;
	virtual int64_t getFrom(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::temporal::TemporalUnit* getRangeUnit() override;
	virtual bool isDateBased() override;
	virtual bool isSupportedBy(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual bool isTimeBased() override;
	int32_t localizedDayOfWeek(::java::time::temporal::TemporalAccessor* temporal);
	int32_t localizedDayOfWeek(int32_t isoDow);
	int32_t localizedWeekBasedYear(::java::time::temporal::TemporalAccessor* temporal);
	int64_t localizedWeekOfMonth(::java::time::temporal::TemporalAccessor* temporal);
	int32_t localizedWeekOfWeekBasedYear(::java::time::temporal::TemporalAccessor* temporal);
	int64_t localizedWeekOfYear(::java::time::temporal::TemporalAccessor* temporal);
	static ::java::time::temporal::WeekFields$ComputedDayOfField* ofDayOfWeekField(::java::time::temporal::WeekFields* weekDef);
	::java::time::chrono::ChronoLocalDate* ofWeekBasedYear(::java::time::chrono::Chronology* chrono, int32_t yowby, int32_t wowby, int32_t dow);
	static ::java::time::temporal::WeekFields$ComputedDayOfField* ofWeekBasedYearField(::java::time::temporal::WeekFields* weekDef);
	static ::java::time::temporal::WeekFields$ComputedDayOfField* ofWeekOfMonthField(::java::time::temporal::WeekFields* weekDef);
	static ::java::time::temporal::WeekFields$ComputedDayOfField* ofWeekOfWeekBasedYearField(::java::time::temporal::WeekFields* weekDef);
	static ::java::time::temporal::WeekFields$ComputedDayOfField* ofWeekOfYearField(::java::time::temporal::WeekFields* weekDef);
	virtual ::java::time::temporal::ValueRange* range() override;
	::java::time::temporal::ValueRange* rangeByWeek(::java::time::temporal::TemporalAccessor* temporal, ::java::time::temporal::TemporalField* field);
	virtual ::java::time::temporal::ValueRange* rangeRefinedBy(::java::time::temporal::TemporalAccessor* temporal) override;
	::java::time::temporal::ValueRange* rangeWeekOfWeekBasedYear(::java::time::temporal::TemporalAccessor* temporal);
	virtual ::java::time::temporal::TemporalAccessor* resolve(::java::util::Map* fieldValues, ::java::time::temporal::TemporalAccessor* partialTemporal, ::java::time::format::ResolverStyle* resolverStyle) override;
	::java::time::chrono::ChronoLocalDate* resolveWBY(::java::util::Map* fieldValues, ::java::time::chrono::Chronology* chrono, int32_t localDow, ::java::time::format::ResolverStyle* resolverStyle);
	::java::time::chrono::ChronoLocalDate* resolveWoM(::java::util::Map* fieldValues, ::java::time::chrono::Chronology* chrono, int32_t year, int64_t month, int64_t wom, int32_t localDow, ::java::time::format::ResolverStyle* resolverStyle);
	::java::time::chrono::ChronoLocalDate* resolveWoY(::java::util::Map* fieldValues, ::java::time::chrono::Chronology* chrono, int32_t year, int64_t woy, int32_t localDow, ::java::time::format::ResolverStyle* resolverStyle);
	int32_t startOfWeekOffset(int32_t day, int32_t dow);
	virtual $String* toString() override;
	$String* name = nullptr;
	::java::time::temporal::WeekFields* weekDef = nullptr;
	::java::time::temporal::TemporalUnit* baseUnit = nullptr;
	::java::time::temporal::TemporalUnit* rangeUnit = nullptr;
	::java::time::temporal::ValueRange* range$ = nullptr;
	static ::java::time::temporal::ValueRange* DAY_OF_WEEK_RANGE;
	static ::java::time::temporal::ValueRange* WEEK_OF_MONTH_RANGE;
	static ::java::time::temporal::ValueRange* WEEK_OF_YEAR_RANGE;
	static ::java::time::temporal::ValueRange* WEEK_OF_WEEK_BASED_YEAR_RANGE;
};

		} // temporal
	} // time
} // java

#pragma pop_macro("DAY_OF_WEEK_RANGE")
#pragma pop_macro("WEEK_OF_MONTH_RANGE")
#pragma pop_macro("WEEK_OF_WEEK_BASED_YEAR_RANGE")
#pragma pop_macro("WEEK_OF_YEAR_RANGE")

#endif // _java_time_temporal_WeekFields$ComputedDayOfField_h_