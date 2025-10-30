#include <sun/util/calendar/Era.h>

#include <java/util/Locale.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/BaseCalendar$Date.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/CalendarSystem.h>
#include <sun/util/calendar/Gregorian$Date.h>
#include <sun/util/calendar/Gregorian.h>
#include <sun/util/calendar/ImmutableGregorianDate.h>
#include <jcpp.h>

using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $TimeZone = ::java::util::TimeZone;
using $BaseCalendar$Date = ::sun::util::calendar::BaseCalendar$Date;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $CalendarSystem = ::sun::util::calendar::CalendarSystem;
using $Gregorian = ::sun::util::calendar::Gregorian;
using $Gregorian$Date = ::sun::util::calendar::Gregorian$Date;
using $ImmutableGregorianDate = ::sun::util::calendar::ImmutableGregorianDate;

namespace sun {
	namespace util {
		namespace calendar {

$FieldInfo _Era_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Era, name)},
	{"abbr", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Era, abbr)},
	{"since", "J", nullptr, $PRIVATE | $FINAL, $field(Era, since)},
	{"sinceDate", "Lsun/util/calendar/CalendarDate;", nullptr, $PRIVATE | $FINAL, $field(Era, sinceDate)},
	{"localTime", "Z", nullptr, $PRIVATE | $FINAL, $field(Era, localTime)},
	{"hash", "I", nullptr, $PRIVATE, $field(Era, hash)},
	{}
};

$MethodInfo _Era_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;JZ)V", nullptr, $PUBLIC, $method(static_cast<void(Era::*)($String*,$String*,int64_t,bool)>(&Era::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAbbreviation", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Era::*)()>(&Era::getAbbreviation))},
	{"getDiaplayAbbreviation", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Era::*)($Locale*)>(&Era::getDiaplayAbbreviation))},
	{"getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Era::*)($Locale*)>(&Era::getDisplayName))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Era::*)()>(&Era::getName))},
	{"getSince", "(Ljava/util/TimeZone;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(Era::*)($TimeZone*)>(&Era::getSince))},
	{"getSinceDate", "()Lsun/util/calendar/CalendarDate;", nullptr, $PUBLIC, $method(static_cast<$CalendarDate*(Era::*)()>(&Era::getSinceDate))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isLocalTime", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Era::*)()>(&Era::isLocalTime))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Era_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.calendar.Era",
	"java.lang.Object",
	nullptr,
	_Era_FieldInfo_,
	_Era_MethodInfo_
};

$Object* allocate$Era($Class* clazz) {
	return $of($alloc(Era));
}

void Era::init$($String* name, $String* abbr, int64_t since, bool localTime) {
	$useLocalCurrentObjectStackCache();
	this->hash = 0;
	$set(this, name, name);
	$set(this, abbr, abbr);
	this->since = since;
	this->localTime = localTime;
	$var($Gregorian, gcal, $CalendarSystem::getGregorianCalendar());
	$var($BaseCalendar$Date, d, static_cast<$BaseCalendar$Date*>($cast($Gregorian$Date, $nc(gcal)->newCalendarDate(nullptr))));
	gcal->getCalendarDate(since, static_cast<$CalendarDate*>(d));
	$set(this, sinceDate, $new($ImmutableGregorianDate, d));
}

$String* Era::getName() {
	return this->name;
}

$String* Era::getDisplayName($Locale* locale) {
	return this->name;
}

$String* Era::getAbbreviation() {
	return this->abbr;
}

$String* Era::getDiaplayAbbreviation($Locale* locale) {
	return this->abbr;
}

int64_t Era::getSince($TimeZone* zone) {
	if (zone == nullptr || !this->localTime) {
		return this->since;
	}
	int32_t offset = $nc(zone)->getOffset(this->since);
	return this->since - offset;
}

$CalendarDate* Era::getSinceDate() {
	return this->sinceDate;
}

bool Era::isLocalTime() {
	return this->localTime;
}

bool Era::equals(Object$* o) {
	if (!($instanceOf(Era, o))) {
		return false;
	}
	$var(Era, that, $cast(Era, o));
	bool var$0 = $nc(this->name)->equals($nc(that)->name);
	return var$0 && $nc(this->abbr)->equals($nc(that)->abbr) && this->since == $nc(that)->since && this->localTime == that->localTime;
}

int32_t Era::hashCode() {
	if (this->hash == 0) {
		int32_t var$0 = $nc(this->name)->hashCode();
		this->hash = (((var$0 ^ $nc(this->abbr)->hashCode()) ^ (int32_t)this->since) ^ (int32_t)(this->since >> 32)) ^ (this->localTime ? 1 : 0);
	}
	return this->hash;
}

$String* Era::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(u'[');
	sb->append($(getName()))->append(" ("_s);
	sb->append($(getAbbreviation()))->append(u')');
	sb->append(" since "_s)->append($($of(getSinceDate())));
	if (this->localTime) {
		sb->setLength(sb->length() - 1);
		sb->append(" local time"_s);
	}
	sb->append(u']');
	return sb->toString();
}

Era::Era() {
}

$Class* Era::load$($String* name, bool initialize) {
	$loadClass(Era, name, initialize, &_Era_ClassInfo_, allocate$Era);
	return class$;
}

$Class* Era::class$ = nullptr;

		} // calendar
	} // util
} // sun