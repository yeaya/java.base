#include <sun/security/provider/certpath/RevocationChecker$2.h>

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
#include <java/security/cert/PKIXRevocationChecker$Option.h>
#include <java/security/cert/PKIXRevocationChecker.h>
#include <sun/security/provider/certpath/RevocationChecker$Mode.h>
#include <sun/security/provider/certpath/RevocationChecker.h>
#include <jcpp.h>

#undef NO_FALLBACK
#undef ONLY_CRLS
#undef ONLY_END_ENTITY
#undef ONLY_OCSP
#undef PREFER_CRLS
#undef PREFER_OCSP
#undef SOFT_FAIL

using $PKIXRevocationChecker$OptionArray = $Array<::java::security::cert::PKIXRevocationChecker$Option>;
using $RevocationChecker$ModeArray = $Array<::sun::security::provider::certpath::RevocationChecker$Mode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $PKIXRevocationChecker = ::java::security::cert::PKIXRevocationChecker;
using $PKIXRevocationChecker$Option = ::java::security::cert::PKIXRevocationChecker$Option;
using $RevocationChecker = ::sun::security::provider::certpath::RevocationChecker;
using $RevocationChecker$Mode = ::sun::security::provider::certpath::RevocationChecker$Mode;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _RevocationChecker$2_FieldInfo_[] = {
	{"$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(RevocationChecker$2, $SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode)},
	{"$SwitchMap$java$security$cert$PKIXRevocationChecker$Option", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(RevocationChecker$2, $SwitchMap$java$security$cert$PKIXRevocationChecker$Option)},
	{}
};

$EnclosingMethodInfo _RevocationChecker$2_EnclosingMethodInfo_ = {
	"sun.security.provider.certpath.RevocationChecker",
	nullptr,
	nullptr
};

$InnerClassInfo _RevocationChecker$2_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.RevocationChecker$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _RevocationChecker$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.provider.certpath.RevocationChecker$2",
	"java.lang.Object",
	nullptr,
	_RevocationChecker$2_FieldInfo_,
	nullptr,
	nullptr,
	&_RevocationChecker$2_EnclosingMethodInfo_,
	_RevocationChecker$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.RevocationChecker"
};

$Object* allocate$RevocationChecker$2($Class* clazz) {
	return $of($alloc(RevocationChecker$2));
}

$ints* RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode = nullptr;
$ints* RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option = nullptr;

void clinit$RevocationChecker$2($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode, $new($ints, $($RevocationChecker$Mode::values())->length));
	{
		try {
			$nc(RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode)->set($RevocationChecker$Mode::PREFER_OCSP->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode)->set($RevocationChecker$Mode::ONLY_OCSP->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode)->set($RevocationChecker$Mode::PREFER_CRLS->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode)->set($RevocationChecker$Mode::ONLY_CRLS->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
	$assignStatic(RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option, $new($ints, $($PKIXRevocationChecker$Option::values())->length));
	{
		try {
			$nc(RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option)->set($PKIXRevocationChecker$Option::ONLY_END_ENTITY->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option)->set($PKIXRevocationChecker$Option::PREFER_CRLS->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option)->set($PKIXRevocationChecker$Option::SOFT_FAIL->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option)->set($PKIXRevocationChecker$Option::NO_FALLBACK->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

RevocationChecker$2::RevocationChecker$2() {
}

$Class* RevocationChecker$2::load$($String* name, bool initialize) {
	$loadClass(RevocationChecker$2, name, initialize, &_RevocationChecker$2_ClassInfo_, clinit$RevocationChecker$2, allocate$RevocationChecker$2);
	return class$;
}

$Class* RevocationChecker$2::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun