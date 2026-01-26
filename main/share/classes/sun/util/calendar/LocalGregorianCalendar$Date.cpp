#include <sun/util/calendar/LocalGregorianCalendar$Date.h>

#include <java/lang/StringBuffer.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/BaseCalendar$Date.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/CalendarUtils.h>
#include <sun/util/calendar/Era.h>
#include <sun/util/calendar/LocalGregorianCalendar.h>
#include <jcpp.h>

#undef FIELD_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $TimeZone = ::java::util::TimeZone;
using $BaseCalendar$Date = ::sun::util::calendar::BaseCalendar$Date;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $CalendarUtils = ::sun::util::calendar::CalendarUtils;
using $Era = ::sun::util::calendar::Era;

namespace sun {
	namespace util {
		namespace calendar {

$FieldInfo _LocalGregorianCalendar$Date_FieldInfo_[] = {
	{"gregorianYear", "I", nullptr, $PRIVATE, $field(LocalGregorianCalendar$Date, gregorianYear)},
	{}
};

$MethodInfo _LocalGregorianCalendar$Date_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(LocalGregorianCalendar$Date, init$, void)},
	{"<init>", "(Ljava/util/TimeZone;)V", nullptr, $PROTECTED, $method(LocalGregorianCalendar$Date, init$, void, $TimeZone*)},
	{"addYear", "(I)Lsun/util/calendar/LocalGregorianCalendar$Date;", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar$Date, addYear, LocalGregorianCalendar$Date*, int32_t)},
	{"getNormalizedYear", "()I", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar$Date, getNormalizedYear, int32_t)},
	{"setEra", "(Lsun/util/calendar/Era;)Lsun/util/calendar/LocalGregorianCalendar$Date;", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar$Date, setEra, LocalGregorianCalendar$Date*, $Era*)},
	{"setLocalEra", "(Lsun/util/calendar/Era;)V", nullptr, 0, $virtualMethod(LocalGregorianCalendar$Date, setLocalEra, void, $Era*)},
	{"setLocalYear", "(I)V", nullptr, 0, $virtualMethod(LocalGregorianCalendar$Date, setLocalYear, void, int32_t)},
	{"setNormalizedYear", "(I)V", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar$Date, setNormalizedYear, void, int32_t)},
	{"setYear", "(I)Lsun/util/calendar/LocalGregorianCalendar$Date;", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar$Date, setYear, LocalGregorianCalendar$Date*, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocalGregorianCalendar$Date, toString, $String*)},
	{}
};

$InnerClassInfo _LocalGregorianCalendar$Date_InnerClassesInfo_[] = {
	{"sun.util.calendar.LocalGregorianCalendar$Date", "sun.util.calendar.LocalGregorianCalendar", "Date", $PUBLIC | $STATIC},
	{"sun.util.calendar.BaseCalendar$Date", "sun.util.calendar.BaseCalendar", "Date", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LocalGregorianCalendar$Date_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.calendar.LocalGregorianCalendar$Date",
	"sun.util.calendar.BaseCalendar$Date",
	nullptr,
	_LocalGregorianCalendar$Date_FieldInfo_,
	_LocalGregorianCalendar$Date_MethodInfo_,
	nullptr,
	nullptr,
	_LocalGregorianCalendar$Date_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.calendar.LocalGregorianCalendar"
};

$Object* allocate$LocalGregorianCalendar$Date($Class* clazz) {
	return $of($alloc(LocalGregorianCalendar$Date));
}

void LocalGregorianCalendar$Date::init$() {
	$BaseCalendar$Date::init$();
	this->gregorianYear = $CalendarDate::FIELD_UNDEFINED;
}

void LocalGregorianCalendar$Date::init$($TimeZone* zone) {
	$BaseCalendar$Date::init$(zone);
	this->gregorianYear = $CalendarDate::FIELD_UNDEFINED;
}

LocalGregorianCalendar$Date* LocalGregorianCalendar$Date::setEra($Era* era) {
	if (getEra() != era) {
		$BaseCalendar$Date::setEra(era);
		this->gregorianYear = $CalendarDate::FIELD_UNDEFINED;
	}
	return this;
}

LocalGregorianCalendar$Date* LocalGregorianCalendar$Date::addYear(int32_t localYear) {
	$BaseCalendar$Date::addYear(localYear);
	this->gregorianYear += localYear;
	return this;
}

LocalGregorianCalendar$Date* LocalGregorianCalendar$Date::setYear(int32_t localYear) {
	if (getYear() != localYear) {
		$BaseCalendar$Date::setYear(localYear);
		this->gregorianYear = $CalendarDate::FIELD_UNDEFINED;
	}
	return this;
}

int32_t LocalGregorianCalendar$Date::getNormalizedYear() {
	return this->gregorianYear;
}

void LocalGregorianCalendar$Date::setNormalizedYear(int32_t normalizedYear) {
	this->gregorianYear = normalizedYear;
}

void LocalGregorianCalendar$Date::setLocalEra($Era* era) {
	$BaseCalendar$Date::setEra(era);
}

void LocalGregorianCalendar$Date::setLocalYear(int32_t year) {
	$BaseCalendar$Date::setYear(year);
}

$String* LocalGregorianCalendar$Date::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, time, $BaseCalendar$Date::toString());
	$assign(time, $nc(time)->substring(time->indexOf((int32_t)u'T')));
	$var($StringBuffer, sb, $new($StringBuffer));
	$var($Era, era, getEra());
	if (era != nullptr) {
		$var($String, abbr, era->getAbbreviation());
		if (abbr != nullptr) {
			sb->append(abbr);
		}
	}
	sb->append(getYear())->append(u'.');
	$nc($($CalendarUtils::sprintf0d(sb, getMonth(), 2)))->append(u'.');
	$CalendarUtils::sprintf0d(sb, getDayOfMonth(), 2);
	sb->append(time);
	return sb->toString();
}

LocalGregorianCalendar$Date::LocalGregorianCalendar$Date() {
}

$Class* LocalGregorianCalendar$Date::load$($String* name, bool initialize) {
	$loadClass(LocalGregorianCalendar$Date, name, initialize, &_LocalGregorianCalendar$Date_ClassInfo_, allocate$LocalGregorianCalendar$Date);
	return class$;
}

$Class* LocalGregorianCalendar$Date::class$ = nullptr;

		} // calendar
	} // util
} // sun