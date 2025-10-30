#include <sun/security/rsa/RSASignature$SHA256withRSA.h>

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

$MethodInfo _RSASignature$SHA256withRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSASignature$SHA256withRSA::*)()>(&RSASignature$SHA256withRSA::init$))},
	{}
};

$InnerClassInfo _RSASignature$SHA256withRSA_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSASignature$SHA256withRSA", "sun.security.rsa.RSASignature", "SHA256withRSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSASignature$SHA256withRSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSASignature$SHA256withRSA",
	"sun.security.rsa.RSASignature",
	nullptr,
	nullptr,
	_RSASignature$SHA256withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_RSASignature$SHA256withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSASignature"
};

$Object* allocate$RSASignature$SHA256withRSA($Class* clazz) {
	return $of($alloc(RSASignature$SHA256withRSA));
}

void RSASignature$SHA256withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("SHA-256"_s, $AlgorithmId::SHA256_oid, 11);
}

RSASignature$SHA256withRSA::RSASignature$SHA256withRSA() {
}

$Class* RSASignature$SHA256withRSA::load$($String* name, bool initialize) {
	$loadClass(RSASignature$SHA256withRSA, name, initialize, &_RSASignature$SHA256withRSA_ClassInfo_, allocate$RSASignature$SHA256withRSA);
	return class$;
}

$Class* RSASignature$SHA256withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun