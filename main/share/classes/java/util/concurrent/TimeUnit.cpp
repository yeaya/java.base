#include <java/util/concurrent/TimeUnit.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Enum.h>
#include <java/time/Duration.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/TimeUnit$1.h>
#include <jcpp.h>

#undef DAYS
#undef DAY_SCALE
#undef HOURS
#undef HOUR_SCALE
#undef MAX_VALUE
#undef MICROS
#undef MICROSECONDS
#undef MICRO_SCALE
#undef MILLIS
#undef MILLISECONDS
#undef MILLI_SCALE
#undef MINUTES
#undef MINUTE_SCALE
#undef MIN_VALUE
#undef NANOS
#undef NANOSECONDS
#undef NANO_SCALE
#undef SECONDS
#undef SECOND_SCALE

using $TimeUnitArray = $Array<::java::util::concurrent::TimeUnit>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Duration = ::java::time::Duration;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $Objects = ::java::util::Objects;
using $TimeUnit$1 = ::java::util::concurrent::TimeUnit$1;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _TimeUnit_FieldInfo_[] = {
	{"NANOSECONDS", "Ljava/util/concurrent/TimeUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TimeUnit, NANOSECONDS)},
	{"MICROSECONDS", "Ljava/util/concurrent/TimeUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TimeUnit, MICROSECONDS)},
	{"MILLISECONDS", "Ljava/util/concurrent/TimeUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TimeUnit, MILLISECONDS)},
	{"SECONDS", "Ljava/util/concurrent/TimeUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TimeUnit, SECONDS)},
	{"MINUTES", "Ljava/util/concurrent/TimeUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TimeUnit, MINUTES)},
	{"HOURS", "Ljava/util/concurrent/TimeUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TimeUnit, HOURS)},
	{"DAYS", "Ljava/util/concurrent/TimeUnit;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TimeUnit, DAYS)},
	{"$VALUES", "[Ljava/util/concurrent/TimeUnit;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TimeUnit, $VALUES)},
	{"NANO_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeUnit, NANO_SCALE)},
	{"MICRO_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeUnit, MICRO_SCALE)},
	{"MILLI_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeUnit, MILLI_SCALE)},
	{"SECOND_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeUnit, SECOND_SCALE)},
	{"MINUTE_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeUnit, MINUTE_SCALE)},
	{"HOUR_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeUnit, HOUR_SCALE)},
	{"DAY_SCALE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeUnit, DAY_SCALE)},
	{"scale", "J", nullptr, $PRIVATE | $FINAL, $field(TimeUnit, scale)},
	{"maxNanos", "J", nullptr, $PRIVATE | $FINAL, $field(TimeUnit, maxNanos)},
	{"maxMicros", "J", nullptr, $PRIVATE | $FINAL, $field(TimeUnit, maxMicros)},
	{"maxMillis", "J", nullptr, $PRIVATE | $FINAL, $field(TimeUnit, maxMillis)},
	{"maxSecs", "J", nullptr, $PRIVATE | $FINAL, $field(TimeUnit, maxSecs)},
	{"microRatio", "J", nullptr, $PRIVATE | $FINAL, $field(TimeUnit, microRatio)},
	{"milliRatio", "I", nullptr, $PRIVATE | $FINAL, $field(TimeUnit, milliRatio)},
	{"secRatio", "I", nullptr, $PRIVATE | $FINAL, $field(TimeUnit, secRatio)},
	{}
};

$MethodInfo _TimeUnit_MethodInfo_[] = {
	{"$values", "()[Ljava/util/concurrent/TimeUnit;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TimeUnitArray*(*)()>(&TimeUnit::$values))},
	{"<init>", "(Ljava/lang/String;IJ)V", "(J)V", $PRIVATE, $method(static_cast<void(TimeUnit::*)($String*,int32_t,int64_t)>(&TimeUnit::init$))},
	{"convert", "(JLjava/util/concurrent/TimeUnit;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(TimeUnit::*)(int64_t,TimeUnit*)>(&TimeUnit::convert))},
	{"convert", "(Ljava/time/Duration;)J", nullptr, $PUBLIC, $method(static_cast<int64_t(TimeUnit::*)($Duration*)>(&TimeUnit::convert))},
	{"cvt", "(JJJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t)>(&TimeUnit::cvt))},
	{"excessNanos", "(JJ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TimeUnit::*)(int64_t,int64_t)>(&TimeUnit::excessNanos))},
	{"of", "(Ljava/time/temporal/ChronoUnit;)Ljava/util/concurrent/TimeUnit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TimeUnit*(*)($ChronoUnit*)>(&TimeUnit::of))},
	{"sleep", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(TimeUnit::*)(int64_t)>(&TimeUnit::sleep)), "java.lang.InterruptedException"},
	{"timedJoin", "(Ljava/lang/Thread;J)V", nullptr, $PUBLIC, $method(static_cast<void(TimeUnit::*)($Thread*,int64_t)>(&TimeUnit::timedJoin)), "java.lang.InterruptedException"},
	{"timedWait", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC, $method(static_cast<void(TimeUnit::*)(Object$*,int64_t)>(&TimeUnit::timedWait)), "java.lang.InterruptedException"},
	{"toChronoUnit", "()Ljava/time/temporal/ChronoUnit;", nullptr, $PUBLIC, $method(static_cast<$ChronoUnit*(TimeUnit::*)()>(&TimeUnit::toChronoUnit))},
	{"toDays", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(TimeUnit::*)(int64_t)>(&TimeUnit::toDays))},
	{"toHours", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(TimeUnit::*)(int64_t)>(&TimeUnit::toHours))},
	{"toMicros", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(TimeUnit::*)(int64_t)>(&TimeUnit::toMicros))},
	{"toMillis", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(TimeUnit::*)(int64_t)>(&TimeUnit::toMillis))},
	{"toMinutes", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(TimeUnit::*)(int64_t)>(&TimeUnit::toMinutes))},
	{"toNanos", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(TimeUnit::*)(int64_t)>(&TimeUnit::toNanos))},
	{"toSeconds", "(J)J", nullptr, $PUBLIC, $method(static_cast<int64_t(TimeUnit::*)(int64_t)>(&TimeUnit::toSeconds))},
	{"valueOf", "(Ljava/lang/String;)Ljava/util/concurrent/TimeUnit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TimeUnit*(*)($String*)>(&TimeUnit::valueOf))},
	{"values", "()[Ljava/util/concurrent/TimeUnit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TimeUnitArray*(*)()>(&TimeUnit::values))},
	{}
};

$InnerClassInfo _TimeUnit_InnerClassesInfo_[] = {
	{"java.util.concurrent.TimeUnit$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TimeUnit_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.util.concurrent.TimeUnit",
	"java.lang.Enum",
	nullptr,
	_TimeUnit_FieldInfo_,
	_TimeUnit_MethodInfo_,
	"Ljava/lang/Enum<Ljava/util/concurrent/TimeUnit;>;",
	nullptr,
	_TimeUnit_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.concurrent.TimeUnit$1"
};

$Object* allocate$TimeUnit($Class* clazz) {
	return $of($alloc(TimeUnit));
}

TimeUnit* TimeUnit::NANOSECONDS = nullptr;
TimeUnit* TimeUnit::MICROSECONDS = nullptr;
TimeUnit* TimeUnit::MILLISECONDS = nullptr;
TimeUnit* TimeUnit::SECONDS = nullptr;
TimeUnit* TimeUnit::MINUTES = nullptr;
TimeUnit* TimeUnit::HOURS = nullptr;
TimeUnit* TimeUnit::DAYS = nullptr;
$TimeUnitArray* TimeUnit::$VALUES = nullptr;

$TimeUnitArray* TimeUnit::$values() {
	$init(TimeUnit);
	return $new($TimeUnitArray, {
		TimeUnit::NANOSECONDS,
		TimeUnit::MICROSECONDS,
		TimeUnit::MILLISECONDS,
		TimeUnit::SECONDS,
		TimeUnit::MINUTES,
		TimeUnit::HOURS,
		TimeUnit::DAYS
	});
}

$TimeUnitArray* TimeUnit::values() {
	$init(TimeUnit);
	return $cast($TimeUnitArray, TimeUnit::$VALUES->clone());
}

TimeUnit* TimeUnit::valueOf($String* name) {
	$init(TimeUnit);
	return $cast(TimeUnit, $Enum::valueOf(TimeUnit::class$, name));
}

void TimeUnit::init$($String* $enum$name, int32_t $enum$ordinal, int64_t s) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->scale = s;
	this->maxNanos = $div($Long::MAX_VALUE, s);
	int64_t ur = (s >= TimeUnit::MICRO_SCALE) ? ($div(s, TimeUnit::MICRO_SCALE)) : ($div(TimeUnit::MICRO_SCALE, s));
	this->microRatio = ur;
	this->maxMicros = $div($Long::MAX_VALUE, ur);
	int64_t mr = (s >= TimeUnit::MILLI_SCALE) ? ($div(s, TimeUnit::MILLI_SCALE)) : ($div(TimeUnit::MILLI_SCALE, s));
	this->milliRatio = (int32_t)mr;
	this->maxMillis = $div($Long::MAX_VALUE, mr);
	int64_t sr = (s >= TimeUnit::SECOND_SCALE) ? ($div(s, TimeUnit::SECOND_SCALE)) : ($div(TimeUnit::SECOND_SCALE, s));
	this->secRatio = (int32_t)sr;
	this->maxSecs = $div($Long::MAX_VALUE, sr);
}

int64_t TimeUnit::cvt(int64_t d, int64_t dst, int64_t src) {
	$init(TimeUnit);
	int64_t r = 0;
	int64_t m = 0;
	if (src == dst) {
		return d;
	} else if (src < dst) {
		return $div(d, ($div(dst, src)));
	} else if (d > (m = $div($Long::MAX_VALUE, (r = $div(src, dst))))) {
		return $Long::MAX_VALUE;
	} else if (d < -m) {
		return $Long::MIN_VALUE;
	} else {
		return d * r;
	}
}

int64_t TimeUnit::convert(int64_t sourceDuration, TimeUnit* sourceUnit) {
	$init($TimeUnit$1);
	switch ($nc($TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit)->get((this)->ordinal())) {
	case 1:
		{
			return $nc(sourceUnit)->toNanos(sourceDuration);
		}
	case 2:
		{
			return $nc(sourceUnit)->toMicros(sourceDuration);
		}
	case 3:
		{
			return $nc(sourceUnit)->toMillis(sourceDuration);
		}
	case 4:
		{
			return $nc(sourceUnit)->toSeconds(sourceDuration);
		}
	default:
		{
			return cvt(sourceDuration, this->scale, $nc(sourceUnit)->scale);
		}
	}
}

int64_t TimeUnit::convert($Duration* duration) {
	int64_t secs = $nc(duration)->getSeconds();
	int32_t nano = duration->getNano();
	if (secs < 0 && nano > 0) {
		++secs;
		nano -= (int32_t)TimeUnit::SECOND_SCALE;
	}
	int64_t s = 0;
	int64_t nanoVal = 0;
	if (this == TimeUnit::NANOSECONDS) {
		nanoVal = nano;
	} else if ((s = this->scale) < TimeUnit::SECOND_SCALE) {
		nanoVal = $div(nano, s);
	} else if (this == TimeUnit::SECONDS) {
		return secs;
	} else {
		return $div(secs, this->secRatio);
	}
	int64_t val = secs * this->secRatio + nanoVal;
	return ((secs < this->maxSecs && secs > -this->maxSecs) || (secs == this->maxSecs && val > 0) || (secs == -this->maxSecs && val < 0)) ? val : (secs > 0) ? $Long::MAX_VALUE : $Long::MIN_VALUE;
}

int64_t TimeUnit::toNanos(int64_t duration) {
	int64_t s = 0;
	int64_t m = 0;
	if ((s = this->scale) == TimeUnit::NANO_SCALE) {
		return duration;
	} else if (duration > (m = this->maxNanos)) {
		return $Long::MAX_VALUE;
	} else if (duration < -m) {
		return $Long::MIN_VALUE;
	} else {
		return duration * s;
	}
}

int64_t TimeUnit::toMicros(int64_t duration) {
	int64_t s = 0;
	int64_t m = 0;
	if ((s = this->scale) <= TimeUnit::MICRO_SCALE) {
		return (s == TimeUnit::MICRO_SCALE) ? duration : $div(duration, this->microRatio);
	} else if (duration > (m = this->maxMicros)) {
		return $Long::MAX_VALUE;
	} else if (duration < -m) {
		return $Long::MIN_VALUE;
	} else {
		return duration * this->microRatio;
	}
}

int64_t TimeUnit::toMillis(int64_t duration) {
	int64_t s = 0;
	int64_t m = 0;
	if ((s = this->scale) <= TimeUnit::MILLI_SCALE) {
		return (s == TimeUnit::MILLI_SCALE) ? duration : $div(duration, this->milliRatio);
	} else if (duration > (m = this->maxMillis)) {
		return $Long::MAX_VALUE;
	} else if (duration < -m) {
		return $Long::MIN_VALUE;
	} else {
		return duration * this->milliRatio;
	}
}

int64_t TimeUnit::toSeconds(int64_t duration) {
	int64_t s = 0;
	int64_t m = 0;
	if ((s = this->scale) <= TimeUnit::SECOND_SCALE) {
		return (s == TimeUnit::SECOND_SCALE) ? duration : $div(duration, this->secRatio);
	} else if (duration > (m = this->maxSecs)) {
		return $Long::MAX_VALUE;
	} else if (duration < -m) {
		return $Long::MIN_VALUE;
	} else {
		return duration * this->secRatio;
	}
}

int64_t TimeUnit::toMinutes(int64_t duration) {
	return cvt(duration, TimeUnit::MINUTE_SCALE, this->scale);
}

int64_t TimeUnit::toHours(int64_t duration) {
	return cvt(duration, TimeUnit::HOUR_SCALE, this->scale);
}

int64_t TimeUnit::toDays(int64_t duration) {
	return cvt(duration, TimeUnit::DAY_SCALE, this->scale);
}

int32_t TimeUnit::excessNanos(int64_t d, int64_t m) {
	int64_t s = 0;
	if ((s = this->scale) == TimeUnit::NANO_SCALE) {
		return (int32_t)(d - (m * TimeUnit::MILLI_SCALE));
	} else if (s == TimeUnit::MICRO_SCALE) {
		return (int32_t)((d * (int64_t)1000) - (m * TimeUnit::MILLI_SCALE));
	} else {
		return 0;
	}
}

void TimeUnit::timedWait(Object$* obj, int64_t timeout) {
	if (timeout > 0) {
		int64_t ms = toMillis(timeout);
		int32_t ns = excessNanos(timeout, ms);
		$nc($of(obj))->wait(ms, ns);
	}
}

void TimeUnit::timedJoin($Thread* thread, int64_t timeout) {
	if (timeout > 0) {
		int64_t ms = toMillis(timeout);
		int32_t ns = excessNanos(timeout, ms);
		$nc(thread)->join(ms, ns);
	}
}

void TimeUnit::sleep(int64_t timeout) {
	if (timeout > 0) {
		int64_t ms = toMillis(timeout);
		int32_t ns = excessNanos(timeout, ms);
		$Thread::sleep(ms, ns);
	}
}

$ChronoUnit* TimeUnit::toChronoUnit() {
	$init($TimeUnit$1);
	switch ($nc($TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit)->get((this)->ordinal())) {
	case 1:
		{
			$init($ChronoUnit);
			return $ChronoUnit::NANOS;
		}
	case 2:
		{
			$init($ChronoUnit);
			return $ChronoUnit::MICROS;
		}
	case 3:
		{
			$init($ChronoUnit);
			return $ChronoUnit::MILLIS;
		}
	case 4:
		{
			$init($ChronoUnit);
			return $ChronoUnit::SECONDS;
		}
	case 5:
		{
			$init($ChronoUnit);
			return $ChronoUnit::MINUTES;
		}
	case 6:
		{
			$init($ChronoUnit);
			return $ChronoUnit::HOURS;
		}
	case 7:
		{
			$init($ChronoUnit);
			return $ChronoUnit::DAYS;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

TimeUnit* TimeUnit::of($ChronoUnit* chronoUnit) {
	$init(TimeUnit);
	$init($TimeUnit$1);
	switch ($nc($TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit)->get($nc(($cast($ChronoUnit, $Objects::requireNonNull($of(chronoUnit), "chronoUnit"_s))))->ordinal())) {
	case 1:
		{
			return TimeUnit::NANOSECONDS;
		}
	case 2:
		{
			return TimeUnit::MICROSECONDS;
		}
	case 3:
		{
			return TimeUnit::MILLISECONDS;
		}
	case 4:
		{
			return TimeUnit::SECONDS;
		}
	case 5:
		{
			return TimeUnit::MINUTES;
		}
	case 6:
		{
			return TimeUnit::HOURS;
		}
	case 7:
		{
			return TimeUnit::DAYS;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"No TimeUnit equivalent for "_s, chronoUnit}));
		}
	}
}

void clinit$TimeUnit($Class* class$) {
	$assignStatic(TimeUnit::NANOSECONDS, $new(TimeUnit, "NANOSECONDS"_s, 0, TimeUnit::NANO_SCALE));
	$assignStatic(TimeUnit::MICROSECONDS, $new(TimeUnit, "MICROSECONDS"_s, 1, TimeUnit::MICRO_SCALE));
	$assignStatic(TimeUnit::MILLISECONDS, $new(TimeUnit, "MILLISECONDS"_s, 2, TimeUnit::MILLI_SCALE));
	$assignStatic(TimeUnit::SECONDS, $new(TimeUnit, "SECONDS"_s, 3, TimeUnit::SECOND_SCALE));
	$assignStatic(TimeUnit::MINUTES, $new(TimeUnit, "MINUTES"_s, 4, TimeUnit::MINUTE_SCALE));
	$assignStatic(TimeUnit::HOURS, $new(TimeUnit, "HOURS"_s, 5, TimeUnit::HOUR_SCALE));
	$assignStatic(TimeUnit::DAYS, $new(TimeUnit, "DAYS"_s, 6, TimeUnit::DAY_SCALE));
	$assignStatic(TimeUnit::$VALUES, TimeUnit::$values());
}

TimeUnit::TimeUnit() {
}

$Class* TimeUnit::load$($String* name, bool initialize) {
	$loadClass(TimeUnit, name, initialize, &_TimeUnit_ClassInfo_, clinit$TimeUnit, allocate$TimeUnit);
	return class$;
}

$Class* TimeUnit::class$ = nullptr;

		} // concurrent
	} // util
} // java