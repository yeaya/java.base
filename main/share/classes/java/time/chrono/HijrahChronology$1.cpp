#include <java/time/chrono/HijrahChronology$1.h>

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
#include <java/time/chrono/HijrahChronology.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef DAY_OF_YEAR
#undef ALIGNED_WEEK_OF_MONTH
#undef YEAR
#undef DAY_OF_MONTH
#undef ERA
#undef YEAR_OF_ERA

using $ChronoFieldArray = $Array<::java::time::temporal::ChronoField>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $HijrahChronology = ::java::time::chrono::HijrahChronology;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _HijrahChronology$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HijrahChronology$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _HijrahChronology$1_EnclosingMethodInfo_ = {
	"java.time.chrono.HijrahChronology",
	nullptr,
	nullptr
};

$InnerClassInfo _HijrahChronology$1_InnerClassesInfo_[] = {
	{"java.time.chrono.HijrahChronology$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _HijrahChronology$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.chrono.HijrahChronology$1",
	"java.lang.Object",
	nullptr,
	_HijrahChronology$1_FieldInfo_,
	nullptr,
	nullptr,
	&_HijrahChronology$1_EnclosingMethodInfo_,
	_HijrahChronology$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.HijrahChronology"
};

$Object* allocate$HijrahChronology$1($Class* clazz) {
	return $of($alloc(HijrahChronology$1));
}

$ints* HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$HijrahChronology$1($Class* class$) {
	$assignStatic(HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_MONTH->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(HijrahChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ERA->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

HijrahChronology$1::HijrahChronology$1() {
}

$Class* HijrahChronology$1::load$($String* name, bool initialize) {
	$loadClass(HijrahChronology$1, name, initialize, &_HijrahChronology$1_ClassInfo_, clinit$HijrahChronology$1, allocate$HijrahChronology$1);
	return class$;
}

$Class* HijrahChronology$1::class$ = nullptr;

		} // chrono
	} // time
} // java