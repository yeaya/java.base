#include <java/time/chrono/HijrahDate$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/time/chrono/HijrahDate.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef ALIGNED_DAY_OF_WEEK_IN_MONTH
#undef ALIGNED_DAY_OF_WEEK_IN_YEAR
#undef ALIGNED_WEEK_OF_MONTH
#undef ALIGNED_WEEK_OF_YEAR
#undef DAY_OF_MONTH
#undef DAY_OF_WEEK
#undef DAY_OF_YEAR
#undef EPOCH_DAY
#undef ERA
#undef MONTH_OF_YEAR
#undef PROLEPTIC_MONTH
#undef YEAR
#undef YEAR_OF_ERA

using $ChronoFieldArray = $Array<::java::time::temporal::ChronoField>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $HijrahDate = ::java::time::chrono::HijrahDate;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _HijrahDate$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(HijrahDate$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _HijrahDate$1_EnclosingMethodInfo_ = {
	"java.time.chrono.HijrahDate",
	nullptr,
	nullptr
};

$InnerClassInfo _HijrahDate$1_InnerClassesInfo_[] = {
	{"java.time.chrono.HijrahDate$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _HijrahDate$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.chrono.HijrahDate$1",
	"java.lang.Object",
	nullptr,
	_HijrahDate$1_FieldInfo_,
	nullptr,
	nullptr,
	&_HijrahDate$1_EnclosingMethodInfo_,
	_HijrahDate$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.HijrahDate"
};

$Object* allocate$HijrahDate$1($Class* clazz) {
	return $of($alloc(HijrahDate$1));
}

$ints* HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$HijrahDate$1($Class* class$) {
	$assignStatic(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_MONTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_WEEK->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::EPOCH_DAY->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_YEAR->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MONTH_OF_YEAR->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::PROLEPTIC_MONTH->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(HijrahDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ERA->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

HijrahDate$1::HijrahDate$1() {
}

$Class* HijrahDate$1::load$($String* name, bool initialize) {
	$loadClass(HijrahDate$1, name, initialize, &_HijrahDate$1_ClassInfo_, clinit$HijrahDate$1, allocate$HijrahDate$1);
	return class$;
}

$Class* HijrahDate$1::class$ = nullptr;

		} // chrono
	} // time
} // java