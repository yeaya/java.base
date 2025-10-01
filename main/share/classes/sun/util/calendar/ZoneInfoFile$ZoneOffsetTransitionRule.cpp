#include <sun/util/calendar/ZoneInfoFile$ZoneOffsetTransitionRule.h>

#include <java/io/DataInput.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/util/calendar/ZoneInfoFile.h>
#include <jcpp.h>

using $DataInput = ::java::io::DataInput;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZoneInfoFile = ::sun::util::calendar::ZoneInfoFile;

namespace sun {
	namespace util {
		namespace calendar {

$FieldInfo _ZoneInfoFile$ZoneOffsetTransitionRule_FieldInfo_[] = {
	{"month", "I", nullptr, $PRIVATE | $FINAL, $field(ZoneInfoFile$ZoneOffsetTransitionRule, month)},
	{"dom", "B", nullptr, $PRIVATE | $FINAL, $field(ZoneInfoFile$ZoneOffsetTransitionRule, dom)},
	{"dow", "I", nullptr, $PRIVATE | $FINAL, $field(ZoneInfoFile$ZoneOffsetTransitionRule, dow)},
	{"secondOfDay", "I", nullptr, $PRIVATE | $FINAL, $field(ZoneInfoFile$ZoneOffsetTransitionRule, secondOfDay)},
	{"timeEndOfDay", "Z", nullptr, $PRIVATE | $FINAL, $field(ZoneInfoFile$ZoneOffsetTransitionRule, timeEndOfDay)},
	{"timeDefinition", "I", nullptr, $PRIVATE | $FINAL, $field(ZoneInfoFile$ZoneOffsetTransitionRule, timeDefinition)},
	{"standardOffset", "I", nullptr, $PRIVATE | $FINAL, $field(ZoneInfoFile$ZoneOffsetTransitionRule, standardOffset)},
	{"offsetBefore", "I", nullptr, $PRIVATE | $FINAL, $field(ZoneInfoFile$ZoneOffsetTransitionRule, offsetBefore)},
	{"offsetAfter", "I", nullptr, $PRIVATE | $FINAL, $field(ZoneInfoFile$ZoneOffsetTransitionRule, offsetAfter)},
	{}
};

$MethodInfo _ZoneInfoFile$ZoneOffsetTransitionRule_MethodInfo_[] = {
	{"<init>", "(Ljava/io/DataInput;)V", nullptr, 0, $method(static_cast<void(ZoneInfoFile$ZoneOffsetTransitionRule::*)($DataInput*)>(&ZoneInfoFile$ZoneOffsetTransitionRule::init$)), "java.io.IOException"},
	{"adjust", "(JII)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)(int64_t,int32_t,int32_t)>(&ZoneInfoFile$ZoneOffsetTransitionRule::adjust))},
	{"getTransitionEpochSecond", "(I)J", nullptr, 0},
	{"isLeapYear", "(I)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)(int32_t)>(&ZoneInfoFile$ZoneOffsetTransitionRule::isLeapYear))},
	{"lengthOfMonth", "(II)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&ZoneInfoFile$ZoneOffsetTransitionRule::lengthOfMonth))},
	{"nextOrSame", "(JI)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&ZoneInfoFile$ZoneOffsetTransitionRule::nextOrSame))},
	{"previousOrSame", "(JI)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&ZoneInfoFile$ZoneOffsetTransitionRule::previousOrSame))},
	{"toEpochDay", "(III)J", nullptr, $STATIC | $FINAL, $method(static_cast<int64_t(*)(int32_t,int32_t,int32_t)>(&ZoneInfoFile$ZoneOffsetTransitionRule::toEpochDay))},
	{}
};

$InnerClassInfo _ZoneInfoFile$ZoneOffsetTransitionRule_InnerClassesInfo_[] = {
	{"sun.util.calendar.ZoneInfoFile$ZoneOffsetTransitionRule", "sun.util.calendar.ZoneInfoFile", "ZoneOffsetTransitionRule", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ZoneInfoFile$ZoneOffsetTransitionRule_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.calendar.ZoneInfoFile$ZoneOffsetTransitionRule",
	"java.lang.Object",
	nullptr,
	_ZoneInfoFile$ZoneOffsetTransitionRule_FieldInfo_,
	_ZoneInfoFile$ZoneOffsetTransitionRule_MethodInfo_,
	nullptr,
	nullptr,
	_ZoneInfoFile$ZoneOffsetTransitionRule_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.calendar.ZoneInfoFile"
};

$Object* allocate$ZoneInfoFile$ZoneOffsetTransitionRule($Class* clazz) {
	return $of($alloc(ZoneInfoFile$ZoneOffsetTransitionRule));
}

void ZoneInfoFile$ZoneOffsetTransitionRule::init$($DataInput* in) {
	int32_t data = $nc(in)->readInt();
	int32_t dowByte = (int32_t)((uint32_t)((int32_t)(data & (uint32_t)(7 << 19))) >> 19);
	int32_t timeByte = (int32_t)((uint32_t)((int32_t)(data & (uint32_t)(31 << 14))) >> 14);
	int32_t stdByte = (int32_t)((uint32_t)((int32_t)(data & (uint32_t)(255 << 4))) >> 4);
	int32_t beforeByte = (int32_t)((uint32_t)((int32_t)(data & (uint32_t)(3 << 2))) >> 2);
	int32_t afterByte = ((int32_t)(data & (uint32_t)3));
	this->month = (int32_t)((uint32_t)data >> 28);
	this->dom = (int8_t)(((int32_t)((uint32_t)((int32_t)(data & (uint32_t)(63 << 22))) >> 22)) - 32);
	this->dow = dowByte == 0 ? -1 : dowByte;
	this->secondOfDay = timeByte == 31 ? in->readInt() : timeByte * 3600;
	this->timeEndOfDay = timeByte == 24;
	this->timeDefinition = (int32_t)((uint32_t)((int32_t)(data & (uint32_t)(3 << 12))) >> 12);
	this->standardOffset = stdByte == 255 ? in->readInt() : (stdByte - 128) * 900;
	this->offsetBefore = beforeByte == 3 ? in->readInt() : this->standardOffset + beforeByte * 1800;
	this->offsetAfter = afterByte == 3 ? in->readInt() : this->standardOffset + afterByte * 1800;
}

int64_t ZoneInfoFile$ZoneOffsetTransitionRule::getTransitionEpochSecond(int32_t year) {
	int64_t epochDay = 0;
	if (this->dom < 0) {
		epochDay = toEpochDay(year, this->month, lengthOfMonth(year, this->month) + 1 + this->dom);
		if (this->dow != -1) {
			epochDay = previousOrSame(epochDay, this->dow);
		}
	} else {
		epochDay = toEpochDay(year, this->month, this->dom);
		if (this->dow != -1) {
			epochDay = nextOrSame(epochDay, this->dow);
		}
	}
	if (this->timeEndOfDay) {
		epochDay += 1;
	}
	int32_t difference = 0;
	switch (this->timeDefinition) {
	case 0:
		{
			difference = 0;
			break;
		}
	case 1:
		{
			difference = -this->offsetBefore;
			break;
		}
	case 2:
		{
			difference = -this->standardOffset;
			break;
		}
	}
	return epochDay * 0x00015180 + this->secondOfDay + difference;
}

bool ZoneInfoFile$ZoneOffsetTransitionRule::isLeapYear(int32_t year) {
	return (((int32_t)(year & (uint32_t)3)) == 0) && ((year % 100) != 0 || (year % 400) == 0);
}

int32_t ZoneInfoFile$ZoneOffsetTransitionRule::lengthOfMonth(int32_t year, int32_t month) {
	switch (month) {
	case 2:
		{
			return isLeapYear(year) ? 29 : 28;
		}
	case 4:
		{}
	case 6:
		{}
	case 9:
		{}
	case 11:
		{
			return 30;
		}
	default:
		{
			return 31;
		}
	}
}

int64_t ZoneInfoFile$ZoneOffsetTransitionRule::toEpochDay(int32_t year, int32_t month, int32_t day) {
	int64_t y = year;
	int64_t m = month;
	int64_t total = 0;
	total += 365 * y;
	if (y >= 0) {
		total += (y + 3) / 4 - (y + 99) / 100 + (y + 399) / 400;
	} else {
		total -= y / -4 - y / -100 + y / -400;
	}
	total += ((367 * m - 362) / 12);
	total += day - 1;
	if (m > 2) {
		--total;
		if (!isLeapYear(year)) {
			--total;
		}
	}
	return total - (int64_t)719528;
}

int64_t ZoneInfoFile$ZoneOffsetTransitionRule::previousOrSame(int64_t epochDay, int32_t dayOfWeek) {
	return adjust(epochDay, dayOfWeek, 1);
}

int64_t ZoneInfoFile$ZoneOffsetTransitionRule::nextOrSame(int64_t epochDay, int32_t dayOfWeek) {
	return adjust(epochDay, dayOfWeek, 0);
}

int64_t ZoneInfoFile$ZoneOffsetTransitionRule::adjust(int64_t epochDay, int32_t dow, int32_t relative) {
	int32_t calDow = (int32_t)$Math::floorMod(epochDay + 3, (int64_t)7) + 1;
	if (relative < 2 && calDow == dow) {
		return epochDay;
	}
	if (((int32_t)(relative & (uint32_t)1)) == 0) {
		int32_t daysDiff = calDow - dow;
		return epochDay + (daysDiff >= 0 ? 7 - daysDiff : -daysDiff);
	} else {
		int32_t daysDiff = dow - calDow;
		return epochDay - (daysDiff >= 0 ? 7 - daysDiff : -daysDiff);
	}
}

ZoneInfoFile$ZoneOffsetTransitionRule::ZoneInfoFile$ZoneOffsetTransitionRule() {
}

$Class* ZoneInfoFile$ZoneOffsetTransitionRule::load$($String* name, bool initialize) {
	$loadClass(ZoneInfoFile$ZoneOffsetTransitionRule, name, initialize, &_ZoneInfoFile$ZoneOffsetTransitionRule_ClassInfo_, allocate$ZoneInfoFile$ZoneOffsetTransitionRule);
	return class$;
}

$Class* ZoneInfoFile$ZoneOffsetTransitionRule::class$ = nullptr;

		} // calendar
	} // util
} // sun