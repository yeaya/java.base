#include <java/time/chrono/ThaiBuddhistDate$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/time/chrono/ThaiBuddhistDate.h>
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

$FieldInfo _ThaiBuddhistDate$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ThaiBuddhistDate$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _ThaiBuddhistDate$1_EnclosingMethodInfo_ = {
	"java.time.chrono.ThaiBuddhistDate",
	nullptr,
	nullptr
};

$InnerClassInfo _ThaiBuddhistDate$1_InnerClassesInfo_[] = {
	{"java.time.chrono.ThaiBuddhistDate$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ThaiBuddhistDate$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.chrono.ThaiBuddhistDate$1",
	"java.lang.Object",
	nullptr,
	_ThaiBuddhistDate$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ThaiBuddhistDate$1_EnclosingMethodInfo_,
	_ThaiBuddhistDate$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.ThaiBuddhistDate"
};

$Object* allocate$ThaiBuddhistDate$1($Class* clazz) {
	return $of($alloc(ThaiBuddhistDate$1));
}

$ints* ThaiBuddhistDate$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$ThaiBuddhistDate$1($Class* class$) {
	$assignStatic(ThaiBuddhistDate$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(ThaiBuddhistDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ThaiBuddhistDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ThaiBuddhistDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_MONTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ThaiBuddhistDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ThaiBuddhistDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::PROLEPTIC_MONTH->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ThaiBuddhistDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ThaiBuddhistDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ERA->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ThaiBuddhistDate$1::ThaiBuddhistDate$1() {
}

$Class* ThaiBuddhistDate$1::load$($String* name, bool initialize) {
	$loadClass(ThaiBuddhistDate$1, name, initialize, &_ThaiBuddhistDate$1_ClassInfo_, clinit$ThaiBuddhistDate$1, allocate$ThaiBuddhistDate$1);
	return class$;
}

$Class* ThaiBuddhistDate$1::class$ = nullptr;

		} // chrono
	} // time
} // java