#include <sun/security/rsa/RSASignature$MD2withRSA.h>

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

$MethodInfo _RSASignature$MD2withRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSASignature$MD2withRSA::*)()>(&RSASignature$MD2withRSA::init$))},
	{}
};

$InnerClassInfo _RSASignature$MD2withRSA_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSASignature$MD2withRSA", "sun.security.rsa.RSASignature", "MD2withRSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSASignature$MD2withRSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSASignature$MD2withRSA",
	"sun.security.rsa.RSASignature",
	nullptr,
	nullptr,
	_RSASignature$MD2withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_RSASignature$MD2withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSASignature"
};

$Object* allocate$RSASignature$MD2withRSA($Class* clazz) {
	return $of($alloc(RSASignature$MD2withRSA));
}

void RSASignature$MD2withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("MD2"_s, $AlgorithmId::MD2_oid, 10);
}

RSASignature$MD2withRSA::RSASignature$MD2withRSA() {
}

$Class* RSASignature$MD2withRSA::load$($String* name, bool initialize) {
	$loadClass(RSASignature$MD2withRSA, name, initialize, &_RSASignature$MD2withRSA_ClassInfo_, allocate$RSASignature$MD2withRSA);
	return class$;
}

$Class* RSASignature$MD2withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun