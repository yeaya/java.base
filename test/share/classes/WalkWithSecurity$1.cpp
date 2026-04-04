#include <WalkWithSecurity$1.h>
#include <WalkWithSecurity$ExpectedResult.h>
#include <WalkWithSecurity.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef FAIL
#undef PASS
#undef TOP_ONLY

using $WalkWithSecurity$ExpectedResult = ::WalkWithSecurity$ExpectedResult;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$ints* WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult = nullptr;

void WalkWithSecurity$1::clinit$($Class* clazz) {
	$assignStatic(WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult, $new($ints, $($WalkWithSecurity$ExpectedResult::values())->length));
	{
		try {
			WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult->set($WalkWithSecurity$ExpectedResult::PASS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult->set($WalkWithSecurity$ExpectedResult::FAIL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult->set($WalkWithSecurity$ExpectedResult::TOP_ONLY->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WalkWithSecurity$1::WalkWithSecurity$1() {
}

$Class* WalkWithSecurity$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$WalkWithSecurity$ExpectedResult", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WalkWithSecurity$1, $SwitchMap$WalkWithSecurity$ExpectedResult)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WalkWithSecurity",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WalkWithSecurity$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"WalkWithSecurity$1",
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
		"WalkWithSecurity"
	};
	$loadClass(WalkWithSecurity$1, name, initialize, &classInfo$$, WalkWithSecurity$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WalkWithSecurity$1);
	});
	return class$;
}

$Class* WalkWithSecurity$1::class$ = nullptr;