#include <java/time/Clock$SystemClock.h>
#include <java/time/Clock.h>
#include <java/time/Instant.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <jcpp.h>

#undef UTC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Clock = ::java::time::Clock;
using $Instant = ::java::time::Instant;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;

namespace java {
	namespace time {

$Object* Clock$SystemClock::clone() {
	 return this->$Clock::clone();
}

void Clock$SystemClock::finalize() {
	this->$Clock::finalize();
}

Clock$SystemClock* Clock$SystemClock::UTC = nullptr;

void Clock$SystemClock::init$($ZoneId* zone) {
	$Clock::init$();
	$set(this, zone, zone);
}

$ZoneId* Clock$SystemClock::getZone() {
	return this->zone;
}

$Clock* Clock$SystemClock::withZone($ZoneId* zone) {
	if ($nc(zone)->equals(this->zone)) {
		return this;
	}
	return $new(Clock$SystemClock, zone);
}

int64_t Clock$SystemClock::millis() {
	return $System::currentTimeMillis();
}

$Instant* Clock$SystemClock::instant() {
	return currentInstant();
}

bool Clock$SystemClock::equals(Object$* obj) {
	if ($instanceOf(Clock$SystemClock, obj)) {
		return $nc(this->zone)->equals($cast(Clock$SystemClock, obj)->zone);
	}
	return false;
}

int32_t Clock$SystemClock::hashCode() {
	return $nc(this->zone)->hashCode() + 1;
}

$String* Clock$SystemClock::toString() {
	return $str({"SystemClock["_s, this->zone, "]"_s});
}

void Clock$SystemClock::clinit$($Class* clazz) {
	$init($ZoneOffset);
	$assignStatic(Clock$SystemClock::UTC, $new(Clock$SystemClock, $ZoneOffset::UTC));
}

Clock$SystemClock::Clock$SystemClock() {
}

$Class* Clock$SystemClock::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Clock$SystemClock, serialVersionUID)},
		{"UTC", "Ljava/time/Clock$SystemClock;", nullptr, $STATIC | $FINAL, $staticField(Clock$SystemClock, UTC)},
		{"zone", "Ljava/time/ZoneId;", nullptr, $PRIVATE | $FINAL, $field(Clock$SystemClock, zone)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/time/ZoneId;)V", nullptr, 0, $method(Clock$SystemClock, init$, void, $ZoneId*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Clock$SystemClock, equals, bool, Object$*)},
		{"getZone", "()Ljava/time/ZoneId;", nullptr, $PUBLIC, $virtualMethod(Clock$SystemClock, getZone, $ZoneId*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Clock$SystemClock, hashCode, int32_t)},
		{"instant", "()Ljava/time/Instant;", nullptr, $PUBLIC, $virtualMethod(Clock$SystemClock, instant, $Instant*)},
		{"millis", "()J", nullptr, $PUBLIC, $virtualMethod(Clock$SystemClock, millis, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Clock$SystemClock, toString, $String*)},
		{"withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC, $virtualMethod(Clock$SystemClock, withZone, $Clock*, $ZoneId*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.Clock$SystemClock", "java.time.Clock", "SystemClock", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.time.Clock$SystemClock",
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
	$loadClass(Clock$SystemClock, name, initialize, &classInfo$$, Clock$SystemClock::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Clock$SystemClock));
	});
	return class$;
}

$Class* Clock$SystemClock::class$ = nullptr;

	} // time
} // java