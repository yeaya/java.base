#include <java/time/Clock$OffsetClock.h>

#include <java/lang/Math.h>
#include <java/time/Clock.h>
#include <java/time/Duration.h>
#include <java/time/Instant.h>
#include <java/time/ZoneId.h>
#include <java/time/temporal/TemporalAmount.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Clock = ::java::time::Clock;
using $Duration = ::java::time::Duration;
using $Instant = ::java::time::Instant;
using $ZoneId = ::java::time::ZoneId;
using $TemporalAmount = ::java::time::temporal::TemporalAmount;

namespace java {
	namespace time {

$FieldInfo _Clock$OffsetClock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Clock$OffsetClock, serialVersionUID)},
	{"baseClock", "Ljava/time/Clock;", nullptr, $PRIVATE | $FINAL, $field(Clock$OffsetClock, baseClock)},
	{"offset", "Ljava/time/Duration;", nullptr, $PRIVATE | $FINAL, $field(Clock$OffsetClock, offset)},
	{}
};

$MethodInfo _Clock$OffsetClock_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/time/Clock;Ljava/time/Duration;)V", nullptr, 0, $method(static_cast<void(Clock$OffsetClock::*)($Clock*,$Duration*)>(&Clock$OffsetClock::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getZone", "()Ljava/time/ZoneId;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"instant", "()Ljava/time/Instant;", nullptr, $PUBLIC},
	{"millis", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Clock$OffsetClock_InnerClassesInfo_[] = {
	{"java.time.Clock$OffsetClock", "java.time.Clock", "OffsetClock", $STATIC | $FINAL},
	{}
};

$ClassInfo _Clock$OffsetClock_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.Clock$OffsetClock",
	"java.time.Clock",
	"java.io.Serializable",
	_Clock$OffsetClock_FieldInfo_,
	_Clock$OffsetClock_MethodInfo_,
	nullptr,
	nullptr,
	_Clock$OffsetClock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Clock"
};

$Object* allocate$Clock$OffsetClock($Class* clazz) {
	return $of($alloc(Clock$OffsetClock));
}

$Object* Clock$OffsetClock::clone() {
	 return this->$Clock::clone();
}

void Clock$OffsetClock::finalize() {
	this->$Clock::finalize();
}

void Clock$OffsetClock::init$($Clock* baseClock, $Duration* offset) {
	$Clock::init$();
	$set(this, baseClock, baseClock);
	$set(this, offset, offset);
}

$ZoneId* Clock$OffsetClock::getZone() {
	return $nc(this->baseClock)->getZone();
}

$Clock* Clock$OffsetClock::withZone($ZoneId* zone) {
	$useLocalCurrentObjectStackCache();
	if ($nc(zone)->equals($($nc(this->baseClock)->getZone()))) {
		return this;
	}
	return $new(Clock$OffsetClock, $($nc(this->baseClock)->withZone(zone)), this->offset);
}

int64_t Clock$OffsetClock::millis() {
	int64_t var$0 = $nc(this->baseClock)->millis();
	return $Math::addExact(var$0, $nc(this->offset)->toMillis());
}

$Instant* Clock$OffsetClock::instant() {
	return $nc($($nc(this->baseClock)->instant()))->plus(this->offset);
}

bool Clock$OffsetClock::equals(Object$* obj) {
	$var(Clock$OffsetClock, other, nullptr);
	bool var$2 = $instanceOf(Clock$OffsetClock, obj);
	if (var$2) {
		$assign(other, $cast(Clock$OffsetClock, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc(this->baseClock)->equals($nc(other)->baseClock);
	return var$0 && $nc(this->offset)->equals($nc(other)->offset);
}

int32_t Clock$OffsetClock::hashCode() {
	int32_t var$0 = $nc(this->baseClock)->hashCode();
	return var$0 ^ $nc(this->offset)->hashCode();
}

$String* Clock$OffsetClock::toString() {
	return $str({"OffsetClock["_s, this->baseClock, ","_s, this->offset, "]"_s});
}

Clock$OffsetClock::Clock$OffsetClock() {
}

$Class* Clock$OffsetClock::load$($String* name, bool initialize) {
	$loadClass(Clock$OffsetClock, name, initialize, &_Clock$OffsetClock_ClassInfo_, allocate$Clock$OffsetClock);
	return class$;
}

$Class* Clock$OffsetClock::class$ = nullptr;

	} // time
} // java