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

void RSASignature$MD2withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("MD2"_s, $AlgorithmId::MD2_oid, 10);
}

RSASignature$MD2withRSA::RSASignature$MD2withRSA() {
}

$Class* RSASignature$MD2withRSA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RSASignature$MD2withRSA, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.rsa.RSASignature$MD2withRSA", "sun.security.rsa.RSASignature", "MD2withRSA", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.rsa.RSASignature$MD2withRSA",
		"sun.security.rsa.RSASignature",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.rsa.RSASignature"
	};
	$loadClass(RSASignature$MD2withRSA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSASignature$MD2withRSA);
	});
	return class$;
}

$Class* RSASignature$MD2withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun