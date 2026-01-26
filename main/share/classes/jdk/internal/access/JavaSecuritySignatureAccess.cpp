#include <jdk/internal/access/JavaSecuritySignatureAccess.h>

#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/SecureRandom.h>
#include <java/security/Signature.h>
#include <java/security/cert/Certificate.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $SecureRandom = ::java::security::SecureRandom;
using $Signature = ::java::security::Signature;
using $Certificate = ::java::security::cert::Certificate;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaSecuritySignatureAccess_MethodInfo_[] = {
	{"initSign", "(Ljava/security/Signature;Ljava/security/PrivateKey;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaSecuritySignatureAccess, initSign, void, $Signature*, $PrivateKey*, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"initVerify", "(Ljava/security/Signature;Ljava/security/PublicKey;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaSecuritySignatureAccess, initVerify, void, $Signature*, $PublicKey*, $AlgorithmParameterSpec*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"initVerify", "(Ljava/security/Signature;Ljava/security/cert/Certificate;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaSecuritySignatureAccess, initVerify, void, $Signature*, $Certificate*, $AlgorithmParameterSpec*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{}
};

$ClassInfo _JavaSecuritySignatureAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaSecuritySignatureAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaSecuritySignatureAccess_MethodInfo_
};

$Object* allocate$JavaSecuritySignatureAccess($Class* clazz) {
	return $of($alloc(JavaSecuritySignatureAccess));
}

$Class* JavaSecuritySignatureAccess::load$($String* name, bool initialize) {
	$loadClass(JavaSecuritySignatureAccess, name, initialize, &_JavaSecuritySignatureAccess_ClassInfo_, allocate$JavaSecuritySignatureAccess);
	return class$;
}

$Class* JavaSecuritySignatureAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk