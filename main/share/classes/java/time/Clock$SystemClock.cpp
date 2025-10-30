#include <java/time/Clock$SystemClock.h>

#include <java/time/Clock.h>
#include <java/time/Instant.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <jcpp.h>

#undef UTC

using $Serializable = ::java::io::Serializable;
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

$FieldInfo _Clock$SystemClock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Clock$SystemClock, serialVersionUID)},
	{"UTC", "Ljava/time/Clock$SystemClock;", nullptr, $STATIC | $FINAL, $staticField(Clock$SystemClock, UTC)},
	{"zone", "Ljava/time/ZoneId;", nullptr, $PRIVATE | $FINAL, $field(Clock$SystemClock, zone)},
	{}
};

$MethodInfo _Clock$SystemClock_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/time/ZoneId;)V", nullptr, 0, $method(static_cast<void(Clock$SystemClock::*)($ZoneId*)>(&Clock$SystemClock::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getZone", "()Ljava/time/ZoneId;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"instant", "()Ljava/time/Instant;", nullptr, $PUBLIC},
	{"millis", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Clock$SystemClock_InnerClassesInfo_[] = {
	{"java.time.Clock$SystemClock", "java.time.Clock", "SystemClock", $STATIC | $FINAL},
	{}
};

$ClassInfo _Clock$SystemClock_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.Clock$SystemClock",
	"java.time.Clock",
	"java.io.Serializable",
	_Clock$SystemClock_FieldInfo_,
	_Clock$SystemClock_MethodInfo_,
	nullptr,
	nullptr,
	_Clock$SystemClock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Clock"
};

$Object* allocate$Clock$SystemClock($Class* clazz) {
	return $of($alloc(Clock$SystemClock));
}

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
		return $nc(this->zone)->equals($nc(($cast(Clock$SystemClock, obj)))->zone);
	}
	return false;
}

int32_t Clock$SystemClock::hashCode() {
	return $nc(this->zone)->hashCode() + 1;
}

$String* Clock$SystemClock::toString() {
	return $str({"SystemClock["_s, this->zone, "]"_s});
}

void clinit$Clock$SystemClock($Class* class$) {
	$init($ZoneOffset);
	$assignStatic(Clock$SystemClock::UTC, $new(Clock$SystemClock, $ZoneOffset::UTC));
}

Clock$SystemClock::Clock$SystemClock() {
}

$Class* Clock$SystemClock::load$($String* name, bool initialize) {
	$loadClass(Clock$SystemClock, name, initialize, &_Clock$SystemClock_ClassInfo_, clinit$Clock$SystemClock, allocate$Clock$SystemClock);
	return class$;
}

$Class* Clock$SystemClock::class$ = nullptr;

	} // time
} // java