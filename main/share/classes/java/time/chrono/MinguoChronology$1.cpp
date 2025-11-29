#include <java/time/chrono/MinguoChronology$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/time/chrono/MinguoChronology.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef PROLEPTIC_MONTH
#undef YEAR
#undef YEAR_OF_ERA

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _MinguoChronology$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MinguoChronology$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _MinguoChronology$1_EnclosingMethodInfo_ = {
	"java.time.chrono.MinguoChronology",
	nullptr,
	nullptr
};

$InnerClassInfo _MinguoChronology$1_InnerClassesInfo_[] = {
	{"java.time.chrono.MinguoChronology$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MinguoChronology$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.chrono.MinguoChronology$1",
	"java.lang.Object",
	nullptr,
	_MinguoChronology$1_FieldInfo_,
	nullptr,
	nullptr,
	&_MinguoChronology$1_EnclosingMethodInfo_,
	_MinguoChronology$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.MinguoChronology"
};

$Object* allocate$MinguoChronology$1($Class* clazz) {
	return $of($alloc(MinguoChronology$1));
}

$ints* MinguoChronology$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$MinguoChronology$1($Class* class$) {
	$assignStatic(MinguoChronology$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(MinguoChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::PROLEPTIC_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MinguoChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MinguoChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MinguoChronology$1::MinguoChronology$1() {
}

$Class* MinguoChronology$1::load$($String* name, bool initialize) {
	$loadClass(MinguoChronology$1, name, initialize, &_MinguoChronology$1_ClassInfo_, clinit$MinguoChronology$1, allocate$MinguoChronology$1);
	return class$;
}

$Class* MinguoChronology$1::class$ = nullptr;

		} // chrono
	} // time
} // java