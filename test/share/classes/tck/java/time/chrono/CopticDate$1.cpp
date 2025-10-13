#include <tck/java/time/chrono/CopticDate$1.h>

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
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <tck/java/time/chrono/CopticDate.h>
#include <jcpp.h>

#undef ALIGNED_DAY_OF_WEEK_IN_MONTH
#undef ALIGNED_DAY_OF_WEEK_IN_YEAR
#undef ALIGNED_WEEK_OF_MONTH
#undef ALIGNED_WEEK_OF_YEAR
#undef CENTURIES
#undef DAYS
#undef DAY_OF_MONTH
#undef DAY_OF_WEEK
#undef DAY_OF_YEAR
#undef DECADES
#undef EPOCH_DAY
#undef ERA
#undef MILLENNIA
#undef MONTHS
#undef MONTH_OF_YEAR
#undef WEEKS
#undef YEAR
#undef YEARS
#undef YEAR_OF_ERA

using $ChronoFieldArray = $Array<::java::time::temporal::ChronoField>;
using $ChronoUnitArray = $Array<::java::time::temporal::ChronoUnit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;
using $CopticDate = ::tck::java::time::chrono::CopticDate;

namespace tck {
	namespace java {
		namespace time {
			namespace chrono {

$FieldInfo _CopticDate$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CopticDate$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CopticDate$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _CopticDate$1_EnclosingMethodInfo_ = {
	"tck.java.time.chrono.CopticDate",
	nullptr,
	nullptr
};

$InnerClassInfo _CopticDate$1_InnerClassesInfo_[] = {
	{"tck.java.time.chrono.CopticDate$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _CopticDate$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"tck.java.time.chrono.CopticDate$1",
	"java.lang.Object",
	nullptr,
	_CopticDate$1_FieldInfo_,
	nullptr,
	nullptr,
	&_CopticDate$1_EnclosingMethodInfo_,
	_CopticDate$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"tck.java.time.chrono.CopticDate"
};

$Object* allocate$CopticDate$1($Class* clazz) {
	return $of($alloc(CopticDate$1));
}

$ints* CopticDate$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* CopticDate$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$CopticDate$1($Class* class$) {
	$assignStatic(CopticDate$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::DAYS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::WEEKS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MONTHS->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::YEARS->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::DECADES->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::CENTURIES->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLENNIA->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
	$assignStatic(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_MONTH->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_WEEK->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::EPOCH_DAY->ordinal(), 9);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_YEAR->ordinal(), 10);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MONTH_OF_YEAR->ordinal(), 11);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(CopticDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ERA->ordinal(), 12);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

CopticDate$1::CopticDate$1() {
}

$Class* CopticDate$1::load$($String* name, bool initialize) {
	$loadClass(CopticDate$1, name, initialize, &_CopticDate$1_ClassInfo_, clinit$CopticDate$1, allocate$CopticDate$1);
	return class$;
}

$Class* CopticDate$1::class$ = nullptr;

			} // chrono
		} // time
	} // java
} // tck