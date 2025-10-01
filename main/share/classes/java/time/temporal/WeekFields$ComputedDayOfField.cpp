#include <java/time/temporal/WeekFields$ComputedDayOfField.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <java/time/DayOfWeek.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/format/ResolverStyle.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/IsoFields.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/ValueRange.h>
#include <java/time/temporal/WeekFields.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

#undef FOREVER
#undef DAY_OF_YEAR
#undef STRICT
#undef DAY_OF_MONTH
#undef DAYS
#undef WEEK_OF_MONTH_RANGE
#undef WEEK_BASED_YEARS
#undef WEEK_OF_YEAR_RANGE
#undef MONTHS
#undef YEARS
#undef WEEK_OF_WEEK_BASED_YEAR_RANGE
#undef LENIENT
#undef MONTH_OF_YEAR
#undef YEAR
#undef WEEKS
#undef DAY_OF_WEEK
#undef DAY_OF_WEEK_RANGE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $DayOfWeek = ::java::time::DayOfWeek;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $Chronology = ::java::time::chrono::Chronology;
using $ResolverStyle = ::java::time::format::ResolverStyle;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $IsoFields = ::java::time::temporal::IsoFields;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $ValueRange = ::java::time::temporal::ValueRange;
using $WeekFields = ::java::time::temporal::WeekFields;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $ResourceBundle = ::java::util::ResourceBundle;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _WeekFields$ComputedDayOfField_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WeekFields$ComputedDayOfField, name)},
	{"weekDef", "Ljava/time/temporal/WeekFields;", nullptr, $PRIVATE | $FINAL, $field(WeekFields$ComputedDayOfField, weekDef)},
	{"baseUnit", "Ljava/time/temporal/TemporalUnit;", nullptr, $PRIVATE | $FINAL, $field(WeekFields$ComputedDayOfField, baseUnit)},
	{"rangeUnit", "Ljava/time/temporal/TemporalUnit;", nullptr, $PRIVATE | $FINAL, $field(WeekFields$ComputedDayOfField, rangeUnit)},
	{"range", "Ljava/time/temporal/ValueRange;", nullptr, $PRIVATE | $FINAL, $field(WeekFields$ComputedDayOfField, range$)},
	{"DAY_OF_WEEK_RANGE", "Ljava/time/temporal/ValueRange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WeekFields$ComputedDayOfField, DAY_OF_WEEK_RANGE)},
	{"WEEK_OF_MONTH_RANGE", "Ljava/time/temporal/ValueRange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WeekFields$ComputedDayOfField, WEEK_OF_MONTH_RANGE)},
	{"WEEK_OF_YEAR_RANGE", "Ljava/time/temporal/ValueRange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WeekFields$ComputedDayOfField, WEEK_OF_YEAR_RANGE)},
	{"WEEK_OF_WEEK_BASED_YEAR_RANGE", "Ljava/time/temporal/ValueRange;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WeekFields$ComputedDayOfField, WEEK_OF_WEEK_BASED_YEAR_RANGE)},
	{}
};

$MethodInfo _WeekFields$ComputedDayOfField_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/time/temporal/WeekFields;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/ValueRange;)V", nullptr, $PRIVATE, $method(static_cast<void(WeekFields$ComputedDayOfField::*)($String*,$WeekFields*,$TemporalUnit*,$TemporalUnit*,$ValueRange*)>(&WeekFields$ComputedDayOfField::init$))},
	{"adjustInto", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;", "<R::Ljava/time/temporal/Temporal;>(TR;J)TR;", $PUBLIC},
	{"computeWeek", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WeekFields$ComputedDayOfField::*)(int32_t,int32_t)>(&WeekFields$ComputedDayOfField::computeWeek))},
	{"getBaseUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC},
	{"getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFrom", "(Ljava/time/temporal/TemporalAccessor;)J", nullptr, $PUBLIC},
	{"getRangeUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC},
	{"isDateBased", "()Z", nullptr, $PUBLIC},
	{"isSupportedBy", "(Ljava/time/temporal/TemporalAccessor;)Z", nullptr, $PUBLIC},
	{"isTimeBased", "()Z", nullptr, $PUBLIC},
	{"localizedDayOfWeek", "(Ljava/time/temporal/TemporalAccessor;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WeekFields$ComputedDayOfField::*)($TemporalAccessor*)>(&WeekFields$ComputedDayOfField::localizedDayOfWeek))},
	{"localizedDayOfWeek", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WeekFields$ComputedDayOfField::*)(int32_t)>(&WeekFields$ComputedDayOfField::localizedDayOfWeek))},
	{"localizedWeekBasedYear", "(Ljava/time/temporal/TemporalAccessor;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WeekFields$ComputedDayOfField::*)($TemporalAccessor*)>(&WeekFields$ComputedDayOfField::localizedWeekBasedYear))},
	{"localizedWeekOfMonth", "(Ljava/time/temporal/TemporalAccessor;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(WeekFields$ComputedDayOfField::*)($TemporalAccessor*)>(&WeekFields$ComputedDayOfField::localizedWeekOfMonth))},
	{"localizedWeekOfWeekBasedYear", "(Ljava/time/temporal/TemporalAccessor;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WeekFields$ComputedDayOfField::*)($TemporalAccessor*)>(&WeekFields$ComputedDayOfField::localizedWeekOfWeekBasedYear))},
	{"localizedWeekOfYear", "(Ljava/time/temporal/TemporalAccessor;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(WeekFields$ComputedDayOfField::*)($TemporalAccessor*)>(&WeekFields$ComputedDayOfField::localizedWeekOfYear))},
	{"ofDayOfWeekField", "(Ljava/time/temporal/WeekFields;)Ljava/time/temporal/WeekFields$ComputedDayOfField;", nullptr, $STATIC, $method(static_cast<WeekFields$ComputedDayOfField*(*)($WeekFields*)>(&WeekFields$ComputedDayOfField::ofDayOfWeekField))},
	{"ofWeekBasedYear", "(Ljava/time/chrono/Chronology;III)Ljava/time/chrono/ChronoLocalDate;", nullptr, $PRIVATE, $method(static_cast<$ChronoLocalDate*(WeekFields$ComputedDayOfField::*)($Chronology*,int32_t,int32_t,int32_t)>(&WeekFields$ComputedDayOfField::ofWeekBasedYear))},
	{"ofWeekBasedYearField", "(Ljava/time/temporal/WeekFields;)Ljava/time/temporal/WeekFields$ComputedDayOfField;", nullptr, $STATIC, $method(static_cast<WeekFields$ComputedDayOfField*(*)($WeekFields*)>(&WeekFields$ComputedDayOfField::ofWeekBasedYearField))},
	{"ofWeekOfMonthField", "(Ljava/time/temporal/WeekFields;)Ljava/time/temporal/WeekFields$ComputedDayOfField;", nullptr, $STATIC, $method(static_cast<WeekFields$ComputedDayOfField*(*)($WeekFields*)>(&WeekFields$ComputedDayOfField::ofWeekOfMonthField))},
	{"ofWeekOfWeekBasedYearField", "(Ljava/time/temporal/WeekFields;)Ljava/time/temporal/WeekFields$ComputedDayOfField;", nullptr, $STATIC, $method(static_cast<WeekFields$ComputedDayOfField*(*)($WeekFields*)>(&WeekFields$ComputedDayOfField::ofWeekOfWeekBasedYearField))},
	{"ofWeekOfYearField", "(Ljava/time/temporal/WeekFields;)Ljava/time/temporal/WeekFields$ComputedDayOfField;", nullptr, $STATIC, $method(static_cast<WeekFields$ComputedDayOfField*(*)($WeekFields*)>(&WeekFields$ComputedDayOfField::ofWeekOfYearField))},
	{"range", "()Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"rangeByWeek", "(Ljava/time/temporal/TemporalAccessor;Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;", nullptr, $PRIVATE, $method(static_cast<$ValueRange*(WeekFields$ComputedDayOfField::*)($TemporalAccessor*,$TemporalField*)>(&WeekFields$ComputedDayOfField::rangeByWeek))},
	{"rangeRefinedBy", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"rangeWeekOfWeekBasedYear", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;", nullptr, $PRIVATE, $method(static_cast<$ValueRange*(WeekFields$ComputedDayOfField::*)($TemporalAccessor*)>(&WeekFields$ComputedDayOfField::rangeWeekOfWeekBasedYear))},
	{"resolve", "(Ljava/util/Map;Ljava/time/temporal/TemporalAccessor;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/util/Map<Ljava/time/temporal/TemporalField;Ljava/lang/Long;>;Ljava/time/temporal/TemporalAccessor;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;", $PUBLIC},
	{"resolveWBY", "(Ljava/util/Map;Ljava/time/chrono/Chronology;ILjava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/util/Map<Ljava/time/temporal/TemporalField;Ljava/lang/Long;>;Ljava/time/chrono/Chronology;ILjava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;", $PRIVATE, $method(static_cast<$ChronoLocalDate*(WeekFields$ComputedDayOfField::*)($Map*,$Chronology*,int32_t,$ResolverStyle*)>(&WeekFields$ComputedDayOfField::resolveWBY))},
	{"resolveWoM", "(Ljava/util/Map;Ljava/time/chrono/Chronology;IJJILjava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/util/Map<Ljava/time/temporal/TemporalField;Ljava/lang/Long;>;Ljava/time/chrono/Chronology;IJJILjava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;", $PRIVATE, $method(static_cast<$ChronoLocalDate*(WeekFields$ComputedDayOfField::*)($Map*,$Chronology*,int32_t,int64_t,int64_t,int32_t,$ResolverStyle*)>(&WeekFields$ComputedDayOfField::resolveWoM))},
	{"resolveWoY", "(Ljava/util/Map;Ljava/time/chrono/Chronology;IJILjava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/util/Map<Ljava/time/temporal/TemporalField;Ljava/lang/Long;>;Ljava/time/chrono/Chronology;IJILjava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;", $PRIVATE, $method(static_cast<$ChronoLocalDate*(WeekFields$ComputedDayOfField::*)($Map*,$Chronology*,int32_t,int64_t,int32_t,$ResolverStyle*)>(&WeekFields$ComputedDayOfField::resolveWoY))},
	{"startOfWeekOffset", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WeekFields$ComputedDayOfField::*)(int32_t,int32_t)>(&WeekFields$ComputedDayOfField::startOfWeekOffset))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WeekFields$ComputedDayOfField_InnerClassesInfo_[] = {
	{"java.time.temporal.WeekFields$ComputedDayOfField", "java.time.temporal.WeekFields", "ComputedDayOfField", $STATIC},
	{}
};

$ClassInfo _WeekFields$ComputedDayOfField_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.temporal.WeekFields$ComputedDayOfField",
	"java.lang.Object",
	"java.time.temporal.TemporalField",
	_WeekFields$ComputedDayOfField_FieldInfo_,
	_WeekFields$ComputedDayOfField_MethodInfo_,
	nullptr,
	nullptr,
	_WeekFields$ComputedDayOfField_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.WeekFields"
};

$Object* allocate$WeekFields$ComputedDayOfField($Class* clazz) {
	return $of($alloc(WeekFields$ComputedDayOfField));
}

$ValueRange* WeekFields$ComputedDayOfField::DAY_OF_WEEK_RANGE = nullptr;
$ValueRange* WeekFields$ComputedDayOfField::WEEK_OF_MONTH_RANGE = nullptr;
$ValueRange* WeekFields$ComputedDayOfField::WEEK_OF_YEAR_RANGE = nullptr;
$ValueRange* WeekFields$ComputedDayOfField::WEEK_OF_WEEK_BASED_YEAR_RANGE = nullptr;

WeekFields$ComputedDayOfField* WeekFields$ComputedDayOfField::ofDayOfWeekField($WeekFields* weekDef) {
	$init(WeekFields$ComputedDayOfField);
	$init($ChronoUnit);
	return $new(WeekFields$ComputedDayOfField, "DayOfWeek"_s, weekDef, $ChronoUnit::DAYS, $ChronoUnit::WEEKS, WeekFields$ComputedDayOfField::DAY_OF_WEEK_RANGE);
}

WeekFields$ComputedDayOfField* WeekFields$ComputedDayOfField::ofWeekOfMonthField($WeekFields* weekDef) {
	$init(WeekFields$ComputedDayOfField);
	$init($ChronoUnit);
	return $new(WeekFields$ComputedDayOfField, "WeekOfMonth"_s, weekDef, $ChronoUnit::WEEKS, $ChronoUnit::MONTHS, WeekFields$ComputedDayOfField::WEEK_OF_MONTH_RANGE);
}

WeekFields$ComputedDayOfField* WeekFields$ComputedDayOfField::ofWeekOfYearField($WeekFields* weekDef) {
	$init(WeekFields$ComputedDayOfField);
	$init($ChronoUnit);
	return $new(WeekFields$ComputedDayOfField, "WeekOfYear"_s, weekDef, $ChronoUnit::WEEKS, $ChronoUnit::YEARS, WeekFields$ComputedDayOfField::WEEK_OF_YEAR_RANGE);
}

WeekFields$ComputedDayOfField* WeekFields$ComputedDayOfField::ofWeekOfWeekBasedYearField($WeekFields* weekDef) {
	$init(WeekFields$ComputedDayOfField);
	$init($ChronoUnit);
	$init($IsoFields);
	return $new(WeekFields$ComputedDayOfField, "WeekOfWeekBasedYear"_s, weekDef, $ChronoUnit::WEEKS, $IsoFields::WEEK_BASED_YEARS, WeekFields$ComputedDayOfField::WEEK_OF_WEEK_BASED_YEAR_RANGE);
}

WeekFields$ComputedDayOfField* WeekFields$ComputedDayOfField::ofWeekBasedYearField($WeekFields* weekDef) {
	$init(WeekFields$ComputedDayOfField);
	$init($IsoFields);
	$init($ChronoUnit);
	$init($ChronoField);
	return $new(WeekFields$ComputedDayOfField, "WeekBasedYear"_s, weekDef, $IsoFields::WEEK_BASED_YEARS, $ChronoUnit::FOREVER, $($ChronoField::YEAR->range()));
}

$ChronoLocalDate* WeekFields$ComputedDayOfField::ofWeekBasedYear($Chronology* chrono, int32_t yowby, int32_t wowby, int32_t dow) {
	$var($ChronoLocalDate, date, $nc(chrono)->date(yowby, 1, 1));
	int32_t ldow = localizedDayOfWeek(static_cast<$TemporalAccessor*>(date));
	int32_t offset = startOfWeekOffset(1, ldow);
	int32_t yearLen = $nc(date)->lengthOfYear();
	int32_t newYearWeek = computeWeek(offset, yearLen + $nc(this->weekDef)->getMinimalDaysInFirstWeek());
	wowby = $Math::min(wowby, newYearWeek - 1);
	int32_t days = -offset + (dow - 1) + (wowby - 1) * 7;
	$init($ChronoUnit);
	return date->plus(days, $ChronoUnit::DAYS);
}

void WeekFields$ComputedDayOfField::init$($String* name, $WeekFields* weekDef, $TemporalUnit* baseUnit, $TemporalUnit* rangeUnit, $ValueRange* range) {
	$set(this, name, name);
	$set(this, weekDef, weekDef);
	$set(this, baseUnit, baseUnit);
	$set(this, rangeUnit, rangeUnit);
	$set(this, range$, range);
}

int64_t WeekFields$ComputedDayOfField::getFrom($TemporalAccessor* temporal) {
	$init($ChronoUnit);
	if ($equals(this->rangeUnit, $ChronoUnit::WEEKS)) {
		return localizedDayOfWeek(temporal);
	} else {
		if ($equals(this->rangeUnit, $ChronoUnit::MONTHS)) {
			return localizedWeekOfMonth(temporal);
		} else {
			if ($equals(this->rangeUnit, $ChronoUnit::YEARS)) {
				return localizedWeekOfYear(temporal);
			} else {
				$init($WeekFields);
				if (this->rangeUnit == $WeekFields::WEEK_BASED_YEARS) {
					return localizedWeekOfWeekBasedYear(temporal);
				} else {
					if ($equals(this->rangeUnit, $ChronoUnit::FOREVER)) {
						return localizedWeekBasedYear(temporal);
					} else {
						$throwNew($IllegalStateException, $$str({"unreachable, rangeUnit: "_s, this->rangeUnit, ", this: "_s, this}));
					}
				}
			}
		}
	}
}

int32_t WeekFields$ComputedDayOfField::localizedDayOfWeek($TemporalAccessor* temporal) {
	int32_t sow = $nc($($nc(this->weekDef)->getFirstDayOfWeek()))->getValue();
	$init($ChronoField);
	int32_t isoDow = $nc(temporal)->get($ChronoField::DAY_OF_WEEK);
	return $Math::floorMod(isoDow - sow, 7) + 1;
}

int32_t WeekFields$ComputedDayOfField::localizedDayOfWeek(int32_t isoDow) {
	int32_t sow = $nc($($nc(this->weekDef)->getFirstDayOfWeek()))->getValue();
	return $Math::floorMod(isoDow - sow, 7) + 1;
}

int64_t WeekFields$ComputedDayOfField::localizedWeekOfMonth($TemporalAccessor* temporal) {
	int32_t dow = localizedDayOfWeek(temporal);
	$init($ChronoField);
	int32_t dom = $nc(temporal)->get($ChronoField::DAY_OF_MONTH);
	int32_t offset = startOfWeekOffset(dom, dow);
	return computeWeek(offset, dom);
}

int64_t WeekFields$ComputedDayOfField::localizedWeekOfYear($TemporalAccessor* temporal) {
	int32_t dow = localizedDayOfWeek(temporal);
	$init($ChronoField);
	int32_t doy = $nc(temporal)->get($ChronoField::DAY_OF_YEAR);
	int32_t offset = startOfWeekOffset(doy, dow);
	return computeWeek(offset, doy);
}

int32_t WeekFields$ComputedDayOfField::localizedWeekBasedYear($TemporalAccessor* temporal) {
	int32_t dow = localizedDayOfWeek(temporal);
	$init($ChronoField);
	int32_t year = $nc(temporal)->get($ChronoField::YEAR);
	int32_t doy = temporal->get($ChronoField::DAY_OF_YEAR);
	int32_t offset = startOfWeekOffset(doy, dow);
	int32_t week = computeWeek(offset, doy);
	if (week == 0) {
		return year - 1;
	} else {
		$var($ValueRange, dayRange, temporal->range($ChronoField::DAY_OF_YEAR));
		int32_t yearLen = (int32_t)$nc(dayRange)->getMaximum();
		int32_t newYearWeek = computeWeek(offset, yearLen + $nc(this->weekDef)->getMinimalDaysInFirstWeek());
		if (week >= newYearWeek) {
			return year + 1;
		}
	}
	return year;
}

int32_t WeekFields$ComputedDayOfField::localizedWeekOfWeekBasedYear($TemporalAccessor* temporal) {
	int32_t dow = localizedDayOfWeek(temporal);
	$init($ChronoField);
	int32_t doy = $nc(temporal)->get($ChronoField::DAY_OF_YEAR);
	int32_t offset = startOfWeekOffset(doy, dow);
	int32_t week = computeWeek(offset, doy);
	if (week == 0) {
		$var($ChronoLocalDate, date, $nc($($Chronology::from(temporal)))->date(temporal));
		$init($ChronoUnit);
		$assign(date, $nc(date)->minus(doy, $ChronoUnit::DAYS));
		return localizedWeekOfWeekBasedYear(date);
	} else if (week > 50) {
		$init($ChronoField);
		$var($ValueRange, dayRange, $nc(temporal)->range($ChronoField::DAY_OF_YEAR));
		int32_t yearLen = (int32_t)$nc(dayRange)->getMaximum();
		int32_t newYearWeek = computeWeek(offset, yearLen + $nc(this->weekDef)->getMinimalDaysInFirstWeek());
		if (week >= newYearWeek) {
			week = week - newYearWeek + 1;
		}
	}
	return week;
}

int32_t WeekFields$ComputedDayOfField::startOfWeekOffset(int32_t day, int32_t dow) {
	int32_t weekStart = $Math::floorMod(day - dow, 7);
	int32_t offset = -weekStart;
	if (weekStart + 1 > $nc(this->weekDef)->getMinimalDaysInFirstWeek()) {
		offset = 7 - weekStart;
	}
	return offset;
}

int32_t WeekFields$ComputedDayOfField::computeWeek(int32_t offset, int32_t day) {
	return ((7 + offset + (day - 1)) / 7);
}

$Temporal* WeekFields$ComputedDayOfField::adjustInto($Temporal* temporal, int64_t newValue) {
	int32_t newVal = $nc(this->range$)->checkValidIntValue(newValue, this);
	int32_t currentVal = $nc(temporal)->get(this);
	if (newVal == currentVal) {
		return temporal;
	}
	$init($ChronoUnit);
	if ($equals(this->rangeUnit, $ChronoUnit::FOREVER)) {
		int32_t idow = temporal->get($nc(this->weekDef)->dayOfWeek$);
		int32_t wowby = temporal->get($nc(this->weekDef)->weekOfWeekBasedYear$);
		return static_cast<$Temporal*>(ofWeekBasedYear($($Chronology::from(temporal)), (int32_t)newValue, wowby, idow));
	} else {
		return temporal->plus(newVal - currentVal, this->baseUnit);
	}
}

$TemporalAccessor* WeekFields$ComputedDayOfField::resolve($Map* fieldValues, $TemporalAccessor* partialTemporal, $ResolverStyle* resolverStyle) {
	int64_t value = $nc(($cast($Long, $($nc(fieldValues)->get(this)))))->longValue();
	int32_t newValue = $Math::toIntExact(value);
	$init($ChronoUnit);
	if ($equals(this->rangeUnit, $ChronoUnit::WEEKS)) {
		int32_t checkedValue = $nc(this->range$)->checkValidIntValue(value, this);
		int32_t startDow = $nc($($nc(this->weekDef)->getFirstDayOfWeek()))->getValue();
		int64_t isoDow = $Math::floorMod((startDow - 1) + (checkedValue - 1), 7) + 1;
		fieldValues->remove(this);
		$init($ChronoField);
		fieldValues->put($ChronoField::DAY_OF_WEEK, $($Long::valueOf(isoDow)));
		return nullptr;
	}
	$init($ChronoField);
	if (fieldValues->containsKey($ChronoField::DAY_OF_WEEK) == false) {
		return nullptr;
	}
	int32_t isoDow = $ChronoField::DAY_OF_WEEK->checkValidIntValue($nc(($cast($Long, $(fieldValues->get($ChronoField::DAY_OF_WEEK)))))->longValue());
	int32_t dow = localizedDayOfWeek(isoDow);
	$var($Chronology, chrono, $Chronology::from(partialTemporal));
	if (fieldValues->containsKey($ChronoField::YEAR)) {
		int32_t year = $ChronoField::YEAR->checkValidIntValue($nc(($cast($Long, $(fieldValues->get($ChronoField::YEAR)))))->longValue());
		if ($equals(this->rangeUnit, $ChronoUnit::MONTHS) && fieldValues->containsKey($ChronoField::MONTH_OF_YEAR)) {
			int64_t month = $nc(($cast($Long, $(fieldValues->get($ChronoField::MONTH_OF_YEAR)))))->longValue();
			return resolveWoM(fieldValues, chrono, year, month, newValue, dow, resolverStyle);
		}
		if ($equals(this->rangeUnit, $ChronoUnit::YEARS)) {
			return resolveWoY(fieldValues, chrono, year, newValue, dow, resolverStyle);
		}
	} else {
		$init($WeekFields);
		bool var$1 = (this->rangeUnit == $WeekFields::WEEK_BASED_YEARS || $equals(this->rangeUnit, $ChronoUnit::FOREVER)) && fieldValues->containsKey($nc(this->weekDef)->weekBasedYear$);
		if (var$1 && fieldValues->containsKey($nc(this->weekDef)->weekOfWeekBasedYear$)) {
			return resolveWBY(fieldValues, chrono, dow, resolverStyle);
		}
	}
	return nullptr;
}

$ChronoLocalDate* WeekFields$ComputedDayOfField::resolveWoM($Map* fieldValues, $Chronology* chrono, int32_t year, int64_t month, int64_t wom, int32_t localDow, $ResolverStyle* resolverStyle) {
	$var($ChronoLocalDate, date, nullptr);
	$init($ResolverStyle);
	if (resolverStyle == $ResolverStyle::LENIENT) {
		$init($ChronoUnit);
		$assign(date, $nc($($nc(chrono)->date(year, 1, 1)))->plus($Math::subtractExact(month, (int64_t)1), $ChronoUnit::MONTHS));
		int64_t weeks = $Math::subtractExact(wom, localizedWeekOfMonth(date));
		int32_t days = localDow - localizedDayOfWeek(static_cast<$TemporalAccessor*>(date));
		$assign(date, $nc(date)->plus($Math::addExact($Math::multiplyExact(weeks, 7), (int64_t)days), $ChronoUnit::DAYS));
	} else {
		$init($ChronoField);
		int32_t monthValid = $ChronoField::MONTH_OF_YEAR->checkValidIntValue(month);
		$assign(date, $nc(chrono)->date(year, monthValid, 1));
		int32_t womInt = $nc(this->range$)->checkValidIntValue(wom, this);
		int32_t weeks = (int32_t)(womInt - localizedWeekOfMonth(date));
		int32_t days = localDow - localizedDayOfWeek(static_cast<$TemporalAccessor*>(date));
		$init($ChronoUnit);
		$assign(date, $nc(date)->plus(weeks * 7 + days, $ChronoUnit::DAYS));
		if (resolverStyle == $ResolverStyle::STRICT && date->getLong($ChronoField::MONTH_OF_YEAR) != month) {
			$throwNew($DateTimeException, "Strict mode rejected resolved date as it is in a different month"_s);
		}
	}
	$nc(fieldValues)->remove(this);
	$init($ChronoField);
	fieldValues->remove($ChronoField::YEAR);
	fieldValues->remove($ChronoField::MONTH_OF_YEAR);
	fieldValues->remove($ChronoField::DAY_OF_WEEK);
	return date;
}

$ChronoLocalDate* WeekFields$ComputedDayOfField::resolveWoY($Map* fieldValues, $Chronology* chrono, int32_t year, int64_t woy, int32_t localDow, $ResolverStyle* resolverStyle) {
	$var($ChronoLocalDate, date, $nc(chrono)->date(year, 1, 1));
	$init($ResolverStyle);
	if (resolverStyle == $ResolverStyle::LENIENT) {
		int64_t weeks = $Math::subtractExact(woy, localizedWeekOfYear(date));
		int32_t days = localDow - localizedDayOfWeek(static_cast<$TemporalAccessor*>(date));
		$init($ChronoUnit);
		$assign(date, $nc(date)->plus($Math::addExact($Math::multiplyExact(weeks, 7), (int64_t)days), $ChronoUnit::DAYS));
	} else {
		int32_t womInt = $nc(this->range$)->checkValidIntValue(woy, this);
		int32_t weeks = (int32_t)(womInt - localizedWeekOfYear(date));
		int32_t days = localDow - localizedDayOfWeek(static_cast<$TemporalAccessor*>(date));
		$init($ChronoUnit);
		$assign(date, $nc(date)->plus(weeks * 7 + days, $ChronoUnit::DAYS));
		$init($ChronoField);
		if (resolverStyle == $ResolverStyle::STRICT && date->getLong($ChronoField::YEAR) != year) {
			$throwNew($DateTimeException, "Strict mode rejected resolved date as it is in a different year"_s);
		}
	}
	$nc(fieldValues)->remove(this);
	$init($ChronoField);
	fieldValues->remove($ChronoField::YEAR);
	fieldValues->remove($ChronoField::DAY_OF_WEEK);
	return date;
}

$ChronoLocalDate* WeekFields$ComputedDayOfField::resolveWBY($Map* fieldValues, $Chronology* chrono, int32_t localDow, $ResolverStyle* resolverStyle) {
	int32_t yowby = $nc($($nc($nc(this->weekDef)->weekBasedYear$)->range()))->checkValidIntValue($nc(($cast($Long, $($nc(fieldValues)->get($nc(this->weekDef)->weekBasedYear$)))))->longValue(), $nc(this->weekDef)->weekBasedYear$);
	$var($ChronoLocalDate, date, nullptr);
	$init($ResolverStyle);
	if (resolverStyle == $ResolverStyle::LENIENT) {
		$assign(date, ofWeekBasedYear(chrono, yowby, 1, localDow));
		int64_t wowby = $nc(($cast($Long, $($nc(fieldValues)->get($nc(this->weekDef)->weekOfWeekBasedYear$)))))->longValue();
		int64_t weeks = $Math::subtractExact(wowby, (int64_t)1);
		$init($ChronoUnit);
		$assign(date, $nc(date)->plus(weeks, $ChronoUnit::WEEKS));
	} else {
		int32_t wowby = $nc($($nc($nc(this->weekDef)->weekOfWeekBasedYear$)->range()))->checkValidIntValue($nc(($cast($Long, $($nc(fieldValues)->get($nc(this->weekDef)->weekOfWeekBasedYear$)))))->longValue(), $nc(this->weekDef)->weekOfWeekBasedYear$);
		$assign(date, ofWeekBasedYear(chrono, yowby, wowby, localDow));
		if (resolverStyle == $ResolverStyle::STRICT && localizedWeekBasedYear(date) != yowby) {
			$throwNew($DateTimeException, "Strict mode rejected resolved date as it is in a different week-based-year"_s);
		}
	}
	$nc(fieldValues)->remove(this);
	fieldValues->remove($nc(this->weekDef)->weekBasedYear$);
	fieldValues->remove($nc(this->weekDef)->weekOfWeekBasedYear$);
	$init($ChronoField);
	fieldValues->remove($ChronoField::DAY_OF_WEEK);
	return date;
}

$String* WeekFields$ComputedDayOfField::getDisplayName($Locale* locale) {
	$Objects::requireNonNull($of(locale), "locale"_s);
	$init($ChronoUnit);
	if ($equals(this->rangeUnit, $ChronoUnit::YEARS)) {
		$var($LocaleResources, lr, $nc($($LocaleProviderAdapter::getResourceBundleBased()))->getLocaleResources($($CalendarDataUtility::findRegionOverride(locale))));
		$var($ResourceBundle, rb, $nc(lr)->getJavaTimeFormatData());
		return $nc(rb)->containsKey("field.week"_s) ? $nc(rb)->getString("field.week"_s) : this->name;
	}
	return this->name;
}

$TemporalUnit* WeekFields$ComputedDayOfField::getBaseUnit() {
	return this->baseUnit;
}

$TemporalUnit* WeekFields$ComputedDayOfField::getRangeUnit() {
	return this->rangeUnit;
}

bool WeekFields$ComputedDayOfField::isDateBased() {
	return true;
}

bool WeekFields$ComputedDayOfField::isTimeBased() {
	return false;
}

$ValueRange* WeekFields$ComputedDayOfField::range() {
	return this->range$;
}

bool WeekFields$ComputedDayOfField::isSupportedBy($TemporalAccessor* temporal) {
	$init($ChronoField);
	if ($nc(temporal)->isSupported($ChronoField::DAY_OF_WEEK)) {
		$init($ChronoUnit);
		if ($equals(this->rangeUnit, $ChronoUnit::WEEKS)) {
			return true;
		} else {
			if ($equals(this->rangeUnit, $ChronoUnit::MONTHS)) {
				return temporal->isSupported($ChronoField::DAY_OF_MONTH);
			} else {
				if ($equals(this->rangeUnit, $ChronoUnit::YEARS)) {
					return temporal->isSupported($ChronoField::DAY_OF_YEAR);
				} else {
					$init($WeekFields);
					if (this->rangeUnit == $WeekFields::WEEK_BASED_YEARS) {
						return temporal->isSupported($ChronoField::DAY_OF_YEAR);
					} else {
						if ($equals(this->rangeUnit, $ChronoUnit::FOREVER)) {
							return temporal->isSupported($ChronoField::YEAR);
						}
					}
				}
			}
		}
	}
	return false;
}

$ValueRange* WeekFields$ComputedDayOfField::rangeRefinedBy($TemporalAccessor* temporal) {
	$init($ChronoUnit);
	if ($equals(this->rangeUnit, $ChronoUnit::WEEKS)) {
		return this->range$;
	} else {
		if ($equals(this->rangeUnit, $ChronoUnit::MONTHS)) {
			$init($ChronoField);
			return rangeByWeek(temporal, $ChronoField::DAY_OF_MONTH);
		} else {
			if ($equals(this->rangeUnit, $ChronoUnit::YEARS)) {
				$init($ChronoField);
				return rangeByWeek(temporal, $ChronoField::DAY_OF_YEAR);
			} else {
				$init($WeekFields);
				if (this->rangeUnit == $WeekFields::WEEK_BASED_YEARS) {
					return rangeWeekOfWeekBasedYear(temporal);
				} else {
					if ($equals(this->rangeUnit, $ChronoUnit::FOREVER)) {
						$init($ChronoField);
						return $ChronoField::YEAR->range();
					} else {
						$throwNew($IllegalStateException, $$str({"unreachable, rangeUnit: "_s, this->rangeUnit, ", this: "_s, this}));
					}
				}
			}
		}
	}
}

$ValueRange* WeekFields$ComputedDayOfField::rangeByWeek($TemporalAccessor* temporal, $TemporalField* field) {
	int32_t dow = localizedDayOfWeek(temporal);
	int32_t offset = startOfWeekOffset($nc(temporal)->get(field), dow);
	$var($ValueRange, fieldRange, $nc(temporal)->range(field));
	int64_t var$0 = (int64_t)computeWeek(offset, (int32_t)$nc(fieldRange)->getMinimum());
	return $ValueRange::of(var$0, computeWeek(offset, (int32_t)$nc(fieldRange)->getMaximum()));
}

$ValueRange* WeekFields$ComputedDayOfField::rangeWeekOfWeekBasedYear($TemporalAccessor* temporal) {
	$init($ChronoField);
	if (!$nc(temporal)->isSupported($ChronoField::DAY_OF_YEAR)) {
		return WeekFields$ComputedDayOfField::WEEK_OF_YEAR_RANGE;
	}
	int32_t dow = localizedDayOfWeek(temporal);
	int32_t doy = $nc(temporal)->get($ChronoField::DAY_OF_YEAR);
	int32_t offset = startOfWeekOffset(doy, dow);
	int32_t week = computeWeek(offset, doy);
	if (week == 0) {
		$var($ChronoLocalDate, date, $nc($($Chronology::from(temporal)))->date(temporal));
		$init($ChronoUnit);
		$assign(date, $nc(date)->minus(doy + 7, $ChronoUnit::DAYS));
		return rangeWeekOfWeekBasedYear(date);
	}
	$var($ValueRange, dayRange, temporal->range($ChronoField::DAY_OF_YEAR));
	int32_t yearLen = (int32_t)$nc(dayRange)->getMaximum();
	int32_t newYearWeek = computeWeek(offset, yearLen + $nc(this->weekDef)->getMinimalDaysInFirstWeek());
	if (week >= newYearWeek) {
		$var($ChronoLocalDate, date, $nc($($Chronology::from(temporal)))->date(temporal));
		$init($ChronoUnit);
		$assign(date, $nc(date)->plus(yearLen - doy + 1 + 7, $ChronoUnit::DAYS));
		return rangeWeekOfWeekBasedYear(date);
	}
	return $ValueRange::of(1, newYearWeek - 1);
}

$String* WeekFields$ComputedDayOfField::toString() {
	return $str({this->name, "["_s, $($nc(this->weekDef)->toString()), "]"_s});
}

void clinit$WeekFields$ComputedDayOfField($Class* class$) {
	$assignStatic(WeekFields$ComputedDayOfField::DAY_OF_WEEK_RANGE, $ValueRange::of(1, 7));
	$assignStatic(WeekFields$ComputedDayOfField::WEEK_OF_MONTH_RANGE, $ValueRange::of(0, 1, 4, 6));
	$assignStatic(WeekFields$ComputedDayOfField::WEEK_OF_YEAR_RANGE, $ValueRange::of(0, 1, 52, 54));
	$assignStatic(WeekFields$ComputedDayOfField::WEEK_OF_WEEK_BASED_YEAR_RANGE, $ValueRange::of(1, 52, 53));
}

WeekFields$ComputedDayOfField::WeekFields$ComputedDayOfField() {
}

$Class* WeekFields$ComputedDayOfField::load$($String* name, bool initialize) {
	$loadClass(WeekFields$ComputedDayOfField, name, initialize, &_WeekFields$ComputedDayOfField_ClassInfo_, clinit$WeekFields$ComputedDayOfField, allocate$WeekFields$ComputedDayOfField);
	return class$;
}

$Class* WeekFields$ComputedDayOfField::class$ = nullptr;

		} // temporal
	} // time
} // java