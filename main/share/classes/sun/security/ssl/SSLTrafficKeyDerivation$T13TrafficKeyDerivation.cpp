#include <sun/security/ssl/SSLTrafficKeyDerivation$T13TrafficKeyDerivation.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/SecretKey.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/HKDF.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation$KeySchedule.h>
#include <sun/security/ssl/SSLTrafficKeyDerivation.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$HashAlg = ::sun::security::ssl::CipherSuite$HashAlg;
using $HKDF = ::sun::security::ssl::HKDF;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $Record = ::sun::security::ssl::Record;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;
using $SSLTrafficKeyDerivation = ::sun::security::ssl::SSLTrafficKeyDerivation;
using $SSLTrafficKeyDerivation$KeySchedule = ::sun::security::ssl::SSLTrafficKeyDerivation$KeySchedule;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLTrafficKeyDerivation$T13TrafficKeyDerivation_FieldInfo_[] = {
	{"cs", "Lsun/security/ssl/CipherSuite;", nullptr, $PRIVATE | $FINAL, $field(SSLTrafficKeyDerivation$T13TrafficKeyDerivation, cs)},
	{"secret", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(SSLTrafficKeyDerivation$T13TrafficKeyDerivation, secret)},
	{}
};

$MethodInfo _SSLTrafficKeyDerivation$T13TrafficKeyDerivation_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljavax/crypto/SecretKey;)V", nullptr, 0, $method(static_cast<void(SSLTrafficKeyDerivation$T13TrafficKeyDerivation::*)($HandshakeContext*,$SecretKey*)>(&SSLTrafficKeyDerivation$T13TrafficKeyDerivation::init$))},
	{"createHkdfInfo", "([BI)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t)>(&SSLTrafficKeyDerivation$T13TrafficKeyDerivation::createHkdfInfo)), "java.io.IOException"},
	{"deriveKey", "(Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SSLTrafficKeyDerivation$T13TrafficKeyDerivation_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLTrafficKeyDerivation$T13TrafficKeyDerivation", "sun.security.ssl.SSLTrafficKeyDerivation", "T13TrafficKeyDerivation", $STATIC | $FINAL},
	{}
};

$ClassInfo _SSLTrafficKeyDerivation$T13TrafficKeyDerivation_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLTrafficKeyDerivation$T13TrafficKeyDerivation",
	"java.lang.Object",
	"sun.security.ssl.SSLKeyDerivation",
	_SSLTrafficKeyDerivation$T13TrafficKeyDerivation_FieldInfo_,
	_SSLTrafficKeyDerivation$T13TrafficKeyDerivation_MethodInfo_,
	nullptr,
	nullptr,
	_SSLTrafficKeyDerivation$T13TrafficKeyDerivation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLTrafficKeyDerivation"
};

$Object* allocate$SSLTrafficKeyDerivation$T13TrafficKeyDerivation($Class* clazz) {
	return $of($alloc(SSLTrafficKeyDerivation$T13TrafficKeyDerivation));
}

void SSLTrafficKeyDerivation$T13TrafficKeyDerivation::init$($HandshakeContext* context, $SecretKey* secret) {
	$set(this, secret, secret);
	$set(this, cs, $nc(context)->negotiatedCipherSuite);
}

$SecretKey* SSLTrafficKeyDerivation$T13TrafficKeyDerivation::deriveKey($String* algorithm, $AlgorithmParameterSpec* params) {
	$useLocalCurrentObjectStackCache();
	$SSLTrafficKeyDerivation$KeySchedule* ks = $SSLTrafficKeyDerivation$KeySchedule::valueOf(algorithm);
	try {
		$var($HKDF, hkdf, $new($HKDF, this->cs->hashAlg->name$));
		$var($bytes, hkdfInfo, createHkdfInfo($nc(ks)->label, ks->getKeyLength(this->cs)));
		$var($SecretKey, var$0, this->secret);
		$var($bytes, var$1, hkdfInfo);
		int32_t var$2 = $nc(ks)->getKeyLength(this->cs);
		return hkdf->expand(var$0, var$1, var$2, $(ks->getAlgorithm(this->cs, algorithm)));
	} catch ($GeneralSecurityException&) {
		$var($GeneralSecurityException, gse, $catch());
		$throw(($cast($SSLHandshakeException, $($$new($SSLHandshakeException, "Could not generate secret"_s)->initCause(gse)))));
	}
	$shouldNotReachHere();
}

$bytes* SSLTrafficKeyDerivation$T13TrafficKeyDerivation::createHkdfInfo($bytes* label, int32_t length) {
	$init(SSLTrafficKeyDerivation$T13TrafficKeyDerivation);
	$useLocalCurrentObjectStackCache();
	$var($bytes, info, $new($bytes, 4 + $nc(label)->length));
	$var($ByteBuffer, m, $ByteBuffer::wrap(info));
	try {
		$Record::putInt16(m, length);
		$Record::putBytes8(m, label);
		$Record::putInt8(m, 0);
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($RuntimeException, "Unexpected exception"_s, ioe);
	}
	return info;
}

SSLTrafficKeyDerivation$T13TrafficKeyDerivation::SSLTrafficKeyDerivation$T13TrafficKeyDerivation() {
}

$Class* SSLTrafficKeyDerivation$T13TrafficKeyDerivation::load$($String* name, bool initialize) {
	$loadClass(SSLTrafficKeyDerivation$T13TrafficKeyDerivation, name, initialize, &_SSLTrafficKeyDerivation$T13TrafficKeyDerivation_ClassInfo_, allocate$SSLTrafficKeyDerivation$T13TrafficKeyDerivation);
	return class$;
}

$Class* SSLTrafficKeyDerivation$T13TrafficKeyDerivation::class$ = nullptr;

		} // ssl
	} // security
} // sun