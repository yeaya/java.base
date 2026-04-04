#include <java/time/Clock$FixedClock.h>
#include <java/time/Clock.h>
#include <java/time/Instant.h>
#include <java/time/ZoneId.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Clock = ::java::time::Clock;
using $Instant = ::java::time::Instant;
using $ZoneId = ::java::time::ZoneId;

namespace java {
	namespace time {

$Object* Clock$FixedClock::clone() {
	 return this->$Clock::clone();
}

void Clock$FixedClock::finalize() {
	this->$Clock::finalize();
}

void Clock$FixedClock::init$($Instant* fixedInstant, $ZoneId* zone) {
	$Clock::init$();
	$set(this, instant$, fixedInstant);
	$set(this, zone, zone);
}

$ZoneId* Clock$FixedClock::getZone() {
	return this->zone;
}

$Clock* Clock$FixedClock::withZone($ZoneId* zone) {
	if ($nc(zone)->equals(this->zone)) {
		return this;
	}
	return $new(Clock$FixedClock, this->instant$, zone);
}

int64_t Clock$FixedClock::millis() {
	return $nc(this->instant$)->toEpochMilli();
}

$Instant* Clock$FixedClock::instant() {
	return this->instant$;
}

bool Clock$FixedClock::equals(Object$* obj) {
	$var(Clock$FixedClock, other, nullptr);
	bool var$2 = $instanceOf(Clock$FixedClock, obj);
	if (var$2) {
		$assign(other, $cast(Clock$FixedClock, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc(this->instant$)->equals($nc(other)->instant$);
	return var$0 && $nc(this->zone)->equals(other->zone);
}

int32_t Clock$FixedClock::hashCode() {
	int32_t var$0 = $nc(this->instant$)->hashCode();
	return var$0 ^ $nc(this->zone)->hashCode();
}

$String* Clock$FixedClock::toString() {
	return $str({"FixedClock["_s, this->instant$, ","_s, this->zone, "]"_s});
}

Clock$FixedClock::Clock$FixedClock() {
}

$Class* Clock$FixedClock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Clock$FixedClock, serialVersionUID)},
		{"instant", "Ljava/time/Instant;", nullptr, $PRIVATE | $FINAL, $field(Clock$FixedClock, instant$)},
		{"zone", "Ljava/time/ZoneId;", nullptr, $PRIVATE | $FINAL, $field(Clock$FixedClock, zone)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/time/Instant;Ljava/time/ZoneId;)V", nullptr, 0, $method(Clock$FixedClock, init$, void, $Instant*, $ZoneId*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Clock$FixedClock, equals, bool, Object$*)},
		{"getZone", "()Ljava/time/ZoneId;", nullptr, $PUBLIC, $virtualMethod(Clock$FixedClock, getZone, $ZoneId*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Clock$FixedClock, hashCode, int32_t)},
		{"instant", "()Ljava/time/Instant;", nullptr, $PUBLIC, $virtualMethod(Clock$FixedClock, instant, $Instant*)},
		{"millis", "()J", nullptr, $PUBLIC, $virtualMethod(Clock$FixedClock, millis, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Clock$FixedClock, toString, $String*)},
		{"withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC, $virtualMethod(Clock$FixedClock, withZone, $Clock*, $ZoneId*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.Clock$FixedClock", "java.time.Clock", "FixedClock", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.time.Clock$FixedClock",
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
	$loadClass(Clock$FixedClock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Clock$FixedClock));
	});
	return class$;
}

$Class* Clock$FixedClock::class$ = nullptr;

	} // time
} // java