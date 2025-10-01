#include <java/time/format/DateTimeTextProvider$2.h>

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
#include <java/time/format/DateTimeTextProvider.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef AMPM_OF_DAY
#undef MONTH_OF_YEAR
#undef ERA
#undef DAY_OF_WEEK

using $ChronoFieldArray = $Array<::java::time::temporal::ChronoField>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $DateTimeTextProvider = ::java::time::format::DateTimeTextProvider;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeTextProvider$2_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DateTimeTextProvider$2, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _DateTimeTextProvider$2_EnclosingMethodInfo_ = {
	"java.time.format.DateTimeTextProvider",
	nullptr,
	nullptr
};

$InnerClassInfo _DateTimeTextProvider$2_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeTextProvider$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _DateTimeTextProvider$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.format.DateTimeTextProvider$2",
	"java.lang.Object",
	nullptr,
	_DateTimeTextProvider$2_FieldInfo_,
	nullptr,
	nullptr,
	&_DateTimeTextProvider$2_EnclosingMethodInfo_,
	_DateTimeTextProvider$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeTextProvider"
};

$Object* allocate$DateTimeTextProvider$2($Class* clazz) {
	return $of($alloc(DateTimeTextProvider$2));
}

$ints* DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$DateTimeTextProvider$2($Class* class$) {
	$assignStatic(DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::ERA->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::MONTH_OF_YEAR->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::DAY_OF_WEEK->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(DateTimeTextProvider$2::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::AMPM_OF_DAY->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

DateTimeTextProvider$2::DateTimeTextProvider$2() {
}

$Class* DateTimeTextProvider$2::load$($String* name, bool initialize) {
	$loadClass(DateTimeTextProvider$2, name, initialize, &_DateTimeTextProvider$2_ClassInfo_, clinit$DateTimeTextProvider$2, allocate$DateTimeTextProvider$2);
	return class$;
}

$Class* DateTimeTextProvider$2::class$ = nullptr;

		} // format
	} // time
} // java