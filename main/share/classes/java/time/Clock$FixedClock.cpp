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

$FieldInfo _Clock$FixedClock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Clock$FixedClock, serialVersionUID)},
	{"instant", "Ljava/time/Instant;", nullptr, $PRIVATE | $FINAL, $field(Clock$FixedClock, instant$)},
	{"zone", "Ljava/time/ZoneId;", nullptr, $PRIVATE | $FINAL, $field(Clock$FixedClock, zone)},
	{}
};

$MethodInfo _Clock$FixedClock_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/time/Instant;Ljava/time/ZoneId;)V", nullptr, 0, $method(static_cast<void(Clock$FixedClock::*)($Instant*,$ZoneId*)>(&Clock$FixedClock::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getZone", "()Ljava/time/ZoneId;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"instant", "()Ljava/time/Instant;", nullptr, $PUBLIC},
	{"millis", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Clock$FixedClock_InnerClassesInfo_[] = {
	{"java.time.Clock$FixedClock", "java.time.Clock", "FixedClock", $STATIC | $FINAL},
	{}
};

$ClassInfo _Clock$FixedClock_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.Clock$FixedClock",
	"java.time.Clock",
	"java.io.Serializable",
	_Clock$FixedClock_FieldInfo_,
	_Clock$FixedClock_MethodInfo_,
	nullptr,
	nullptr,
	_Clock$FixedClock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Clock"
};

$Object* allocate$Clock$FixedClock($Class* clazz) {
	return $of($alloc(Clock$FixedClock));
}

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
	return var$0 && $nc(this->zone)->equals($nc(other)->zone);
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
	$loadClass(Clock$FixedClock, name, initialize, &_Clock$FixedClock_ClassInfo_, allocate$Clock$FixedClock);
	return class$;
}

$Class* Clock$FixedClock::class$ = nullptr;

	} // time
} // java