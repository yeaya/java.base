#include <java/time/Clock$SourceClock.h>

#include <java/time/Clock.h>
#include <java/time/Instant.h>
#include <java/time/InstantSource.h>
#include <java/time/ZoneId.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Clock = ::java::time::Clock;
using $Instant = ::java::time::Instant;
using $InstantSource = ::java::time::InstantSource;
using $ZoneId = ::java::time::ZoneId;

namespace java {
	namespace time {

$FieldInfo _Clock$SourceClock_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Clock$SourceClock, serialVersionUID)},
	{"baseSource", "Ljava/time/InstantSource;", nullptr, $PRIVATE | $FINAL, $field(Clock$SourceClock, baseSource)},
	{"zone", "Ljava/time/ZoneId;", nullptr, $PRIVATE | $FINAL, $field(Clock$SourceClock, zone)},
	{}
};

$MethodInfo _Clock$SourceClock_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/time/InstantSource;Ljava/time/ZoneId;)V", nullptr, 0, $method(static_cast<void(Clock$SourceClock::*)($InstantSource*,$ZoneId*)>(&Clock$SourceClock::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getZone", "()Ljava/time/ZoneId;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"instant", "()Ljava/time/Instant;", nullptr, $PUBLIC},
	{"millis", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Clock$SourceClock_InnerClassesInfo_[] = {
	{"java.time.Clock$SourceClock", "java.time.Clock", "SourceClock", $STATIC | $FINAL},
	{}
};

$ClassInfo _Clock$SourceClock_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.Clock$SourceClock",
	"java.time.Clock",
	"java.io.Serializable",
	_Clock$SourceClock_FieldInfo_,
	_Clock$SourceClock_MethodInfo_,
	nullptr,
	nullptr,
	_Clock$SourceClock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Clock"
};

$Object* allocate$Clock$SourceClock($Class* clazz) {
	return $of($alloc(Clock$SourceClock));
}

$Object* Clock$SourceClock::clone() {
	 return this->$Clock::clone();
}

void Clock$SourceClock::finalize() {
	this->$Clock::finalize();
}

void Clock$SourceClock::init$($InstantSource* baseSource, $ZoneId* zone) {
	$Clock::init$();
	$set(this, baseSource, baseSource);
	$set(this, zone, zone);
}

$ZoneId* Clock$SourceClock::getZone() {
	return this->zone;
}

$Clock* Clock$SourceClock::withZone($ZoneId* zone) {
	if ($nc(zone)->equals(this->zone)) {
		return this;
	}
	return $new(Clock$SourceClock, this->baseSource, zone);
}

int64_t Clock$SourceClock::millis() {
	return $nc(this->baseSource)->millis();
}

$Instant* Clock$SourceClock::instant() {
	return $nc(this->baseSource)->instant();
}

bool Clock$SourceClock::equals(Object$* obj) {
	$var(Clock$SourceClock, other, nullptr);
	bool var$2 = $instanceOf(Clock$SourceClock, obj);
	if (var$2) {
		$assign(other, $cast(Clock$SourceClock, obj));
		var$2 = true;
	}
	bool var$1 = (var$2);
	bool var$0 = var$1 && $nc(this->zone)->equals($nc(other)->zone);
	return var$0 && $nc($of(this->baseSource))->equals($nc(other)->baseSource);
}

int32_t Clock$SourceClock::hashCode() {
	int32_t var$0 = $nc($of(this->baseSource))->hashCode();
	return var$0 ^ $nc(this->zone)->hashCode();
}

$String* Clock$SourceClock::toString() {
	return $str({"SourceClock["_s, this->baseSource, ","_s, this->zone, "]"_s});
}

Clock$SourceClock::Clock$SourceClock() {
}

$Class* Clock$SourceClock::load$($String* name, bool initialize) {
	$loadClass(Clock$SourceClock, name, initialize, &_Clock$SourceClock_ClassInfo_, allocate$Clock$SourceClock);
	return class$;
}

$Class* Clock$SourceClock::class$ = nullptr;

	} // time
} // java