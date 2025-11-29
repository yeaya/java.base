#include <java/security/cert/CertPathBuilderSpi.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/security/cert/CertPathBuilderResult.h>
#include <java/security/cert/CertPathChecker.h>
#include <java/security/cert/CertPathParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CertPathChecker = ::java::security::cert::CertPathChecker;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertPathBuilderSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertPathBuilderSpi::*)()>(&CertPathBuilderSpi::init$))},
	{"engineBuild", "(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertPathBuilderException,java.security.InvalidAlgorithmParameterException"},
	{"engineGetRevocationChecker", "()Ljava/security/cert/CertPathChecker;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CertPathBuilderSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.cert.CertPathBuilderSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CertPathBuilderSpi_MethodInfo_
};

$Object* allocate$CertPathBuilderSpi($Class* clazz) {
	return $of($alloc(CertPathBuilderSpi));
}

void CertPathBuilderSpi::init$() {
}

$CertPathChecker* CertPathBuilderSpi::engineGetRevocationChecker() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

CertPathBuilderSpi::CertPathBuilderSpi() {
}

$Class* CertPathBuilderSpi::load$($String* name, bool initialize) {
	$loadClass(CertPathBuilderSpi, name, initialize, &_CertPathBuilderSpi_ClassInfo_, allocate$CertPathBuilderSpi);
	return class$;
}

$Class* CertPathBuilderSpi::class$ = nullptr;

		} // cert
	} // security
} // java