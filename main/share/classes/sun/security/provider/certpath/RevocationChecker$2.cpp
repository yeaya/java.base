#include <sun/security/provider/certpath/RevocationChecker$2.h>
#include <java/lang/NoSuchFieldError.h>
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

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $PKIXRevocationChecker$Option = ::java::security::cert::PKIXRevocationChecker$Option;
using $RevocationChecker$Mode = ::sun::security::provider::certpath::RevocationChecker$Mode;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$ints* RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode = nullptr;
$ints* RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option = nullptr;

void RevocationChecker$2::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode, $new($ints, $($RevocationChecker$Mode::values())->length));
	{
		try {
			RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode->set($RevocationChecker$Mode::PREFER_OCSP->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode->set($RevocationChecker$Mode::ONLY_OCSP->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode->set($RevocationChecker$Mode::PREFER_CRLS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			RevocationChecker$2::$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode->set($RevocationChecker$Mode::ONLY_CRLS->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option, $new($ints, $($PKIXRevocationChecker$Option::values())->length));
	{
		try {
			RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option->set($PKIXRevocationChecker$Option::ONLY_END_ENTITY->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option->set($PKIXRevocationChecker$Option::PREFER_CRLS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option->set($PKIXRevocationChecker$Option::SOFT_FAIL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			RevocationChecker$2::$SwitchMap$java$security$cert$PKIXRevocationChecker$Option->set($PKIXRevocationChecker$Option::NO_FALLBACK->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

RevocationChecker$2::RevocationChecker$2() {
}

$Class* RevocationChecker$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(RevocationChecker$2, $SwitchMap$sun$security$provider$certpath$RevocationChecker$Mode)},
		{"$SwitchMap$java$security$cert$PKIXRevocationChecker$Option", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(RevocationChecker$2, $SwitchMap$java$security$cert$PKIXRevocationChecker$Option)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.certpath.RevocationChecker",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.RevocationChecker$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.provider.certpath.RevocationChecker$2",
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
		"sun.security.provider.certpath.RevocationChecker"
	};
	$loadClass(RevocationChecker$2, name, initialize, &classInfo$$, RevocationChecker$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RevocationChecker$2);
	});
	return class$;
}

$Class* RevocationChecker$2::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun