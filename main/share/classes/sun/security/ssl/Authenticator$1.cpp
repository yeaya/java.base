#include <sun/security/ssl/Authenticator$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <jcpp.h>

#undef M_MD5
#undef M_SHA
#undef M_SHA256
#undef M_SHA384

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;

namespace sun {
	namespace security {
		namespace ssl {

$ints* Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg = nullptr;

void Authenticator$1::clinit$($Class* clazz) {
	$assignStatic(Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg, $new($ints, $($CipherSuite$MacAlg::values())->length));
	{
		try {
			Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg->set($CipherSuite$MacAlg::M_MD5->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg->set($CipherSuite$MacAlg::M_SHA->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg->set($CipherSuite$MacAlg::M_SHA256->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Authenticator$1::$SwitchMap$sun$security$ssl$CipherSuite$MacAlg->set($CipherSuite$MacAlg::M_SHA384->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Authenticator$1::Authenticator$1() {
}

$Class* Authenticator$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$CipherSuite$MacAlg", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Authenticator$1, $SwitchMap$sun$security$ssl$CipherSuite$MacAlg)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.Authenticator",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Authenticator$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.Authenticator$1",
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
		"sun.security.ssl.Authenticator"
	};
	$loadClass(Authenticator$1, name, initialize, &classInfo$$, Authenticator$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$1);
	});
	return class$;
}

$Class* Authenticator$1::class$ = nullptr;

		} // ssl
	} // security
} // sun