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

void RSASignature$SHA512_256withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("SHA-512/256"_s, $AlgorithmId::SHA512_256_oid, 11);
}

RSASignature$SHA512_256withRSA::RSASignature$SHA512_256withRSA() {
}

$Class* RSASignature$SHA512_256withRSA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RSASignature$SHA512_256withRSA, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.rsa.RSASignature$SHA512_256withRSA", "sun.security.rsa.RSASignature", "SHA512_256withRSA", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.rsa.RSASignature$SHA512_256withRSA",
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
	$loadClass(RSASignature$SHA512_256withRSA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSASignature$SHA512_256withRSA);
	});
	return class$;
}

$Class* RSASignature$SHA512_256withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun