#include <java/time/Clock.h>

#include <java/lang/InternalError.h>
#include <java/time/Clock$FixedClock.h>
#include <java/time/Clock$OffsetClock.h>
#include <java/time/Clock$SystemClock.h>
#include <java/time/Clock$TickClock.h>
#include <java/time/Duration.h>
#include <java/time/Instant.h>
#include <java/time/InstantSource.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <java/util/Objects.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef OFFSET_SEED
#undef UTC
#undef ZERO

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Clock$FixedClock = ::java::time::Clock$FixedClock;
using $Clock$OffsetClock = ::java::time::Clock$OffsetClock;
using $Clock$SystemClock = ::java::time::Clock$SystemClock;
using $Clock$TickClock = ::java::time::Clock$TickClock;
using $Duration = ::java::time::Duration;
using $Instant = ::java::time::Instant;
using $InstantSource = ::java::time::InstantSource;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;
using $Objects = ::java::util::Objects;
using $VM = ::jdk::internal::misc::VM;

namespace java {
	namespace time {

$FieldInfo _Clock_FieldInfo_[] = {
	{"OFFSET_SEED", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Clock, OFFSET_SEED)},
	{"offset", "J", nullptr, $PRIVATE | $STATIC, $staticField(Clock, offset$)},
	{}
};

$MethodInfo _Clock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(Clock, init$, void)},
	{"currentInstant", "()Ljava/time/Instant;", nullptr, $STATIC, $staticMethod(Clock, currentInstant, $Instant*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Clock, equals, bool, Object$*)},
	{"fixed", "(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC | $STATIC, $staticMethod(Clock, fixed, Clock*, $Instant*, $ZoneId*)},
	{"getZone", "()Ljava/time/ZoneId;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clock, getZone, $ZoneId*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Clock, hashCode, int32_t)},
	{"instant", "()Ljava/time/Instant;", nullptr, $PUBLIC | $ABSTRACT},
	{"millis", "()J", nullptr, $PUBLIC, $virtualMethod(Clock, millis, int64_t)},
	{"offset", "(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;", nullptr, $PUBLIC | $STATIC, $staticMethod(Clock, offset, Clock*, Clock*, $Duration*)},
	{"system", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC | $STATIC, $staticMethod(Clock, system, Clock*, $ZoneId*)},
	{"systemDefaultZone", "()Ljava/time/Clock;", nullptr, $PUBLIC | $STATIC, $staticMethod(Clock, systemDefaultZone, Clock*)},
	{"systemUTC", "()Ljava/time/Clock;", nullptr, $PUBLIC | $STATIC, $staticMethod(Clock, systemUTC, Clock*)},
	{"tick", "(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;", nullptr, $PUBLIC | $STATIC, $staticMethod(Clock, tick, Clock*, Clock*, $Duration*)},
	{"tickMillis", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC | $STATIC, $staticMethod(Clock, tickMillis, Clock*, $ZoneId*)},
	{"tickMinutes", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC | $STATIC, $staticMethod(Clock, tickMinutes, Clock*, $ZoneId*)},
	{"tickSeconds", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC | $STATIC, $staticMethod(Clock, tickSeconds, Clock*, $ZoneId*)},
	{"withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clock, withZone, Clock*, $ZoneId*)},
	{}
};

$InnerClassInfo _Clock_InnerClassesInfo_[] = {
	{"java.time.Clock$SourceClock", "java.time.Clock", "SourceClock", $STATIC | $FINAL},
	{"java.time.Clock$TickClock", "java.time.Clock", "TickClock", $STATIC | $FINAL},
	{"java.time.Clock$OffsetClock", "java.time.Clock", "OffsetClock", $STATIC | $FINAL},
	{"java.time.Clock$FixedClock", "java.time.Clock", "FixedClock", $STATIC | $FINAL},
	{"java.time.Clock$SystemClock", "java.time.Clock", "SystemClock", $STATIC | $FINAL},
	{"java.time.Clock$SystemInstantSource", "java.time.Clock", "SystemInstantSource", $STATIC | $FINAL},
	{}
};

$ClassInfo _Clock_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.time.Clock",
	"java.lang.Object",
	"java.time.InstantSource",
	_Clock_FieldInfo_,
	_Clock_MethodInfo_,
	nullptr,
	nullptr,
	_Clock_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.time.Clock$SourceClock,java.time.Clock$TickClock,java.time.Clock$OffsetClock,java.time.Clock$FixedClock,java.time.Clock$SystemClock,java.time.Clock$SystemInstantSource"
};

$Object* allocate$Clock($Class* clazz) {
	return $of($alloc(Clock));
}

int64_t Clock::OFFSET_SEED = 0;
int64_t Clock::offset$ = 0;

Clock* Clock::systemUTC() {
	$init(Clock);
	$init($Clock$SystemClock);
	return $Clock$SystemClock::UTC;
}

Clock* Clock::systemDefaultZone() {
	$init(Clock);
	return $new($Clock$SystemClock, $($ZoneId::systemDefault()));
}

Clock* Clock::system($ZoneId* zone) {
	$init(Clock);
	$Objects::requireNonNull($of(zone), "zone"_s);
	$init($ZoneOffset);
	if ($equals(zone, $ZoneOffset::UTC)) {
		$init($Clock$SystemClock);
		return $Clock$SystemClock::UTC;
	}
	return $new($Clock$SystemClock, zone);
}

Clock* Clock::tickMillis($ZoneId* zone) {
	$init(Clock);
	return $new($Clock$TickClock, $(system(zone)), 1000000);
}

Clock* Clock::tickSeconds($ZoneId* zone) {
	$init(Clock);
	return $new($Clock$TickClock, $(system(zone)), 1000000000);
}

Clock* Clock::tickMinutes($ZoneId* zone) {
	$init(Clock);
	return $new($Clock$TickClock, $(system(zone)), 0x0000000DF8475800);
}

Clock* Clock::tick(Clock* baseClock, $Duration* tickDuration) {
	$init(Clock);
	$Objects::requireNonNull($of(baseClock), "baseClock"_s);
	$Objects::requireNonNull($of(tickDuration), "tickDuration"_s);
	if ($nc(tickDuration)->isNegative()) {
		$throwNew($IllegalArgumentException, "Tick duration must not be negative"_s);
	}
	int64_t tickNanos = $nc(tickDuration)->toNanos();
	if (tickNanos % 0x000F4240 == 0) {
	} else if ($mod(0x3B9ACA00, tickNanos) == 0) {
	} else {
		$throwNew($IllegalArgumentException, "Invalid tick duration"_s);
	}
	if (tickNanos <= 1) {
		return baseClock;
	}
	return $new($Clock$TickClock, baseClock, tickNanos);
}

Clock* Clock::fixed($Instant* fixedInstant, $ZoneId* zone) {
	$init(Clock);
	$Objects::requireNonNull($of(fixedInstant), "fixedInstant"_s);
	$Objects::requireNonNull($of(zone), "zone"_s);
	return $new($Clock$FixedClock, fixedInstant, zone);
}

Clock* Clock::offset(Clock* baseClock, $Duration* offsetDuration) {
	$init(Clock);
	$Objects::requireNonNull($of(baseClock), "baseClock"_s);
	$Objects::requireNonNull($of(offsetDuration), "offsetDuration"_s);
	$init($Duration);
	if ($nc(offsetDuration)->equals($Duration::ZERO)) {
		return baseClock;
	}
	return $new($Clock$OffsetClock, baseClock, offsetDuration);
}

void Clock::init$() {
}

int64_t Clock::millis() {
	return $nc($(instant()))->toEpochMilli();
}

bool Clock::equals(Object$* obj) {
	return $InstantSource::equals(obj);
}

int32_t Clock::hashCode() {
	return $InstantSource::hashCode();
}

$Instant* Clock::currentInstant() {
	$init(Clock);
	$useLocalCurrentObjectStackCache();
	int64_t localOffset = Clock::offset$;
	int64_t adjustment = $VM::getNanoTimeAdjustment(localOffset);
	if (adjustment == -1) {
		localOffset = $System::currentTimeMillis() / 1000 - 1024;
		adjustment = $VM::getNanoTimeAdjustment(localOffset);
		if (adjustment == -1) {
			$throwNew($InternalError, $$str({"Offset "_s, $$str(localOffset), " is not in range"_s}));
		} else {
			Clock::offset$ = localOffset;
		}
	}
	return $Instant::ofEpochSecond(localOffset, adjustment);
}

void clinit$Clock($Class* class$) {
	Clock::OFFSET_SEED = $System::currentTimeMillis() / 1000 - 1024;
	Clock::offset$ = Clock::OFFSET_SEED;
}

Clock::Clock() {
}

$Class* Clock::load$($String* name, bool initialize) {
	$loadClass(Clock, name, initialize, &_Clock_ClassInfo_, clinit$Clock, allocate$Clock);
	return class$;
}

$Class* Clock::class$ = nullptr;

	} // time
} // java