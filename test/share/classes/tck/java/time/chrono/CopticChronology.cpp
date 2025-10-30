#include <tck/java/time/chrono/CopticChronology.h>

#include <java/lang/ClassCastException.h>
#include <java/lang/Math.h>
#include <java/time/chrono/AbstractChronology.h>
#include <java/time/chrono/ChronoLocalDate.h>
#include <java/time/chrono/Era.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/ValueRange.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <tck/java/time/chrono/CopticChronology$1.h>
#include <tck/java/time/chrono/CopticDate.h>
#include <tck/java/time/chrono/CopticEra.h>
#include <jcpp.h>

#undef AM
#undef DOM_RANGE
#undef DOM_RANGE_LEAP
#undef DOM_RANGE_NONLEAP
#undef EPOCH_DAY
#undef INSTANCE
#undef MOY_RANGE

using $CopticEraArray = $Array<::tck::java::time::chrono::CopticEra>;
using $Serializable = ::java::io::Serializable;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractChronology = ::java::time::chrono::AbstractChronology;
using $ChronoLocalDate = ::java::time::chrono::ChronoLocalDate;
using $Era = ::java::time::chrono::Era;
using $ChronoField = ::java::time::temporal::ChronoField;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $TemporalField = ::java::time::temporal::TemporalField;
using $ValueRange = ::java::time::temporal::ValueRange;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $CopticChronology$1 = ::tck::java::time::chrono::CopticChronology$1;
using $CopticDate = ::tck::java::time::chrono::CopticDate;
using $CopticEra = ::tck::java::time::chrono::CopticEra;

namespace tck {
	namespace java {
		namespace time {
			namespace chrono {

$FieldInfo _CopticChronology_FieldInfo_[] = {
	{"INSTANCE", "Ltck/java/time/chrono/CopticChronology;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CopticChronology, INSTANCE)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CopticChronology, serialVersionUID)},
	{"MOY_RANGE", "Ljava/time/temporal/ValueRange;", nullptr, $STATIC | $FINAL, $staticField(CopticChronology, MOY_RANGE)},
	{"DOM_RANGE", "Ljava/time/temporal/ValueRange;", nullptr, $STATIC | $FINAL, $staticField(CopticChronology, DOM_RANGE)},
	{"DOM_RANGE_NONLEAP", "Ljava/time/temporal/ValueRange;", nullptr, $STATIC | $FINAL, $staticField(CopticChronology, DOM_RANGE_NONLEAP)},
	{"DOM_RANGE_LEAP", "Ljava/time/temporal/ValueRange;", nullptr, $STATIC | $FINAL, $staticField(CopticChronology, DOM_RANGE_LEAP)},
	{}
};

$MethodInfo _CopticChronology_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CopticChronology::*)()>(&CopticChronology::init$))},
	{"date", "(III)Ltck/java/time/chrono/CopticDate;", nullptr, $PUBLIC},
	{"date", "(Ljava/time/temporal/TemporalAccessor;)Ltck/java/time/chrono/CopticDate;", nullptr, $PUBLIC},
	{"dateEpochDay", "(J)Ltck/java/time/chrono/CopticDate;", nullptr, $PUBLIC},
	{"dateYearDay", "(II)Ltck/java/time/chrono/CopticDate;", nullptr, $PUBLIC},
	{"eraOf", "(I)Ljava/time/chrono/Era;", nullptr, $PUBLIC},
	{"eras", "()Ljava/util/List;", "()Ljava/util/List<Ljava/time/chrono/Era;>;", $PUBLIC},
	{"getCalendarType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isLeapYear", "(J)Z", nullptr, $PUBLIC},
	{"prolepticYear", "(Ljava/time/chrono/Era;I)I", nullptr, $PUBLIC},
	{"range", "(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;", nullptr, $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(CopticChronology::*)()>(&CopticChronology::readResolve))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CopticChronology_InnerClassesInfo_[] = {
	{"tck.java.time.chrono.CopticChronology$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _CopticChronology_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"tck.java.time.chrono.CopticChronology",
	"java.time.chrono.AbstractChronology",
	"java.io.Serializable",
	_CopticChronology_FieldInfo_,
	_CopticChronology_MethodInfo_,
	nullptr,
	nullptr,
	_CopticChronology_InnerClassesInfo_,
	nullptr,
	nullptr,
	"tck.java.time.chrono.CopticChronology$1"
};

$Object* allocate$CopticChronology($Class* clazz) {
	return $of($alloc(CopticChronology));
}

bool CopticChronology::equals(Object$* arg0) {
	 return this->$AbstractChronology::equals(arg0);
}

int32_t CopticChronology::hashCode() {
	 return this->$AbstractChronology::hashCode();
}

$String* CopticChronology::toString() {
	 return this->$AbstractChronology::toString();
}

$Object* CopticChronology::clone() {
	 return this->$AbstractChronology::clone();
}

void CopticChronology::finalize() {
	this->$AbstractChronology::finalize();
}

CopticChronology* CopticChronology::INSTANCE = nullptr;
$ValueRange* CopticChronology::MOY_RANGE = nullptr;
$ValueRange* CopticChronology::DOM_RANGE = nullptr;
$ValueRange* CopticChronology::DOM_RANGE_NONLEAP = nullptr;
$ValueRange* CopticChronology::DOM_RANGE_LEAP = nullptr;

void CopticChronology::init$() {
	$AbstractChronology::init$();
}

$Object* CopticChronology::readResolve() {
	return $of(CopticChronology::INSTANCE);
}

$String* CopticChronology::getId() {
	return "Coptic"_s;
}

$String* CopticChronology::getCalendarType() {
	return "coptic"_s;
}

$ChronoLocalDate* CopticChronology::date(int32_t prolepticYear, int32_t month, int32_t dayOfMonth) {
	return $new($CopticDate, prolepticYear, month, dayOfMonth);
}

$ChronoLocalDate* CopticChronology::dateYearDay(int32_t prolepticYear, int32_t dayOfYear) {
	return $new($CopticDate, prolepticYear, (dayOfYear - 1) / 30 + 1, (dayOfYear - 1) % 30 + 1);
}

$ChronoLocalDate* CopticChronology::dateEpochDay(int64_t epochDay) {
	return $CopticDate::ofEpochDay(epochDay);
}

$ChronoLocalDate* CopticChronology::date($TemporalAccessor* dateTime) {
	if ($instanceOf($CopticDate, dateTime)) {
		return $cast($CopticDate, dateTime);
	}
	$init($ChronoField);
	return $CopticDate::ofEpochDay($nc(dateTime)->getLong($ChronoField::EPOCH_DAY));
}

bool CopticChronology::isLeapYear(int64_t prolepticYear) {
	return $Math::floorMod(prolepticYear, 4) == 3;
}

int32_t CopticChronology::prolepticYear($Era* era, int32_t yearOfEra) {
	if ($instanceOf($CopticEra, era) == false) {
		$throwNew($ClassCastException, "Era must be CopticEra"_s);
	}
	$init($CopticEra);
	return ($equals(era, $CopticEra::AM) ? yearOfEra : 1 - yearOfEra);
}

$Era* CopticChronology::eraOf(int32_t eraValue) {
	return $CopticEra::of(eraValue);
}

$List* CopticChronology::eras() {
	return $Arrays::asList($($CopticEra::values()));
}

$ValueRange* CopticChronology::range($ChronoField* field) {
	$init($CopticChronology$1);
	switch ($nc($CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField)->get($nc((field))->ordinal())) {
	case 1:
		{
			return $ValueRange::of(1, 5, 30);
		}
	case 2:
		{
			return $ValueRange::of(1, 1, 5);
		}
	case 3:
		{
			return $ValueRange::of(1, 13);
		}
	case 4:
		{
			return $ValueRange::of(-1000, 1000);
		}
	case 5:
		{
			return $ValueRange::of(1, 999, 1000);
		}
	case 6:
		{
			return $ValueRange::of(-1000, 1000);
		}
	}
	return field->range();
}

void clinit$CopticChronology($Class* class$) {
	$assignStatic(CopticChronology::INSTANCE, $new(CopticChronology));
	$assignStatic(CopticChronology::MOY_RANGE, $ValueRange::of(1, 13));
	$assignStatic(CopticChronology::DOM_RANGE, $ValueRange::of(1, 5, 30));
	$assignStatic(CopticChronology::DOM_RANGE_NONLEAP, $ValueRange::of(1, 5));
	$assignStatic(CopticChronology::DOM_RANGE_LEAP, $ValueRange::of(1, 6));
}

CopticChronology::CopticChronology() {
}

$Class* CopticChronology::load$($String* name, bool initialize) {
	$loadClass(CopticChronology, name, initialize, &_CopticChronology_ClassInfo_, clinit$CopticChronology, allocate$CopticChronology);
	return class$;
}

$Class* CopticChronology::class$ = nullptr;

			} // chrono
		} // time
	} // java
} // tck