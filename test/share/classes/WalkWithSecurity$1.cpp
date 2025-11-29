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

$FieldInfo _WalkWithSecurity$1_FieldInfo_[] = {
	{"$SwitchMap$WalkWithSecurity$ExpectedResult", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WalkWithSecurity$1, $SwitchMap$WalkWithSecurity$ExpectedResult)},
	{}
};

$EnclosingMethodInfo _WalkWithSecurity$1_EnclosingMethodInfo_ = {
	"WalkWithSecurity",
	nullptr,
	nullptr
};

$InnerClassInfo _WalkWithSecurity$1_InnerClassesInfo_[] = {
	{"WalkWithSecurity$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _WalkWithSecurity$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"WalkWithSecurity$1",
	"java.lang.Object",
	nullptr,
	_WalkWithSecurity$1_FieldInfo_,
	nullptr,
	nullptr,
	&_WalkWithSecurity$1_EnclosingMethodInfo_,
	_WalkWithSecurity$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WalkWithSecurity"
};

$Object* allocate$WalkWithSecurity$1($Class* clazz) {
	return $of($alloc(WalkWithSecurity$1));
}

$ints* WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult = nullptr;

void clinit$WalkWithSecurity$1($Class* class$) {
	$assignStatic(WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult, $new($ints, $($WalkWithSecurity$ExpectedResult::values())->length));
	{
		try {
			$nc(WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult)->set($WalkWithSecurity$ExpectedResult::PASS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult)->set($WalkWithSecurity$ExpectedResult::FAIL->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult)->set($WalkWithSecurity$ExpectedResult::TOP_ONLY->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WalkWithSecurity$1::WalkWithSecurity$1() {
}

$Class* WalkWithSecurity$1::load$($String* name, bool initialize) {
	$loadClass(WalkWithSecurity$1, name, initialize, &_WalkWithSecurity$1_ClassInfo_, clinit$WalkWithSecurity$1, allocate$WalkWithSecurity$1);
	return class$;
}

$Class* WalkWithSecurity$1::class$ = nullptr;