#include <java/time/InstantSource.h>

#include <java/time/Clock$SourceClock.h>
#include <java/time/Clock$SystemInstantSource.h>
#include <java/time/Clock.h>
#include <java/time/Duration.h>
#include <java/time/Instant.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef INSTANCE
#undef UTC

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Clock = ::java::time::Clock;
using $Clock$SourceClock = ::java::time::Clock$SourceClock;
using $Clock$SystemInstantSource = ::java::time::Clock$SystemInstantSource;
using $Duration = ::java::time::Duration;
using $Instant = ::java::time::Instant;
using $ZoneId = ::java::time::ZoneId;
using $ZoneOffset = ::java::time::ZoneOffset;
using $Objects = ::java::util::Objects;

namespace java {
	namespace time {

$MethodInfo _InstantSource_MethodInfo_[] = {
	{"fixed", "(Ljava/time/Instant;)Ljava/time/InstantSource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<InstantSource*(*)($Instant*)>(&InstantSource::fixed))},
	{"instant", "()Ljava/time/Instant;", nullptr, $PUBLIC | $ABSTRACT},
	{"millis", "()J", nullptr, $PUBLIC},
	{"offset", "(Ljava/time/InstantSource;Ljava/time/Duration;)Ljava/time/InstantSource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<InstantSource*(*)(InstantSource*,$Duration*)>(&InstantSource::offset))},
	{"system", "()Ljava/time/InstantSource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<InstantSource*(*)()>(&InstantSource::system))},
	{"tick", "(Ljava/time/InstantSource;Ljava/time/Duration;)Ljava/time/InstantSource;", nullptr, $PUBLIC | $STATIC, $method(static_cast<InstantSource*(*)(InstantSource*,$Duration*)>(&InstantSource::tick))},
	{"withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InstantSource_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.time.InstantSource",
	nullptr,
	nullptr,
	nullptr,
	_InstantSource_MethodInfo_
};

$Object* allocate$InstantSource($Class* clazz) {
	return $of($alloc(InstantSource));
}

InstantSource* InstantSource::system() {
	$init($Clock$SystemInstantSource);
	return $Clock$SystemInstantSource::INSTANCE;
}

InstantSource* InstantSource::tick(InstantSource* baseSource, $Duration* tickDuration) {
	$Objects::requireNonNull($of(baseSource), "baseSource"_s);
	$init($ZoneOffset);
	return $Clock::tick($($nc(baseSource)->withZone($ZoneOffset::UTC)), tickDuration);
}

InstantSource* InstantSource::fixed($Instant* fixedInstant) {
	$init($ZoneOffset);
	return $Clock::fixed(fixedInstant, $ZoneOffset::UTC);
}

InstantSource* InstantSource::offset(InstantSource* baseSource, $Duration* offsetDuration) {
	$Objects::requireNonNull($of(baseSource), "baseSource"_s);
	$init($ZoneOffset);
	return $Clock::offset($($nc(baseSource)->withZone($ZoneOffset::UTC)), offsetDuration);
}

int64_t InstantSource::millis() {
	return $nc($(instant()))->toEpochMilli();
}

$Clock* InstantSource::withZone($ZoneId* zone) {
	return $new($Clock$SourceClock, this, zone);
}

$Class* InstantSource::load$($String* name, bool initialize) {
	$loadClass(InstantSource, name, initialize, &_InstantSource_ClassInfo_, allocate$InstantSource);
	return class$;
}

$Class* InstantSource::class$ = nullptr;

	} // time
} // java