#include <sun/util/calendar/BaseCalendar$Date.h>

#include <java/util/TimeZone.h>
#include <sun/util/calendar/BaseCalendar.h>
#include <sun/util/calendar/CalendarDate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZone = ::java::util::TimeZone;
using $CalendarDate = ::sun::util::calendar::CalendarDate;

namespace sun {
	namespace util {
		namespace calendar {

$FieldInfo _BaseCalendar$Date_FieldInfo_[] = {
	{"cachedYear", "I", nullptr, 0, $field(BaseCalendar$Date, cachedYear)},
	{"cachedFixedDateJan1", "J", nullptr, 0, $field(BaseCalendar$Date, cachedFixedDateJan1)},
	{"cachedFixedDateNextJan1", "J", nullptr, 0, $field(BaseCalendar$Date, cachedFixedDateNextJan1)},
	{}
};

$MethodInfo _BaseCalendar$Date_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(BaseCalendar$Date, init$, void)},
	{"<init>", "(Ljava/util/TimeZone;)V", nullptr, $PROTECTED, $method(BaseCalendar$Date, init$, void, $TimeZone*)},
	{"getCachedJan1", "()J", nullptr, $PROTECTED, $virtualMethod(BaseCalendar$Date, getCachedJan1, int64_t)},
	{"getCachedYear", "()I", nullptr, $PROTECTED, $virtualMethod(BaseCalendar$Date, getCachedYear, int32_t)},
	{"getNormalizedYear", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BaseCalendar$Date, getNormalizedYear, int32_t)},
	{"hit", "(I)Z", nullptr, $PROTECTED | $FINAL, $method(BaseCalendar$Date, hit, bool, int32_t)},
	{"hit", "(J)Z", nullptr, $PROTECTED | $FINAL, $method(BaseCalendar$Date, hit, bool, int64_t)},
	{"setCache", "(IJI)V", nullptr, $PROTECTED, $virtualMethod(BaseCalendar$Date, setCache, void, int32_t, int64_t, int32_t)},
	{"setNormalizedDate", "(III)Lsun/util/calendar/BaseCalendar$Date;", nullptr, $PUBLIC, $virtualMethod(BaseCalendar$Date, setNormalizedDate, BaseCalendar$Date*, int32_t, int32_t, int32_t)},
	{"setNormalizedYear", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BaseCalendar$Date, setNormalizedYear, void, int32_t)},
	{}
};

$InnerClassInfo _BaseCalendar$Date_InnerClassesInfo_[] = {
	{"sun.util.calendar.BaseCalendar$Date", "sun.util.calendar.BaseCalendar", "Date", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _BaseCalendar$Date_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.util.calendar.BaseCalendar$Date",
	"sun.util.calendar.CalendarDate",
	nullptr,
	_BaseCalendar$Date_FieldInfo_,
	_BaseCalendar$Date_MethodInfo_,
	nullptr,
	nullptr,
	_BaseCalendar$Date_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.calendar.BaseCalendar"
};

$Object* allocate$BaseCalendar$Date($Class* clazz) {
	return $of($alloc(BaseCalendar$Date));
}

void BaseCalendar$Date::init$() {
	$CalendarDate::init$();
	this->cachedYear = 2004;
	this->cachedFixedDateJan1 = 731581;
	this->cachedFixedDateNextJan1 = this->cachedFixedDateJan1 + 366;
}

void BaseCalendar$Date::init$($TimeZone* zone) {
	$CalendarDate::init$(zone);
	this->cachedYear = 2004;
	this->cachedFixedDateJan1 = 731581;
	this->cachedFixedDateNextJan1 = this->cachedFixedDateJan1 + 366;
}

BaseCalendar$Date* BaseCalendar$Date::setNormalizedDate(int32_t normalizedYear, int32_t month, int32_t dayOfMonth) {
	setNormalizedYear(normalizedYear);
	$nc($(setMonth(month)))->setDayOfMonth(dayOfMonth);
	return this;
}

bool BaseCalendar$Date::hit(int32_t year) {
	return year == this->cachedYear;
}

bool BaseCalendar$Date::hit(int64_t fixedDate) {
	return (fixedDate >= this->cachedFixedDateJan1 && fixedDate < this->cachedFixedDateNextJan1);
}

int32_t BaseCalendar$Date::getCachedYear() {
	return this->cachedYear;
}

int64_t BaseCalendar$Date::getCachedJan1() {
	return this->cachedFixedDateJan1;
}

void BaseCalendar$Date::setCache(int32_t year, int64_t jan1, int32_t len) {
	this->cachedYear = year;
	this->cachedFixedDateJan1 = jan1;
	this->cachedFixedDateNextJan1 = jan1 + len;
}

BaseCalendar$Date::BaseCalendar$Date() {
}

$Class* BaseCalendar$Date::load$($String* name, bool initialize) {
	$loadClass(BaseCalendar$Date, name, initialize, &_BaseCalendar$Date_ClassInfo_, allocate$BaseCalendar$Date);
	return class$;
}

$Class* BaseCalendar$Date::class$ = nullptr;

		} // calendar
	} // util
} // sun