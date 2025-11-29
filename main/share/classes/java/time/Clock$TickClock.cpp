#include <java/time/Clock$TickClock.h>

#include <java/lang/Math.h>
#include <java/time/Clock.h>
#include <java/time/Duration.h>
#include <java/time/Instant.h>
#include <java/time/ZoneId.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Clock = ::java::time::Clock;
using $Duration = ::java::time::Duration;
using $Instant = ::java::time::Instant;
using $ZoneId = ::java::time::ZoneId;

namespace java {
	namespace time {

$FieldInfo _Clock$TickClock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Clock$TickClock, serialVersionUID)},
	{"baseClock", "Ljava/time/Clock;", nullptr, $PRIVATE | $FINAL, $field(Clock$TickClock, baseClock)},
	{"tickNanos", "J", nullptr, $PRIVATE | $FINAL, $field(Clock$TickClock, tickNanos)},
	{}
};

$MethodInfo _Clock$TickClock_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/time/Clock;J)V", nullptr, 0, $method(static_cast<void(Clock$TickClock::*)($Clock*,int64_t)>(&Clock$TickClock::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getZone", "()Ljava/time/ZoneId;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"instant", "()Ljava/time/Instant;", nullptr, $PUBLIC},
	{"millis", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Clock$TickClock_InnerClassesInfo_[] = {
	{"java.time.Clock$TickClock", "java.time.Clock", "TickClock", $STATIC | $FINAL},
	{}
};

$ClassInfo _Clock$TickClock_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.Clock$TickClock",
	"java.time.Clock",
	"java.io.Serializable",
	_Clock$TickClock_FieldInfo_,
	_Clock$TickClock_MethodInfo_,
	nullptr,
	nullptr,
	_Clock$TickClock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Clock"
};

$Object* allocate$Clock$TickClock($Class* clazz) {
	return $of($alloc(Clock$TickClock));
}

$Object* Clock$TickClock::clone() {
	 return this->$Clock::clone();
}

void Clock$TickClock::finalize() {
	this->$Clock::finalize();
}

void Clock$TickClock::init$($Clock* baseClock, int64_t tickNanos) {
	$Clock::init$();
	$set(this, baseClock, baseClock);
	this->tickNanos = tickNanos;
}

$ZoneId* Clock$TickClock::getZone() {
	return $nc(this->baseClock)->getZone();
}

$Clock* Clock$TickClock::withZone($ZoneId* zone) {
	$useLocalCurrentObjectStackCache();
	if ($nc(zone)->equals($($nc(this->baseClock)->getZone()))) {
		return this;
	}
	return $new(Clock$TickClock, $($nc(this->baseClock)->withZone(zone)), this->tickNanos);
}

int64_t Clock$TickClock::millis() {
	int64_t millis = $nc(this->baseClock)->millis();
	return millis - $Math::floorMod(millis, $div(this->tickNanos, (int64_t)1000000));
}

$Instant* Clock$TickClock::instant() {
	if ((this->tickNanos % 0x000F4240) == 0) {
		int64_t millis = $nc(this->baseClock)->millis();
		return $Instant::ofEpochMilli(millis - $Math::floorMod(millis, $div(this->tickNanos, (int64_t)1000000)));
	}
	$var($Instant, instant, $nc(this->baseClock)->instant());
	int64_t nanos = $nc(instant)->getNano();
	int64_t adjust = $Math::floorMod(nanos, this->tickNanos);
	return instant->minusNanos(adjust);
}

bool Clock$TickClock::equals(Object$* obj) {
	$var(Clock$TickClock, other, nullptr);
	bool var$2 = $instanceOf(Clock$TickClock, obj);
	if (var$2) {
		$assign(other, $cast(Clock$TickClock, obj));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && this->tickNanos == $nc(other)->tickNanos;
	return var$0 && $nc(this->baseClock)->equals(other->baseClock);
}

int32_t Clock$TickClock::hashCode() {
	return $nc(this->baseClock)->hashCode() ^ ((int32_t)(this->tickNanos ^ ((int64_t)((uint64_t)this->tickNanos >> 32))));
}

$String* Clock$TickClock::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"TickClock["_s, this->baseClock, ","_s}));
	$var($String, var$0, $$concat(var$1, $($Duration::ofNanos(this->tickNanos))));
	return $concat(var$0, "]");
}

Clock$TickClock::Clock$TickClock() {
}

$Class* Clock$TickClock::load$($String* name, bool initialize) {
	$loadClass(Clock$TickClock, name, initialize, &_Clock$TickClock_ClassInfo_, allocate$Clock$TickClock);
	return class$;
}

$Class* Clock$TickClock::class$ = nullptr;

	} // time
} // java