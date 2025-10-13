#include <java/time/chrono/ThaiBuddhistChronology$1.h>

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
#include <java/time/chrono/ThaiBuddhistChronology.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

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
using $ThaiBuddhistChronology = ::java::time::chrono::ThaiBuddhistChronology;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _ThaiBuddhistChronology$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ThaiBuddhistChronology$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _ThaiBuddhistChronology$1_EnclosingMethodInfo_ = {
	"java.time.chrono.ThaiBuddhistChronology",
	nullptr,
	nullptr
};

$InnerClassInfo _ThaiBuddhistChronology$1_InnerClassesInfo_[] = {
	{"java.time.chrono.ThaiBuddhistChronology$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ThaiBuddhistChronology$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.chrono.ThaiBuddhistChronology$1",
	"java.lang.Object",
	nullptr,
	_ThaiBuddhistChronology$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ThaiBuddhistChronology$1_EnclosingMethodInfo_,
	_ThaiBuddhistChronology$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.ThaiBuddhistChronology"
};

$Object* allocate$ThaiBuddhistChronology$1($Class* clazz) {
	return $of($alloc(ThaiBuddhistChronology$1));
}

$ints* ThaiBuddhistChronology$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$ThaiBuddhistChronology$1($Class* class$) {
	$assignStatic(ThaiBuddhistChronology$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(ThaiBuddhistChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::PROLEPTIC_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ThaiBuddhistChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ThaiBuddhistChronology$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

ThaiBuddhistChronology$1::ThaiBuddhistChronology$1() {
}

$Class* ThaiBuddhistChronology$1::load$($String* name, bool initialize) {
	$loadClass(ThaiBuddhistChronology$1, name, initialize, &_ThaiBuddhistChronology$1_ClassInfo_, clinit$ThaiBuddhistChronology$1, allocate$ThaiBuddhistChronology$1);
	return class$;
}

$Class* ThaiBuddhistChronology$1::class$ = nullptr;

		} // chrono
	} // time
} // java