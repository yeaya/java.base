#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/SecureRandom.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/IvParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/Plaintext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher.h>
#include <jcpp.h>

#undef B_NULL
#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $SecureRandom = ::java::security::SecureRandom;
using $SecretKey = ::javax::crypto::SecretKey;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Plaintext = ::sun::security::ssl::Plaintext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher = ::sun::security::ssl::SSLCipher;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLCipher$SSLReadCipher_FieldInfo_[] = {
	{"authenticator", "Lsun/security/ssl/Authenticator;", nullptr, $FINAL, $field(SSLCipher$SSLReadCipher, authenticator)},
	{"protocolVersion", "Lsun/security/ssl/ProtocolVersion;", nullptr, $FINAL, $field(SSLCipher$SSLReadCipher, protocolVersion)},
	{"keyLimitEnabled", "Z", nullptr, 0, $field(SSLCipher$SSLReadCipher, keyLimitEnabled)},
	{"keyLimitCountdown", "J", nullptr, 0, $field(SSLCipher$SSLReadCipher, keyLimitCountdown)},
	{"baseSecret", "Ljavax/crypto/SecretKey;", nullptr, 0, $field(SSLCipher$SSLReadCipher, baseSecret)},
	{}
};

$MethodInfo _SSLCipher$SSLReadCipher_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;)V", nullptr, 0, $method(static_cast<void(SSLCipher$SSLReadCipher::*)($Authenticator*,$ProtocolVersion*)>(&SSLCipher$SSLReadCipher::init$))},
	{"atKeyLimit", "()Z", nullptr, $PUBLIC},
	{"decrypt", "(BLjava/nio/ByteBuffer;[B)Lsun/security/ssl/Plaintext;", nullptr, $ABSTRACT, nullptr, "java.security.GeneralSecurityException"},
	{"dispose", "()V", nullptr, 0},
	{"estimateFragmentSize", "(II)I", nullptr, $ABSTRACT},
	{"isNullCipher", "()Z", nullptr, 0},
	{"nullDTlsReadCipher", "()Lsun/security/ssl/SSLCipher$SSLReadCipher;", nullptr, $STATIC | $FINAL, $method(static_cast<SSLCipher$SSLReadCipher*(*)()>(&SSLCipher$SSLReadCipher::nullDTlsReadCipher))},
	{"nullTlsReadCipher", "()Lsun/security/ssl/SSLCipher$SSLReadCipher;", nullptr, $STATIC | $FINAL, $method(static_cast<SSLCipher$SSLReadCipher*(*)()>(&SSLCipher$SSLReadCipher::nullTlsReadCipher))},
	{}
};

$InnerClassInfo _SSLCipher$SSLReadCipher_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$SSLReadCipher", "sun.security.ssl.SSLCipher", "SSLReadCipher", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLCipher$SSLReadCipher_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.ssl.SSLCipher$SSLReadCipher",
	"java.lang.Object",
	nullptr,
	_SSLCipher$SSLReadCipher_FieldInfo_,
	_SSLCipher$SSLReadCipher_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$SSLReadCipher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$SSLReadCipher($Class* clazz) {
	return $of($alloc(SSLCipher$SSLReadCipher));
}

void SSLCipher$SSLReadCipher::init$($Authenticator* authenticator, $ProtocolVersion* protocolVersion) {
	this->keyLimitEnabled = false;
	this->keyLimitCountdown = 0;
	$set(this, authenticator, authenticator);
	$set(this, protocolVersion, protocolVersion);
}

SSLCipher$SSLReadCipher* SSLCipher$SSLReadCipher::nullTlsReadCipher() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($SSLCipher);
		$init($ProtocolVersion);
		return $SSLCipher::B_NULL->createReadCipher($($Authenticator::nullTlsMac()), $ProtocolVersion::NONE, nullptr, nullptr, nullptr);
	} catch ($GeneralSecurityException&) {
		$var($GeneralSecurityException, gse, $catch());
		$throwNew($RuntimeException, "Cannot create NULL SSLCipher"_s, gse);
	}
	$shouldNotReachHere();
}

SSLCipher$SSLReadCipher* SSLCipher$SSLReadCipher::nullDTlsReadCipher() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($SSLCipher);
		$init($ProtocolVersion);
		return $SSLCipher::B_NULL->createReadCipher($($Authenticator::nullDtlsMac()), $ProtocolVersion::NONE, nullptr, nullptr, nullptr);
	} catch ($GeneralSecurityException&) {
		$var($GeneralSecurityException, gse, $catch());
		$throwNew($RuntimeException, "Cannot create NULL SSLCipher"_s, gse);
	}
	$shouldNotReachHere();
}

void SSLCipher$SSLReadCipher::dispose() {
}

bool SSLCipher$SSLReadCipher::isNullCipher() {
	return false;
}

bool SSLCipher$SSLReadCipher::atKeyLimit() {
	if (this->keyLimitCountdown >= 0) {
		return false;
	}
	this->keyLimitEnabled = false;
	return true;
}

SSLCipher$SSLReadCipher::SSLCipher$SSLReadCipher() {
}

$Class* SSLCipher$SSLReadCipher::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$SSLReadCipher, name, initialize, &_SSLCipher$SSLReadCipher_ClassInfo_, allocate$SSLCipher$SSLReadCipher);
	return class$;
}

$Class* SSLCipher$SSLReadCipher::class$ = nullptr;

		} // ssl
	} // security
} // sun