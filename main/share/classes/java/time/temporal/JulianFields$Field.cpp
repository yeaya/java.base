#include <java/time/temporal/JulianFields$Field.h>

#include <java/lang/Enum.h>
#include <java/lang/Math.h>
#include <java/time/DateTimeException.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/Chronology.h>
#include <java/time/format/ResolverStyle.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/time/temporal/JulianFields.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/ValueRange.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DAYS
#undef EPOCH_DAY
#undef FOREVER
#undef JULIAN_DAY
#undef LENIENT
#undef MODIFIED_JULIAN_DAY
#undef RATA_DIE

using $JulianFields$FieldArray = $Array<::java::time::temporal::JulianFields$Field>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $Chronology = ::java::time::chrono::Chronology;
using $ResolverStyle = ::java::time::format::ResolverStyle;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $JulianFields = ::java::time::temporal::JulianFields;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $ValueRange = ::java::time::temporal::ValueRange;
using $Map = ::java::util::Map;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _JulianFields$Field_FieldInfo_[] = {
	{"JULIAN_DAY", "Ljava/time/temporal/JulianFields$Field;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JulianFields$Field, JULIAN_DAY)},
	{"MODIFIED_JULIAN_DAY", "Ljava/time/temporal/JulianFields$Field;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JulianFields$Field, MODIFIED_JULIAN_DAY)},
	{"RATA_DIE", "Ljava/time/temporal/JulianFields$Field;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JulianFields$Field, RATA_DIE)},
	{"$VALUES", "[Ljava/time/temporal/JulianFields$Field;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JulianFields$Field, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(JulianFields$Field, name$)},
	{"baseUnit", "Ljava/time/temporal/TemporalUnit;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(JulianFields$Field, baseUnit)},
	{"rangeUnit", "Ljava/time/temporal/TemporalUnit;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(JulianFields$Field, rangeUnit)},
	{"range", "Ljava/time/temporal/ValueRange;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(JulianFields$Field, range$)},
	{"offset", "J", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(JulianFields$Field, offset)},
	{}
};

$MethodInfo _JulianFields$Field_MethodInfo_[] = {
	{"$values", "()[Ljava/time/temporal/JulianFields$Field;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JulianFields$FieldArray*(*)()>(&JulianFields$Field::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/TemporalUnit;J)V", "(Ljava/lang/String;Ljava/time/temporal/TemporalUnit;Ljava/time/temporal/TemporalUnit;J)V", $PRIVATE, $method(static_cast<void(JulianFields$Field::*)($String*,int32_t,$String*,$TemporalUnit*,$TemporalUnit*,int64_t)>(&JulianFields$Field::init$))},
	{"adjustInto", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;", "<R::Ljava/time/temporal/Temporal;>(TR;J)TR;", $PUBLIC},
	{"getBaseUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC},
	{"getFrom", "(Ljava/time/temporal/TemporalAccessor;)J", nullptr, $PUBLIC},
	{"getRangeUnit", "()Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC},
	{"isDateBased", "()Z", nullptr, $PUBLIC},
	{"isSupportedBy", "(Ljava/time/temporal/TemporalAccessor;)Z", nullptr, $PUBLIC},
	{"isTimeBased", "()Z", nullptr, $PUBLIC},
	{"range", "()Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"rangeRefinedBy", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"resolve", "(Ljava/util/Map;Ljava/time/temporal/TemporalAccessor;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;", "(Ljava/util/Map<Ljava/time/temporal/TemporalField;Ljava/lang/Long;>;Ljava/time/temporal/TemporalAccessor;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/time/temporal/JulianFields$Field;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JulianFields$Field*(*)($String*)>(&JulianFields$Field::valueOf))},
	{"values", "()[Ljava/time/temporal/JulianFields$Field;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JulianFields$FieldArray*(*)()>(&JulianFields$Field::values))},
	{}
};

$InnerClassInfo _JulianFields$Field_InnerClassesInfo_[] = {
	{"java.time.temporal.JulianFields$Field", "java.time.temporal.JulianFields", "Field", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JulianFields$Field_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.time.temporal.JulianFields$Field",
	"java.lang.Enum",
	"java.time.temporal.TemporalField",
	_JulianFields$Field_FieldInfo_,
	_JulianFields$Field_MethodInfo_,
	"Ljava/lang/Enum<Ljava/time/temporal/JulianFields$Field;>;Ljava/time/temporal/TemporalField;",
	nullptr,
	_JulianFields$Field_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.JulianFields"
};

$Object* allocate$JulianFields$Field($Class* clazz) {
	return $of($alloc(JulianFields$Field));
}

bool JulianFields$Field::equals(Object$* other) {
	 return this->$Enum::equals(other);
}

int32_t JulianFields$Field::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* JulianFields$Field::clone() {
	 return this->$Enum::clone();
}

void JulianFields$Field::finalize() {
	this->$Enum::finalize();
}

JulianFields$Field* JulianFields$Field::JULIAN_DAY = nullptr;
JulianFields$Field* JulianFields$Field::MODIFIED_JULIAN_DAY = nullptr;
JulianFields$Field* JulianFields$Field::RATA_DIE = nullptr;
$JulianFields$FieldArray* JulianFields$Field::$VALUES = nullptr;

$JulianFields$FieldArray* JulianFields$Field::$values() {
	$init(JulianFields$Field);
	return $new($JulianFields$FieldArray, {
		JulianFields$Field::JULIAN_DAY,
		JulianFields$Field::MODIFIED_JULIAN_DAY,
		JulianFields$Field::RATA_DIE
	});
}

$JulianFields$FieldArray* JulianFields$Field::values() {
	$init(JulianFields$Field);
	return $cast($JulianFields$FieldArray, JulianFields$Field::$VALUES->clone());
}

JulianFields$Field* JulianFields$Field::valueOf($String* name) {
	$init(JulianFields$Field);
	return $cast(JulianFields$Field, $Enum::valueOf(JulianFields$Field::class$, name));
}

void JulianFields$Field::init$($String* $enum$name, int32_t $enum$ordinal, $String* name, $TemporalUnit* baseUnit, $TemporalUnit* rangeUnit, int64_t offset) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
	$set(this, baseUnit, baseUnit);
	$set(this, rangeUnit, rangeUnit);
	$set(this, range$, $ValueRange::of((int64_t)0xFFFFFFAAF5CEC326 + offset, (int64_t)0x000000550A1B48F7 + offset));
	this->offset = offset;
}

$TemporalUnit* JulianFields$Field::getBaseUnit() {
	return this->baseUnit;
}

$TemporalUnit* JulianFields$Field::getRangeUnit() {
	return this->rangeUnit;
}

bool JulianFields$Field::isDateBased() {
	return true;
}

bool JulianFields$Field::isTimeBased() {
	return false;
}

$ValueRange* JulianFields$Field::range() {
	return this->range$;
}

bool JulianFields$Field::isSupportedBy($TemporalAccessor* temporal) {
	$init($ChronoField);
	return $nc(temporal)->isSupported($ChronoField::EPOCH_DAY);
}

$ValueRange* JulianFields$Field::rangeRefinedBy($TemporalAccessor* temporal) {
	if (isSupportedBy(temporal) == false) {
		$throwNew($DateTimeException, $$str({"Unsupported field: "_s, this}));
	}
	return range();
}

int64_t JulianFields$Field::getFrom($TemporalAccessor* temporal) {
	$init($ChronoField);
	return $nc(temporal)->getLong($ChronoField::EPOCH_DAY) + this->offset;
}

$Temporal* JulianFields$Field::adjustInto($Temporal* temporal, int64_t newValue) {
	$useLocalCurrentObjectStackCache();
	if ($nc($(range()))->isValidValue(newValue) == false) {
		$throwNew($DateTimeException, $$str({"Invalid value: "_s, this->name$, " "_s, $$str(newValue)}));
	}
	$init($ChronoField);
	return $nc(temporal)->with($ChronoField::EPOCH_DAY, $Math::subtractExact(newValue, this->offset));
}

$TemporalAccessor* JulianFields$Field::resolve($Map* fieldValues, $TemporalAccessor* partialTemporal, $ResolverStyle* resolverStyle) {
	$useLocalCurrentObjectStackCache();
	int64_t value = $nc(($cast($Long, $($nc(fieldValues)->remove(this)))))->longValue();
	$var($Chronology, chrono, $Chronology::from(partialTemporal));
	$init($ResolverStyle);
	if (resolverStyle == $ResolverStyle::LENIENT) {
		return $nc(chrono)->dateEpochDay($Math::subtractExact(value, this->offset));
	}
	$nc($(range()))->checkValidValue(value, this);
	return $nc(chrono)->dateEpochDay(value - this->offset);
}

$String* JulianFields$Field::toString() {
	return this->name$;
}

void clinit$JulianFields$Field($Class* class$) {
	$init($ChronoUnit);
	$assignStatic(JulianFields$Field::JULIAN_DAY, $new(JulianFields$Field, "JULIAN_DAY"_s, 0, "JulianDay"_s, $ChronoUnit::DAYS, $ChronoUnit::FOREVER, 2440588));
	$assignStatic(JulianFields$Field::MODIFIED_JULIAN_DAY, $new(JulianFields$Field, "MODIFIED_JULIAN_DAY"_s, 1, "ModifiedJulianDay"_s, $ChronoUnit::DAYS, $ChronoUnit::FOREVER, 40587));
	$assignStatic(JulianFields$Field::RATA_DIE, $new(JulianFields$Field, "RATA_DIE"_s, 2, "RataDie"_s, $ChronoUnit::DAYS, $ChronoUnit::FOREVER, 719163));
	$assignStatic(JulianFields$Field::$VALUES, JulianFields$Field::$values());
}

JulianFields$Field::JulianFields$Field() {
}

$Class* JulianFields$Field::load$($String* name, bool initialize) {
	$loadClass(JulianFields$Field, name, initialize, &_JulianFields$Field_ClassInfo_, clinit$JulianFields$Field, allocate$JulianFields$Field);
	return class$;
}

$Class* JulianFields$Field::class$ = nullptr;

		} // temporal
	} // time
} // java