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

$MethodInfo _Signature$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Signature$1::*)()>(&Signature$1::init$))},
	{"initSign", "(Ljava/security/Signature;Ljava/security/PrivateKey;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"initVerify", "(Ljava/security/Signature;Ljava/security/PublicKey;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"initVerify", "(Ljava/security/Signature;Ljava/security/cert/Certificate;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{}
};

$EnclosingMethodInfo _Signature$1_EnclosingMethodInfo_ = {
	"java.security.Signature",
	nullptr,
	nullptr
};

$InnerClassInfo _Signature$1_InnerClassesInfo_[] = {
	{"java.security.Signature$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Signature$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.Signature$1",
	"java.lang.Object",
	"jdk.internal.access.JavaSecuritySignatureAccess",
	nullptr,
	_Signature$1_MethodInfo_,
	nullptr,
	&_Signature$1_EnclosingMethodInfo_,
	_Signature$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Signature"
};

$Object* allocate$Signature$1($Class* clazz) {
	return $of($alloc(Signature$1));
}

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
	$loadClass(Signature$1, name, initialize, &_Signature$1_ClassInfo_, allocate$Signature$1);
	return class$;
}

$Class* Signature$1::class$ = nullptr;

	} // security
} // java