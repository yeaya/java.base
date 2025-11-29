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

$FieldInfo _SSLAlgorithmDecomposer$1_FieldInfo_[] = {
	{"$SwitchMap$sun$security$ssl$SSLCipher", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLAlgorithmDecomposer$1, $SwitchMap$sun$security$ssl$SSLCipher)},
	{"$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLAlgorithmDecomposer$1, $SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)},
	{}
};

$EnclosingMethodInfo _SSLAlgorithmDecomposer$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.SSLAlgorithmDecomposer",
	nullptr,
	nullptr
};

$InnerClassInfo _SSLAlgorithmDecomposer$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLAlgorithmDecomposer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _SSLAlgorithmDecomposer$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.security.ssl.SSLAlgorithmDecomposer$1",
	"java.lang.Object",
	nullptr,
	_SSLAlgorithmDecomposer$1_FieldInfo_,
	nullptr,
	nullptr,
	&_SSLAlgorithmDecomposer$1_EnclosingMethodInfo_,
	_SSLAlgorithmDecomposer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLAlgorithmDecomposer"
};

$Object* allocate$SSLAlgorithmDecomposer$1($Class* clazz) {
	return $of($alloc(SSLAlgorithmDecomposer$1));
}

$ints* SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher = nullptr;
$ints* SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange = nullptr;

void clinit$SSLAlgorithmDecomposer$1($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher, $new($ints, $($SSLCipher::values())->length));
	{
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher)->set($SSLCipher::B_NULL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher)->set($SSLCipher::B_RC2_40->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher)->set($SSLCipher::B_RC4_40->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher)->set($SSLCipher::B_RC4_128->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher)->set($SSLCipher::B_DES_40->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher)->set($SSLCipher::B_DES->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher)->set($SSLCipher::B_3DES->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher)->set($SSLCipher::B_AES_128->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher)->set($SSLCipher::B_AES_256->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher)->set($SSLCipher::B_AES_128_GCM->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$SSLCipher)->set($SSLCipher::B_AES_256_GCM->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange, $new($ints, $($CipherSuite$KeyExchange::values())->length));
	{
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_NULL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_RSA->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_RSA_EXPORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_DH_RSA->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_DH_DSS->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_DHE_DSS->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_DHE_RSA->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_DH_ANON->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_ECDH_ECDSA->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_ECDH_RSA->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_ECDHE_ECDSA->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_ECDHE_RSA->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLAlgorithmDecomposer$1::$SwitchMap$sun$security$ssl$CipherSuite$KeyExchange)->set($CipherSuite$KeyExchange::K_ECDH_ANON->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SSLAlgorithmDecomposer$1::SSLAlgorithmDecomposer$1() {
}

$Class* SSLAlgorithmDecomposer$1::load$($String* name, bool initialize) {
	$loadClass(SSLAlgorithmDecomposer$1, name, initialize, &_SSLAlgorithmDecomposer$1_ClassInfo_, clinit$SSLAlgorithmDecomposer$1, allocate$SSLAlgorithmDecomposer$1);
	return class$;
}

$Class* SSLAlgorithmDecomposer$1::class$ = nullptr;

		} // ssl
	} // security
} // sun