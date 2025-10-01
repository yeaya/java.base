#include <java/time/temporal/ChronoField.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/Year.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/ValueRange.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/ResourceBundle.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

#undef CLOCK_HOUR_OF_AMPM
#undef DAY_OF_YEAR
#undef MICRO_OF_DAY
#undef ALIGNED_DAY_OF_WEEK_IN_MONTH
#undef DAY_OF_MONTH
#undef SECOND_OF_MINUTE
#undef DAYS
#undef MILLIS
#undef MAX_VALUE
#undef PROLEPTIC_MONTH
#undef MILLI_OF_SECOND
#undef NANO_OF_DAY
#undef CLOCK_HOUR_OF_DAY
#undef MONTHS
#undef MINUTE_OF_DAY
#undef ALIGNED_WEEK_OF_MONTH
#undef YEAR
#undef HOUR_OF_DAY
#undef MILLI_OF_DAY
#undef ALIGNED_DAY_OF_WEEK_IN_YEAR
#undef YEAR_OF_ERA
#undef FOREVER
#undef AMPM_OF_DAY
#undef MICROS
#undef SECONDS
#undef NANO_OF_SECOND
#undef MIN_VALUE
#undef SECOND_OF_DAY
#undef HALF_DAYS
#undef YEARS
#undef MICRO_OF_SECOND
#undef MONTH_OF_YEAR
#undef HOURS
#undef EPOCH_DAY
#undef ERA
#undef OFFSET_SECONDS
#undef WEEKS
#undef HOUR_OF_AMPM
#undef NANOS
#undef MINUTE_OF_HOUR
#undef INSTANT_SECONDS
#undef ALIGNED_WEEK_OF_YEAR
#undef DAY_OF_WEEK
#undef MINUTES
#undef ERAS

using $ChronoFieldArray = $Array<::java::time::temporal::ChronoField>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Year = ::java::time::Year;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $ValueRange = ::java::time::temporal::ValueRange;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $ResourceBundle = ::java::util::ResourceBundle;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _ChronoField_FieldInfo_[] = {
	{"NANO_OF_SECOND", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, NANO_OF_SECOND)},
	{"NANO_OF_DAY", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, NANO_OF_DAY)},
	{"MICRO_OF_SECOND", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, MICRO_OF_SECOND)},
	{"MICRO_OF_DAY", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, MICRO_OF_DAY)},
	{"MILLI_OF_SECOND", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, MILLI_OF_SECOND)},
	{"MILLI_OF_DAY", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, MILLI_OF_DAY)},
	{"SECOND_OF_MINUTE", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, SECOND_OF_MINUTE)},
	{"SECOND_OF_DAY", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, SECOND_OF_DAY)},
	{"MINUTE_OF_HOUR", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, MINUTE_OF_HOUR)},
	{"MINUTE_OF_DAY", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, MINUTE_OF_DAY)},
	{"HOUR_OF_AMPM", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, HOUR_OF_AMPM)},
	{"CLOCK_HOUR_OF_AMPM", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, CLOCK_HOUR_OF_AMPM)},
	{"HOUR_OF_DAY", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, HOUR_OF_DAY)},
	{"CLOCK_HOUR_OF_DAY", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, CLOCK_HOUR_OF_DAY)},
	{"AMPM_OF_DAY", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, AMPM_OF_DAY)},
	{"DAY_OF_WEEK", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, DAY_OF_WEEK)},
	{"ALIGNED_DAY_OF_WEEK_IN_MONTH", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, ALIGNED_DAY_OF_WEEK_IN_MONTH)},
	{"ALIGNED_DAY_OF_WEEK_IN_YEAR", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, ALIGNED_DAY_OF_WEEK_IN_YEAR)},
	{"DAY_OF_MONTH", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, DAY_OF_MONTH)},
	{"DAY_OF_YEAR", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, DAY_OF_YEAR)},
	{"EPOCH_DAY", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, EPOCH_DAY)},
	{"ALIGNED_WEEK_OF_MONTH", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, ALIGNED_WEEK_OF_MONTH)},
	{"ALIGNED_WEEK_OF_YEAR", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, ALIGNED_WEEK_OF_YEAR)},
	{"MONTH_OF_YEAR", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, MONTH_OF_YEAR)},
	{"PROLEPTIC_MONTH", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, PROLEPTIC_MONTH)},
	{"YEAR_OF_ERA", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, YEAR_OF_ERA)},
	{"YEAR", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, YEAR)},
	{"ERA", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, ERA)},
	{"INSTANT_SECONDS", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, INSTANT_SECONDS)},
	{"OFFSET_SECONDS", "Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ChronoField, OFFSET_SECONDS)},
	{"$VALUES", "[Ljava/time/temporal/ChronoField;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ChronoField, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ChronoField, name$)},
	{"baseUnit", "Ljava/time/temporal/TemporalUnit;", nullptr, $PRIVATE | $FINAL, $field(ChronoField, baseUnit)},
	{"rangeUnit", "Ljava/time/temporal/TemporalUnit;", nullptr, $PRIVATE | $FINAL, $field(ChronoField, rangeUnit)},
	{"range", "Ljava/time/temporal/ValueRange;", nullptr, $PRIVATE | $FINAL, $field(ChronoField, range$)},
	{"displayNameKey", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ChronoField, displayNameKey)},
	{}
};

$MethodInfo _ChronoField_MethodInfo_[] = {
	{"$values", "()[Ljava/time/temporal/ChronoField;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ChronoFieldArray*(*)()>(&ChronoField::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/ValueRange;)V", "(Ljava/lang/String;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/ValueRange;)V", $PRIVATE, $method(static_cast<void(ChronoField::*)($String*,int32_t,$String*,$TemporalUnit*,$TemporalUnit*,$ValueRange*)>(&ChronoField::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/ValueRange;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/ValueRange;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(ChronoField::*)($String*,int32_t,$String*,$TemporalUnit*,$TemporalUnit*,$ValueRange*,$String*)>(&ChronoField::init$))},
	{"adjustInto", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;", "<R::Ljava/time/temporal/Temporal;>(TR;J)TR;", $PUBLIC},
	{"checkValidIntValue", "(J)I", nullptr, $PUBLIC, $method(static_cast<int32_t(ChronoField::*)(int64_t)>(&ChronoField::checkValidIntValue))},
	{"checkValidValue", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(ChronoField::*)(int64_t)>(&ChronoField::checkValidValue))},
	{"getBaseUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC},
	{"getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFrom", "(Ljava/time/temporal/TemporalAccessor;)J", nullptr, $PUBLIC},
	{"getRangeUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC},
	{"isDateBased", "()Z", nullptr, $PUBLIC},
	{"isSupportedBy", "(Ljava/time/temporal/TemporalAccessor;)Z", nullptr, $PUBLIC},
	{"isTimeBased", "()Z", nullptr, $PUBLIC},
	{"range", "()Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"rangeRefinedBy", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ChronoField*(*)($String*)>(&ChronoField::valueOf))},
	{"values", "()[Ljava/time/temporal/ChronoField;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ChronoFieldArray*(*)()>(&ChronoField::values))},
	{}
};

$ClassInfo _ChronoField_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.time.temporal.ChronoField",
	"java.lang.Enum",
	"java.time.temporal.TemporalField",
	_ChronoField_FieldInfo_,
	_ChronoField_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/temporal/ChronoField;>;Ljava/time/temporal/TemporalField;"
};

$Object* allocate$ChronoField($Class* clazz) {
	return $of($alloc(ChronoField));
}

bool ChronoField::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t ChronoField::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* ChronoField::clone() {
	 return this->$Enum::clone();
}

void ChronoField::finalize() {
	this->$Enum::finalize();
}


ChronoField* ChronoField::NANO_OF_SECOND = nullptr;

ChronoField* ChronoField::NANO_OF_DAY = nullptr;

ChronoField* ChronoField::MICRO_OF_SECOND = nullptr;

ChronoField* ChronoField::MICRO_OF_DAY = nullptr;

ChronoField* ChronoField::MILLI_OF_SECOND = nullptr;

ChronoField* ChronoField::MILLI_OF_DAY = nullptr;

ChronoField* ChronoField::SECOND_OF_MINUTE = nullptr;

ChronoField* ChronoField::SECOND_OF_DAY = nullptr;

ChronoField* ChronoField::MINUTE_OF_HOUR = nullptr;

ChronoField* ChronoField::MINUTE_OF_DAY = nullptr;

ChronoField* ChronoField::HOUR_OF_AMPM = nullptr;

ChronoField* ChronoField::CLOCK_HOUR_OF_AMPM = nullptr;

ChronoField* ChronoField::HOUR_OF_DAY = nullptr;

ChronoField* ChronoField::CLOCK_HOUR_OF_DAY = nullptr;

ChronoField* ChronoField::AMPM_OF_DAY = nullptr;

ChronoField* ChronoField::DAY_OF_WEEK = nullptr;

ChronoField* ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH = nullptr;

ChronoField* ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR = nullptr;

ChronoField* ChronoField::DAY_OF_MONTH = nullptr;

ChronoField* ChronoField::DAY_OF_YEAR = nullptr;

ChronoField* ChronoField::EPOCH_DAY = nullptr;

ChronoField* ChronoField::ALIGNED_WEEK_OF_MONTH = nullptr;

ChronoField* ChronoField::ALIGNED_WEEK_OF_YEAR = nullptr;

ChronoField* ChronoField::MONTH_OF_YEAR = nullptr;

ChronoField* ChronoField::PROLEPTIC_MONTH = nullptr;

ChronoField* ChronoField::YEAR_OF_ERA = nullptr;

ChronoField* ChronoField::YEAR = nullptr;

ChronoField* ChronoField::ERA = nullptr;

ChronoField* ChronoField::INSTANT_SECONDS = nullptr;

ChronoField* ChronoField::OFFSET_SECONDS = nullptr;
$ChronoFieldArray* ChronoField::$VALUES = nullptr;

$ChronoFieldArray* ChronoField::$values() {
	$init(ChronoField);
	return $new($ChronoFieldArray, {
		ChronoField::NANO_OF_SECOND,
		ChronoField::NANO_OF_DAY,
		ChronoField::MICRO_OF_SECOND,
		ChronoField::MICRO_OF_DAY,
		ChronoField::MILLI_OF_SECOND,
		ChronoField::MILLI_OF_DAY,
		ChronoField::SECOND_OF_MINUTE,
		ChronoField::SECOND_OF_DAY,
		ChronoField::MINUTE_OF_HOUR,
		ChronoField::MINUTE_OF_DAY,
		ChronoField::HOUR_OF_AMPM,
		ChronoField::CLOCK_HOUR_OF_AMPM,
		ChronoField::HOUR_OF_DAY,
		ChronoField::CLOCK_HOUR_OF_DAY,
		ChronoField::AMPM_OF_DAY,
		ChronoField::DAY_OF_WEEK,
		ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH,
		ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR,
		ChronoField::DAY_OF_MONTH,
		ChronoField::DAY_OF_YEAR,
		ChronoField::EPOCH_DAY,
		ChronoField::ALIGNED_WEEK_OF_MONTH,
		ChronoField::ALIGNED_WEEK_OF_YEAR,
		ChronoField::MONTH_OF_YEAR,
		ChronoField::PROLEPTIC_MONTH,
		ChronoField::YEAR_OF_ERA,
		ChronoField::YEAR,
		ChronoField::ERA,
		ChronoField::INSTANT_SECONDS,
		ChronoField::OFFSET_SECONDS
	});
}

$ChronoFieldArray* ChronoField::values() {
	$init(ChronoField);
	return $cast($ChronoFieldArray, ChronoField::$VALUES->clone());
}

ChronoField* ChronoField::valueOf($String* name) {
	$init(ChronoField);
	return $cast(ChronoField, $Enum::valueOf(ChronoField::class$, name));
}

void ChronoField::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $TemporalUnit* baseUnit, $TemporalUnit* rangeUnit, $ValueRange* range) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, baseUnit, baseUnit);
	$set(this, rangeUnit, rangeUnit);
	$set(this, range$, range);
	$set(this, displayNameKey, nullptr);
}

void ChronoField::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $TemporalUnit* baseUnit, $TemporalUnit* rangeUnit, $ValueRange* range, $String* displayNameKey) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, baseUnit, baseUnit);
	$set(this, rangeUnit, rangeUnit);
	$set(this, range$, range);
	$set(this, displayNameKey, displayNameKey);
}

$String* ChronoField::getDisplayName($Locale* locale) {
	$Objects::requireNonNull($of(locale), "locale"_s);
	if (this->displayNameKey == nullptr) {
		return this->name$;
	}
	$var($LocaleResources, lr, $nc($($LocaleProviderAdapter::getResourceBundleBased()))->getLocaleResources($($CalendarDataUtility::findRegionOverride(locale))));
	$var($ResourceBundle, rb, $nc(lr)->getJavaTimeFormatData());
	$var($String, key, $str({"field."_s, this->displayNameKey}));
	return $nc(rb)->containsKey(key) ? $nc(rb)->getString(key) : this->name$;
}

$TemporalUnit* ChronoField::getBaseUnit() {
	return this->baseUnit;
}

$TemporalUnit* ChronoField::getRangeUnit() {
	return this->rangeUnit;
}

$ValueRange* ChronoField::range() {
	return this->range$;
}

bool ChronoField::isDateBased() {
	int32_t var$1 = ordinal();
	bool var$0 = var$1 >= ChronoField::DAY_OF_WEEK->ordinal();
	if (var$0) {
		int32_t var$2 = ordinal();
		var$0 = var$2 <= ChronoField::ERA->ordinal();
	}
	return var$0;
}

bool ChronoField::isTimeBased() {
	int32_t var$0 = ordinal();
	return var$0 < ChronoField::DAY_OF_WEEK->ordinal();
}

int64_t ChronoField::checkValidValue(int64_t value) {
	return $nc($(range()))->checkValidValue(value, this);
}

int32_t ChronoField::checkValidIntValue(int64_t value) {
	return $nc($(range()))->checkValidIntValue(value, this);
}

bool ChronoField::isSupportedBy($TemporalAccessor* temporal) {
	return $nc(temporal)->isSupported(this);
}

$ValueRange* ChronoField::rangeRefinedBy($TemporalAccessor* temporal) {
	return $nc(temporal)->range(this);
}

int64_t ChronoField::getFrom($TemporalAccessor* temporal) {
	return $nc(temporal)->getLong(this);
}

$Temporal* ChronoField::adjustInto($Temporal* temporal, int64_t newValue) {
	return $nc(temporal)->with(this, newValue);
}

$String* ChronoField::toString() {
	return this->name$;
}

void clinit$ChronoField($Class* class$) {
	$init($ChronoUnit);
	$assignStatic(ChronoField::NANO_OF_SECOND, $new(ChronoField, "NANO_OF_SECOND"_s, 0, "NanoOfSecond"_s, $ChronoUnit::NANOS, $ChronoUnit::SECONDS, $($ValueRange::of(0, 0x3B9AC9FF))));
	$assignStatic(ChronoField::NANO_OF_DAY, $new(ChronoField, "NANO_OF_DAY"_s, 1, "NanoOfDay"_s, $ChronoUnit::NANOS, $ChronoUnit::DAYS, $($ValueRange::of(0, (int64_t)86400 * (int64_t)1000000000 - 1))));
	$assignStatic(ChronoField::MICRO_OF_SECOND, $new(ChronoField, "MICRO_OF_SECOND"_s, 2, "MicroOfSecond"_s, $ChronoUnit::MICROS, $ChronoUnit::SECONDS, $($ValueRange::of(0, 0x000F423F))));
	$assignStatic(ChronoField::MICRO_OF_DAY, $new(ChronoField, "MICRO_OF_DAY"_s, 3, "MicroOfDay"_s, $ChronoUnit::MICROS, $ChronoUnit::DAYS, $($ValueRange::of(0, (int64_t)86400 * (int64_t)1000000 - 1))));
	$assignStatic(ChronoField::MILLI_OF_SECOND, $new(ChronoField, "MILLI_OF_SECOND"_s, 4, "MilliOfSecond"_s, $ChronoUnit::MILLIS, $ChronoUnit::SECONDS, $($ValueRange::of(0, 999))));
	$assignStatic(ChronoField::MILLI_OF_DAY, $new(ChronoField, "MILLI_OF_DAY"_s, 5, "MilliOfDay"_s, $ChronoUnit::MILLIS, $ChronoUnit::DAYS, $($ValueRange::of(0, (int64_t)86400 * (int64_t)1000 - 1))));
	$assignStatic(ChronoField::SECOND_OF_MINUTE, $new(ChronoField, "SECOND_OF_MINUTE"_s, 6, "SecondOfMinute"_s, $ChronoUnit::SECONDS, $ChronoUnit::MINUTES, $($ValueRange::of(0, 59)), "second"_s));
	$assignStatic(ChronoField::SECOND_OF_DAY, $new(ChronoField, "SECOND_OF_DAY"_s, 7, "SecondOfDay"_s, $ChronoUnit::SECONDS, $ChronoUnit::DAYS, $($ValueRange::of(0, (int64_t)86400 - 1))));
	$assignStatic(ChronoField::MINUTE_OF_HOUR, $new(ChronoField, "MINUTE_OF_HOUR"_s, 8, "MinuteOfHour"_s, $ChronoUnit::MINUTES, $ChronoUnit::HOURS, $($ValueRange::of(0, 59)), "minute"_s));
	$assignStatic(ChronoField::MINUTE_OF_DAY, $new(ChronoField, "MINUTE_OF_DAY"_s, 9, "MinuteOfDay"_s, $ChronoUnit::MINUTES, $ChronoUnit::DAYS, $($ValueRange::of(0, (24 * 60) - 1))));
	$assignStatic(ChronoField::HOUR_OF_AMPM, $new(ChronoField, "HOUR_OF_AMPM"_s, 10, "HourOfAmPm"_s, $ChronoUnit::HOURS, $ChronoUnit::HALF_DAYS, $($ValueRange::of(0, 11))));
	$assignStatic(ChronoField::CLOCK_HOUR_OF_AMPM, $new(ChronoField, "CLOCK_HOUR_OF_AMPM"_s, 11, "ClockHourOfAmPm"_s, $ChronoUnit::HOURS, $ChronoUnit::HALF_DAYS, $($ValueRange::of(1, 12))));
	$assignStatic(ChronoField::HOUR_OF_DAY, $new(ChronoField, "HOUR_OF_DAY"_s, 12, "HourOfDay"_s, $ChronoUnit::HOURS, $ChronoUnit::DAYS, $($ValueRange::of(0, 23)), "hour"_s));
	$assignStatic(ChronoField::CLOCK_HOUR_OF_DAY, $new(ChronoField, "CLOCK_HOUR_OF_DAY"_s, 13, "ClockHourOfDay"_s, $ChronoUnit::HOURS, $ChronoUnit::DAYS, $($ValueRange::of(1, 24))));
	$assignStatic(ChronoField::AMPM_OF_DAY, $new(ChronoField, "AMPM_OF_DAY"_s, 14, "AmPmOfDay"_s, $ChronoUnit::HALF_DAYS, $ChronoUnit::DAYS, $($ValueRange::of(0, 1)), "dayperiod"_s));
	$assignStatic(ChronoField::DAY_OF_WEEK, $new(ChronoField, "DAY_OF_WEEK"_s, 15, "DayOfWeek"_s, $ChronoUnit::DAYS, $ChronoUnit::WEEKS, $($ValueRange::of(1, 7)), "weekday"_s));
	$assignStatic(ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH, $new(ChronoField, "ALIGNED_DAY_OF_WEEK_IN_MONTH"_s, 16, "AlignedDayOfWeekInMonth"_s, $ChronoUnit::DAYS, $ChronoUnit::WEEKS, $($ValueRange::of(1, 7))));
	$assignStatic(ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR, $new(ChronoField, "ALIGNED_DAY_OF_WEEK_IN_YEAR"_s, 17, "AlignedDayOfWeekInYear"_s, $ChronoUnit::DAYS, $ChronoUnit::WEEKS, $($ValueRange::of(1, 7))));
	$assignStatic(ChronoField::DAY_OF_MONTH, $new(ChronoField, "DAY_OF_MONTH"_s, 18, "DayOfMonth"_s, $ChronoUnit::DAYS, $ChronoUnit::MONTHS, $($ValueRange::of(1, 28, 31)), "day"_s));
	$assignStatic(ChronoField::DAY_OF_YEAR, $new(ChronoField, "DAY_OF_YEAR"_s, 19, "DayOfYear"_s, $ChronoUnit::DAYS, $ChronoUnit::YEARS, $($ValueRange::of(1, 365, 366))));
	$assignStatic(ChronoField::EPOCH_DAY, $new(ChronoField, "EPOCH_DAY"_s, 20, "EpochDay"_s, $ChronoUnit::DAYS, $ChronoUnit::FOREVER, $($ValueRange::of(0xFFFFFFAAF5CEC326, 0x000000550A1B48F7))));
	$assignStatic(ChronoField::ALIGNED_WEEK_OF_MONTH, $new(ChronoField, "ALIGNED_WEEK_OF_MONTH"_s, 21, "AlignedWeekOfMonth"_s, $ChronoUnit::WEEKS, $ChronoUnit::MONTHS, $($ValueRange::of(1, 4, 5))));
	$assignStatic(ChronoField::ALIGNED_WEEK_OF_YEAR, $new(ChronoField, "ALIGNED_WEEK_OF_YEAR"_s, 22, "AlignedWeekOfYear"_s, $ChronoUnit::WEEKS, $ChronoUnit::YEARS, $($ValueRange::of(1, 53))));
	$assignStatic(ChronoField::MONTH_OF_YEAR, $new(ChronoField, "MONTH_OF_YEAR"_s, 23, "MonthOfYear"_s, $ChronoUnit::MONTHS, $ChronoUnit::YEARS, $($ValueRange::of(1, 12)), "month"_s));
	$assignStatic(ChronoField::PROLEPTIC_MONTH, $new(ChronoField, "PROLEPTIC_MONTH"_s, 24, "ProlepticMonth"_s, $ChronoUnit::MONTHS, $ChronoUnit::FOREVER, $($ValueRange::of($Year::MIN_VALUE * (int64_t)12, $Year::MAX_VALUE * (int64_t)12 + 11))));
	$assignStatic(ChronoField::YEAR_OF_ERA, $new(ChronoField, "YEAR_OF_ERA"_s, 25, "YearOfEra"_s, $ChronoUnit::YEARS, $ChronoUnit::FOREVER, $($ValueRange::of(1, $Year::MAX_VALUE, $Year::MAX_VALUE + 1))));
	$assignStatic(ChronoField::YEAR, $new(ChronoField, "YEAR"_s, 26, "Year"_s, $ChronoUnit::YEARS, $ChronoUnit::FOREVER, $($ValueRange::of($Year::MIN_VALUE, $Year::MAX_VALUE)), "year"_s));
	$assignStatic(ChronoField::ERA, $new(ChronoField, "ERA"_s, 27, "Era"_s, $ChronoUnit::ERAS, $ChronoUnit::FOREVER, $($ValueRange::of(0, 1)), "era"_s));
	$assignStatic(ChronoField::INSTANT_SECONDS, $new(ChronoField, "INSTANT_SECONDS"_s, 28, "InstantSeconds"_s, $ChronoUnit::SECONDS, $ChronoUnit::FOREVER, $($ValueRange::of($Long::MIN_VALUE, $Long::MAX_VALUE))));
	$assignStatic(ChronoField::OFFSET_SECONDS, $new(ChronoField, "OFFSET_SECONDS"_s, 29, "OffsetSeconds"_s, $ChronoUnit::SECONDS, $ChronoUnit::FOREVER, $($ValueRange::of(-18 * 3600, 18 * 3600))));
	$assignStatic(ChronoField::$VALUES, ChronoField::$values());
}

ChronoField::ChronoField() {
}

$Class* ChronoField::load$($String* name, bool initialize) {
	$loadClass(ChronoField, name, initialize, &_ChronoField_ClassInfo_, clinit$ChronoField, allocate$ChronoField);
	return class$;
}

$Class* ChronoField::class$ = nullptr;

		} // temporal
	} // time
} // java