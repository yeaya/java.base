#include <sun/security/rsa/RSASignature$SHA512withRSA.h>

#include <sun/security/rsa/RSASignature.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSASignature = ::sun::security::rsa::RSASignature;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace rsa {

$MethodInfo _RSASignature$SHA512withRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSASignature$SHA512withRSA::*)()>(&RSASignature$SHA512withRSA::init$))},
	{}
};

$InnerClassInfo _RSASignature$SHA512withRSA_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSASignature$SHA512withRSA", "sun.security.rsa.RSASignature", "SHA512withRSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSASignature$SHA512withRSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSASignature$SHA512withRSA",
	"sun.security.rsa.RSASignature",
	nullptr,
	nullptr,
	_RSASignature$SHA512withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_RSASignature$SHA512withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSASignature"
};

$Object* allocate$RSASignature$SHA512withRSA($Class* clazz) {
	return $of($alloc(RSASignature$SHA512withRSA));
}

void RSASignature$SHA512withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("SHA-512"_s, $AlgorithmId::SHA512_oid, 11);
}

RSASignature$SHA512withRSA::RSASignature$SHA512withRSA() {
}

$Class* RSASignature$SHA512withRSA::load$($String* name, bool initialize) {
	$loadClass(RSASignature$SHA512withRSA, name, initialize, &_RSASignature$SHA512withRSA_ClassInfo_, allocate$RSASignature$SHA512withRSA);
	return class$;
}

$Class* RSASignature$SHA512withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun