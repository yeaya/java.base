#include <java/time/Clock$SystemInstantSource.h>

#include <java/time/Clock.h>
#include <java/time/Instant.h>
#include <java/time/InstantSource.h>
#include <java/time/ZoneId.h>
#include <jcpp.h>

#undef INSTANCE

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

$FieldInfo _Clock$SystemInstantSource_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Clock$SystemInstantSource, serialVersionUID)},
	{"INSTANCE", "Ljava/time/Clock$SystemInstantSource;", nullptr, $STATIC | $FINAL, $staticField(Clock$SystemInstantSource, INSTANCE)},
	{}
};

$MethodInfo _Clock$SystemInstantSource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, 0, $method(Clock$SystemInstantSource, init$, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Clock$SystemInstantSource, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Clock$SystemInstantSource, hashCode, int32_t)},
	{"instant", "()Ljava/time/Instant;", nullptr, $PUBLIC, $virtualMethod(Clock$SystemInstantSource, instant, $Instant*)},
	{"millis", "()J", nullptr, $PUBLIC, $virtualMethod(Clock$SystemInstantSource, millis, int64_t)},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(Clock$SystemInstantSource, readResolve, $Object*), "java.io.ObjectStreamException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Clock$SystemInstantSource, toString, $String*)},
	{"withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;", nullptr, $PUBLIC, $virtualMethod(Clock$SystemInstantSource, withZone, $Clock*, $ZoneId*)},
	{}
};

$InnerClassInfo _Clock$SystemInstantSource_InnerClassesInfo_[] = {
	{"java.time.Clock$SystemInstantSource", "java.time.Clock", "SystemInstantSource", $STATIC | $FINAL},
	{}
};

$ClassInfo _Clock$SystemInstantSource_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.time.Clock$SystemInstantSource",
	"java.lang.Object",
	"java.time.InstantSource,java.io.Serializable",
	_Clock$SystemInstantSource_FieldInfo_,
	_Clock$SystemInstantSource_MethodInfo_,
	nullptr,
	nullptr,
	_Clock$SystemInstantSource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Clock"
};

$Object* allocate$Clock$SystemInstantSource($Class* clazz) {
	return $of($alloc(Clock$SystemInstantSource));
}

$Object* Clock$SystemInstantSource::clone() {
	 return this->$InstantSource::clone();
}

void Clock$SystemInstantSource::finalize() {
	this->$InstantSource::finalize();
}

Clock$SystemInstantSource* Clock$SystemInstantSource::INSTANCE = nullptr;

void Clock$SystemInstantSource::init$() {
}

$Clock* Clock$SystemInstantSource::withZone($ZoneId* zone) {
	return $Clock::system(zone);
}

int64_t Clock$SystemInstantSource::millis() {
	return $System::currentTimeMillis();
}

$Instant* Clock$SystemInstantSource::instant() {
	return $Clock::currentInstant();
}

bool Clock$SystemInstantSource::equals(Object$* obj) {
	return $instanceOf(Clock$SystemInstantSource, obj);
}

int32_t Clock$SystemInstantSource::hashCode() {
	return $of(Clock$SystemInstantSource::class$)->hashCode();
}

$String* Clock$SystemInstantSource::toString() {
	return "SystemInstantSource"_s;
}

$Object* Clock$SystemInstantSource::readResolve() {
	return $of(Clock$SystemInstantSource::INSTANCE);
}

void clinit$Clock$SystemInstantSource($Class* class$) {
	$assignStatic(Clock$SystemInstantSource::INSTANCE, $new(Clock$SystemInstantSource));
}

Clock$SystemInstantSource::Clock$SystemInstantSource() {
}

$Class* Clock$SystemInstantSource::load$($String* name, bool initialize) {
	$loadClass(Clock$SystemInstantSource, name, initialize, &_Clock$SystemInstantSource_ClassInfo_, clinit$Clock$SystemInstantSource, allocate$Clock$SystemInstantSource);
	return class$;
}

$Class* Clock$SystemInstantSource::class$ = nullptr;

	} // time
} // java