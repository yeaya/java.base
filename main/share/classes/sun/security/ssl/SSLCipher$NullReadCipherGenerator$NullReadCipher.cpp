#include <sun/security/ssl/SSLCipher$NullReadCipherGenerator$NullReadCipher.h>

#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/Authenticator$MAC.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <sun/security/ssl/Plaintext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$NullReadCipherGenerator.h>
#include <sun/security/ssl/SSLCipher$SSLReadCipher.h>
#include <sun/security/ssl/SSLCipher.h>
#include <jcpp.h>

#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Authenticator$MAC = ::sun::security::ssl::Authenticator$MAC;
using $Plaintext = ::sun::security::ssl::Plaintext;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher = ::sun::security::ssl::SSLCipher;
using $SSLCipher$SSLReadCipher = ::sun::security::ssl::SSLCipher$SSLReadCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$NullReadCipherGenerator$NullReadCipher_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;)V", nullptr, 0, $method(SSLCipher$NullReadCipherGenerator$NullReadCipher, init$, void, $Authenticator*, $ProtocolVersion*)},
	{"decrypt", "(BLjava/nio/ByteBuffer;[B)Lsun/security/ssl/Plaintext;", nullptr, $PUBLIC, $virtualMethod(SSLCipher$NullReadCipherGenerator$NullReadCipher, decrypt, $Plaintext*, int8_t, $ByteBuffer*, $bytes*), "java.security.GeneralSecurityException"},
	{"estimateFragmentSize", "(II)I", nullptr, 0, $virtualMethod(SSLCipher$NullReadCipherGenerator$NullReadCipher, estimateFragmentSize, int32_t, int32_t, int32_t)},
	{"isNullCipher", "()Z", nullptr, 0, $virtualMethod(SSLCipher$NullReadCipherGenerator$NullReadCipher, isNullCipher, bool)},
	{}
};

$InnerClassInfo _SSLCipher$NullReadCipherGenerator$NullReadCipher_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$NullReadCipherGenerator", "sun.security.ssl.SSLCipher", "NullReadCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$NullReadCipherGenerator$NullReadCipher", "sun.security.ssl.SSLCipher$NullReadCipherGenerator", "NullReadCipher", $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$SSLReadCipher", "sun.security.ssl.SSLCipher", "SSLReadCipher", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLCipher$NullReadCipherGenerator$NullReadCipher_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$NullReadCipherGenerator$NullReadCipher",
	"sun.security.ssl.SSLCipher$SSLReadCipher",
	nullptr,
	nullptr,
	_SSLCipher$NullReadCipherGenerator$NullReadCipher_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$NullReadCipherGenerator$NullReadCipher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$NullReadCipherGenerator$NullReadCipher($Class* clazz) {
	return $of($alloc(SSLCipher$NullReadCipherGenerator$NullReadCipher));
}

void SSLCipher$NullReadCipherGenerator$NullReadCipher::init$($Authenticator* authenticator, $ProtocolVersion* protocolVersion) {
	$SSLCipher$SSLReadCipher::init$(authenticator, protocolVersion);
}

$Plaintext* SSLCipher$NullReadCipherGenerator$NullReadCipher::decrypt(int8_t contentType, $ByteBuffer* bb, $bytes* sequence) {
	$useLocalCurrentObjectStackCache();
	$var($Authenticator$MAC, signer, $cast($Authenticator$MAC, this->authenticator));
	if ($nc($($nc(signer)->macAlg()))->size != 0) {
		$SSLCipher::checkStreamMac(signer, bb, contentType, sequence);
	} else {
		$nc(this->authenticator)->increaseSequenceNumber();
	}
	$init($ProtocolVersion);
	return $new($Plaintext, contentType, $ProtocolVersion::NONE->major, $ProtocolVersion::NONE->minor, -1, -1, $($nc(bb)->slice()));
}

int32_t SSLCipher$NullReadCipherGenerator$NullReadCipher::estimateFragmentSize(int32_t packetSize, int32_t headerSize) {
	int32_t macLen = $nc($($nc(($cast($Authenticator$MAC, this->authenticator)))->macAlg()))->size;
	return packetSize - headerSize - macLen;
}

bool SSLCipher$NullReadCipherGenerator$NullReadCipher::isNullCipher() {
	return true;
}

SSLCipher$NullReadCipherGenerator$NullReadCipher::SSLCipher$NullReadCipherGenerator$NullReadCipher() {
}

$Class* SSLCipher$NullReadCipherGenerator$NullReadCipher::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$NullReadCipherGenerator$NullReadCipher, name, initialize, &_SSLCipher$NullReadCipherGenerator$NullReadCipher_ClassInfo_, allocate$SSLCipher$NullReadCipherGenerator$NullReadCipher);
	return class$;
}

$Class* SSLCipher$NullReadCipherGenerator$NullReadCipher::class$ = nullptr;

		} // ssl
	} // security
} // sun