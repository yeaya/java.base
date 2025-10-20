#include <sun/security/ssl/SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher.h>

#include <java/lang/Array.h>
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
#include <java/security/Key.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/ShortBufferException.h>
#include <sun/security/ssl/Authenticator$MAC.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLCipher$StreamWriteCipherGenerator.h>
#include <sun/security/ssl/SSLCipher.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef ENCRYPT_MODE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Key = ::java::security::Key;
using $Provider = ::java::security::Provider;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Cipher = ::javax::crypto::Cipher;
using $ShortBufferException = ::javax::crypto::ShortBufferException;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Authenticator$MAC = ::sun::security::ssl::Authenticator$MAC;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher = ::sun::security::ssl::SSLCipher;
using $SSLCipher$SSLWriteCipher = ::sun::security::ssl::SSLCipher$SSLWriteCipher;
using $SSLCipher$StreamWriteCipherGenerator = ::sun::security::ssl::SSLCipher$StreamWriteCipherGenerator;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher_FieldInfo_[] = {
	{"cipher", "Ljavax/crypto/Cipher;", nullptr, $PRIVATE | $FINAL, $field(SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher, cipher)},
	{}
};

$MethodInfo _SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, 0, $method(static_cast<void(SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher::*)($Authenticator*,$ProtocolVersion*,$String*,$Key*,$AlgorithmParameterSpec*,$SecureRandom*)>(&SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher::init$)), "java.security.GeneralSecurityException"},
	{"calculateFragmentSize", "(II)I", nullptr, 0},
	{"calculatePacketSize", "(II)I", nullptr, 0},
	{"dispose", "()V", nullptr, 0},
	{"encrypt", "(BLjava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{"getExplicitNonceSize", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$StreamWriteCipherGenerator", "sun.security.ssl.SSLCipher", "StreamWriteCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher", "sun.security.ssl.SSLCipher$StreamWriteCipherGenerator", "StreamWriteCipher", $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$SSLWriteCipher", "sun.security.ssl.SSLCipher", "SSLWriteCipher", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher",
	"sun.security.ssl.SSLCipher$SSLWriteCipher",
	nullptr,
	_SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher_FieldInfo_,
	_SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher($Class* clazz) {
	return $of($alloc(SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher));
}

void SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher::init$($Authenticator* authenticator, $ProtocolVersion* protocolVersion, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	$SSLCipher$SSLWriteCipher::init$(authenticator, protocolVersion);
	$set(this, cipher, $Cipher::getInstance(algorithm));
	$nc(this->cipher)->init($Cipher::ENCRYPT_MODE, key, params, random);
}

int32_t SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher::encrypt(int8_t contentType, $ByteBuffer* bb) {
	$useLocalCurrentObjectStackCache();
	$var($Authenticator$MAC, signer, $cast($Authenticator$MAC, this->authenticator));
	if ($nc($($nc(signer)->macAlg()))->size != 0) {
		$SSLCipher::addMac(signer, bb, contentType);
	} else {
		$nc(this->authenticator)->increaseSequenceNumber();
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("plaintext"_s)) {
		$SSLLogger::finest("Padded plaintext before ENCRYPTION"_s, $$new($ObjectArray, {$($of($nc(bb)->duplicate()))}));
	}
	int32_t len = $nc(bb)->remaining();
	$var($ByteBuffer, dup, bb->duplicate());
	try {
		if (len != $nc(this->cipher)->update(dup, bb)) {
			$throwNew($RuntimeException, "Unexpected number of plaintext bytes"_s);
		}
		int32_t var$0 = bb->position();
		if (var$0 != $nc(dup)->position()) {
			$throwNew($RuntimeException, "Unexpected ByteBuffer position"_s);
		}
	} catch ($ShortBufferException&) {
		$var($ShortBufferException, sbe, $catch());
		$throwNew($RuntimeException, $$str({"Cipher buffering error in JCE provider "_s, $($nc($($nc(this->cipher)->getProvider()))->getName())}), sbe);
	}
	return len;
}

void SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher::dispose() {
	if (this->cipher != nullptr) {
		try {
			$nc(this->cipher)->doFinal();
		} catch ($Exception&) {
			$catch();
		}
	}
}

int32_t SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher::getExplicitNonceSize() {
	return 0;
}

int32_t SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher::calculateFragmentSize(int32_t packetLimit, int32_t headerSize) {
	int32_t macLen = $nc($($nc(($cast($Authenticator$MAC, this->authenticator)))->macAlg()))->size;
	return packetLimit - headerSize - macLen;
}

int32_t SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher::calculatePacketSize(int32_t fragmentSize, int32_t headerSize) {
	int32_t macLen = $nc($($nc(($cast($Authenticator$MAC, this->authenticator)))->macAlg()))->size;
	return fragmentSize + headerSize + macLen;
}

SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher::SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher() {
}

$Class* SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher, name, initialize, &_SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher_ClassInfo_, allocate$SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher);
	return class$;
}

$Class* SSLCipher$StreamWriteCipherGenerator$StreamWriteCipher::class$ = nullptr;

		} // ssl
	} // security
} // sun