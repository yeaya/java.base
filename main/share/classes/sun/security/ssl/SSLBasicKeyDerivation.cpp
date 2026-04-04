#include <sun/security/ssl/SSLBasicKeyDerivation.h>
#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/SecretKey.h>
#include <javax/net/ssl/SSLHandshakeException.h>
#include <sun/security/ssl/HKDF.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/SSLBasicKeyDerivation$SecretSizeSpec.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;
using $SSLHandshakeException = ::javax::net::ssl::SSLHandshakeException;
using $HKDF = ::sun::security::ssl::HKDF;
using $Record = ::sun::security::ssl::Record;
using $SSLBasicKeyDerivation$SecretSizeSpec = ::sun::security::ssl::SSLBasicKeyDerivation$SecretSizeSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SSLBasicKeyDerivation::init$($SecretKey* secret, $String* hashAlg, $bytes* label, $bytes* context, int32_t length) {
	$set(this, hashAlg, $nc(hashAlg)->replace("-"_s, ""_s));
	$set(this, secret, secret);
	$set(this, hkdfInfo, createHkdfInfo(label, context, length));
}

$SecretKey* SSLBasicKeyDerivation::deriveKey($String* algorithm, $AlgorithmParameterSpec* keySpec) {
	$useLocalObjectStack();
	try {
		$var($HKDF, hkdf, $new($HKDF, this->hashAlg));
		return hkdf->expand(this->secret, this->hkdfInfo, $nc($cast($SSLBasicKeyDerivation$SecretSizeSpec, keySpec))->length, algorithm);
	} catch ($GeneralSecurityException& gse) {
		$throw($$cast($SSLHandshakeException, $$new($SSLHandshakeException, "Could not generate secret"_s)->initCause(gse)));
	}
	$shouldNotReachHere();
}

$bytes* SSLBasicKeyDerivation::createHkdfInfo($bytes* label, $bytes* context, int32_t length) {
	$init(SSLBasicKeyDerivation);
	$useLocalObjectStack();
	$var($bytes, info, $new($bytes, 4 + $nc(label)->length + $nc(context)->length));
	$var($ByteBuffer, m, $ByteBuffer::wrap(info));
	try {
		$Record::putInt16(m, length);
		$Record::putBytes8(m, label);
		$Record::putBytes8(m, context);
	} catch ($IOException& ioe) {
	}
	return info;
}

SSLBasicKeyDerivation::SSLBasicKeyDerivation() {
}

$Class* SSLBasicKeyDerivation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hashAlg", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SSLBasicKeyDerivation, hashAlg)},
		{"secret", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(SSLBasicKeyDerivation, secret)},
		{"hkdfInfo", "[B", nullptr, $PRIVATE | $FINAL, $field(SSLBasicKeyDerivation, hkdfInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/crypto/SecretKey;Ljava/lang/String;[B[BI)V", nullptr, 0, $method(SSLBasicKeyDerivation, init$, void, $SecretKey*, $String*, $bytes*, $bytes*, int32_t)},
		{"createHkdfInfo", "([B[BI)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(SSLBasicKeyDerivation, createHkdfInfo, $bytes*, $bytes*, $bytes*, int32_t)},
		{"deriveKey", "(Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC, $virtualMethod(SSLBasicKeyDerivation, deriveKey, $SecretKey*, $String*, $AlgorithmParameterSpec*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLBasicKeyDerivation$SecretSizeSpec", "sun.security.ssl.SSLBasicKeyDerivation", "SecretSizeSpec", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLBasicKeyDerivation",
		"java.lang.Object",
		"sun.security.ssl.SSLKeyDerivation",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLBasicKeyDerivation$SecretSizeSpec"
	};
	$loadClass(SSLBasicKeyDerivation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLBasicKeyDerivation);
	});
	return class$;
}

$Class* SSLBasicKeyDerivation::class$ = nullptr;

		} // ssl
	} // security
} // sun