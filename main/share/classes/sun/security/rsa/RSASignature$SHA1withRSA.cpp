#include <sun/security/rsa/RSASignature$SHA1withRSA.h>

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

$MethodInfo _RSASignature$SHA1withRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSASignature$SHA1withRSA::*)()>(&RSASignature$SHA1withRSA::init$))},
	{}
};

$InnerClassInfo _RSASignature$SHA1withRSA_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSASignature$SHA1withRSA", "sun.security.rsa.RSASignature", "SHA1withRSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSASignature$SHA1withRSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSASignature$SHA1withRSA",
	"sun.security.rsa.RSASignature",
	nullptr,
	nullptr,
	_RSASignature$SHA1withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_RSASignature$SHA1withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSASignature"
};

$Object* allocate$RSASignature$SHA1withRSA($Class* clazz) {
	return $of($alloc(RSASignature$SHA1withRSA));
}

void RSASignature$SHA1withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("SHA-1"_s, $AlgorithmId::SHA_oid, 7);
}

RSASignature$SHA1withRSA::RSASignature$SHA1withRSA() {
}

$Class* RSASignature$SHA1withRSA::load$($String* name, bool initialize) {
	$loadClass(RSASignature$SHA1withRSA, name, initialize, &_RSASignature$SHA1withRSA_ClassInfo_, allocate$RSASignature$SHA1withRSA);
	return class$;
}

$Class* RSASignature$SHA1withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun