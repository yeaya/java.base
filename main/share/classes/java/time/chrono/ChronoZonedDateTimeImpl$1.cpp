#include <java/time/chrono/ChronoZonedDateTimeImpl$1.h>

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
#include <java/time/chrono/ChronoZonedDateTimeImpl.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef OFFSET_SECONDS
#undef INSTANT_SECONDS

using $ChronoFieldArray = $Array<::java::time::temporal::ChronoField>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ChronoZonedDateTimeImpl = ::java::time::chrono::ChronoZonedDateTimeImpl;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _ChronoZonedDateTimeImpl$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ChronoZonedDateTimeImpl$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _ChronoZonedDateTimeImpl$1_EnclosingMethodInfo_ = {
	"java.time.chrono.ChronoZonedDateTimeImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _ChronoZonedDateTimeImpl$1_InnerClassesInfo_[] = {
	{"java.time.chrono.ChronoZonedDateTimeImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ChronoZonedDateTimeImpl$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.chrono.ChronoZonedDateTimeImpl$1",
	"java.lang.Object",
	nullptr,
	_ChronoZonedDateTimeImpl$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ChronoZonedDateTimeImpl$1_EnclosingMethodInfo_,
	_ChronoZonedDateTimeImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.ChronoZonedDateTimeImpl"
};

$Object* allocate$ChronoZonedDateTimeImpl$1($Class* clazz) {
	return $of($alloc(ChronoZonedDateTimeImpl$1));
}

$ints* ChronoZonedDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$ChronoZonedDateTimeImpl$1($Class* class$) {
	$assignStatic(ChronoZonedDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(ChronoZonedDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::INSTANT_SECONDS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ChronoZonedDateTimeImpl$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::OFFSET_SECONDS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

ChronoZonedDateTimeImpl$1::ChronoZonedDateTimeImpl$1() {
}

$Class* ChronoZonedDateTimeImpl$1::load$($String* name, bool initialize) {
	$loadClass(ChronoZonedDateTimeImpl$1, name, initialize, &_ChronoZonedDateTimeImpl$1_ClassInfo_, clinit$ChronoZonedDateTimeImpl$1, allocate$ChronoZonedDateTimeImpl$1);
	return class$;
}

$Class* ChronoZonedDateTimeImpl$1::class$ = nullptr;

		} // chrono
	} // time
} // java