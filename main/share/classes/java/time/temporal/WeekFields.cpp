#include <java/time/temporal/WeekFields.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DayOfWeek.h>
#include <java/time/temporal/IsoFields.h>
#include <java/time/temporal/TemporalField.h>
#include <java/time/temporal/TemporalUnit.h>
#include <java/time/temporal/WeekFields$ComputedDayOfField.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <sun/util/locale/provider/CalendarDataUtility.h>
#include <jcpp.h>

#undef CACHE
#undef ISO
#undef MONDAY
#undef SUNDAY
#undef SUNDAY_START
#undef WEEK_BASED_YEARS

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DayOfWeek = ::java::time::DayOfWeek;
using $IsoFields = ::java::time::temporal::IsoFields;
using $TemporalField = ::java::time::temporal::TemporalField;
using $TemporalUnit = ::java::time::temporal::TemporalUnit;
using $WeekFields$ComputedDayOfField = ::java::time::temporal::WeekFields$ComputedDayOfField;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $CalendarDataUtility = ::sun::util::locale::provider::CalendarDataUtility;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _WeekFields_FieldInfo_[] = {
	{"CACHE", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/String;Ljava/time/temporal/WeekFields;>;", $PRIVATE | $STATIC | $FINAL, $staticField(WeekFields, CACHE)},
	{"ISO", "Ljava/time/temporal/WeekFields;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WeekFields, ISO)},
	{"SUNDAY_START", "Ljava/time/temporal/WeekFields;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WeekFields, SUNDAY_START)},
	{"WEEK_BASED_YEARS", "Ljava/time/temporal/TemporalUnit;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WeekFields, WEEK_BASED_YEARS)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WeekFields, serialVersionUID)},
	{"firstDayOfWeek", "Ljava/time/DayOfWeek;", nullptr, $PRIVATE | $FINAL, $field(WeekFields, firstDayOfWeek)},
	{"minimalDays", "I", nullptr, $PRIVATE | $FINAL, $field(WeekFields, minimalDays)},
	{"dayOfWeek", "Ljava/time/temporal/TemporalField;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(WeekFields, dayOfWeek$)},
	{"weekOfMonth", "Ljava/time/temporal/TemporalField;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(WeekFields, weekOfMonth$)},
	{"weekOfYear", "Ljava/time/temporal/TemporalField;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(WeekFields, weekOfYear$)},
	{"weekOfWeekBasedYear", "Ljava/time/temporal/TemporalField;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(WeekFields, weekOfWeekBasedYear$)},
	{"weekBasedYear", "Ljava/time/temporal/TemporalField;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(WeekFields, weekBasedYear$)},
	{}
};

$MethodInfo _WeekFields_MethodInfo_[] = {
	{"<init>", "(Ljava/time/DayOfWeek;I)V", nullptr, $PRIVATE, $method(static_cast<void(WeekFields::*)($DayOfWeek*,int32_t)>(&WeekFields::init$))},
	{"dayOfWeek", "()Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC, $method(static_cast<$TemporalField*(WeekFields::*)()>(&WeekFields::dayOfWeek))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getFirstDayOfWeek", "()Ljava/time/DayOfWeek;", nullptr, $PUBLIC, $method(static_cast<$DayOfWeek*(WeekFields::*)()>(&WeekFields::getFirstDayOfWeek))},
	{"getMinimalDaysInFirstWeek", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(WeekFields::*)()>(&WeekFields::getMinimalDaysInFirstWeek))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"of", "(Ljava/util/Locale;)Ljava/time/temporal/WeekFields;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WeekFields*(*)($Locale*)>(&WeekFields::of))},
	{"of", "(Ljava/time/DayOfWeek;I)Ljava/time/temporal/WeekFields;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WeekFields*(*)($DayOfWeek*,int32_t)>(&WeekFields::of))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(WeekFields::*)($ObjectInputStream*)>(&WeekFields::readObject)), "java.io.IOException,java.lang.ClassNotFoundException,java.io.InvalidObjectException"},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(WeekFields::*)()>(&WeekFields::readResolve)), "java.io.InvalidObjectException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"weekBasedYear", "()Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC, $method(static_cast<$TemporalField*(WeekFields::*)()>(&WeekFields::weekBasedYear))},
	{"weekOfMonth", "()Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC, $method(static_cast<$TemporalField*(WeekFields::*)()>(&WeekFields::weekOfMonth))},
	{"weekOfWeekBasedYear", "()Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC, $method(static_cast<$TemporalField*(WeekFields::*)()>(&WeekFields::weekOfWeekBasedYear))},
	{"weekOfYear", "()Ljava/time/temporal/TemporalField;", nullptr, $PUBLIC, $method(static_cast<$TemporalField*(WeekFields::*)()>(&WeekFields::weekOfYear))},
	{}
};

$InnerClassInfo _WeekFields_InnerClassesInfo_[] = {
	{"java.time.temporal.WeekFields$ComputedDayOfField", "java.time.temporal.WeekFields", "ComputedDayOfField", $STATIC},
	{}
};

$ClassInfo _WeekFields_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.time.temporal.WeekFields",
	"java.lang.Object",
	"java.io.Serializable",
	_WeekFields_FieldInfo_,
	_WeekFields_MethodInfo_,
	nullptr,
	nullptr,
	_WeekFields_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.time.temporal.WeekFields$ComputedDayOfField"
};

$Object* allocate$WeekFields($Class* clazz) {
	return $of($alloc(WeekFields));
}


$ConcurrentMap* WeekFields::CACHE = nullptr;

WeekFields* WeekFields::ISO = nullptr;

WeekFields* WeekFields::SUNDAY_START = nullptr;

$TemporalUnit* WeekFields::WEEK_BASED_YEARS = nullptr;

WeekFields* WeekFields::of($Locale* locale) {
	$init(WeekFields);
	$Objects::requireNonNull($of(locale), "locale"_s);
	int32_t calDow = $CalendarDataUtility::retrieveFirstDayOfWeek(locale);
	$init($DayOfWeek);
	$DayOfWeek* dow = $DayOfWeek::SUNDAY->plus(calDow - 1);
	int32_t minDays = $CalendarDataUtility::retrieveMinimalDaysInFirstWeek(locale);
	return WeekFields::of(dow, minDays);
}

WeekFields* WeekFields::of($DayOfWeek* firstDayOfWeek, int32_t minimalDaysInFirstWeek) {
	$init(WeekFields);
	$useLocalCurrentObjectStackCache();
	$var($String, key, $str({$($nc(firstDayOfWeek)->toString()), $$str(minimalDaysInFirstWeek)}));
	$var(WeekFields, rules, $cast(WeekFields, $nc(WeekFields::CACHE)->get(key)));
	if (rules == nullptr) {
		$assign(rules, $new(WeekFields, firstDayOfWeek, minimalDaysInFirstWeek));
		$nc(WeekFields::CACHE)->putIfAbsent(key, rules);
		$assign(rules, $cast(WeekFields, $nc(WeekFields::CACHE)->get(key)));
	}
	return rules;
}

void WeekFields::init$($DayOfWeek* firstDayOfWeek, int32_t minimalDaysInFirstWeek) {
	$set(this, dayOfWeek$, $WeekFields$ComputedDayOfField::ofDayOfWeekField(this));
	$set(this, weekOfMonth$, $WeekFields$ComputedDayOfField::ofWeekOfMonthField(this));
	$set(this, weekOfYear$, $WeekFields$ComputedDayOfField::ofWeekOfYearField(this));
	$set(this, weekOfWeekBasedYear$, $WeekFields$ComputedDayOfField::ofWeekOfWeekBasedYearField(this));
	$set(this, weekBasedYear$, $WeekFields$ComputedDayOfField::ofWeekBasedYearField(this));
	$Objects::requireNonNull($of(firstDayOfWeek), "firstDayOfWeek"_s);
	if (minimalDaysInFirstWeek < 1 || minimalDaysInFirstWeek > 7) {
		$throwNew($IllegalArgumentException, "Minimal number of days is invalid"_s);
	}
	$set(this, firstDayOfWeek, firstDayOfWeek);
	this->minimalDays = minimalDaysInFirstWeek;
}

void WeekFields::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->firstDayOfWeek == nullptr) {
		$throwNew($InvalidObjectException, "firstDayOfWeek is null"_s);
	}
	if (this->minimalDays < 1 || this->minimalDays > 7) {
		$throwNew($InvalidObjectException, "Minimal number of days is invalid"_s);
	}
}

$Object* WeekFields::readResolve() {
	$useLocalCurrentObjectStackCache();
	try {
		return $of(WeekFields::of(this->firstDayOfWeek, this->minimalDays));
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, iae, $catch());
		$throwNew($InvalidObjectException, $$str({"Invalid serialized WeekFields: "_s, $(iae->getMessage())}));
	}
	$shouldNotReachHere();
}

$DayOfWeek* WeekFields::getFirstDayOfWeek() {
	return this->firstDayOfWeek;
}

int32_t WeekFields::getMinimalDaysInFirstWeek() {
	return this->minimalDays;
}

$TemporalField* WeekFields::dayOfWeek() {
	return this->dayOfWeek$;
}

$TemporalField* WeekFields::weekOfMonth() {
	return this->weekOfMonth$;
}

$TemporalField* WeekFields::weekOfYear() {
	return this->weekOfYear$;
}

$TemporalField* WeekFields::weekOfWeekBasedYear() {
	return this->weekOfWeekBasedYear$;
}

$TemporalField* WeekFields::weekBasedYear() {
	return this->weekBasedYear$;
}

bool WeekFields::equals(Object$* object) {
	if ($equals(this, object)) {
		return true;
	}
	if ($instanceOf(WeekFields, object)) {
		int32_t var$0 = hashCode();
		return var$0 == $nc($of(object))->hashCode();
	}
	return false;
}

int32_t WeekFields::hashCode() {
	return this->firstDayOfWeek->ordinal() * 7 + this->minimalDays;
}

$String* WeekFields::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"WeekFields["_s, this->firstDayOfWeek, $$str(u','), $$str(this->minimalDays), $$str(u']')});
}

void clinit$WeekFields($Class* class$) {
	$assignStatic(WeekFields::CACHE, $new($ConcurrentHashMap, 4, 0.75f, 2));
	$init($DayOfWeek);
	$assignStatic(WeekFields::ISO, WeekFields::of($DayOfWeek::MONDAY, 4));
	$assignStatic(WeekFields::SUNDAY_START, WeekFields::of($DayOfWeek::SUNDAY, 1));
	$init($IsoFields);
	$assignStatic(WeekFields::WEEK_BASED_YEARS, $IsoFields::WEEK_BASED_YEARS);
}

WeekFields::WeekFields() {
}

$Class* WeekFields::load$($String* name, bool initialize) {
	$loadClass(WeekFields, name, initialize, &_WeekFields_ClassInfo_, clinit$WeekFields, allocate$WeekFields);
	return class$;
}

$Class* WeekFields::class$ = nullptr;

		} // temporal
	} // time
} // java