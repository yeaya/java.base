#include <java/time/chrono/ChronoLocalDateImpl$1.h>

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
#include <java/time/chrono/ChronoLocalDateImpl.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef CENTURIES
#undef DAYS
#undef DECADES
#undef ERAS
#undef MILLENNIA
#undef MONTHS
#undef WEEKS
#undef YEARS

using $ChronoUnitArray = $Array<::java::time::temporal::ChronoUnit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoLocalDateImpl = ::java::time::chrono::ChronoLocalDateImpl;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _ChronoLocalDateImpl$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ChronoLocalDateImpl$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{}
};

$EnclosingMethodInfo _ChronoLocalDateImpl$1_EnclosingMethodInfo_ = {
	"java.time.chrono.ChronoLocalDateImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _ChronoLocalDateImpl$1_InnerClassesInfo_[] = {
	{"java.time.chrono.ChronoLocalDateImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ChronoLocalDateImpl$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.chrono.ChronoLocalDateImpl$1",
	"java.lang.Object",
	nullptr,
	_ChronoLocalDateImpl$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ChronoLocalDateImpl$1_EnclosingMethodInfo_,
	_ChronoLocalDateImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.ChronoLocalDateImpl"
};

$Object* allocate$ChronoLocalDateImpl$1($Class* clazz) {
	return $of($alloc(ChronoLocalDateImpl$1));
}

$ints* ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;

void clinit$ChronoLocalDateImpl$1($Class* class$) {
	$assignStatic(ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::DAYS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::WEEKS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MONTHS->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::YEARS->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::DECADES->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::CENTURIES->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLENNIA->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ChronoLocalDateImpl$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::ERAS->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

ChronoLocalDateImpl$1::ChronoLocalDateImpl$1() {
}

$Class* ChronoLocalDateImpl$1::load$($String* name, bool initialize) {
	$loadClass(ChronoLocalDateImpl$1, name, initialize, &_ChronoLocalDateImpl$1_ClassInfo_, clinit$ChronoLocalDateImpl$1, allocate$ChronoLocalDateImpl$1);
	return class$;
}

$Class* ChronoLocalDateImpl$1::class$ = nullptr;

		} // chrono
	} // time
} // java