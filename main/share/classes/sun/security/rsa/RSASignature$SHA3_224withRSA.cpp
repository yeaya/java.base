#include <sun/security/rsa/RSASignature$SHA3_224withRSA.h>

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

$MethodInfo _RSASignature$SHA3_224withRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSASignature$SHA3_224withRSA::*)()>(&RSASignature$SHA3_224withRSA::init$))},
	{}
};

$InnerClassInfo _RSASignature$SHA3_224withRSA_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSASignature$SHA3_224withRSA", "sun.security.rsa.RSASignature", "SHA3_224withRSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSASignature$SHA3_224withRSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSASignature$SHA3_224withRSA",
	"sun.security.rsa.RSASignature",
	nullptr,
	nullptr,
	_RSASignature$SHA3_224withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_RSASignature$SHA3_224withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSASignature"
};

$Object* allocate$RSASignature$SHA3_224withRSA($Class* clazz) {
	return $of($alloc(RSASignature$SHA3_224withRSA));
}

void RSASignature$SHA3_224withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("SHA3-224"_s, $AlgorithmId::SHA3_224_oid, 11);
}

RSASignature$SHA3_224withRSA::RSASignature$SHA3_224withRSA() {
}

$Class* RSASignature$SHA3_224withRSA::load$($String* name, bool initialize) {
	$loadClass(RSASignature$SHA3_224withRSA, name, initialize, &_RSASignature$SHA3_224withRSA_ClassInfo_, allocate$RSASignature$SHA3_224withRSA);
	return class$;
}

$Class* RSASignature$SHA3_224withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun