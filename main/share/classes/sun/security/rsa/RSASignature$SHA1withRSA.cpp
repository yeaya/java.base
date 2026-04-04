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

void RSASignature$SHA1withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("SHA-1"_s, $AlgorithmId::SHA_oid, 7);
}

RSASignature$SHA1withRSA::RSASignature$SHA1withRSA() {
}

$Class* RSASignature$SHA1withRSA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RSASignature$SHA1withRSA, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.rsa.RSASignature$SHA1withRSA", "sun.security.rsa.RSASignature", "SHA1withRSA", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.rsa.RSASignature$SHA1withRSA",
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
	$loadClass(RSASignature$SHA1withRSA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RSASignature$SHA1withRSA);
	});
	return class$;
}

$Class* RSASignature$SHA1withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun