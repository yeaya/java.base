#include <java/security/Signature$1.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/SecureRandom.h>
#include <java/security/Signature.h>
#include <java/security/cert/Certificate.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $SecureRandom = ::java::security::SecureRandom;
using $Signature = ::java::security::Signature;
using $Certificate = ::java::security::cert::Certificate;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace java {
	namespace security {

void Signature$1::init$() {
}

void Signature$1::initVerify($Signature* s, $PublicKey* publicKey, $AlgorithmParameterSpec* params) {
	$nc(s)->initVerify(publicKey, params);
}

void Signature$1::initVerify($Signature* s, $Certificate* certificate, $AlgorithmParameterSpec* params) {
	$nc(s)->initVerify(certificate, params);
}

void Signature$1::initSign($Signature* s, $PrivateKey* privateKey, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	$nc(s)->initSign(privateKey, params, random);
}

Signature$1::Signature$1() {
}

$Class* Signature$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Signature$1, init$, void)},
		{"initSign", "(Ljava/security/Signature;Ljava/security/PrivateKey;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC, $virtualMethod(Signature$1, initSign, void, $Signature*, $PrivateKey*, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
		{"initVerify", "(Ljava/security/Signature;Ljava/security/PublicKey;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $virtualMethod(Signature$1, initVerify, void, $Signature*, $PublicKey*, $AlgorithmParameterSpec*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
		{"initVerify", "(Ljava/security/Signature;Ljava/security/cert/Certificate;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $virtualMethod(Signature$1, initVerify, void, $Signature*, $Certificate*, $AlgorithmParameterSpec*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.Signature",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.Signature$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.Signature$1",
		"java.lang.Object",
		"jdk.internal.access.JavaSecuritySignatureAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.Signature"
	};
	$loadClass(Signature$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Signature$1);
	});
	return class$;
}

$Class* Signature$1::class$ = nullptr;

	} // security
} // java