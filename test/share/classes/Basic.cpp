#include <Basic.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/time/Instant.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/Random.h>
#include <java/util/Set.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef MILLISECONDS
#undef MICROSECONDS
#undef MAX
#undef SECONDS
#undef DAYS
#undef NANOSECONDS
#undef MAX_VALUE
#undef MIN_VALUE
#undef N
#undef MIN
#undef MAX_SECOND
#undef HOURS
#undef MINUTES

using $TimeUnitArray = $Array<::java::util::concurrent::TimeUnit>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $Instant = ::java::time::Instant;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $Random = ::java::util::Random;
using $Set = ::java::util::Set;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$FieldInfo _Basic_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, $STATIC | $FINAL, $staticField(Basic, rand)},
	{}
};

$MethodInfo _Basic_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Basic::*)()>(&Basic::init$))},
	{"cmp", "(JLjava/util/concurrent/TimeUnit;JLjava/util/concurrent/TimeUnit;I)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$TimeUnit*,int64_t,$TimeUnit*,int32_t)>(&Basic::cmp))},
	{"cmp", "(Ljava/time/Instant;JLjava/util/concurrent/TimeUnit;I)V", nullptr, $STATIC, $method(static_cast<void(*)($Instant*,int64_t,$TimeUnit*,int32_t)>(&Basic::cmp))},
	{"eq", "(JLjava/util/concurrent/TimeUnit;JLjava/util/concurrent/TimeUnit;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$TimeUnit*,int64_t,$TimeUnit*)>(&Basic::eq))},
	{"eq", "(Ljava/time/Instant;JLjava/util/concurrent/TimeUnit;)V", nullptr, $STATIC, $method(static_cast<void(*)($Instant*,int64_t,$TimeUnit*)>(&Basic::eq))},
	{"eqTime", "(JLjava/util/concurrent/TimeUnit;Ljava/time/Instant;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$TimeUnit*,$Instant*)>(&Basic::eqTime))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Basic::main))},
	{"neq", "(JLjava/util/concurrent/TimeUnit;JLjava/util/concurrent/TimeUnit;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$TimeUnit*,int64_t,$TimeUnit*)>(&Basic::neq))},
	{"neq", "(Ljava/time/Instant;JLjava/util/concurrent/TimeUnit;)V", nullptr, $STATIC, $method(static_cast<void(*)($Instant*,int64_t,$TimeUnit*)>(&Basic::neq))},
	{"overflow", "(JJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&Basic::overflow))},
	{"to", "(JLjava/util/concurrent/TimeUnit;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$TimeUnit*)>(&Basic::to))},
	{"ts", "(JLjava/util/concurrent/TimeUnit;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,$TimeUnit*,$String*)>(&Basic::ts))},
	{"ts", "(Ljava/time/Instant;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($Instant*,$String*)>(&Basic::ts))},
	{}
};

$ClassInfo _Basic_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Basic",
	"java.lang.Object",
	nullptr,
	_Basic_FieldInfo_,
	_Basic_MethodInfo_
};

$Object* allocate$Basic($Class* clazz) {
	return $of($alloc(Basic));
}

$Random* Basic::rand = nullptr;

void Basic::init$() {
}

void Basic::main($StringArray* args) {
	$init(Basic);
	int64_t now = $System::currentTimeMillis();
	$init($TimeUnit);
	int64_t tomorrowInDays = $TimeUnit::DAYS->convert(now, $TimeUnit::MILLISECONDS) + 1;
	int64_t yesterdayInDays = $TimeUnit::DAYS->convert(now, $TimeUnit::MILLISECONDS) - 1;
	$var($Instant, nowInstant, $Instant::ofEpochMilli(now));
	eq(now, $TimeUnit::MILLISECONDS, now, $TimeUnit::MILLISECONDS);
	eq(now, $TimeUnit::MILLISECONDS, now * (int64_t)1000, $TimeUnit::MICROSECONDS);
	neq(now, $TimeUnit::MILLISECONDS, 0, $TimeUnit::MILLISECONDS);
	neq(now, $TimeUnit::MILLISECONDS, 0, $TimeUnit::MICROSECONDS);
	eq(nowInstant, now, $TimeUnit::MILLISECONDS);
	eq(nowInstant, now * (int64_t)1000, $TimeUnit::MICROSECONDS);
	neq(nowInstant, 0, $TimeUnit::MILLISECONDS);
	neq(nowInstant, 0, $TimeUnit::MICROSECONDS);
	cmp(now, $TimeUnit::MILLISECONDS, now, $TimeUnit::MILLISECONDS, 0);
	cmp(now, $TimeUnit::MILLISECONDS, now * (int64_t)1000, $TimeUnit::MICROSECONDS, 0);
	cmp(now, $TimeUnit::MILLISECONDS, now - 1234, $TimeUnit::MILLISECONDS, 1);
	cmp(now, $TimeUnit::MILLISECONDS, now + 1234, $TimeUnit::MILLISECONDS, -1);
	cmp(tomorrowInDays, $TimeUnit::DAYS, now, $TimeUnit::MILLISECONDS, 1);
	cmp(now, $TimeUnit::MILLISECONDS, tomorrowInDays, $TimeUnit::DAYS, -1);
	cmp(yesterdayInDays, $TimeUnit::DAYS, now, $TimeUnit::MILLISECONDS, -1);
	cmp(now, $TimeUnit::MILLISECONDS, yesterdayInDays, $TimeUnit::DAYS, 1);
	cmp(yesterdayInDays, $TimeUnit::DAYS, now, $TimeUnit::MILLISECONDS, -1);
	cmp($Long::MAX_VALUE, $TimeUnit::DAYS, $Long::MAX_VALUE, $TimeUnit::NANOSECONDS, 1);
	cmp($Long::MAX_VALUE, $TimeUnit::DAYS, $Long::MIN_VALUE, $TimeUnit::NANOSECONDS, 1);
	cmp($Long::MIN_VALUE, $TimeUnit::DAYS, $Long::MIN_VALUE, $TimeUnit::NANOSECONDS, -1);
	cmp($Long::MIN_VALUE, $TimeUnit::DAYS, $Long::MAX_VALUE, $TimeUnit::NANOSECONDS, -1);
	cmp($Instant::MIN, $Long::MIN_VALUE, $TimeUnit::DAYS, 1);
	cmp($Instant::MIN, $Long::MIN_VALUE, $TimeUnit::HOURS, 1);
	cmp($Instant::MIN, $Long::MIN_VALUE, $TimeUnit::MINUTES, 1);
	cmp($Instant::MIN, $Long::MIN_VALUE, $TimeUnit::SECONDS, 1);
	cmp($Instant::MIN, $nc($Instant::MIN)->getEpochSecond() - 1, $TimeUnit::SECONDS, 1);
	cmp($Instant::MIN, $nc($Instant::MIN)->getEpochSecond() - 100, $TimeUnit::SECONDS, 1);
	cmp($Instant::MIN, $nc($Instant::MIN)->getEpochSecond(), $TimeUnit::SECONDS, 0);
	cmp($Instant::MAX, $Long::MAX_VALUE, $TimeUnit::DAYS, -1);
	cmp($Instant::MAX, $Long::MAX_VALUE, $TimeUnit::HOURS, -1);
	cmp($Instant::MAX, $Long::MAX_VALUE, $TimeUnit::MINUTES, -1);
	cmp($Instant::MAX, $Long::MAX_VALUE, $TimeUnit::SECONDS, -1);
	cmp($Instant::MAX, $nc($Instant::MAX)->getEpochSecond() + 1, $TimeUnit::SECONDS, -1);
	cmp($Instant::MAX, $nc($Instant::MAX)->getEpochSecond() + 100, $TimeUnit::SECONDS, -1);
	cmp($Instant::MAX, $nc($Instant::MAX)->getEpochSecond(), $TimeUnit::SECONDS, 0);
	cmp(nowInstant, now, $TimeUnit::MILLISECONDS, 0);
	cmp(nowInstant, now * (int64_t)1000, $TimeUnit::MICROSECONDS, 0);
	cmp(nowInstant, now - 1234, $TimeUnit::MILLISECONDS, 1);
	cmp(nowInstant, now + 1234, $TimeUnit::MILLISECONDS, -1);
	cmp(nowInstant, tomorrowInDays, $TimeUnit::DAYS, -1);
	cmp(nowInstant, yesterdayInDays, $TimeUnit::DAYS, 1);
	to($TimeUnit::MILLISECONDS->convert(1, $TimeUnit::DAYS) - 1, $TimeUnit::MILLISECONDS);
	to($TimeUnit::MILLISECONDS->convert(1, $TimeUnit::DAYS) + 0, $TimeUnit::MILLISECONDS);
	to($TimeUnit::MILLISECONDS->convert(1, $TimeUnit::DAYS) + 1, $TimeUnit::MILLISECONDS);
	to(1, $TimeUnit::MILLISECONDS);
	to(0, $TimeUnit::MILLISECONDS);
	to(1, $TimeUnit::MILLISECONDS);
	to($TimeUnit::MILLISECONDS->convert(-1, $TimeUnit::DAYS) - 1, $TimeUnit::MILLISECONDS);
	to($TimeUnit::MILLISECONDS->convert(-1, $TimeUnit::DAYS) + 0, $TimeUnit::MILLISECONDS);
	to($TimeUnit::MILLISECONDS->convert(-1, $TimeUnit::DAYS) + 1, $TimeUnit::MILLISECONDS);
	{
		$var($TimeUnitArray, arr$, $TimeUnit::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$TimeUnit* unit = arr$->get(i$);
			{
				for (int32_t i = 0; i < 100; ++i) {
					to($nc(Basic::rand)->nextLong(), unit);
				}
				to($Long::MIN_VALUE, unit);
				to($Long::MAX_VALUE, unit);
			}
		}
	}
	int32_t N = 1000;
	{
		$var($Iterator, i$, $nc($($EnumSet::allOf($TimeUnit::class$)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$TimeUnit* unit = $cast($TimeUnit, i$->next());
			{
				for (int32_t i = 0; i < N; ++i) {
					int64_t value = $nc(Basic::rand)->nextLong();
					$var($FileTime, ft, $FileTime::from(value, unit));
					$var($Instant, instant, $nc(ft)->toInstant());
					if (instant != $Instant::MIN && instant != $Instant::MAX) {
						eqTime(value, unit, instant);
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($EnumSet::allOf($TimeUnit::class$)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$TimeUnit* unit = $cast($TimeUnit, i$->next());
			{
				int64_t value = $Long::MIN_VALUE;
				$var($FileTime, ft, $FileTime::from(value, unit));
				$var($Instant, instant, $nc(ft)->toInstant());
				if ($nc(unit)->compareTo(static_cast<$Enum*>($TimeUnit::SECONDS)) < 0) {
					eqTime(value, unit, instant);
				} else {
					if (!$nc(instant)->equals($Instant::MIN)) {
						$throwNew($RuntimeException, "should overflow to MIN"_s);
					}
				}
				value = $Long::MAX_VALUE;
				$assign(ft, $FileTime::from(value, unit));
				$assign(instant, ft->toInstant());
				if ($nc(unit)->compareTo(static_cast<$Enum*>($TimeUnit::SECONDS)) < 0) {
					eqTime(value, unit, instant);
				} else {
					if (!$nc(instant)->equals($Instant::MAX)) {
						$throwNew($RuntimeException, "should overflow to MAX"_s);
					}
				}
			}
		}
	}
	int64_t MAX_SECOND = 0x00701CD2FA9578FF;
	for (int32_t i = 0; i < N; ++i) {
		int64_t v = $nc(Basic::rand)->nextLong();
		int64_t secs = $mod(v, MAX_SECOND);
		$var($Instant, instant, $Instant::ofEpochSecond(secs, $nc(Basic::rand)->nextInt(0x3B9ACA00)));
		$var($FileTime, ft, $FileTime::from(instant));
		bool var$0 = !$nc($($nc(ft)->toInstant()))->equals(instant);
		if (var$0 || $nc(ft)->to($TimeUnit::SECONDS) != secs) {
			$throwNew($RuntimeException, "from(Instant) failed"_s);
		}
		int64_t millis = v;
		$assign(instant, $Instant::ofEpochMilli(millis));
		$assign(ft, $FileTime::from(instant));
		bool var$1 = !$nc($($nc(ft)->toInstant()))->equals(instant);
		if (!var$1) {
			int64_t var$2 = $nc(ft)->toMillis();
			var$1 = var$2 != $nc(instant)->toEpochMilli();
		}
		if (var$1) {
			$throwNew($RuntimeException, "from(Instant) failed"_s);
		}
		int64_t nanos = v;
		$assign(ft, $FileTime::from(nanos, $TimeUnit::NANOSECONDS));
		secs = nanos / 0x3B9ACA00;
		nanos = nanos % 0x3B9ACA00;
		$assign(instant, $Instant::ofEpochSecond(secs, nanos));
		if (!$nc(ft)->equals($($FileTime::from(instant)))) {
			$throwNew($RuntimeException, "from(Instant) failed"_s);
		}
	}
	ts(1, $TimeUnit::DAYS, "1970-01-02T00:00:00Z"_s);
	ts(1, $TimeUnit::HOURS, "1970-01-01T01:00:00Z"_s);
	ts(1, $TimeUnit::MINUTES, "1970-01-01T00:01:00Z"_s);
	ts(1, $TimeUnit::SECONDS, "1970-01-01T00:00:01Z"_s);
	ts(1, $TimeUnit::MILLISECONDS, "1970-01-01T00:00:00.001Z"_s);
	ts(1, $TimeUnit::MICROSECONDS, "1970-01-01T00:00:00.000001Z"_s);
	ts(1, $TimeUnit::NANOSECONDS, "1970-01-01T00:00:00.000000001Z"_s);
	ts(999999999, $TimeUnit::NANOSECONDS, "1970-01-01T00:00:00.999999999Z"_s);
	ts(0x00000002540BE3FF, $TimeUnit::NANOSECONDS, "1970-01-01T00:00:09.999999999Z"_s);
	ts(-1, $TimeUnit::DAYS, "1969-12-31T00:00:00Z"_s);
	ts(-1, $TimeUnit::HOURS, "1969-12-31T23:00:00Z"_s);
	ts(-1, $TimeUnit::MINUTES, "1969-12-31T23:59:00Z"_s);
	ts(-1, $TimeUnit::SECONDS, "1969-12-31T23:59:59Z"_s);
	ts(-1, $TimeUnit::MILLISECONDS, "1969-12-31T23:59:59.999Z"_s);
	ts(-1, $TimeUnit::MICROSECONDS, "1969-12-31T23:59:59.999999Z"_s);
	ts(-1, $TimeUnit::NANOSECONDS, "1969-12-31T23:59:59.999999999Z"_s);
	ts(-999999999, $TimeUnit::NANOSECONDS, "1969-12-31T23:59:59.000000001Z"_s);
	ts(0xFFFFFFFDABF41C01, $TimeUnit::NANOSECONDS, "1969-12-31T23:59:50.000000001Z"_s);
	ts(0xFFFFC77CEDD32801, $TimeUnit::MILLISECONDS, "0001-01-01T00:00:00.001Z"_s);
	ts(0xFFFFC77CEDD32800, $TimeUnit::MILLISECONDS, "0001-01-01T00:00:00Z"_s);
	ts(0xFFFFC77CEDD327FF, $TimeUnit::MILLISECONDS, "-0001-12-31T23:59:59.999Z"_s);
	ts(0x0000E677D21FDBFF, $TimeUnit::MILLISECONDS, "9999-12-31T23:59:59.999Z"_s);
	ts(0xFFFEA8895C1143FF, $TimeUnit::MILLISECONDS, "-9999-12-31T23:59:59.999Z"_s);
	ts(0xFFD6A169B779C000, $TimeUnit::MICROSECONDS, "1601-01-01T00:00:00Z"_s);
	ts($Instant::MIN, "-1000000001-01-01T00:00:00Z"_s);
	ts($Instant::MAX, "1000000000-12-31T23:59:59.999999999Z"_s);
	try {
		$FileTime::from(0, nullptr);
		$throwNew($RuntimeException, "NullPointerException expected"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	try {
		$FileTime::from(nullptr);
		$throwNew($RuntimeException, "NullPointerException expected"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	$var($FileTime, time, $FileTime::fromMillis(now));
	if ($nc(time)->equals(nullptr)) {
		$throwNew($RuntimeException, "should not be equal to null"_s);
	}
	try {
		$nc(time)->compareTo(($FileTime*)nullptr);
		$throwNew($RuntimeException, "NullPointerException expected"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
	overflow($Long::MAX_VALUE, $nc($($FileTime::from($Instant::MAX)))->toMillis());
	overflow($Long::MAX_VALUE, $nc($($FileTime::from($($Instant::ofEpochSecond($Long::MAX_VALUE / 1000 + 1)))))->toMillis());
	overflow($Long::MIN_VALUE, $nc($($FileTime::from($Instant::MIN)))->toMillis());
	overflow($Long::MIN_VALUE, $nc($($FileTime::from($($Instant::ofEpochSecond($Long::MIN_VALUE / 1000 - 1)))))->toMillis());
	overflow($Long::MAX_VALUE, $nc($($FileTime::from($($Instant::ofEpochSecond($Long::MAX_VALUE / 1000 + 1)))))->to($TimeUnit::MILLISECONDS));
	overflow($Long::MAX_VALUE, $nc($($FileTime::from($($Instant::ofEpochSecond($Long::MAX_VALUE / 1000, $TimeUnit::MILLISECONDS->toNanos(1000))))))->to($TimeUnit::MILLISECONDS));
	overflow($Long::MIN_VALUE, $nc($($FileTime::from($($Instant::ofEpochSecond($Long::MIN_VALUE / 1000 - 1)))))->to($TimeUnit::MILLISECONDS));
	overflow($Long::MIN_VALUE, $nc($($FileTime::from($($Instant::ofEpochSecond($Long::MIN_VALUE / 1000, -$TimeUnit::MILLISECONDS->toNanos(1))))))->to($TimeUnit::MILLISECONDS));
}

void Basic::overflow(int64_t minmax, int64_t v) {
	$init(Basic);
	if (v != minmax) {
		$throwNew($RuntimeException, "saturates to Long.MIN/MAX_VALUE expected"_s);
	}
}

void Basic::cmp(int64_t v1, $TimeUnit* u1, int64_t v2, $TimeUnit* u2, int32_t expected) {
	$init(Basic);
	int32_t result = $nc($($FileTime::from(v1, u1)))->compareTo($($FileTime::from(v2, u2)));
	if (result != expected) {
		$throwNew($RuntimeException, "unexpected order"_s);
	}
}

void Basic::cmp($Instant* ins, int64_t v2, $TimeUnit* u2, int32_t expected) {
	$init(Basic);
	int32_t result = $nc($($FileTime::from(ins)))->compareTo($($FileTime::from(v2, u2)));
	if (result != expected) {
		$throwNew($RuntimeException, "unexpected order"_s);
	}
}

void Basic::eq(int64_t v1, $TimeUnit* u1, int64_t v2, $TimeUnit* u2) {
	$init(Basic);
	$var($FileTime, t1, $FileTime::from(v1, u1));
	$var($FileTime, t2, $FileTime::from(v2, u2));
	if (!$nc(t1)->equals(t2)) {
		$throwNew($RuntimeException, "not equal"_s);
	}
	int32_t var$0 = $nc(t1)->hashCode();
	if (var$0 != $nc(t2)->hashCode()) {
		$throwNew($RuntimeException, "hashCodes should be equal"_s);
	}
}

void Basic::eq($Instant* ins, int64_t v2, $TimeUnit* u2) {
	$init(Basic);
	$var($FileTime, t1, $FileTime::from(ins));
	$var($FileTime, t2, $FileTime::from(v2, u2));
	if (!$nc(t1)->equals(t2)) {
		$throwNew($RuntimeException, "not equal"_s);
	}
	int32_t var$0 = $nc(t1)->hashCode();
	if (var$0 != $nc(t2)->hashCode()) {
		$throwNew($RuntimeException, "hashCodes should be equal"_s);
	}
}

void Basic::eqTime(int64_t value, $TimeUnit* unit, $Instant* instant) {
	$init(Basic);
	$init($TimeUnit);
	int64_t secs = $TimeUnit::SECONDS->convert(value, unit);
	int64_t nanos = $TimeUnit::NANOSECONDS->convert(value - $nc(unit)->convert(secs, $TimeUnit::SECONDS), unit);
	if (nanos < 0) {
		secs -= 1;
		nanos += 0x3B9ACA00;
	}
	bool var$0 = secs != $nc(instant)->getEpochSecond();
	if (var$0 || (int32_t)nanos != $nc(instant)->getNano()) {
		$init($System);
		$nc($System::err)->println($$str({" ins="_s, instant}));
		$throwNew($RuntimeException, "ft and instant are not the same time point"_s);
	}
}

void Basic::neq(int64_t v1, $TimeUnit* u1, int64_t v2, $TimeUnit* u2) {
	$init(Basic);
	$var($FileTime, t1, $FileTime::from(v1, u1));
	$var($FileTime, t2, $FileTime::from(v2, u2));
	if ($nc(t1)->equals(t2)) {
		$throwNew($RuntimeException, "should not be equal"_s);
	}
}

void Basic::neq($Instant* ins, int64_t v2, $TimeUnit* u2) {
	$init(Basic);
	$var($FileTime, t1, $FileTime::from(ins));
	$var($FileTime, t2, $FileTime::from(v2, u2));
	if ($nc(t1)->equals(t2)) {
		$throwNew($RuntimeException, "should not be equal"_s);
	}
}

void Basic::to(int64_t v, $TimeUnit* unit) {
	$init(Basic);
	$var($FileTime, t, $FileTime::from(v, unit));
	{
		$var($TimeUnitArray, arr$, $TimeUnit::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$TimeUnit* u = arr$->get(i$);
			{
				int64_t result = $nc(t)->to(u);
				int64_t expected = $nc(u)->convert(v, unit);
				if (result != expected) {
					$throwNew($RuntimeException, "unexpected result"_s);
				}
			}
		}
	}
}

void Basic::ts(int64_t v, $TimeUnit* unit, $String* expected) {
	$init(Basic);
	$var($String, result, $nc($($FileTime::from(v, unit)))->toString());
	if (!$nc(result)->equals(expected)) {
		$init($System);
		$nc($System::err)->format("FileTime.from(%d, %s).toString() failed\n"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(v))),
			$of(unit)
		}));
		$nc($System::err)->format("Expected: %s\n"_s, $$new($ObjectArray, {$of(expected)}));
		$nc($System::err)->format("     Got: %s\n"_s, $$new($ObjectArray, {$of(result)}));
		$throwNew($RuntimeException);
	}
}

void Basic::ts($Instant* instant, $String* expected) {
	$init(Basic);
	$var($String, result, $nc($($FileTime::from(instant)))->toString());
	if (!$nc(result)->equals(expected)) {
		$init($System);
		$nc($System::err)->format("FileTime.from(%s).toString() failed\n"_s, $$new($ObjectArray, {$of(instant)}));
		$nc($System::err)->format("Expected: %s\n"_s, $$new($ObjectArray, {$of(expected)}));
		$nc($System::err)->format("     Got: %s\n"_s, $$new($ObjectArray, {$of(result)}));
		$throwNew($RuntimeException);
	}
}

void clinit$Basic($Class* class$) {
	$assignStatic(Basic::rand, $new($Random));
}

Basic::Basic() {
}

$Class* Basic::load$($String* name, bool initialize) {
	$loadClass(Basic, name, initialize, &_Basic_ClassInfo_, clinit$Basic, allocate$Basic);
	return class$;
}

$Class* Basic::class$ = nullptr;