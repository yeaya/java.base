#include <java/time/temporal/IsoFields$1.h>

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
#include <java/time/temporal/IsoFields$Unit.h>
#include <java/time/temporal/IsoFields.h>
#include <jcpp.h>

#undef QUARTER_YEARS
#undef WEEK_BASED_YEARS

using $IsoFields$UnitArray = $Array<::java::time::temporal::IsoFields$Unit>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $IsoFields = ::java::time::temporal::IsoFields;
using $IsoFields$Unit = ::java::time::temporal::IsoFields$Unit;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _IsoFields$1_FieldInfo_[] = {
	{"$SwitchMap$java$time$temporal$IsoFields$Unit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(IsoFields$1, $SwitchMap$java$time$temporal$IsoFields$Unit)},
	{}
};

$EnclosingMethodInfo _IsoFields$1_EnclosingMethodInfo_ = {
	"java.time.temporal.IsoFields",
	nullptr,
	nullptr
};

$InnerClassInfo _IsoFields$1_InnerClassesInfo_[] = {
	{"java.time.temporal.IsoFields$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _IsoFields$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.time.temporal.IsoFields$1",
	"java.lang.Object",
	nullptr,
	_IsoFields$1_FieldInfo_,
	nullptr,
	nullptr,
	&_IsoFields$1_EnclosingMethodInfo_,
	_IsoFields$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.temporal.IsoFields"
};

$Object* allocate$IsoFields$1($Class* clazz) {
	return $of($alloc(IsoFields$1));
}

$ints* IsoFields$1::$SwitchMap$java$time$temporal$IsoFields$Unit = nullptr;

void clinit$IsoFields$1($Class* class$) {
	$assignStatic(IsoFields$1::$SwitchMap$java$time$temporal$IsoFields$Unit, $new($ints, $($IsoFields$Unit::values())->length));
	{
		try {
			$nc(IsoFields$1::$SwitchMap$java$time$temporal$IsoFields$Unit)->set($IsoFields$Unit::WEEK_BASED_YEARS->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(IsoFields$1::$SwitchMap$java$time$temporal$IsoFields$Unit)->set($IsoFields$Unit::QUARTER_YEARS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

IsoFields$1::IsoFields$1() {
}

$Class* IsoFields$1::load$($String* name, bool initialize) {
	$loadClass(IsoFields$1, name, initialize, &_IsoFields$1_ClassInfo_, clinit$IsoFields$1, allocate$IsoFields$1);
	return class$;
}

$Class* IsoFields$1::class$ = nullptr;

		} // temporal
	} // time
} // java