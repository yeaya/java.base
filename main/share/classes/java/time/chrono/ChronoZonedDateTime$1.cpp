#include <java/time/chrono/ChronoZonedDateTime$1.h>

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
#include <java/time/chrono/ChronoZonedDateTime.h>
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
using $ChronoZonedDateTime = ::java::time::chrono::ChronoZonedDateTime;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {
		namespace chrono {

$FieldInfo _ChronoZonedDateTime$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ChronoZonedDateTime$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _ChronoZonedDateTime$1_EnclosingMethodInfo_ = {
	"java.time.chrono.ChronoZonedDateTime",
	nullptr,
	nullptr
};

$InnerClassInfo _ChronoZonedDateTime$1_InnerClassesInfo_[] = {
	{"java.time.chrono.ChronoZonedDateTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ChronoZonedDateTime$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.chrono.ChronoZonedDateTime$1",
	"java.lang.Object",
	nullptr,
	_ChronoZonedDateTime$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ChronoZonedDateTime$1_EnclosingMethodInfo_,
	_ChronoZonedDateTime$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.chrono.ChronoZonedDateTime"
};

$Object* allocate$ChronoZonedDateTime$1($Class* clazz) {
	return $of($alloc(ChronoZonedDateTime$1));
}

$ints* ChronoZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$ChronoZonedDateTime$1($Class* class$) {
	$assignStatic(ChronoZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(ChronoZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::INSTANT_SECONDS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ChronoZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::OFFSET_SECONDS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

ChronoZonedDateTime$1::ChronoZonedDateTime$1() {
}

$Class* ChronoZonedDateTime$1::load$($String* name, bool initialize) {
	$loadClass(ChronoZonedDateTime$1, name, initialize, &_ChronoZonedDateTime$1_ClassInfo_, clinit$ChronoZonedDateTime$1, allocate$ChronoZonedDateTime$1);
	return class$;
}

$Class* ChronoZonedDateTime$1::class$ = nullptr;

		} // chrono
	} // time
} // java