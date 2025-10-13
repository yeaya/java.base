#include <sun/util/calendar/ZoneInfo.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Map.h>
#include <java/util/SimpleTimeZone.h>
#include <java/util/TimeZone.h>
#include <sun/util/calendar/AbstractCalendar.h>
#include <sun/util/calendar/CalendarDate.h>
#include <sun/util/calendar/CalendarSystem.h>
#include <sun/util/calendar/Gregorian$Date.h>
#include <sun/util/calendar/Gregorian.h>
#include <sun/util/calendar/ZoneInfoFile.h>
#include <jcpp.h>

#undef ABBR_MASK
#undef AD
#undef BC
#undef DAY_IN_MILLIS
#undef DST_MASK
#undef DST_NSHIFT
#undef ID
#undef OFFSET_MASK
#undef SATURDAY
#undef STANDARD_TIME
#undef SUNDAY
#undef TRANSITION_NSHIFT
#undef UTC_TIME
#undef WALL_TIME

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Map = ::java::util::Map;
using $SimpleTimeZone = ::java::util::SimpleTimeZone;
using $TimeZone = ::java::util::TimeZone;
using $AbstractCalendar = ::sun::util::calendar::AbstractCalendar;
using $BaseCalendar = ::sun::util::calendar::BaseCalendar;
using $CalendarDate = ::sun::util::calendar::CalendarDate;
using $CalendarSystem = ::sun::util::calendar::CalendarSystem;
using $Gregorian = ::sun::util::calendar::Gregorian;
using $Gregorian$Date = ::sun::util::calendar::Gregorian$Date;
using $ZoneInfoFile = ::sun::util::calendar::ZoneInfoFile;

namespace sun {
	namespace util {
		namespace calendar {

$FieldInfo _ZoneInfo_FieldInfo_[] = {
	{"UTC_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneInfo, UTC_TIME)},
	{"STANDARD_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneInfo, STANDARD_TIME)},
	{"WALL_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneInfo, WALL_TIME)},
	{"OFFSET_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneInfo, OFFSET_MASK)},
	{"DST_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneInfo, DST_MASK)},
	{"DST_NSHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneInfo, DST_NSHIFT)},
	{"ABBR_MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneInfo, ABBR_MASK)},
	{"TRANSITION_NSHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneInfo, TRANSITION_NSHIFT)},
	{"rawOffset", "I", nullptr, $PRIVATE, $field(ZoneInfo, rawOffset)},
	{"rawOffsetDiff", "I", nullptr, $PRIVATE, $field(ZoneInfo, rawOffsetDiff)},
	{"checksum", "I", nullptr, $PRIVATE, $field(ZoneInfo, checksum)},
	{"dstSavings", "I", nullptr, $PRIVATE, $field(ZoneInfo, dstSavings)},
	{"transitions", "[J", nullptr, $PRIVATE, $field(ZoneInfo, transitions)},
	{"offsets", "[I", nullptr, $PRIVATE, $field(ZoneInfo, offsets)},
	{"simpleTimeZoneParams", "[I", nullptr, $PRIVATE, $field(ZoneInfo, simpleTimeZoneParams)},
	{"willGMTOffsetChange", "Z", nullptr, $PRIVATE, $field(ZoneInfo, willGMTOffsetChange)},
	{"dirty", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(ZoneInfo, dirty)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZoneInfo, serialVersionUID)},
	{"lastRule", "Ljava/util/SimpleTimeZone;", nullptr, $PRIVATE | $TRANSIENT, $field(ZoneInfo, lastRule)},
	{}
};

$MethodInfo _ZoneInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ZoneInfo::*)()>(&ZoneInfo::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(ZoneInfo::*)($String*,int32_t)>(&ZoneInfo::init$))},
	{"<init>", "(Ljava/lang/String;III[J[I[IZ)V", nullptr, 0, $method(static_cast<void(ZoneInfo::*)($String*,int32_t,int32_t,int32_t,$longs*,$ints*,$ints*,bool)>(&ZoneInfo::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAliasTable", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$Map*(*)()>(&ZoneInfo::getAliasTable))},
	{"getAvailableIDs", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&ZoneInfo::getAvailableIDs))},
	{"getAvailableIDs", "(I)[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)(int32_t)>(&ZoneInfo::getAvailableIDs))},
	{"getDSTSavings", "()I", nullptr, $PUBLIC},
	{"getLastRawOffset", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ZoneInfo::*)()>(&ZoneInfo::getLastRawOffset))},
	{"getLastRule", "()Ljava/util/SimpleTimeZone;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$SimpleTimeZone*(ZoneInfo::*)()>(&ZoneInfo::getLastRule))},
	{"getLastRuleInstance", "()Ljava/util/SimpleTimeZone;", nullptr, $PUBLIC},
	{"getOffset", "(J)I", nullptr, $PUBLIC},
	{"getOffset", "(IIIIII)I", nullptr, $PUBLIC},
	{"getOffsets", "(J[I)I", nullptr, $PUBLIC},
	{"getOffsets", "(J[II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ZoneInfo::*)(int64_t,$ints*,int32_t)>(&ZoneInfo::getOffsets))},
	{"getOffsetsByStandard", "(J[I)I", nullptr, $PUBLIC},
	{"getOffsetsByWall", "(J[I)I", nullptr, $PUBLIC},
	{"getRawOffset", "()I", nullptr, $PUBLIC},
	{"getTimeZone", "(Ljava/lang/String;)Ljava/util/TimeZone;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TimeZone*(*)($String*)>(&ZoneInfo::getTimeZone))},
	{"getTransitionIndex", "(JI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ZoneInfo::*)(int64_t,int32_t)>(&ZoneInfo::getTransitionIndex))},
	{"hasSameRules", "(Ljava/util/TimeZone;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"inDaylightTime", "(Ljava/util/Date;)Z", nullptr, $PUBLIC},
	{"isDirty", "()Z", nullptr, $PUBLIC},
	{"observesDaylightTime", "()Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ZoneInfo::*)($ObjectInputStream*)>(&ZoneInfo::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setRawOffset", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"useDaylightTime", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ZoneInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.calendar.ZoneInfo",
	"java.util.TimeZone",
	nullptr,
	_ZoneInfo_FieldInfo_,
	_ZoneInfo_MethodInfo_
};

$Object* allocate$ZoneInfo($Class* clazz) {
	return $of($alloc(ZoneInfo));
}

void ZoneInfo::init$() {
	$TimeZone::init$();
	this->rawOffsetDiff = 0;
	this->willGMTOffsetChange = false;
	this->dirty = false;
}

void ZoneInfo::init$($String* ID, int32_t rawOffset) {
	ZoneInfo::init$(ID, rawOffset, 0, 0, nullptr, nullptr, nullptr, false);
}

void ZoneInfo::init$($String* ID, int32_t rawOffset, int32_t dstSavings, int32_t checksum, $longs* transitions, $ints* offsets, $ints* simpleTimeZoneParams, bool willGMTOffsetChange) {
	$TimeZone::init$();
	this->rawOffsetDiff = 0;
	this->willGMTOffsetChange = false;
	this->dirty = false;
	setID(ID);
	this->rawOffset = rawOffset;
	this->dstSavings = dstSavings;
	this->checksum = checksum;
	$set(this, transitions, transitions);
	$set(this, offsets, offsets);
	$set(this, simpleTimeZoneParams, simpleTimeZoneParams);
	this->willGMTOffsetChange = willGMTOffsetChange;
}

int32_t ZoneInfo::getOffset(int64_t date) {
	return getOffsets(date, nullptr, ZoneInfo::UTC_TIME);
}

int32_t ZoneInfo::getOffsets(int64_t utc, $ints* offsets) {
	return getOffsets(utc, offsets, ZoneInfo::UTC_TIME);
}

int32_t ZoneInfo::getOffsetsByStandard(int64_t standard, $ints* offsets) {
	return getOffsets(standard, offsets, ZoneInfo::STANDARD_TIME);
}

int32_t ZoneInfo::getOffsetsByWall(int64_t wall, $ints* offsets) {
	return getOffsets(wall, offsets, ZoneInfo::WALL_TIME);
}

int32_t ZoneInfo::getOffsets(int64_t date, $ints* offsets, int32_t type) {
	if (this->transitions == nullptr) {
		int32_t offset = getLastRawOffset();
		if (offsets != nullptr) {
			offsets->set(0, offset);
			offsets->set(1, 0);
		}
		return offset;
	}
	date -= this->rawOffsetDiff;
	int32_t index = getTransitionIndex(date, type);
	if (index < 0) {
		int32_t offset = getLastRawOffset();
		if (offsets != nullptr) {
			offsets->set(0, offset);
			offsets->set(1, 0);
		}
		return offset;
	}
	if (index < $nc(this->transitions)->length) {
		int64_t val = $nc(this->transitions)->get(index);
		int32_t offset = $nc(this->offsets)->get((int32_t)((int64_t)(val & (uint64_t)ZoneInfo::OFFSET_MASK))) + this->rawOffsetDiff;
		if (offsets != nullptr) {
			int32_t dst = (int32_t)((int64_t)(($usr(val, ZoneInfo::DST_NSHIFT)) & (uint64_t)(int64_t)15));
			int32_t save = (dst == 0) ? 0 : $nc(this->offsets)->get(dst);
			offsets->set(0, offset - save);
			offsets->set(1, save);
		}
		return offset;
	}
	$var($SimpleTimeZone, tz, getLastRule());
	if (tz != nullptr) {
		int32_t rawoffset = tz->getRawOffset();
		int64_t msec = date;
		if (type != ZoneInfo::UTC_TIME) {
			msec -= this->rawOffset;
		}
		int32_t dstoffset = tz->getOffset(msec) - this->rawOffset;
		if (dstoffset > 0 && tz->getOffset(msec - dstoffset) == rawoffset && type == ZoneInfo::WALL_TIME) {
			dstoffset = 0;
		}
		if (offsets != nullptr) {
			offsets->set(0, rawoffset);
			offsets->set(1, dstoffset);
		}
		return rawoffset + dstoffset;
	} else {
		int64_t val = $nc(this->transitions)->get($nc(this->transitions)->length - 1);
		int32_t offset = $nc(this->offsets)->get((int32_t)((int64_t)(val & (uint64_t)ZoneInfo::OFFSET_MASK))) + this->rawOffsetDiff;
		if (offsets != nullptr) {
			int32_t dst = (int32_t)((int64_t)(($usr(val, ZoneInfo::DST_NSHIFT)) & (uint64_t)(int64_t)15));
			int32_t save = (dst == 0) ? 0 : $nc(this->offsets)->get(dst);
			offsets->set(0, offset - save);
			offsets->set(1, save);
		}
		return offset;
	}
}

int32_t ZoneInfo::getTransitionIndex(int64_t date, int32_t type) {
	int32_t low = 0;
	int32_t high = $nc(this->transitions)->length - 1;
	while (low <= high) {
		int32_t mid = (low + high) / 2;
		int64_t val = $nc(this->transitions)->get(mid);
		int64_t midVal = $sr(val, ZoneInfo::TRANSITION_NSHIFT);
		if (type != ZoneInfo::UTC_TIME) {
			midVal += $nc(this->offsets)->get((int32_t)((int64_t)(val & (uint64_t)ZoneInfo::OFFSET_MASK)));
		}
		if (type == ZoneInfo::STANDARD_TIME) {
			int32_t dstIndex = (int32_t)((int64_t)(($usr(val, ZoneInfo::DST_NSHIFT)) & (uint64_t)(int64_t)15));
			if (dstIndex != 0) {
				midVal -= $nc(this->offsets)->get(dstIndex);
			}
		}
		if (midVal < date) {
			low = mid + 1;
		} else if (midVal > date) {
			high = mid - 1;
		} else {
			return mid;
		}
	}
	if (low >= $nc(this->transitions)->length) {
		return low;
	}
	return low - 1;
}

int32_t ZoneInfo::getOffset(int32_t era, int32_t year, int32_t month, int32_t day, int32_t dayOfWeek, int32_t milliseconds) {
	if (milliseconds < 0 || milliseconds >= $AbstractCalendar::DAY_IN_MILLIS) {
		$throwNew($IllegalArgumentException);
	}
	if (era == $GregorianCalendar::BC) {
		year = 1 - year;
	} else if (era != $GregorianCalendar::AD) {
		$throwNew($IllegalArgumentException);
	}
	$var($Gregorian, gcal, $CalendarSystem::getGregorianCalendar());
	$var($CalendarDate, date, $nc(gcal)->newCalendarDate(nullptr));
	$nc(date)->setDate(year, month + 1, day);
	if (gcal->validate(date) == false) {
		$throwNew($IllegalArgumentException);
	}
	if (dayOfWeek < $GregorianCalendar::SUNDAY || dayOfWeek > $GregorianCalendar::SATURDAY) {
		$throwNew($IllegalArgumentException);
	}
	if (this->transitions == nullptr) {
		return getLastRawOffset();
	}
	int64_t dateInMillis = gcal->getTime(date) + milliseconds;
	dateInMillis -= (int64_t)this->rawOffset;
	return getOffsets(dateInMillis, nullptr, ZoneInfo::UTC_TIME);
}

void ZoneInfo::setRawOffset(int32_t offsetMillis) {
	$synchronized(this) {
		if (offsetMillis == this->rawOffset + this->rawOffsetDiff) {
			return;
		}
		this->rawOffsetDiff = offsetMillis - this->rawOffset;
		if (this->lastRule != nullptr) {
			$nc(this->lastRule)->setRawOffset(offsetMillis);
		}
		this->dirty = true;
	}
}

int32_t ZoneInfo::getRawOffset() {
	if (!this->willGMTOffsetChange) {
		return this->rawOffset + this->rawOffsetDiff;
	}
	$var($ints, offsets, $new($ints, 2));
	getOffsets($System::currentTimeMillis(), offsets, ZoneInfo::UTC_TIME);
	return offsets->get(0);
}

bool ZoneInfo::isDirty() {
	return this->dirty;
}

int32_t ZoneInfo::getLastRawOffset() {
	return this->rawOffset + this->rawOffsetDiff;
}

bool ZoneInfo::useDaylightTime() {
	return (this->simpleTimeZoneParams != nullptr);
}

bool ZoneInfo::observesDaylightTime() {
	if (this->simpleTimeZoneParams != nullptr) {
		return true;
	}
	if (this->transitions == nullptr) {
		return false;
	}
	int64_t utc = $System::currentTimeMillis() - this->rawOffsetDiff;
	int32_t index = getTransitionIndex(utc, ZoneInfo::UTC_TIME);
	if (index < 0) {
		return false;
	}
	for (int32_t i = index; i < $nc(this->transitions)->length; ++i) {
		if (((int64_t)($nc(this->transitions)->get(i) & (uint64_t)ZoneInfo::DST_MASK)) != 0) {
			return true;
		}
	}
	return false;
}

bool ZoneInfo::inDaylightTime($Date* date) {
	if (date == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->transitions == nullptr) {
		return false;
	}
	int64_t utc = $nc(date)->getTime() - this->rawOffsetDiff;
	int32_t index = getTransitionIndex(utc, ZoneInfo::UTC_TIME);
	if (index < 0) {
		return false;
	}
	if (index < $nc(this->transitions)->length) {
		return ((int64_t)($nc(this->transitions)->get(index) & (uint64_t)ZoneInfo::DST_MASK)) != 0;
	}
	$var($SimpleTimeZone, tz, getLastRule());
	if (tz != nullptr) {
		return tz->inDaylightTime(date);
	} else {
		return ((int64_t)($nc(this->transitions)->get($nc(this->transitions)->length - 1) & (uint64_t)ZoneInfo::DST_MASK)) != 0;
	}
}

int32_t ZoneInfo::getDSTSavings() {
	return this->dstSavings;
}

$String* ZoneInfo::toString() {
	$var($String, var$11, $$str({$($of(this)->getClass()->getName()), "[id=\""_s}));
	$var($String, var$10, $$concat(var$11, $(getID())));
	$var($String, var$9, $$concat(var$10, "\",offset="));
	$var($String, var$8, $$concat(var$9, $$str(getLastRawOffset())));
	$var($String, var$7, $$concat(var$8, ",dstSavings="));
	$var($String, var$6, $$concat(var$7, $$str(this->dstSavings)));
	$var($String, var$5, $$concat(var$6, ",useDaylight="));
	$var($String, var$4, $$concat(var$5, $$str(useDaylightTime())));
	$var($String, var$3, $$concat(var$4, ",transitions="));
	$var($String, var$2, $$concat(var$3, $$str(((this->transitions != nullptr) ? $nc(this->transitions)->length : 0))));
	$var($String, var$1, $$concat(var$2, ",lastRule="));
	$var($String, var$0, $$concat(var$1, $((this->lastRule == nullptr ? getLastRuleInstance() : this->lastRule))));
	return $concat(var$0, "]");
}

$StringArray* ZoneInfo::getAvailableIDs() {
	$init(ZoneInfo);
	return $ZoneInfoFile::getZoneIds();
}

$StringArray* ZoneInfo::getAvailableIDs(int32_t rawOffset) {
	$init(ZoneInfo);
	return $ZoneInfoFile::getZoneIds(rawOffset);
}

$TimeZone* ZoneInfo::getTimeZone($String* ID) {
	$init(ZoneInfo);
	return $ZoneInfoFile::getZoneInfo(ID);
}

$SimpleTimeZone* ZoneInfo::getLastRule() {
	$synchronized(this) {
		if (this->lastRule == nullptr) {
			$set(this, lastRule, getLastRuleInstance());
		}
		return this->lastRule;
	}
}

$SimpleTimeZone* ZoneInfo::getLastRuleInstance() {
	if (this->simpleTimeZoneParams == nullptr) {
		return nullptr;
	}
	if ($nc(this->simpleTimeZoneParams)->length == 10) {
		int32_t var$0 = getLastRawOffset();
		return $new($SimpleTimeZone, var$0, $(getID()), $nc(this->simpleTimeZoneParams)->get(0), $nc(this->simpleTimeZoneParams)->get(1), $nc(this->simpleTimeZoneParams)->get(2), $nc(this->simpleTimeZoneParams)->get(3), $nc(this->simpleTimeZoneParams)->get(4), $nc(this->simpleTimeZoneParams)->get(5), $nc(this->simpleTimeZoneParams)->get(6), $nc(this->simpleTimeZoneParams)->get(7), $nc(this->simpleTimeZoneParams)->get(8), $nc(this->simpleTimeZoneParams)->get(9), this->dstSavings);
	}
	int32_t var$1 = getLastRawOffset();
	return $new($SimpleTimeZone, var$1, $(getID()), $nc(this->simpleTimeZoneParams)->get(0), $nc(this->simpleTimeZoneParams)->get(1), $nc(this->simpleTimeZoneParams)->get(2), $nc(this->simpleTimeZoneParams)->get(3), $nc(this->simpleTimeZoneParams)->get(4), $nc(this->simpleTimeZoneParams)->get(5), $nc(this->simpleTimeZoneParams)->get(6), $nc(this->simpleTimeZoneParams)->get(7), this->dstSavings);
}

$Object* ZoneInfo::clone() {
	$var(ZoneInfo, zi, $cast(ZoneInfo, $TimeZone::clone()));
	$set($nc(zi), lastRule, nullptr);
	return $of(zi);
}

int32_t ZoneInfo::hashCode() {
	return getLastRawOffset() ^ this->checksum;
}

bool ZoneInfo::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(ZoneInfo, obj))) {
		return false;
	}
	$var(ZoneInfo, that, $cast(ZoneInfo, obj));
	bool var$0 = $nc($(getID()))->equals($($nc(that)->getID()));
	if (var$0) {
		int32_t var$1 = getLastRawOffset();
		var$0 = (var$1 == $nc(that)->getLastRawOffset());
	}
	return (var$0 && (this->checksum == that->checksum));
}

bool ZoneInfo::hasSameRules($TimeZone* other) {
	if ($equals(this, other)) {
		return true;
	}
	if (other == nullptr) {
		return false;
	}
	if (!($instanceOf(ZoneInfo, other))) {
		int32_t var$0 = getRawOffset();
		if (var$0 != $nc(other)->getRawOffset()) {
			return false;
		}
		bool var$1 = (this->transitions == nullptr) && (useDaylightTime() == false);
		if (var$1 && ($nc(other)->useDaylightTime() == false)) {
			return true;
		}
		return false;
	}
	int32_t var$2 = getLastRawOffset();
	if (var$2 != $nc(($cast(ZoneInfo, other)))->getLastRawOffset()) {
		return false;
	}
	return (this->checksum == $nc(($cast(ZoneInfo, other)))->checksum);
}

$Map* ZoneInfo::getAliasTable() {
	$init(ZoneInfo);
	return $ZoneInfoFile::getAliasMap();
}

void ZoneInfo::readObject($ObjectInputStream* stream) {
	$nc(stream)->defaultReadObject();
	this->dirty = true;
}

ZoneInfo::ZoneInfo() {
}

$Class* ZoneInfo::load$($String* name, bool initialize) {
	$loadClass(ZoneInfo, name, initialize, &_ZoneInfo_ClassInfo_, allocate$ZoneInfo);
	return class$;
}

$Class* ZoneInfo::class$ = nullptr;

		} // calendar
	} // util
} // sun