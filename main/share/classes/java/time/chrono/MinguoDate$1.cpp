#include <java/time/chrono/MinguoDate$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/time/chrono/MinguoDate.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef ALIGNED_WEEK_OF_MONTH
#undef DAY_OF_MONTH
#undef DAY_OF_YEAR
#undef ERA
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

$FieldInfo _MinguoDate$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MinguoDate$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _MinguoDate$1_EnclosingMethodInfo_ = {
	"java.time.chrono.MinguoDate",
	nullptr,
	nullptr
};

$InnerClassInfo _MinguoDate$1_InnerClassesInfo_[] = {
	{"java.time.chrono.MinguoDate$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MinguoDate$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.chrono.MinguoDate$1",
	"java.lang.Object",
	nullptr,
	_MinguoDate$1_FieldInfo_,
	nullptr,
	nullptr,
	&_MinguoDate$1_EnclosingMethodInfo_,
	_MinguoDate$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.MinguoDate"
};

$Object* allocate$MinguoDate$1($Class* clazz) {
	return $of($alloc(MinguoDate$1));
}

$ints* MinguoDate$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$MinguoDate$1($Class* class$) {
	$assignStatic(MinguoDate$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(MinguoDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MinguoDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MinguoDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_MONTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MinguoDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MinguoDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::PROLEPTIC_MONTH->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MinguoDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(MinguoDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ERA->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MinguoDate$1::MinguoDate$1() {
}

$Class* MinguoDate$1::load$($String* name, bool initialize) {
	$loadClass(MinguoDate$1, name, initialize, &_MinguoDate$1_ClassInfo_, clinit$MinguoDate$1, allocate$MinguoDate$1);
	return class$;
}

$Class* MinguoDate$1::class$ = nullptr;

		} // chrono
	} // time
} // java