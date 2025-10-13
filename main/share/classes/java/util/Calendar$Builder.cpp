#include <java/util/Calendar$Builder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/JapaneseImperialCalendar.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/TimeZone.h>
#include <sun/util/BuddhistCalendar.h>
#include <jcpp.h>

#undef MIN_VALUE
#undef NFIELDS
#undef WEEK_YEAR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $JapaneseImperialCalendar = ::java::util::JapaneseImperialCalendar;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $TimeZone = ::java::util::TimeZone;
using $BuddhistCalendar = ::sun::util::BuddhistCalendar;

namespace java {
	namespace util {

$FieldInfo _Calendar$Builder_FieldInfo_[] = {
	{"NFIELDS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Calendar$Builder, NFIELDS)},
	{"WEEK_YEAR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Calendar$Builder, WEEK_YEAR)},
	{"instant", "J", nullptr, $PRIVATE, $field(Calendar$Builder, instant)},
	{"fields", "[I", nullptr, $PRIVATE, $field(Calendar$Builder, fields)},
	{"nextStamp", "I", nullptr, $PRIVATE, $field(Calendar$Builder, nextStamp)},
	{"maxFieldIndex", "I", nullptr, $PRIVATE, $field(Calendar$Builder, maxFieldIndex)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Calendar$Builder, type)},
	{"zone", "Ljava/util/TimeZone;", nullptr, $PRIVATE, $field(Calendar$Builder, zone)},
	{"lenient", "Z", nullptr, $PRIVATE, $field(Calendar$Builder, lenient)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(Calendar$Builder, locale)},
	{"firstDayOfWeek", "I", nullptr, $PRIVATE, $field(Calendar$Builder, firstDayOfWeek)},
	{"minimalDaysInFirstWeek", "I", nullptr, $PRIVATE, $field(Calendar$Builder, minimalDaysInFirstWeek)},
	{}
};

$MethodInfo _Calendar$Builder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Calendar$Builder::*)()>(&Calendar$Builder::init$))},
	{"allocateFields", "()V", nullptr, $PRIVATE, $method(static_cast<void(Calendar$Builder::*)()>(&Calendar$Builder::allocateFields))},
	{"build", "()Ljava/util/Calendar;", nullptr, $PUBLIC},
	{"internalSet", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(Calendar$Builder::*)(int32_t,int32_t)>(&Calendar$Builder::internalSet))},
	{"isInstantSet", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Calendar$Builder::*)()>(&Calendar$Builder::isInstantSet))},
	{"isSet", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(Calendar$Builder::*)(int32_t)>(&Calendar$Builder::isSet))},
	{"isValidWeekParameter", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(Calendar$Builder::*)(int32_t)>(&Calendar$Builder::isValidWeekParameter))},
	{"set", "(II)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{"setCalendarType", "(Ljava/lang/String;)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{"setDate", "(III)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{"setFields", "([I)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC | $TRANSIENT},
	{"setInstant", "(J)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{"setInstant", "(Ljava/util/Date;)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{"setLenient", "(Z)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{"setLocale", "(Ljava/util/Locale;)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{"setTimeOfDay", "(III)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{"setTimeOfDay", "(IIII)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{"setTimeZone", "(Ljava/util/TimeZone;)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{"setWeekDate", "(III)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{"setWeekDefinition", "(II)Ljava/util/Calendar$Builder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Calendar$Builder_InnerClassesInfo_[] = {
	{"java.util.Calendar$Builder", "java.util.Calendar", "Builder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Calendar$Builder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.Calendar$Builder",
	"java.lang.Object",
	nullptr,
	_Calendar$Builder_FieldInfo_,
	_Calendar$Builder_MethodInfo_,
	nullptr,
	nullptr,
	_Calendar$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Calendar"
};

$Object* allocate$Calendar$Builder($Class* clazz) {
	return $of($alloc(Calendar$Builder));
}

void Calendar$Builder::init$() {
	this->lenient = true;
}

Calendar$Builder* Calendar$Builder::setInstant(int64_t instant) {
	if (this->fields != nullptr) {
		$throwNew($IllegalStateException);
	}
	this->instant = instant;
	this->nextStamp = 1;
	return this;
}

Calendar$Builder* Calendar$Builder::setInstant($Date* instant) {
	return setInstant($nc(instant)->getTime());
}

Calendar$Builder* Calendar$Builder::set(int32_t field, int32_t value) {
	if (field < 0 || field >= 17) {
		$throwNew($IllegalArgumentException, "field is invalid"_s);
	}
	if (isInstantSet()) {
		$throwNew($IllegalStateException, "instant has been set"_s);
	}
	allocateFields();
	internalSet(field, value);
	return this;
}

Calendar$Builder* Calendar$Builder::setFields($ints* fieldValuePairs) {
	int32_t len = $nc(fieldValuePairs)->length;
	if ((len % 2) != 0) {
		$throwNew($IllegalArgumentException);
	}
	if (isInstantSet()) {
		$throwNew($IllegalStateException, "instant has been set"_s);
	}
	if ((this->nextStamp + len / 2) < 0) {
		$throwNew($IllegalStateException, "stamp counter overflow"_s);
	}
	allocateFields();
	for (int32_t i = 0; i < len;) {
		int32_t field = fieldValuePairs->get(i++);
		if (field < 0 || field >= 17) {
			$throwNew($IllegalArgumentException, "field is invalid"_s);
		}
		internalSet(field, fieldValuePairs->get(i++));
	}
	return this;
}

Calendar$Builder* Calendar$Builder::setDate(int32_t year, int32_t month, int32_t dayOfMonth) {
	return setFields($$new($ints, {
		1,
		year,
		2,
		month,
		5,
		dayOfMonth
	}));
}

Calendar$Builder* Calendar$Builder::setTimeOfDay(int32_t hourOfDay, int32_t minute, int32_t second) {
	return setTimeOfDay(hourOfDay, minute, second, 0);
}

Calendar$Builder* Calendar$Builder::setTimeOfDay(int32_t hourOfDay, int32_t minute, int32_t second, int32_t millis) {
	return setFields($$new($ints, {
		11,
		hourOfDay,
		12,
		minute,
		13,
		second,
		14,
		millis
	}));
}

Calendar$Builder* Calendar$Builder::setWeekDate(int32_t weekYear, int32_t weekOfYear, int32_t dayOfWeek) {
	allocateFields();
	internalSet(Calendar$Builder::WEEK_YEAR, weekYear);
	internalSet(3, weekOfYear);
	internalSet(7, dayOfWeek);
	return this;
}

Calendar$Builder* Calendar$Builder::setTimeZone($TimeZone* zone) {
	if (zone == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, zone, zone);
	return this;
}

Calendar$Builder* Calendar$Builder::setLenient(bool lenient) {
	this->lenient = lenient;
	return this;
}

Calendar$Builder* Calendar$Builder::setCalendarType($String* type$renamed) {
	$var($String, type, type$renamed);
	if ($nc(type)->equals("gregorian"_s)) {
		$assign(type, "gregory"_s);
	}
	bool var$0 = !$nc($($Calendar::getAvailableCalendarTypes()))->contains(type);
	if (var$0 && !$nc(type)->equals("iso8601"_s)) {
		$throwNew($IllegalArgumentException, $$str({"unknown calendar type: "_s, type}));
	}
	if (this->type == nullptr) {
		$set(this, type, type);
	} else if (!$nc(this->type)->equals(type)) {
		$throwNew($IllegalStateException, "calendar type override"_s);
	}
	return this;
}

Calendar$Builder* Calendar$Builder::setLocale($Locale* locale) {
	if (locale == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, locale, locale);
	return this;
}

Calendar$Builder* Calendar$Builder::setWeekDefinition(int32_t firstDayOfWeek, int32_t minimalDaysInFirstWeek) {
	bool var$0 = !isValidWeekParameter(firstDayOfWeek);
	if (var$0 || !isValidWeekParameter(minimalDaysInFirstWeek)) {
		$throwNew($IllegalArgumentException);
	}
	this->firstDayOfWeek = firstDayOfWeek;
	this->minimalDaysInFirstWeek = minimalDaysInFirstWeek;
	return this;
}

$Calendar* Calendar$Builder::build() {
	if (this->locale == nullptr) {
		$set(this, locale, $Locale::getDefault());
	}
	if (this->zone == nullptr) {
		$set(this, zone, $Calendar::defaultTimeZone(this->locale));
	}
	if (this->type == nullptr) {
		$set(this, type, $nc(this->locale)->getUnicodeLocaleType("ca"_s));
	}
	if (this->type == nullptr) {
		bool var$0 = $nc(this->locale)->getCountry() == "TH"_s;
		if (var$0 && $nc(this->locale)->getLanguage() == "th"_s) {
			$set(this, type, "buddhist"_s);
		} else {
			$set(this, type, "gregory"_s);
		}
	}
	$var($String, s61336$, this->type);
	int32_t tmp61336$ = -1;
	switch ($nc(s61336$)->hashCode()) {
	case 0x10EA1509:
		{
			if (s61336$->equals("gregory"_s)) {
				tmp61336$ = 0;
			}
			break;
		}
	case 0x7CE21384:
		{
			if (s61336$->equals("iso8601"_s)) {
				tmp61336$ = 1;
			}
			break;
		}
	case (int32_t)0xA1C2EDB5:
		{
			if (s61336$->equals("buddhist"_s)) {
				tmp61336$ = 2;
			}
			break;
		}
	case (int32_t)0xD3223FB1:
		{
			if (s61336$->equals("japanese"_s)) {
				tmp61336$ = 3;
			}
			break;
		}
	}

	$var($Calendar, var$1, nullptr)
	switch (tmp61336$) {
	case 0:
		{
			$assign(var$1, $new($GregorianCalendar, this->zone, this->locale, true));
			break;
		}
	case 1:
		{
			{
				$var($GregorianCalendar, gcal, $new($GregorianCalendar, this->zone, this->locale, true));
				gcal->setGregorianChange($$new($Date, $Long::MIN_VALUE));
				setWeekDefinition(2, 4);
				$assign(var$1, gcal);
				break;
			}
		}
	case 2:
		{
			{
				$var($BuddhistCalendar, buddhistCalendar, $new($BuddhistCalendar, this->zone, this->locale));
				buddhistCalendar->clear();
				$assign(var$1, buddhistCalendar);
				break;
			}
		}
	case 3:
		{
			$assign(var$1, $new($JapaneseImperialCalendar, this->zone, this->locale, true));
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"unknown calendar type: "_s, this->type}));
		}
	}
	$var($Calendar, cal, var$1);
	$nc(cal)->setLenient(this->lenient);
	if (this->firstDayOfWeek != 0) {
		cal->setFirstDayOfWeek(this->firstDayOfWeek);
		cal->setMinimalDaysInFirstWeek(this->minimalDaysInFirstWeek);
	}
	if (isInstantSet()) {
		cal->setTimeInMillis(this->instant);
		cal->complete();
		return cal;
	}
	if (this->fields != nullptr) {
		bool weekDate = isSet(Calendar$Builder::WEEK_YEAR) && $nc(this->fields)->get(Calendar$Builder::WEEK_YEAR) > $nc(this->fields)->get(1);
		if (weekDate && !cal->isWeekDateSupported()) {
			$throwNew($IllegalArgumentException, $$str({"week date is unsupported by "_s, this->type}));
		}
		for (int32_t stamp = 2; stamp < this->nextStamp; ++stamp) {
			for (int32_t index = 0; index <= this->maxFieldIndex; ++index) {
				if ($nc(this->fields)->get(index) == stamp) {
					cal->set(index, $nc(this->fields)->get(Calendar$Builder::NFIELDS + index));
					break;
				}
			}
		}
		if (weekDate) {
			int32_t weekOfYear = isSet(3) ? $nc(this->fields)->get(Calendar$Builder::NFIELDS + 3) : 1;
			int32_t dayOfWeek = isSet(7) ? $nc(this->fields)->get(Calendar$Builder::NFIELDS + 7) : cal->getFirstDayOfWeek();
			cal->setWeekDate($nc(this->fields)->get(Calendar$Builder::NFIELDS + Calendar$Builder::WEEK_YEAR), weekOfYear, dayOfWeek);
		}
		cal->complete();
	}
	return cal;
}

void Calendar$Builder::allocateFields() {
	if (this->fields == nullptr) {
		$set(this, fields, $new($ints, Calendar$Builder::NFIELDS * 2));
		this->nextStamp = 2;
		this->maxFieldIndex = -1;
	}
}

void Calendar$Builder::internalSet(int32_t field, int32_t value) {
	$nc(this->fields)->set(field, this->nextStamp++);
	if (this->nextStamp < 0) {
		$throwNew($IllegalStateException, "stamp counter overflow"_s);
	}
	$nc(this->fields)->set(Calendar$Builder::NFIELDS + field, value);
	if (field > this->maxFieldIndex && field < Calendar$Builder::WEEK_YEAR) {
		this->maxFieldIndex = field;
	}
}

bool Calendar$Builder::isInstantSet() {
	return this->nextStamp == 1;
}

bool Calendar$Builder::isSet(int32_t index) {
	return this->fields != nullptr && $nc(this->fields)->get(index) > 0;
}

bool Calendar$Builder::isValidWeekParameter(int32_t value) {
	return value > 0 && value <= 7;
}

Calendar$Builder::Calendar$Builder() {
}

$Class* Calendar$Builder::load$($String* name, bool initialize) {
	$loadClass(Calendar$Builder, name, initialize, &_Calendar$Builder_ClassInfo_, allocate$Calendar$Builder);
	return class$;
}

$Class* Calendar$Builder::class$ = nullptr;

	} // util
} // java