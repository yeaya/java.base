#include <java/time/Clock$OffsetClock.h>
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
	$useLocalObjectStack();
	if ($nc(zone)->equals($($nc(this->baseClock)->getZone()))) {
		return this;
	}
	return $new(Clock$OffsetClock, $(this->baseClock->withZone(zone)), this->offset);
}

int64_t Clock$OffsetClock::millis() {
	int64_t var$0 = $nc(this->baseClock)->millis();
	return $Math::addExact(var$0, $nc(this->offset)->toMillis());
}

$Instant* Clock$OffsetClock::instant() {
	return $$nc($nc(this->baseClock)->instant())->plus(this->offset);
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
	return var$0 && $nc(this->offset)->equals(other->offset);
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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Clock$OffsetClock, serialVersionUID)},
		{"baseClock", "Ljava/time/Clock;", nullptr, $PRIVATE | $FINAL, $field(Clock$OffsetClock, baseClock)},
		{"offset", "Ljava/time/Duration;", nullptr, $PRIVATE | $FINAL, $field(Clock$OffsetClock, offset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/time/Clock;Ljava/time/Duration;)V", nullptr, 0, $method(Clock$OffsetClock, init$, void, $Clock*, $Duration*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Clock$OffsetClock, equals, bool, Object$*)},
		{"getZone", "()Ljava/time/ZoneId;", nullptr, $PUBLIC, $virtualMethod(Clock$OffsetClock, getZone, $ZoneId*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Clock$OffsetClock, hashCode, int32_t)},
		{"instant", "()Ljava/time/Instant;", nullptr, $PUBLIC, $virtualMethod(Clock$OffsetClock, instant, $Instant*)},
		{"millis", "()J", nullptr, $PUBLIC, $virtualMethod(Clock$OffsetClock, millis, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Clock$OffsetClock, toString, $String*)},
		{"withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC, $virtualMethod(Clock$OffsetClock, withZone, $Clock*, $ZoneId*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.Clock$OffsetClock", "java.time.Clock", "OffsetClock", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.time.Clock$OffsetClock",
		"java.time.Clock",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.Clock"
	};
	$loadClass(Clock$OffsetClock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Clock$OffsetClock));
	});
	return class$;
}

$Class* Clock$OffsetClock::class$ = nullptr;

	} // time
} // java