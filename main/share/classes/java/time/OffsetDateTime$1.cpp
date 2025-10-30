#include <java/time/OffsetDateTime$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/time/OffsetDateTime.h>
#include <java/time/temporal/ChronoField.h>
#include <jcpp.h>

#undef INSTANT_SECONDS
#undef OFFSET_SECONDS

using $ChronoFieldArray = $Array<::java::time::temporal::ChronoField>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $OffsetDateTime = ::java::time::OffsetDateTime;
using $ChronoField = ::java::time::temporal::ChronoField;

namespace java {
	namespace time {

$FieldInfo _OffsetDateTime$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$ChronoField", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(OffsetDateTime$1, $SwitchMap$java$time$temporal$ChronoField)},
	{}
};

$EnclosingMethodInfo _OffsetDateTime$1_EnclosingMethodInfo_ = {
	"java.time.OffsetDateTime",
	nullptr,
	nullptr
};

$InnerClassInfo _OffsetDateTime$1_InnerClassesInfo_[] = {
	{"java.time.OffsetDateTime$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _OffsetDateTime$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.OffsetDateTime$1",
	"java.lang.Object",
	nullptr,
	_OffsetDateTime$1_FieldInfo_,
	nullptr,
	nullptr,
	&_OffsetDateTime$1_EnclosingMethodInfo_,
	_OffsetDateTime$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.OffsetDateTime"
};

$Object* allocate$OffsetDateTime$1($Class* clazz) {
	return $of($alloc(OffsetDateTime$1));
}

$ints* OffsetDateTime$1::$SwitchMap$java$time$temporal$ChronoField = nullptr;

void clinit$OffsetDateTime$1($Class* class$) {
	$assignStatic(OffsetDateTime$1::$SwitchMap$java$time$temporal$ChronoField, $new($ints, $($ChronoField::values())->length));
	{
		try {
			$nc(OffsetDateTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::INSTANT_SECONDS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(OffsetDateTime$1::$SwitchMap$java$time$temporal$ChronoField)->set($ChronoField::OFFSET_SECONDS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

OffsetDateTime$1::OffsetDateTime$1() {
}

$Class* OffsetDateTime$1::load$($String* name, bool initialize) {
	$loadClass(OffsetDateTime$1, name, initialize, &_OffsetDateTime$1_ClassInfo_, clinit$OffsetDateTime$1, allocate$OffsetDateTime$1);
	return class$;
}

$Class* OffsetDateTime$1::class$ = nullptr;

	} // time
} // java