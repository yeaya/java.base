#include <sun/security/ssl/RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/SecretKey.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/RSAKeyExchange$RSAKAGenerator.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <sun/security/ssl/SSLMasterKeyDerivation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $RSAKeyExchange$RSAKAGenerator = ::sun::security::ssl::RSAKeyExchange$RSAKAGenerator;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLMasterKeyDerivation = ::sun::security::ssl::SSLMasterKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation_FieldInfo_[] = {
	{"context", "Lsun/security/ssl/HandshakeContext;", nullptr, $PRIVATE | $FINAL, $field(RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation, context)},
	{"preMasterSecret", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation, preMasterSecret)},
	{}
};

$MethodInfo _RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)V", nullptr, 0, $method(static_cast<void(RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation::*)($HandshakeContext*,$SecretKey*)>(&RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation::init$))},
	{"deriveKey", "(Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation_InnerClassesInfo_[] = {
	{"sun.security.ssl.RSAKeyExchange$RSAKAGenerator", "sun.security.ssl.RSAKeyExchange", "RSAKAGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation", "sun.security.ssl.RSAKeyExchange$RSAKAGenerator", "RSAKAKeyDerivation", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation",
	"java.lang.Object",
	"sun.security.ssl.SSLKeyDerivation",
	_RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation_FieldInfo_,
	_RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation_MethodInfo_,
	nullptr,
	nullptr,
	_RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.RSAKeyExchange"
};

$Object* allocate$RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation($Class* clazz) {
	return $of($alloc(RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation));
}

void RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation::init$($HandshakeContext* context, $SecretKey* preMasterSecret) {
	$set(this, context, context);
	$set(this, preMasterSecret, preMasterSecret);
}

$SecretKey* RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation::deriveKey($String* algorithm, $AlgorithmParameterSpec* params) {
	$useLocalCurrentObjectStackCache();
	$SSLMasterKeyDerivation* mskd = $SSLMasterKeyDerivation::valueOf($nc(this->context)->negotiatedProtocol);
	if (mskd == nullptr) {
		$throwNew($SSLHandshakeException, $$str({"No expected master key derivation for protocol: "_s, $nc($nc(this->context)->negotiatedProtocol)->name$}));
	}
	$var($SSLKeyDerivation, kd, $nc(mskd)->createKeyDerivation(this->context, this->preMasterSecret));
	return $nc(kd)->deriveKey("MasterSecret"_s, params);
}

RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation::RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation() {
}

$Class* RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation::load$($String* name, bool initialize) {
	$loadClass(RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation, name, initialize, &_RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation_ClassInfo_, allocate$RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation);
	return class$;
}

$Class* RSAKeyExchange$RSAKAGenerator$RSAKAKeyDerivation::class$ = nullptr;

		} // ssl
	} // security
} // sun