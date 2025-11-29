#include <java/time/Instant$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/time/Instant.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef DAYS
#undef HALF_DAYS
#undef HOURS
#undef INSTANT_SECONDS
#undef MICROS
#undef MICRO_OF_SECOND
#undef MILLIS
#undef MILLI_OF_SECOND
#undef MINUTES
#undef NANOS
#undef NANO_OF_SECOND
#undef SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {

$FieldInfo _Instant$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Instant$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Instant$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _Instant$1_EnclosingMethodInfo_ = {
	"java.time.Instant",
	nullptr,
	nullptr
};

$InnerClassInfo _Instant$1_InnerClassesInfo_[] = {
	{"java.time.Instant$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Instant$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.Instant$1",
	"java.lang.Object",
	nullptr,
	_Instant$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Instant$1_EnclosingMethodInfo_,
	_Instant$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Instant"
};

$Object* allocate$Instant$1($Class* clazz) {
	return $of($alloc(Instant$1));
}

$ints* Instant$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* Instant$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$Instant$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Instant$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::HALF_DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::DAYS->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Instant$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::NANO_OF_SECOND->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MICRO_OF_SECOND->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MILLI_OF_SECOND->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(Instant$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::INSTANT_SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Instant$1::Instant$1() {
}

$Class* Instant$1::load$($String* name, bool initialize) {
	$loadClass(Instant$1, name, initialize, &_Instant$1_ClassInfo_, clinit$Instant$1, allocate$Instant$1);
	return class$;
}

$Class* Instant$1::class$ = nullptr;

	} // time
} // java