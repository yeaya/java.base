#include <sun/security/ssl/SSLAlgorithmDecomposer$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/security/ssl/CipherSuite$KeyExchange.h>
#include <sun/security/ssl/SSLAlgorithmDecomposer.h>
#include <sun/security/ssl/SSLCipher.h>
#include <jcpp.h>

#undef B_3DES
#undef B_AES_128
#undef B_AES_128_GCM
#undef B_AES_256
#undef B_AES_256_GCM
#undef B_DES
#undef B_DES_40
#undef B_NULL
#undef K_DHE_DSS
#undef K_DHE_RSA
#undef K_DH_ANON
#undef K_DH_DSS
#undef K_DH_RSA
#undef K_ECDHE_ECDSA
#undef K_ECDHE_RSA
#undef K_ECDH_ANON
#undef K_ECDH_ECDSA
#undef K_ECDH_RSA
#undef K_NULL
#undef K_RSA
#undef K_RSA_EXPORT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $CipherSuite$KeyExchange = ::sun::security::ssl::CipherSuite$KeyExchange;
using $SSLCipher = ::sun::security::ssl::SSLCipher;

namespace sun {
	namespace security {
		namespace ssl {

$ints* SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher = nullptr;
$ints* SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange = nullptr;

void SSLAlgorithmDecomposer$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher, $new($ints, $($SSLCipher::values())->length));
	{
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher->set($SSLCipher::B_NULL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher->set($SSLCipher::B_RC2_40->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher->set($SSLCipher::B_RC4_40->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher->set($SSLCipher::B_RC4_128->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher->set($SSLCipher::B_DES_40->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher->set($SSLCipher::B_DES->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher->set($SSLCipher::B_3DES->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher->set($SSLCipher::B_AES_128->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher->set($SSLCipher::B_AES_256->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher->set($SSLCipher::B_AES_128_GCM->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher->set($SSLCipher::B_AES_256_GCM->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange, $new($ints, $($CipherSuite$KeyExchange::values())->length));
	{
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_NULL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_RSA->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_RSA_EXPORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_DH_RSA->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_DH_DSS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_DHE_DSS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_DHE_RSA->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_DH_ANON->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_ECDH_ECDSA->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_ECDH_RSA->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_ECDHE_ECDSA->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_ECDHE_RSA->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange->set($CipherSuite$KeyExchange::K_ECDH_ANON->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SSLAlgorithmDecomposer$1::SSLAlgorithmDecomposer$1() {
}

$Class* SSLAlgorithmDecomposer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$security$ssl$SSLCipher", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLAlgorithmDecomposer$1, $SwitchMap$sun$security$ssl$SSLCipher)},
		{"$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLAlgorithmDecomposer$1, $SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.SSLAlgorithmDecomposer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLAlgorithmDecomposer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.security.ssl.SSLAlgorithmDecomposer$1",
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
		"sun.security.ssl.SSLAlgorithmDecomposer"
	};
	$loadClass(SSLAlgorithmDecomposer$1, name, initialize, &classInfo$$, SSLAlgorithmDecomposer$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLAlgorithmDecomposer$1);
	});
	return class$;
}

$Class* SSLAlgorithmDecomposer$1::class$ = nullptr;

		} // ssl
	} // security
} // sun