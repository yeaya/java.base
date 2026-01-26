#include <sun/security/rsa/RSASignature$SHA224withRSA.h>

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

$MethodInfo _RSASignature$SHA224withRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RSASignature$SHA224withRSA, init$, void)},
	{}
};

$InnerClassInfo _RSASignature$SHA224withRSA_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSASignature$SHA224withRSA", "sun.security.rsa.RSASignature", "SHA224withRSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSASignature$SHA224withRSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSASignature$SHA224withRSA",
	"sun.security.rsa.RSASignature",
	nullptr,
	nullptr,
	_RSASignature$SHA224withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_RSASignature$SHA224withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSASignature"
};

$Object* allocate$RSASignature$SHA224withRSA($Class* clazz) {
	return $of($alloc(RSASignature$SHA224withRSA));
}

void RSASignature$SHA224withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("SHA-224"_s, $AlgorithmId::SHA224_oid, 11);
}

RSASignature$SHA224withRSA::RSASignature$SHA224withRSA() {
}

$Class* RSASignature$SHA224withRSA::load$($String* name, bool initialize) {
	$loadClass(RSASignature$SHA224withRSA, name, initialize, &_RSASignature$SHA224withRSA_ClassInfo_, allocate$RSASignature$SHA224withRSA);
	return class$;
}

$Class* RSASignature$SHA224withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun