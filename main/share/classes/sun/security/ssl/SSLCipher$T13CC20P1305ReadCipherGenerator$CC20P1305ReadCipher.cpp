#include <sun/security/ssl/SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
#include <sun/security/ssl/ContentType.h>
#include <sun/security/ssl/Plaintext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLCipher$T13CC20P1305ReadCipherGenerator.h>
#include <sun/security/ssl/SSLCipher.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef CHANGE_CIPHER_SPEC
#undef DECRYPT_MODE
#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $Provider = ::java::security::Provider;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $BadPaddingException = ::javax::crypto::BadPaddingException;
using $Cipher = ::javax::crypto::Cipher;
using $IllegalBlockSizeException = ::javax::crypto::IllegalBlockSizeException;
using $ShortBufferException = ::javax::crypto::ShortBufferException;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $ContentType = ::sun::security::ssl::ContentType;
using $Plaintext = ::sun::security::ssl::Plaintext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher = ::sun::security::ssl::SSLCipher;
using $SSLCipher$SSLReadCipher = ::sun::security::ssl::SSLCipher$SSLReadCipher;
using $SSLCipher$T13CC20P1305ReadCipherGenerator = ::sun::security::ssl::SSLCipher$T13CC20P1305ReadCipherGenerator;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher_FieldInfo_[] = {
	{"cipher", "Ljavax/crypto/Cipher;", nullptr, $PRIVATE | $FINAL, $field(SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, cipher)},
	{"tagSize", "I", nullptr, $PRIVATE | $FINAL, $field(SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, tagSize)},
	{"key", "Ljava/security/Key;", nullptr, $PRIVATE | $FINAL, $field(SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, key)},
	{"iv", "[B", nullptr, $PRIVATE | $FINAL, $field(SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, iv)},
	{"random", "Ljava/security/SecureRandom;", nullptr, $PRIVATE | $FINAL, $field(SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, random)},
	{}
};

$MethodInfo _SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/SSLCipher;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, 0, $method(static_cast<void(SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::*)($Authenticator*,$ProtocolVersion*,$SSLCipher*,$String*,$Key*,$AlgorithmParameterSpec*,$SecureRandom*)>(&SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::init$)), "java.security.GeneralSecurityException"},
	{"decrypt", "(BLjava/nio/ByteBuffer;[B)Lsun/security/ssl/Plaintext;", nullptr, $PUBLIC, nullptr, "java.security.GeneralSecurityException"},
	{"dispose", "()V", nullptr, 0},
	{"estimateFragmentSize", "(II)I", nullptr, 0},
	{}
};

$InnerClassInfo _SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$T13CC20P1305ReadCipherGenerator", "sun.security.ssl.SSLCipher", "T13CC20P1305ReadCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher", "sun.security.ssl.SSLCipher$T13CC20P1305ReadCipherGenerator", "CC20P1305ReadCipher", $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$SSLReadCipher", "sun.security.ssl.SSLCipher", "SSLReadCipher", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher",
	"sun.security.ssl.SSLCipher$SSLReadCipher",
	nullptr,
	_SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher_FieldInfo_,
	_SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher($Class* clazz) {
	return $of($alloc(SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher));
}

void SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::init$($Authenticator* authenticator, $ProtocolVersion* protocolVersion, $SSLCipher* sslCipher, $String* algorithm, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	$SSLCipher$SSLReadCipher::init$(authenticator, protocolVersion);
	$set(this, cipher, $Cipher::getInstance(algorithm));
	this->tagSize = $nc(sslCipher)->tagSize;
	$set(this, key, key);
	$set(this, iv, $nc(($cast($IvParameterSpec, params)))->getIV());
	$set(this, random, random);
}

$Plaintext* SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::decrypt(int8_t contentType, $ByteBuffer* bb, $bytes* sequence) {
	$useLocalCurrentObjectStackCache();
	$init($ContentType);
	if (contentType == $ContentType::CHANGE_CIPHER_SPEC->id) {
		$init($ProtocolVersion);
		return $new($Plaintext, contentType, $ProtocolVersion::NONE->major, $ProtocolVersion::NONE->minor, -1, -1, $($nc(bb)->slice()));
	}
	if ($nc(bb)->remaining() <= this->tagSize) {
		$throwNew($BadPaddingException, $$str({"Insufficient buffer remaining for AEAD cipher fragment ("_s, $$str(bb->remaining()), "). Needs to be more than tag size ("_s, $$str(this->tagSize), ")"_s}));
	}
	$var($bytes, sn, sequence);
	if (sn == nullptr) {
		$assign(sn, $nc(this->authenticator)->sequenceNumber());
	}
	$var($bytes, nonce, $new($bytes, $nc(this->iv)->length));
	$System::arraycopy(sn, 0, nonce, nonce->length - $nc(sn)->length, sn->length);
	for (int32_t i = 0; i < nonce->length; ++i) {
		(*nonce)[i] ^= $nc(this->iv)->get(i);
	}
	$var($AlgorithmParameterSpec, spec, $new($IvParameterSpec, nonce));
	try {
		$nc(this->cipher)->init($Cipher::DECRYPT_MODE, this->key, spec, this->random);
	} catch ($InvalidKeyException&) {
		$var($GeneralSecurityException, ikae, $catch());
		$throwNew($RuntimeException, "invalid key or spec in AEAD mode"_s, ikae);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($GeneralSecurityException, ikae, $catch());
		$throwNew($RuntimeException, "invalid key or spec in AEAD mode"_s, ikae);
	}
	$var($bytes, aad, $nc(this->authenticator)->acquireAuthenticationBytes(contentType, $nc(bb)->remaining(), sn));
	$nc(this->cipher)->updateAAD(aad);
	int32_t len = 0;
	int32_t pos = $nc(bb)->position();
	$var($ByteBuffer, dup, bb->duplicate());
	try {
		len = $nc(this->cipher)->doFinal(dup, bb);
	} catch ($IllegalBlockSizeException&) {
		$var($IllegalBlockSizeException, ibse, $catch());
		$var($String, var$0, $$str({"Cipher error in AEAD mode \""_s, $(ibse->getMessage()), " \"in JCE provider "_s}));
		$throwNew($RuntimeException, $$concat(var$0, $($nc($($nc(this->cipher)->getProvider()))->getName())));
	} catch ($ShortBufferException&) {
		$var($ShortBufferException, sbe, $catch());
		$throwNew($RuntimeException, $$str({"Cipher buffering error in JCE provider "_s, $($nc($($nc(this->cipher)->getProvider()))->getName())}), sbe);
	}
	bb->position(pos);
	bb->limit(pos + len);
	int32_t i = bb->limit() - 1;
	for (; i > 0 && bb->get(i) == 0; --i) {
	}
	if (i < (pos + 1)) {
		$throwNew($BadPaddingException, "Incorrect inner plaintext: no content type"_s);
	}
	contentType = bb->get(i);
	bb->limit(i);
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("plaintext"_s)) {
		$SSLLogger::fine("Plaintext after DECRYPTION"_s, $$new($ObjectArray, {$($of(bb->duplicate()))}));
	}
	$init($ProtocolVersion);
	return $new($Plaintext, contentType, $ProtocolVersion::NONE->major, $ProtocolVersion::NONE->minor, -1, -1, $(bb->slice()));
}

void SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::dispose() {
	if (this->cipher != nullptr) {
		try {
			$nc(this->cipher)->doFinal();
		} catch ($Exception&) {
			$catch();
		}
	}
}

int32_t SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::estimateFragmentSize(int32_t packetSize, int32_t headerSize) {
	return packetSize - headerSize - this->tagSize;
}

SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher() {
}

$Class* SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher, name, initialize, &_SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher_ClassInfo_, allocate$SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher);
	return class$;
}

$Class* SSLCipher$T13CC20P1305ReadCipherGenerator$CC20P1305ReadCipher::class$ = nullptr;

		} // ssl
	} // security
} // sun