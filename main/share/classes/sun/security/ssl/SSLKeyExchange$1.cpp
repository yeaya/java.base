#include <sun/security/ssl/SSLKeyExchange$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/SSLKeyExchange$T12KeyAgreement.h>
#include <sun/security/ssl/SSLKeyExchange.h>
#include <jcpp.h>

#undef DHE
#undef DHE_EXPORT
#undef ECDH
#undef ECDHE
#undef K_DHE_DSS
#undef K_DHE_DSS_EXPORT
#undef K_DHE_RSA
#undef K_DHE_RSA_EXPORT
#undef K_DH_ANON
#undef K_DH_ANON_EXPORT
#undef K_ECDHE_ECDSA
#undef K_ECDHE_RSA
#undef K_ECDH_ANON
#undef K_ECDH_ECDSA
#undef K_ECDH_RSA
#undef K_RSA
#undef K_RSA_EXPORT
#undef RSA
#undef RSA_EXPORT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $CipherSuite$KeyExchange = ::sun::security::ssl::CipherSuite$KeyExchange;
using $SSLKeyExchange$T12KeyAgreement = ::sun::security::ssl::SSLKeyExchange$T12KeyAgreement;

namespace sun {
	namespace security {
		namespace ssl {

$ints* SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement = nullptr;
$ints* SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange = nullptr;

void SSLKeyExchange$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement, $new($ints, $($SSLKeyExchange$T12KeyAgreement::values())->length));
	{
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement->set($SSLKeyExchange$T12KeyAgreement::RSA->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement->set($SSLKeyExchange$T12KeyAgreement::RSA_EXPORT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement->set($SSLKeyExchange$T12KeyAgreement::DHE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement->set($SSLKeyExchange$T12KeyAgreement::DHE_EXPORT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement->set($SSLKeyExchange$T12KeyAgreement::ECDH->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement->set($SSLKeyExchange$T12KeyAgreement::ECDHE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange, $new($ints, $($CipherSuite$KeyExchange::values())->length));
	{
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_RSA->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_RSA_EXPORT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_DHE_DSS->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_DHE_DSS_EXPORT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_DHE_RSA->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_DHE_RSA_EXPORT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_DH_ANON->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_DH_ANON_EXPORT->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_ECDH_ECDSA->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_ECDH_RSA->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_ECDHE_ECDSA->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_ECDHE_RSA->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLKeyExchange$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_ECDH_ANON->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SSLKeyExchange$1::SSLKeyExchange$1() {
}

$Class* SSLKeyExchange$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLKeyExchange$1, $SwitchMap$sun$security$ssl$SSLKeyExchange$T12KeyAgreement)},
		{"$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLKeyExchange$1, $SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.SSLKeyExchange",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLKeyExchange$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.SSLKeyExchange$1",
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
		"sun.security.ssl.SSLKeyExchange"
	};
	$loadClass(SSLKeyExchange$1, name, initialize, &classInfo$$, SSLKeyExchange$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLKeyExchange$1);
	});
	return class$;
}

$Class* SSLKeyExchange$1::class$ = nullptr;

		} // ssl
	} // security
} // sun