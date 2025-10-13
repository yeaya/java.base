#include <java/nio/file/attribute/FileTime.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/attribute/FileTime$1.h>
#include <java/time/Instant.h>
#include <java/time/LocalDateTime.h>
#include <java/time/ZoneOffset.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef DAYS
#undef HOURS_PER_DAY
#undef MAX
#undef MAX_SECOND
#undef MAX_VALUE
#undef MICROS_PER_SECOND
#undef MILLISECONDS
#undef MILLIS_PER_SECOND
#undef MIN
#undef MINUTES_PER_HOUR
#undef MIN_SECOND
#undef MIN_VALUE
#undef NANOSECONDS
#undef NANOS_PER_MICRO
#undef NANOS_PER_MILLI
#undef NANOS_PER_SECOND
#undef SECONDS
#undef SECONDS_PER_DAY
#undef SECONDS_PER_HOUR
#undef SECONDS_PER_MINUTE
#undef UTC

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileTime$1 = ::java::nio::file::attribute::FileTime$1;
using $Instant = ::java::time::Instant;
using $LocalDateTime = ::java::time::LocalDateTime;
using $ZoneOffset = ::java::time::ZoneOffset;
using $Objects = ::java::util::Objects;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$FieldInfo _FileTime_FieldInfo_[] = {
	{"unit", "Ljava/util/concurrent/TimeUnit;", nullptr, $PRIVATE | $FINAL, $field(FileTime, unit)},
	{"value", "J", nullptr, $PRIVATE | $FINAL, $field(FileTime, value)},
	{"instant", "Ljava/time/Instant;", nullptr, $PRIVATE, $field(FileTime, instant)},
	{"valueAsString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FileTime, valueAsString)},
	{"HOURS_PER_DAY", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, HOURS_PER_DAY)},
	{"MINUTES_PER_HOUR", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, MINUTES_PER_HOUR)},
	{"SECONDS_PER_MINUTE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, SECONDS_PER_MINUTE)},
	{"SECONDS_PER_HOUR", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, SECONDS_PER_HOUR)},
	{"SECONDS_PER_DAY", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, SECONDS_PER_DAY)},
	{"MILLIS_PER_SECOND", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, MILLIS_PER_SECOND)},
	{"MICROS_PER_SECOND", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, MICROS_PER_SECOND)},
	{"NANOS_PER_SECOND", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, NANOS_PER_SECOND)},
	{"NANOS_PER_MILLI", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, NANOS_PER_MILLI)},
	{"NANOS_PER_MICRO", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, NANOS_PER_MICRO)},
	{"MIN_SECOND", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, MIN_SECOND)},
	{"MAX_SECOND", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, MAX_SECOND)},
	{"DAYS_PER_10000_YEARS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, DAYS_PER_10000_YEARS)},
	{"SECONDS_PER_10000_YEARS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, SECONDS_PER_10000_YEARS)},
	{"SECONDS_0000_TO_1970", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileTime, SECONDS_0000_TO_1970)},
	{}
};

$MethodInfo _FileTime_MethodInfo_[] = {
	{"<init>", "(JLjava/util/concurrent/TimeUnit;Ljava/time/Instant;)V", nullptr, $PRIVATE, $method(static_cast<void(FileTime::*)(int64_t,$TimeUnit*,$Instant*)>(&FileTime::init$))},
	{"append", "(Ljava/lang/StringBuilder;II)Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $method(static_cast<$StringBuilder*(FileTime::*)($StringBuilder*,int32_t,int32_t)>(&FileTime::append))},
	{"compareTo", "(Ljava/nio/file/attribute/FileTime;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(FileTime::*)(FileTime*)>(&FileTime::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"from", "(JLjava/util/concurrent/TimeUnit;)Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FileTime*(*)(int64_t,$TimeUnit*)>(&FileTime::from))},
	{"from", "(Ljava/time/Instant;)Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FileTime*(*)($Instant*)>(&FileTime::from))},
	{"fromMillis", "(J)Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FileTime*(*)(int64_t)>(&FileTime::fromMillis))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"scale", "(JJJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t)>(&FileTime::scale))},
	{"to", "(Ljava/util/concurrent/TimeUnit;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(FileTime::*)($TimeUnit*)>(&FileTime::to))},
	{"toDays", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(FileTime::*)()>(&FileTime::toDays))},
	{"toExcessNanos", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(FileTime::*)(int64_t)>(&FileTime::toExcessNanos))},
	{"toInstant", "()Ljava/time/Instant;", nullptr, $PUBLIC, $method(static_cast<$Instant*(FileTime::*)()>(&FileTime::toInstant))},
	{"toMillis", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(FileTime::*)()>(&FileTime::toMillis))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FileTime_InnerClassesInfo_[] = {
	{"java.nio.file.attribute.FileTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _FileTime_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.nio.file.attribute.FileTime",
	"java.lang.Object",
	"java.lang.Comparable",
	_FileTime_FieldInfo_,
	_FileTime_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/nio/file/attribute/FileTime;>;",
	nullptr,
	_FileTime_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.file.attribute.FileTime$1"
};

$Object* allocate$FileTime($Class* clazz) {
	return $of($alloc(FileTime));
}

void FileTime::init$(int64_t value, $TimeUnit* unit, $Instant* instant) {
	this->value = value;
	$set(this, unit, unit);
	$set(this, instant, instant);
}

FileTime* FileTime::from(int64_t value, $TimeUnit* unit) {
	$init(FileTime);
	$Objects::requireNonNull($of(unit), "unit"_s);
	return $new(FileTime, value, unit, nullptr);
}

FileTime* FileTime::fromMillis(int64_t value) {
	$init(FileTime);
	$init($TimeUnit);
	return $new(FileTime, value, $TimeUnit::MILLISECONDS, nullptr);
}

FileTime* FileTime::from($Instant* instant) {
	$init(FileTime);
	$Objects::requireNonNull($of(instant), "instant"_s);
	return $new(FileTime, 0, nullptr, instant);
}

int64_t FileTime::to($TimeUnit* unit) {
	$Objects::requireNonNull($of(unit), "unit"_s);
	if (this->unit != nullptr) {
		return $nc(unit)->convert(this->value, this->unit);
	} else {
		$init($TimeUnit);
		int64_t secs = $nc(unit)->convert($nc(this->instant)->getEpochSecond(), $TimeUnit::SECONDS);
		if (secs == $Long::MIN_VALUE || secs == $Long::MAX_VALUE) {
			return secs;
		}
		int64_t nanos = unit->convert($nc(this->instant)->getNano(), $TimeUnit::NANOSECONDS);
		int64_t r = secs + nanos;
		if (((int64_t)((secs ^ r) & (uint64_t)(nanos ^ r))) < 0) {
			return (secs < 0) ? $Long::MIN_VALUE : $Long::MAX_VALUE;
		}
		return r;
	}
}

int64_t FileTime::toMillis() {
	if (this->unit != nullptr) {
		return this->unit->toMillis(this->value);
	} else {
		int64_t secs = $nc(this->instant)->getEpochSecond();
		int32_t nanos = $nc(this->instant)->getNano();
		int64_t r = secs * 1000;
		int64_t ax = $Math::abs(secs);
		if ((int64_t)((uint64_t)(ax | 1000) >> 31) != 0) {
			if ((r / 1000) != secs) {
				return (secs < 0) ? $Long::MIN_VALUE : $Long::MAX_VALUE;
			}
		}
		return r + nanos / 0x000F4240;
	}
}

int64_t FileTime::scale(int64_t d, int64_t m, int64_t over) {
	$init(FileTime);
	if (d > over) {
		return $Long::MAX_VALUE;
	}
	if (d < -over) {
		return $Long::MIN_VALUE;
	}
	return d * m;
}

$Instant* FileTime::toInstant() {
	if (this->instant == nullptr) {
		int64_t secs = 0;
		int32_t nanos = 0;
		$init($FileTime$1);
		switch ($nc($FileTime$1::$SwitchMap$java$util$concurrent$TimeUnit)->get((this->unit)->ordinal())) {
		case 1:
			{
				secs = scale(this->value, FileTime::SECONDS_PER_DAY, $div($Long::MAX_VALUE, FileTime::SECONDS_PER_DAY));
				break;
			}
		case 2:
			{
				secs = scale(this->value, FileTime::SECONDS_PER_HOUR, $div($Long::MAX_VALUE, FileTime::SECONDS_PER_HOUR));
				break;
			}
		case 3:
			{
				secs = scale(this->value, FileTime::SECONDS_PER_MINUTE, $div($Long::MAX_VALUE, FileTime::SECONDS_PER_MINUTE));
				break;
			}
		case 4:
			{
				secs = this->value;
				break;
			}
		case 5:
			{
				secs = $Math::floorDiv(this->value, FileTime::MILLIS_PER_SECOND);
				nanos = (int32_t)$Math::floorMod(this->value, FileTime::MILLIS_PER_SECOND) * FileTime::NANOS_PER_MILLI;
				break;
			}
		case 6:
			{
				secs = $Math::floorDiv(this->value, FileTime::MICROS_PER_SECOND);
				nanos = (int32_t)$Math::floorMod(this->value, FileTime::MICROS_PER_SECOND) * FileTime::NANOS_PER_MICRO;
				break;
			}
		case 7:
			{
				secs = $Math::floorDiv(this->value, FileTime::NANOS_PER_SECOND);
				nanos = (int32_t)$Math::floorMod(this->value, FileTime::NANOS_PER_SECOND);
				break;
			}
		default:
			{
				$throwNew($AssertionError, $of("Unit not handled"_s));
			}
		}
		if (secs <= FileTime::MIN_SECOND) {
			$init($Instant);
			$set(this, instant, $Instant::MIN);
		} else if (secs >= FileTime::MAX_SECOND) {
			$init($Instant);
			$set(this, instant, $Instant::MAX);
		} else {
			$set(this, instant, $Instant::ofEpochSecond(secs, nanos));
		}
	}
	return this->instant;
}

bool FileTime::equals(Object$* obj) {
	return ($instanceOf(FileTime, obj)) ? compareTo($cast(FileTime, obj)) == 0 : false;
}

int32_t FileTime::hashCode() {
	return $nc($(toInstant()))->hashCode();
}

int64_t FileTime::toDays() {
	if (this->unit != nullptr) {
		return this->unit->toDays(this->value);
	} else {
		$init($TimeUnit);
		return $TimeUnit::SECONDS->toDays($nc($(toInstant()))->getEpochSecond());
	}
}

int64_t FileTime::toExcessNanos(int64_t days) {
	if (this->unit != nullptr) {
		$init($TimeUnit);
		return this->unit->toNanos(this->value - this->unit->convert(days, $TimeUnit::DAYS));
	} else {
		$init($TimeUnit);
		int64_t var$0 = $nc($(toInstant()))->getEpochSecond();
		return $TimeUnit::SECONDS->toNanos(var$0 - $TimeUnit::DAYS->toSeconds(days));
	}
}

int32_t FileTime::compareTo(FileTime* other) {
	if (this->unit != nullptr && this->unit == $nc(other)->unit) {
		return $Long::compare(this->value, other->value);
	} else {
		int64_t secs = $nc($(toInstant()))->getEpochSecond();
		int64_t secsOther = $nc($(other->toInstant()))->getEpochSecond();
		int32_t cmp = $Long::compare(secs, secsOther);
		if (cmp != 0) {
			return cmp;
		}
		int64_t var$0 = (int64_t)$nc($(toInstant()))->getNano();
		cmp = $Long::compare(var$0, $nc($(other->toInstant()))->getNano());
		if (cmp != 0) {
			return cmp;
		}
		if (secs != FileTime::MAX_SECOND && secs != FileTime::MIN_SECOND) {
			return 0;
		}
		int64_t days = toDays();
		int64_t daysOther = other->toDays();
		if (days == daysOther) {
			int64_t var$1 = toExcessNanos(days);
			return $Long::compare(var$1, other->toExcessNanos(daysOther));
		}
		return $Long::compare(days, daysOther);
	}
}

$StringBuilder* FileTime::append($StringBuilder* sb, int32_t w, int32_t d) {
	while (w > 0) {
		$nc(sb)->append((char16_t)($div(d, w) + u'0'));
		d = $mod(d, w);
		w /= 10;
	}
	return sb;
}

$String* FileTime::toString() {
	if (this->valueAsString == nullptr) {
		int64_t secs = 0;
		int32_t nanos = 0;
		$init($TimeUnit);
		if (this->instant == nullptr && this->unit->compareTo(static_cast<$Enum*>($TimeUnit::SECONDS)) >= 0) {
			secs = this->unit->toSeconds(this->value);
		} else {
			secs = $nc($(toInstant()))->getEpochSecond();
			nanos = $nc($(toInstant()))->getNano();
		}
		$var($LocalDateTime, ldt, nullptr);
		int32_t year = 0;
		if (secs >= -FileTime::SECONDS_0000_TO_1970) {
			int64_t zeroSecs = secs - FileTime::SECONDS_PER_10000_YEARS + FileTime::SECONDS_0000_TO_1970;
			int64_t hi = $Math::floorDiv(zeroSecs, FileTime::SECONDS_PER_10000_YEARS) + 1;
			int64_t lo = $Math::floorMod(zeroSecs, FileTime::SECONDS_PER_10000_YEARS);
			$init($ZoneOffset);
			$assign(ldt, $LocalDateTime::ofEpochSecond(lo - FileTime::SECONDS_0000_TO_1970, nanos, $ZoneOffset::UTC));
			year = $nc(ldt)->getYear() + (int32_t)hi * 10000;
		} else {
			int64_t zeroSecs = secs + FileTime::SECONDS_0000_TO_1970;
			int64_t hi = $div(zeroSecs, FileTime::SECONDS_PER_10000_YEARS);
			int64_t lo = $mod(zeroSecs, FileTime::SECONDS_PER_10000_YEARS);
			$init($ZoneOffset);
			$assign(ldt, $LocalDateTime::ofEpochSecond(lo - FileTime::SECONDS_0000_TO_1970, nanos, $ZoneOffset::UTC));
			year = $nc(ldt)->getYear() + (int32_t)hi * 10000;
		}
		if (year <= 0) {
			year = year - 1;
		}
		int32_t fraction = $nc(ldt)->getNano();
		$var($StringBuilder, sb, $new($StringBuilder, 64));
		sb->append(year < 0 ? "-"_s : ""_s);
		year = $Math::abs(year);
		if (year < 10000) {
			append(sb, 1000, $Math::abs(year));
		} else {
			sb->append($($String::valueOf(year)));
		}
		sb->append(u'-');
		append(sb, 10, ldt->getMonthValue());
		sb->append(u'-');
		append(sb, 10, ldt->getDayOfMonth());
		sb->append(u'T');
		append(sb, 10, ldt->getHour());
		sb->append(u':');
		append(sb, 10, ldt->getMinute());
		sb->append(u':');
		append(sb, 10, ldt->getSecond());
		if (fraction != 0) {
			sb->append(u'.');
			int32_t w = 0x05F5E100;
			while (fraction % 10 == 0) {
				fraction /= 10;
				w /= 10;
			}
			append(sb, w, fraction);
		}
		sb->append(u'Z');
		$set(this, valueAsString, sb->toString());
	}
	return this->valueAsString;
}

int32_t FileTime::compareTo(Object$* other) {
	return this->compareTo($cast(FileTime, other));
}

FileTime::FileTime() {
}

$Class* FileTime::load$($String* name, bool initialize) {
	$loadClass(FileTime, name, initialize, &_FileTime_ClassInfo_, allocate$FileTime);
	return class$;
}

$Class* FileTime::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java