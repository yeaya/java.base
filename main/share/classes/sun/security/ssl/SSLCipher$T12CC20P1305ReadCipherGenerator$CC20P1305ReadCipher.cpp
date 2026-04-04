#include <sun/security/ssl/SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/BadPaddingException.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/IllegalBlockSizeException.h>
#include <javax/crypto/ShortBufferException.h>
#include <javax/crypto/spec/IvParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/Plaintext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLCipher$T12CC20P1305ReadCipherGenerator.h>
#include <sun/security/ssl/SSLCipher.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef DECRYPT_MODE
#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $BadPaddingException = ::javax::crypto::BadPaddingException;
using $Cipher = ::javax::crypto::Cipher;
using $IllegalBlockSizeException = ::javax::crypto::IllegalBlockSizeException;
using $ShortBufferException = ::javax::crypto::ShortBufferException;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Plaintext = ::sun::security::ssl::Plaintext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher = ::sun::security::ssl::SSLCipher;
using $SSLCipher$SSLReadCipher = ::sun::security::ssl::SSLCipher$SSLReadCipher;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

void SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::init$($Authenticator* authenticator, $ProtocolVersion* protocolVersion, $SSLCipher* sslCipher, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	$SSLCipher$SSLReadCipher::init$(authenticator, protocolVersion);
	$set(this, cipher, $Cipher::getInstance(algorithm));
	this->tagSize = $nc(sslCipher)->tagSize;
	$set(this, key, key);
	$set(this, iv, $nc($cast($IvParameterSpec, params))->getIV());
	$set(this, random, random);
}

$Plaintext* SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::decrypt(int8_t contentType, $ByteBuffer* bb, $bytes* sequence) {
	$useLocalObjectStack();
	if ($nc(bb)->remaining() <= this->tagSize) {
		$throwNew($BadPaddingException, $$str({"Insufficient buffer remaining for AEAD cipher fragment ("_s, $$str(bb->remaining()), "). Needs to be more than tag size ("_s, $$str(this->tagSize), ")"_s}));
	}
	$var($bytes, sn, sequence);
	if (sn == nullptr) {
		$assign(sn, $nc(this->authenticator)->sequenceNumber());
	}
	$var($bytes, nonce, $new($bytes, $nc(this->iv)->length));
	$System::arraycopy(sn, 0, nonce, nonce->length - $nc(sn)->length, $nc(sn)->length);
	for (int32_t i = 0; i < nonce->length; ++i) {
		(*nonce)[i] ^= this->iv->get(i);
	}
	$var($AlgorithmParameterSpec, spec, $new($IvParameterSpec, nonce));
	try {
		$nc(this->cipher)->init($Cipher::DECRYPT_MODE, this->key, spec, this->random);
	} catch ($InvalidKeyException& ikae) {
		$throwNew($RuntimeException, "invalid key or spec in AEAD mode"_s, ikae);
	} catch ($InvalidAlgorithmParameterException& ikae) {
		$throwNew($RuntimeException, "invalid key or spec in AEAD mode"_s, ikae);
	}
	$var($bytes, aad, $nc(this->authenticator)->acquireAuthenticationBytes(contentType, bb->remaining() - this->tagSize, sequence));
	$nc(this->cipher)->updateAAD(aad);
	int32_t len = 0;
	int32_t pos = bb->position();
	$var($ByteBuffer, dup, bb->duplicate());
	try {
		len = this->cipher->doFinal(dup, bb);
	} catch ($IllegalBlockSizeException& ibse) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Cipher error in AEAD mode \""_s);
		var$0->append($(ibse->getMessage()));
		var$0->append(" \"in JCE provider "_s);
		var$0->append($($$nc(this->cipher->getProvider())->getName()));
		$throwNew($RuntimeException, $$str(var$0));
	} catch ($ShortBufferException& sbe) {
		$throwNew($RuntimeException, $$str({"Cipher buffering error in JCE provider "_s, $($$nc(this->cipher->getProvider())->getName())}), sbe);
	}
	bb->position(pos);
	bb->limit(pos + len);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("plaintext"_s)) {
		$SSLLogger::fine("Plaintext after DECRYPTION"_s, $$new($ObjectArray, {$(bb->duplicate())}));
	}
	$init($ProtocolVersion);
	return $new($Plaintext, contentType, $ProtocolVersion::NONE->major, $ProtocolVersion::NONE->minor, -1, -1, $(bb->slice()));
}

void SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::dispose() {
	if (this->cipher != nullptr) {
		try {
			this->cipher->doFinal();
		} catch ($Exception& e) {
		}
	}
}

int32_t SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::estimateFragmentSize(int32_t packetSize, int32_t headerSize) {
	return packetSize - headerSize - this->tagSize;
}

SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher() {
}

$Class* SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cipher", "Ljavax/crypto/Cipher;", nullptr, $PRIVATE | $FINAL, $field(SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, cipher)},
		{"tagSize", "I", nullptr, $PRIVATE | $FINAL, $field(SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, tagSize)},
		{"key", "Ljava/security/Key;", nullptr, $PRIVATE | $FINAL, $field(SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, key)},
		{"iv", "[B", nullptr, $PRIVATE | $FINAL, $field(SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, iv)},
		{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE | $FINAL, $field(SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, random)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/SSLCipher;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, 0, $method(SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, init$, void, $Authenticator*, $ProtocolVersion*, $SSLCipher*, $String*, $Key*, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.GeneralSecurityException"},
		{"decrypt", "(BLjava/nio/ByteBuffer;[B)Lsun/security/ssl/Plaintext;", nullptr, $PUBLIC, $virtualMethod(SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, decrypt, $Plaintext*, int8_t, $ByteBuffer*, $bytes*), "java.security.GeneralSecurityException"},
		{"dispose", "()V", nullptr, 0, $virtualMethod(SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, dispose, void)},
		{"estimateFragmentSize", "(II)I", nullptr, 0, $virtualMethod(SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, estimateFragmentSize, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLCipher$T12CC20P1305ReadCipherGenerator", "sun.security.ssl.SSLCipher", "T12CC20P1305ReadCipherGenerator", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher", "sun.security.ssl.SSLCipher$T12CC20P1305ReadCipherGenerator", "CC20P1305ReadCipher", $STATIC | $FINAL},
		{"sun.security.ssl.SSLCipher$SSLReadCipher", "sun.security.ssl.SSLCipher", "SSLReadCipher", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher",
		"sun.security.ssl.SSLCipher$SSLReadCipher",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLCipher"
	};
	$loadClass(SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher);
	});
	return class$;
}

$Class* SSLCipher$T12CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::class$ = nullptr;

		} // ssl
	} // security
} // sun