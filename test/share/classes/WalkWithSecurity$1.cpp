#include <WalkWithSecurity$1.h>

#include <WalkWithSecurity$ExpectedResult.h>
#include <WalkWithSecurity.h>
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
#include <jcpp.h>

#undef FAIL
#undef PASS
#undef TOP_ONLY

using $WalkWithSecurity = ::WalkWithSecurity;
using $WalkWithSecurity$ExpectedResult = ::WalkWithSecurity$ExpectedResult;
using $WalkWithSecurity$ExpectedResultArray = $Array<WalkWithSecurity$ExpectedResult>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
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
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult)->set($WalkWithSecurity$ExpectedResult::FAIL->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(WalkWithSecurity$1::$SwitchMap$WalkWithSecurity$ExpectedResult)->set($WalkWithSecurity$ExpectedResult::TOP_ONLY->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
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