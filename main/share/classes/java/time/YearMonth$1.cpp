#include <java/time/YearMonth$1.h>

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
#include <java/time/YearMonth.h>
#include <java/time/temporal/ChronoField.h>
#include <java/time/temporal/ChronoUnit.h>
#include <jcpp.h>

#undef CENTURIES
#undef DECADES
#undef ERA
#undef ERAS
#undef MILLENNIA
#undef MONTHS
#undef MONTH_OF_YEAR
#undef PROLEPTIC_MONTH
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
using $YearMonth = ::java::time::YearMonth;
using $ChronoField = ::java::time::temporal::ChronoField;
using $ChronoUnit = ::java::time::temporal::ChronoUnit;

namespace java {
	namespace time {

$FieldInfo _YearMonth$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoUnit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(YearMonth$1, $SwitchMap$java$time$temporal$ChronoUnit)},
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(YearMonth$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _YearMonth$1_EnclosingMethodInfo_ = {
	"java.time.YearMonth",
	nullptr,
	nullptr
};

$InnerClassInfo _YearMonth$1_InnerClassesInfo_[] = {
	{"java.time.YearMonth$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _YearMonth$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.YearMonth$1",
	"java.lang.Object",
	nullptr,
	_YearMonth$1_FieldInfo_,
	nullptr,
	nullptr,
	&_YearMonth$1_EnclosingMethodInfo_,
	_YearMonth$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.YearMonth"
};

$Object* allocate$YearMonth$1($Class* clazz) {
	return $of($alloc(YearMonth$1));
}

$ints* YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit = nullptr;
$ints* YearMonth$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$YearMonth$1($Class* class$) {
	$assignStatic(YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit, $new($ints, $($ChronoUnit::values())->length));
	{
		try {
			$nc(YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MONTHS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::YEARS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::DECADES->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::CENTURIES->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::MILLENNIA->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(YearMonth$1::$SwitchMap$java$time$temporal$ChronoUnit)->set($ChronoUnit::ERAS->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
	$assignStatic(YearMonth$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(YearMonth$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MONTH_OF_YEAR->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(YearMonth$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::PROLEPTIC_MONTH->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(YearMonth$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(YearMonth$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(YearMonth$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ERA->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

YearMonth$1::YearMonth$1() {
}

$Class* YearMonth$1::load$($String* name, bool initialize) {
	$loadClass(YearMonth$1, name, initialize, &_YearMonth$1_ClassInfo_, clinit$YearMonth$1, allocate$YearMonth$1);
	return class$;
}

$Class* YearMonth$1::class$ = nullptr;

	} // time
} // java