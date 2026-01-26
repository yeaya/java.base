#include <sun/security/rsa/RSASignature$SHA384withRSA.h>

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

$MethodInfo _RSASignature$SHA384withRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RSASignature$SHA384withRSA, init$, void)},
	{}
};

$InnerClassInfo _RSASignature$SHA384withRSA_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSASignature$SHA384withRSA", "sun.security.rsa.RSASignature", "SHA384withRSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSASignature$SHA384withRSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSASignature$SHA384withRSA",
	"sun.security.rsa.RSASignature",
	nullptr,
	nullptr,
	_RSASignature$SHA384withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_RSASignature$SHA384withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSASignature"
};

$Object* allocate$RSASignature$SHA384withRSA($Class* clazz) {
	return $of($alloc(RSASignature$SHA384withRSA));
}

void RSASignature$SHA384withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("SHA-384"_s, $AlgorithmId::SHA384_oid, 11);
}

RSASignature$SHA384withRSA::RSASignature$SHA384withRSA() {
}

$Class* RSASignature$SHA384withRSA::load$($String* name, bool initialize) {
	$loadClass(RSASignature$SHA384withRSA, name, initialize, &_RSASignature$SHA384withRSA_ClassInfo_, allocate$RSASignature$SHA384withRSA);
	return class$;
}

$Class* RSASignature$SHA384withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun