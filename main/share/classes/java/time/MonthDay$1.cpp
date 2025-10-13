#include <java/time/MonthDay$1.h>

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
#include <java/time/MonthDay.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef DAY_OF_MONTH
#undef MONTH_OF_YEAR

using $ChronoFieldArray = $Array<::java::time::temporal::ChronoField>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $MonthDay = ::java::time::MonthDay;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {

$FieldInfo _MonthDay$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MonthDay$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _MonthDay$1_EnclosingMethodInfo_ = {
	"java.time.MonthDay",
	nullptr,
	nullptr
};

$InnerClassInfo _MonthDay$1_InnerClassesInfo_[] = {
	{"java.time.MonthDay$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MonthDay$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.MonthDay$1",
	"java.lang.Object",
	nullptr,
	_MonthDay$1_FieldInfo_,
	nullptr,
	nullptr,
	&_MonthDay$1_EnclosingMethodInfo_,
	_MonthDay$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.MonthDay"
};

$Object* allocate$MonthDay$1($Class* clazz) {
	return $of($alloc(MonthDay$1));
}

$ints* MonthDay$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$MonthDay$1($Class* class$) {
	$assignStatic(MonthDay$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(MonthDay$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_MONTH->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MonthDay$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MONTH_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

MonthDay$1::MonthDay$1() {
}

$Class* MonthDay$1::load$($String* name, bool initialize) {
	$loadClass(MonthDay$1, name, initialize, &_MonthDay$1_ClassInfo_, clinit$MonthDay$1, allocate$MonthDay$1);
	return class$;
}

$Class* MonthDay$1::class$ = nullptr;

	} // time
} // java