#include <sun/security/ssl/SSLCipher$NullWriteCipherGenerator$NullWriteCipher.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/Authenticator$MAC.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$NullWriteCipherGenerator.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLCipher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Authenticator = ::sun::security::ssl::Authenticator;
using $Authenticator$MAC = ::sun::security::ssl::Authenticator$MAC;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLCipher = ::sun::security::ssl::SSLCipher;
using $SSLCipher$NullWriteCipherGenerator = ::sun::security::ssl::SSLCipher$NullWriteCipherGenerator;
using $SSLCipher$SSLWriteCipher = ::sun::security::ssl::SSLCipher$SSLWriteCipher;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$NullWriteCipherGenerator$NullWriteCipher_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;)V", nullptr, 0, $method(static_cast<void(SSLCipher$NullWriteCipherGenerator$NullWriteCipher::*)($Authenticator*,$ProtocolVersion*)>(&SSLCipher$NullWriteCipherGenerator$NullWriteCipher::init$))},
	{"calculateFragmentSize", "(II)I", nullptr, 0},
	{"calculatePacketSize", "(II)I", nullptr, 0},
	{"encrypt", "(BLjava/nio/ByteBuffer;)I", nullptr, $PUBLIC},
	{"getExplicitNonceSize", "()I", nullptr, 0},
	{"isNullCipher", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _SSLCipher$NullWriteCipherGenerator$NullWriteCipher_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$NullWriteCipherGenerator", "sun.security.ssl.SSLCipher", "NullWriteCipherGenerator", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$NullWriteCipherGenerator$NullWriteCipher", "sun.security.ssl.SSLCipher$NullWriteCipherGenerator", "NullWriteCipher", $STATIC | $FINAL},
	{"sun.security.ssl.SSLCipher$SSLWriteCipher", "sun.security.ssl.SSLCipher", "SSLWriteCipher", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLCipher$NullWriteCipherGenerator$NullWriteCipher_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLCipher$NullWriteCipherGenerator$NullWriteCipher",
	"sun.security.ssl.SSLCipher$SSLWriteCipher",
	nullptr,
	nullptr,
	_SSLCipher$NullWriteCipherGenerator$NullWriteCipher_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$NullWriteCipherGenerator$NullWriteCipher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$NullWriteCipherGenerator$NullWriteCipher($Class* clazz) {
	return $of($alloc(SSLCipher$NullWriteCipherGenerator$NullWriteCipher));
}

void SSLCipher$NullWriteCipherGenerator$NullWriteCipher::init$($Authenticator* authenticator, $ProtocolVersion* protocolVersion) {
	$SSLCipher$SSLWriteCipher::init$(authenticator, protocolVersion);
}

int32_t SSLCipher$NullWriteCipherGenerator$NullWriteCipher::encrypt(int8_t contentType, $ByteBuffer* bb) {
	$useLocalCurrentObjectStackCache();
	$var($Authenticator$MAC, signer, $cast($Authenticator$MAC, this->authenticator));
	if ($nc($($nc(signer)->macAlg()))->size != 0) {
		$SSLCipher::addMac(signer, bb, contentType);
	} else {
		$nc(this->authenticator)->increaseSequenceNumber();
	}
	int32_t len = $nc(bb)->remaining();
	bb->position(bb->limit());
	return len;
}

int32_t SSLCipher$NullWriteCipherGenerator$NullWriteCipher::getExplicitNonceSize() {
	return 0;
}

int32_t SSLCipher$NullWriteCipherGenerator$NullWriteCipher::calculateFragmentSize(int32_t packetLimit, int32_t headerSize) {
	int32_t macLen = $nc($($nc(($cast($Authenticator$MAC, this->authenticator)))->macAlg()))->size;
	return packetLimit - headerSize - macLen;
}

int32_t SSLCipher$NullWriteCipherGenerator$NullWriteCipher::calculatePacketSize(int32_t fragmentSize, int32_t headerSize) {
	int32_t macLen = $nc($($nc(($cast($Authenticator$MAC, this->authenticator)))->macAlg()))->size;
	return fragmentSize + headerSize + macLen;
}

bool SSLCipher$NullWriteCipherGenerator$NullWriteCipher::isNullCipher() {
	return true;
}

SSLCipher$NullWriteCipherGenerator$NullWriteCipher::SSLCipher$NullWriteCipherGenerator$NullWriteCipher() {
}

$Class* SSLCipher$NullWriteCipherGenerator$NullWriteCipher::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$NullWriteCipherGenerator$NullWriteCipher, name, initialize, &_SSLCipher$NullWriteCipherGenerator$NullWriteCipher_ClassInfo_, allocate$SSLCipher$NullWriteCipherGenerator$NullWriteCipher);
	return class$;
}

$Class* SSLCipher$NullWriteCipherGenerator$NullWriteCipher::class$ = nullptr;

		} // ssl
	} // security
} // sun