#include <java/security/cert/CertPathValidatorSpi.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathChecker.h>
#include <java/security/cert/CertPathParameters.h>
#include <java/security/cert/CertPathValidatorResult.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathChecker = ::java::security::cert::CertPathChecker;
using $CertPathParameters = ::java::security::cert::CertPathParameters;
using $CertPathValidatorResult = ::java::security::cert::CertPathValidatorResult;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertPathValidatorSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CertPathValidatorSpi::*)()>(&CertPathValidatorSpi::init$))},
	{"engineGetRevocationChecker", "()Ljava/security/cert/CertPathChecker;", nullptr, $PUBLIC},
	{"engineValidate", "(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertPathValidatorException,java.security.InvalidAlgorithmParameterException"},
	{}
};

$ClassInfo _CertPathValidatorSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.cert.CertPathValidatorSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CertPathValidatorSpi_MethodInfo_
};

$Object* allocate$CertPathValidatorSpi($Class* clazz) {
	return $of($alloc(CertPathValidatorSpi));
}

void CertPathValidatorSpi::init$() {
}

$CertPathChecker* CertPathValidatorSpi::engineGetRevocationChecker() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

CertPathValidatorSpi::CertPathValidatorSpi() {
}

$Class* CertPathValidatorSpi::load$($String* name, bool initialize) {
	$loadClass(CertPathValidatorSpi, name, initialize, &_CertPathValidatorSpi_ClassInfo_, allocate$CertPathValidatorSpi);
	return class$;
}

$Class* CertPathValidatorSpi::class$ = nullptr;

		} // cert
	} // security
} // java