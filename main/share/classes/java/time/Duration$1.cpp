#include <java/time/Duration$1.h>

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
#include <java/time/Duration.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef NANOS
#undef MICROS
#undef SECONDS
#undef MILLIS

using $ChronoUnitArray = $Array<::java::time::temporal::ChronoUnit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Duration = ::java::time::Duration;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {

$FieldInfo _Duration$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Duration$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{}
};

$EnclosingMethodInfo _Duration$1_EnclosingMethodInfo_ = {
	"java.time.Duration",
	nullptr,
	nullptr
};

$InnerClassInfo _Duration$1_InnerClassesInfo_[] = {
	{"java.time.Duration$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _Duration$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.Duration$1",
	"java.lang.Object",
	nullptr,
	_Duration$1_FieldInfo_,
	nullptr,
	nullptr,
	&_Duration$1_EnclosingMethodInfo_,
	_Duration$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.Duration"
};

$Object* allocate$Duration$1($Class* clazz) {
	return $of($alloc(Duration$1));
}

$ints* Duration$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;

void clinit$Duration$1($Class* class$) {
	$assignStatic(Duration$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(Duration$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Duration$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Duration$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(Duration$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

Duration$1::Duration$1() {
}

$Class* Duration$1::load$($String* name, bool initialize) {
	$loadClass(Duration$1, name, initialize, &_Duration$1_ClassInfo_, clinit$Duration$1, allocate$Duration$1);
	return class$;
}

$Class* Duration$1::class$ = nullptr;

	} // time
} // java