#include <java/util/concurrent/TimeUnit$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/temporal/ChronoUnit.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef MILLISECONDS
#undef HOURS
#undef MICROSECONDS
#undef NANOS
#undef MICROS
#undef SECONDS
#undef DAYS
#undef NANOSECONDS
#undef MILLIS
#undef MINUTES

using $ChronoUnitArray = $Array<::java::time::temporal::ChronoUnit>;
using $TimeUnitArray = $Array<::java::util::concurrent::TimeUnit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _TimeUnit$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TimeUnit$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{"$SwitchMap$java$util$concurrent$TimeUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TimeUnit$1, $SwitchMap$java$util$concurrent$TimeUnit)},
	{}
};

$EnclosingMethodInfo _TimeUnit$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.TimeUnit",
	nullptr,
	nullptr
};

$InnerClassInfo _TimeUnit$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.TimeUnit$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TimeUnit$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.util.concurrent.TimeUnit$1",
	"java.lang.Object",
	nullptr,
	_TimeUnit$1_FieldInfo_,
	nullptr,
	nullptr,
	&_TimeUnit$1_EnclosingMethodInfo_,
	_TimeUnit$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.TimeUnit"
};

$Object* allocate$TimeUnit$1($Class* clazz) {
	return $of($alloc(TimeUnit$1));
}

$ints* TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit = nullptr;

void clinit$TimeUnit$1($Class* class$) {
	$assignStatic(TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
	$assignStatic(TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit, $new($ints, $($TimeUnit::values())->length));
	{
		try {
			$nc(TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::NANOSECONDS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::MICROSECONDS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::MILLISECONDS->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TimeUnit$1::$SwitchMap$java$util$concurrent$TimeUnit)->set($TimeUnit::DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

TimeUnit$1::TimeUnit$1() {
}

$Class* TimeUnit$1::load$($String* name, bool initialize) {
	$loadClass(TimeUnit$1, name, initialize, &_TimeUnit$1_ClassInfo_, clinit$TimeUnit$1, allocate$TimeUnit$1);
	return class$;
}

$Class* TimeUnit$1::class$ = nullptr;

		} // concurrent
	} // util
} // java