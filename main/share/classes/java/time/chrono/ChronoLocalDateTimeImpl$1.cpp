#include <java/time/chrono/ChronoLocalDateTimeImpl$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/time/chrono/ChronoLocalDateTimeImpl.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef HALF_DAYS
#undef HOURS
#undef MICROS
#undef MILLIS
#undef MINUTES
#undef NANOS
#undef SECONDS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _ChronoLocalDateTimeImpl$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ChronoLocalDateTimeImpl$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{}
};

$EnclosingMethodInfo _ChronoLocalDateTimeImpl$1_EnclosingMethodInfo_ = {
	"java.time.chrono.ChronoLocalDateTimeImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _ChronoLocalDateTimeImpl$1_InnerClassesInfo_[] = {
	{"java.time.chrono.ChronoLocalDateTimeImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ChronoLocalDateTimeImpl$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.chrono.ChronoLocalDateTimeImpl$1",
	"java.lang.Object",
	nullptr,
	_ChronoLocalDateTimeImpl$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ChronoLocalDateTimeImpl$1_EnclosingMethodInfo_,
	_ChronoLocalDateTimeImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.ChronoLocalDateTimeImpl"
};

$Object* allocate$ChronoLocalDateTimeImpl$1($Class* clazz) {
	return $of($alloc(ChronoLocalDateTimeImpl$1));
}

$ints* ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;

void clinit$ChronoLocalDateTimeImpl$1($Class* class$) {
	$assignStatic(ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::NANOS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MICROS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLIS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::SECONDS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MINUTES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::HOURS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ChronoLocalDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::HALF_DAYS->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ChronoLocalDateTimeImpl$1::ChronoLocalDateTimeImpl$1() {
}

$Class* ChronoLocalDateTimeImpl$1::load$($String* name, bool initialize) {
	$loadClass(ChronoLocalDateTimeImpl$1, name, initialize, &_ChronoLocalDateTimeImpl$1_ClassInfo_, clinit$ChronoLocalDateTimeImpl$1, allocate$ChronoLocalDateTimeImpl$1);
	return class$;
}

$Class* ChronoLocalDateTimeImpl$1::class$ = nullptr;

		} // chrono
	} // time
} // java