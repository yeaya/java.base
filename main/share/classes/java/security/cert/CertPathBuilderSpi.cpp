#include <java/security/cert/CertPathBuilderSpi.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/cert/CertPathBuilderResult.h>
#include <java/security/cert/CertPathChecker.h>
#include <java/security/cert/CertPathParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CertPathBuilderResult = ::java::security::cert::CertPathBuilderResult;
using $CertPathChecker = ::java::security::cert::CertPathChecker;
using $CertPathParameters = ::java::security::cert::CertPathParameters;

namespace java {
	namespace security {
		namespace cert {

void CertPathBuilderSpi::init$() {
}

$CertPathChecker* CertPathBuilderSpi::engineGetRevocationChecker() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

CertPathBuilderSpi::CertPathBuilderSpi() {
}

$Class* CertPathBuilderSpi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CertPathBuilderSpi, init$, void)},
		{"engineBuild", "(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CertPathBuilderSpi, engineBuild, $CertPathBuilderResult*, $CertPathParameters*), "java.security.cert.CertPathBuilderException,java.security.InvalidAlgorithmParameterException"},
		{"engineGetRevocationChecker", "()Ljava/security/cert/CertPathChecker;", nullptr, $PUBLIC, $virtualMethod(CertPathBuilderSpi, engineGetRevocationChecker, $CertPathChecker*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.security.cert.CertPathBuilderSpi",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CertPathBuilderSpi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertPathBuilderSpi);
	});
	return class$;
}

$Class* CertPathBuilderSpi::class$ = nullptr;

		} // cert
	} // security
} // java