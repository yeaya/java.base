#include <tck/java/time/chrono/CopticChronology$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/time/temporal/ChronoField.h>
#include <tck/java/time/chrono/CopticChronology.h>
#include <jcpp.h>

#undef ALIGNED_WEEK_OF_MONTH
#undef DAY_OF_MONTH
#undef MONTH_OF_YEAR
#undef PROLEPTIC_MONTH
#undef YEAR
#undef YEAR_OF_ERA

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace tck {
	namespace java {
		namespace time {
			namespace chrono {

$FieldInfo _CopticChronology$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CopticChronology$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _CopticChronology$1_EnclosingMethodInfo_ = {
	"tck.java.time.chrono.CopticChronology",
	nullptr,
	nullptr
};

$InnerClassInfo _CopticChronology$1_InnerClassesInfo_[] = {
	{"tck.java.time.chrono.CopticChronology$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _CopticChronology$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"tck.java.time.chrono.CopticChronology$1",
	"java.lang.Object",
	nullptr,
	_CopticChronology$1_FieldInfo_,
	nullptr,
	nullptr,
	&_CopticChronology$1_EnclosingMethodInfo_,
	_CopticChronology$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"tck.java.time.chrono.CopticChronology"
};

$Object* allocate$CopticChronology$1($Class* clazz) {
	return $of($alloc(CopticChronology$1));
}

$ints* CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$CopticChronology$1($Class* class$) {
	$assignStatic(CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_MONTH->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MONTH_OF_YEAR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::PROLEPTIC_MONTH->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(CopticChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CopticChronology$1::CopticChronology$1() {
}

$Class* CopticChronology$1::load$($String* name, bool initialize) {
	$loadClass(CopticChronology$1, name, initialize, &_CopticChronology$1_ClassInfo_, clinit$CopticChronology$1, allocate$CopticChronology$1);
	return class$;
}

$Class* CopticChronology$1::class$ = nullptr;

			} // chrono
		} // time
	} // java
} // tck