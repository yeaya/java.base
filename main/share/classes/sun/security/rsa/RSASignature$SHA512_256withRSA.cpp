#include <sun/security/rsa/RSASignature$SHA512_256withRSA.h>

#include <sun/security/rsa/RSASignature.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSASignature = ::sun::security::rsa::RSASignature;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace rsa {

$MethodInfo _RSASignature$SHA512_256withRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSASignature$SHA512_256withRSA::*)()>(&RSASignature$SHA512_256withRSA::init$))},
	{}
};

$InnerClassInfo _RSASignature$SHA512_256withRSA_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSASignature$SHA512_256withRSA", "sun.security.rsa.RSASignature", "SHA512_256withRSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSASignature$SHA512_256withRSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSASignature$SHA512_256withRSA",
	"sun.security.rsa.RSASignature",
	nullptr,
	nullptr,
	_RSASignature$SHA512_256withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_RSASignature$SHA512_256withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSASignature"
};

$Object* allocate$RSASignature$SHA512_256withRSA($Class* clazz) {
	return $of($alloc(RSASignature$SHA512_256withRSA));
}

void RSASignature$SHA512_256withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("SHA-512/256"_s, $AlgorithmId::SHA512_256_oid, 11);
}

RSASignature$SHA512_256withRSA::RSASignature$SHA512_256withRSA() {
}

$Class* RSASignature$SHA512_256withRSA::load$($String* name, bool initialize) {
	$loadClass(RSASignature$SHA512_256withRSA, name, initialize, &_RSASignature$SHA512_256withRSA_ClassInfo_, allocate$RSASignature$SHA512_256withRSA);
	return class$;
}

$Class* RSASignature$SHA512_256withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun