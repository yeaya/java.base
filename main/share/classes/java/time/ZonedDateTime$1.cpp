#include <java/time/ZonedDateTime$1.h>

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
#include <java/time/ZonedDateTime.h>
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
using $ZonedDateTime = ::java::time::ZonedDateTime;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {

$FieldInfo _ZonedDateTime$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZonedDateTime$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _ZonedDateTime$1_EnclosingMethodInfo_ = {
	"java.time.ZonedDateTime",
	nullptr,
	nullptr
};

$InnerClassInfo _ZonedDateTime$1_InnerClassesInfo_[] = {
	{"java.time.ZonedDateTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ZonedDateTime$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.ZonedDateTime$1",
	"java.lang.Object",
	nullptr,
	_ZonedDateTime$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ZonedDateTime$1_EnclosingMethodInfo_,
	_ZonedDateTime$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.ZonedDateTime"
};

$Object* allocate$ZonedDateTime$1($Class* clazz) {
	return $of($alloc(ZonedDateTime$1));
}

$ints* ZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$ZonedDateTime$1($Class* class$) {
	$assignStatic(ZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(ZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::INSTANT_SECONDS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(ZonedDateTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::OFFSET_SECONDS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

ZonedDateTime$1::ZonedDateTime$1() {
}

$Class* ZonedDateTime$1::load$($String* name, bool initialize) {
	$loadClass(ZonedDateTime$1, name, initialize, &_ZonedDateTime$1_ClassInfo_, clinit$ZonedDateTime$1, allocate$ZonedDateTime$1);
	return class$;
}

$Class* ZonedDateTime$1::class$ = nullptr;

	} // time
} // java