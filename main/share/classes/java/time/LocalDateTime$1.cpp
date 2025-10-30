#include <java/time/LocalDateTime$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/time/LocalDateTime.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef HALF_DAYS
#undef HOURS
#undef MICROS
#undef MILLIS
#undef MINUTES
#undef NANOS
#undef SECONDS

using $ChronoUnitArray = $Array<::java::time::temporal::ChronoUnit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LocalDateTime = ::java::time::LocalDateTime;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {

$FieldInfo _LocalDateTime$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LocalDateTime$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{}
};

$EnclosingMethodInfo _LocalDateTime$1_EnclosingMethodInfo_ = {
	"java.time.LocalDateTime",
	nullptr,
	nullptr
};

$InnerClassInfo _LocalDateTime$1_InnerClassesInfo_[] = {
	{"java.time.LocalDateTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _LocalDateTime$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.LocalDateTime$1",
	"java.lang.Object",
	nullptr,
	_LocalDateTime$1_FieldInfo_,
	nullptr,
	nullptr,
	&_LocalDateTime$1_EnclosingMethodInfo_,
	_LocalDateTime$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.LocalDateTime"
};

$Object* allocate$LocalDateTime$1($Class* clazz) {
	return $of($alloc(LocalDateTime$1));
}

$ints* LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;

void clinit$LocalDateTime$1($Class* class$) {
	$assignStatic(LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDateTime$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::HALF_DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

LocalDateTime$1::LocalDateTime$1() {
}

$Class* LocalDateTime$1::load$($String* name, bool initialize) {
	$loadClass(LocalDateTime$1, name, initialize, &_LocalDateTime$1_ClassInfo_, clinit$LocalDateTime$1, allocate$LocalDateTime$1);
	return class$;
}

$Class* LocalDateTime$1::class$ = nullptr;

	} // time
} // java