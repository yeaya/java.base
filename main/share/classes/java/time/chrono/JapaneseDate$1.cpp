#include <java/time/chrono/JapaneseDate$1.h>

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
#include <java/time/chrono/JapaneseDate.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef DAY_OF_YEAR
#undef ALIGNED_DAY_OF_WEEK_IN_MONTH
#undef ALIGNED_WEEK_OF_MONTH
#undef YEAR
#undef DAY_OF_MONTH
#undef ERA
#undef ALIGNED_DAY_OF_WEEK_IN_YEAR
#undef ALIGNED_WEEK_OF_YEAR
#undef YEAR_OF_ERA

using $ChronoFieldArray = $Array<::java::time::temporal::ChronoField>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $JapaneseDate = ::java::time::chrono::JapaneseDate;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _JapaneseDate$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JapaneseDate$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _JapaneseDate$1_EnclosingMethodInfo_ = {
	"java.time.chrono.JapaneseDate",
	nullptr,
	nullptr
};

$InnerClassInfo _JapaneseDate$1_InnerClassesInfo_[] = {
	{"java.time.chrono.JapaneseDate$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _JapaneseDate$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.chrono.JapaneseDate$1",
	"java.lang.Object",
	nullptr,
	_JapaneseDate$1_FieldInfo_,
	nullptr,
	nullptr,
	&_JapaneseDate$1_EnclosingMethodInfo_,
	_JapaneseDate$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.JapaneseDate"
};

$Object* allocate$JapaneseDate$1($Class* clazz) {
	return $of($alloc(JapaneseDate$1));
}

$ints* JapaneseDate$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$JapaneseDate$1($Class* class$) {
	$assignStatic(JapaneseDate$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(JapaneseDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JapaneseDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JapaneseDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR_OF_ERA->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JapaneseDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JapaneseDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JapaneseDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_MONTH->ordinal(), 6);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JapaneseDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ALIGNED_WEEK_OF_YEAR->ordinal(), 7);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JapaneseDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ERA->ordinal(), 8);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(JapaneseDate$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::YEAR->ordinal(), 9);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

JapaneseDate$1::JapaneseDate$1() {
}

$Class* JapaneseDate$1::load$($String* name, bool initialize) {
	$loadClass(JapaneseDate$1, name, initialize, &_JapaneseDate$1_ClassInfo_, clinit$JapaneseDate$1, allocate$JapaneseDate$1);
	return class$;
}

$Class* JapaneseDate$1::class$ = nullptr;

		} // chrono
	} // time
} // java