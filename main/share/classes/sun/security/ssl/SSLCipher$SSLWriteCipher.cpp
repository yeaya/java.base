#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>

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
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher = ::sun::security::ssl::SSLCipher;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLCipher$SSLWriteCipher_FieldInfo_[] = {
	{"authenticator", "Lsun/security/ssl/Authenticator;", nullptr, $FINAL, $field(SSLCipher$SSLWriteCipher, authenticator)},
	{"protocolVersion", "Lsun/security/ssl/ProtocolVersion;", nullptr, $FINAL, $field(SSLCipher$SSLWriteCipher, protocolVersion)},
	{"keyLimitEnabled", "Z", nullptr, 0, $field(SSLCipher$SSLWriteCipher, keyLimitEnabled)},
	{"keyLimitCountdown", "J", nullptr, 0, $field(SSLCipher$SSLWriteCipher, keyLimitCountdown)},
	{"baseSecret", "Ljavax/crypto/SecretKey;", nullptr, 0, $field(SSLCipher$SSLWriteCipher, baseSecret)},
	{}
};

$MethodInfo _SSLCipher$SSLWriteCipher_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;)V", nullptr, 0, $method(static_cast<void(SSLCipher$SSLWriteCipher::*)($Authenticator*,$ProtocolVersion*)>(&SSLCipher$SSLWriteCipher::init$))},
	{"atKeyLimit", "()Z", nullptr, $PUBLIC},
	{"calculateFragmentSize", "(II)I", nullptr, $ABSTRACT},
	{"calculatePacketSize", "(II)I", nullptr, $ABSTRACT},
	{"dispose", "()V", nullptr, 0},
	{"encrypt", "(BLjava/nio/ByteBuffer;)I", nullptr, $ABSTRACT},
	{"getExplicitNonceSize", "()I", nullptr, $ABSTRACT},
	{"isCBCMode", "()Z", nullptr, 0},
	{"isNullCipher", "()Z", nullptr, 0},
	{"nullDTlsWriteCipher", "()Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, $STATIC | $FINAL, $method(static_cast<SSLCipher$SSLWriteCipher*(*)()>(&SSLCipher$SSLWriteCipher::nullDTlsWriteCipher))},
	{"nullTlsWriteCipher", "()Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, $STATIC | $FINAL, $method(static_cast<SSLCipher$SSLWriteCipher*(*)()>(&SSLCipher$SSLWriteCipher::nullTlsWriteCipher))},
	{}
};

$InnerClassInfo _SSLCipher$SSLWriteCipher_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$SSLWriteCipher", "sun.security.ssl.SSLCipher", "SSLWriteCipher", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLCipher$SSLWriteCipher_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.ssl.SSLCipher$SSLWriteCipher",
	"java.lang.Object",
	nullptr,
	_SSLCipher$SSLWriteCipher_FieldInfo_,
	_SSLCipher$SSLWriteCipher_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$SSLWriteCipher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$SSLWriteCipher($Class* clazz) {
	return $of($alloc(SSLCipher$SSLWriteCipher));
}

void SSLCipher$SSLWriteCipher::init$($Authenticator* authenticator, $ProtocolVersion* protocolVersion) {
	this->keyLimitEnabled = false;
	this->keyLimitCountdown = 0;
	$set(this, authenticator, authenticator);
	$set(this, protocolVersion, protocolVersion);
}

SSLCipher$SSLWriteCipher* SSLCipher$SSLWriteCipher::nullTlsWriteCipher() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($SSLCipher);
		$init($ProtocolVersion);
		return $SSLCipher::B_NULL->createWriteCipher($($Authenticator::nullTlsMac()), $ProtocolVersion::NONE, nullptr, nullptr, nullptr);
	} catch ($GeneralSecurityException&) {
		$var($GeneralSecurityException, gse, $catch());
		$throwNew($RuntimeException, "Cannot create NULL SSL write Cipher"_s, gse);
	}
	$shouldNotReachHere();
}

SSLCipher$SSLWriteCipher* SSLCipher$SSLWriteCipher::nullDTlsWriteCipher() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($SSLCipher);
		$init($ProtocolVersion);
		return $SSLCipher::B_NULL->createWriteCipher($($Authenticator::nullDtlsMac()), $ProtocolVersion::NONE, nullptr, nullptr, nullptr);
	} catch ($GeneralSecurityException&) {
		$var($GeneralSecurityException, gse, $catch());
		$throwNew($RuntimeException, "Cannot create NULL SSL write Cipher"_s, gse);
	}
	$shouldNotReachHere();
}

void SSLCipher$SSLWriteCipher::dispose() {
}

bool SSLCipher$SSLWriteCipher::isCBCMode() {
	return false;
}

bool SSLCipher$SSLWriteCipher::isNullCipher() {
	return false;
}

bool SSLCipher$SSLWriteCipher::atKeyLimit() {
	if (this->keyLimitCountdown >= 0) {
		return false;
	}
	this->keyLimitEnabled = false;
	return true;
}

SSLCipher$SSLWriteCipher::SSLCipher$SSLWriteCipher() {
}

$Class* SSLCipher$SSLWriteCipher::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$SSLWriteCipher, name, initialize, &_SSLCipher$SSLWriteCipher_ClassInfo_, allocate$SSLCipher$SSLWriteCipher);
	return class$;
}

$Class* SSLCipher$SSLWriteCipher::class$ = nullptr;

		} // ssl
	} // security
} // sun