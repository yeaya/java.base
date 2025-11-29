#include <java/time/LocalDate$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/time/LocalDate.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
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
#undef ERAS
#undef MILLENNIA
#undef MONTHS
#undef MONTH_OF_YEAR
#undef PROLEPTIC_MONTH
#undef WEEKS
#undef YEAR
#undef YEARS
#undef YEAR_OF_ERA

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {

$FieldInfo _LocalDate$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LocalDate$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LocalDate$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _LocalDate$1_EnclosingMethodInfo_ = {
	"java.time.LocalDate",
	nullptr,
	nullptr
};

$InnerClassInfo _LocalDate$1_InnerClassesInfo_[] = {
	{"java.time.LocalDate$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _LocalDate$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.LocalDate$1",
	"java.lang.Object",
	nullptr,
	_LocalDate$1_FieldInfo_,
	nullptr,
	nullptr,
	&_LocalDate$1_EnclosingMethodInfo_,
	_LocalDate$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.LocalDate"
};

$Object* allocate$LocalDate$1($Class* clazz) {
	return $of($alloc(LocalDate$1));
}

$ints* LocalDate$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* LocalDate$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$LocalDate$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(LocalDate$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::DAYS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::WEEKS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MONTHS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::YEARS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::DECADES->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::CENTURIES->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLENNIA->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::ERAS->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_MONTH->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_WEEK->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::EPOCH_DAY->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_YEAR->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MONTH_OF_YEAR->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::PROLEPTIC_MONTH->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(LocalDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ERA->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

LocalDate$1::LocalDate$1() {
}

$Class* LocalDate$1::load$($String* name, bool initialize) {
	$loadClass(LocalDate$1, name, initialize, &_LocalDate$1_ClassInfo_, clinit$LocalDate$1, allocate$LocalDate$1);
	return class$;
}

$Class* LocalDate$1::class$ = nullptr;

	} // time
} // java