#include <java/time/temporal/IsoFields$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/time/temporal/IsoFields$Unit.h>
#include <java/time/temporal/IsoFields.h>
#include <jcpp.h>

#undef QUARTER_YEARS
#undef WEEK_BASED_YEARS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $IsoFields$Unit = ::java::time::temporal::IsoFields$Unit;

namespace java {
	namespace time {
		namespace temporal {

$ints* IsoFields$1::$SwitchMap$java$time$temporal$IsoFields$Unit = nullptr;

void IsoFields$1::clinit$($Class* clazz) {
	$assignStatic(IsoFields$1::$SwitchMap$java$time$temporal$IsoFields$Unit, $new($ints, $($IsoFields$Unit::values())->length));
	{
		try {
			IsoFields$1::$SwitchMap$java$time$temporal$IsoFields$Unit->set($IsoFields$Unit::WEEK_BASED_YEARS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			IsoFields$1::$SwitchMap$java$time$temporal$IsoFields$Unit->set($IsoFields$Unit::QUARTER_YEARS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

IsoFields$1::IsoFields$1() {
}

$Class* IsoFields$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$time$temporal$IsoFields$Unit", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(IsoFields$1, $SwitchMap$java$time$temporal$IsoFields$Unit)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.time.temporal.IsoFields",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.temporal.IsoFields$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.time.temporal.IsoFields$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.time.temporal.IsoFields"
	};
	$loadClass(IsoFields$1, name, initialize, &classInfo$$, IsoFields$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IsoFields$1);
	});
	return class$;
}

$Class* IsoFields$1::class$ = nullptr;

		} // temporal
	} // time
} // java