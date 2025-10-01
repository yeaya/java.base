#include <java/time/OffsetTime$1.h>

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
#include <java/time/OffsetTime.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef HALF_DAYS
#undef HOURS
#undef NANOS
#undef MICROS
#undef SECONDS
#undef MILLIS
#undef MINUTES

using $ChronoUnitArray = $Array<::java::time::temporal::ChronoUnit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $OffsetTime = ::java::time::OffsetTime;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {

$FieldInfo _OffsetTime$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(OffsetTime$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{}
};

$EnclosingMethodInfo _OffsetTime$1_EnclosingMethodInfo_ = {
	"java.time.OffsetTime",
	nullptr,
	nullptr
};

$InnerClassInfo _OffsetTime$1_InnerClassesInfo_[] = {
	{"java.time.OffsetTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _OffsetTime$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.OffsetTime$1",
	"java.lang.Object",
	nullptr,
	_OffsetTime$1_FieldInfo_,
	nullptr,
	nullptr,
	&_OffsetTime$1_EnclosingMethodInfo_,
	_OffsetTime$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.OffsetTime"
};

$Object* allocate$OffsetTime$1($Class* clazz) {
	return $of($alloc(OffsetTime$1));
}

$ints* OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;

void clinit$OffsetTime$1($Class* class$) {
	$assignStatic(OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(OffsetTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::HALF_DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

OffsetTime$1::OffsetTime$1() {
}

$Class* OffsetTime$1::load$($String* name, bool initialize) {
	$loadClass(OffsetTime$1, name, initialize, &_OffsetTime$1_ClassInfo_, clinit$OffsetTime$1, allocate$OffsetTime$1);
	return class$;
}

$Class* OffsetTime$1::class$ = nullptr;

	} // time
} // java