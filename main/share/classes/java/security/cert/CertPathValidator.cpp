#include <java/security/cert/CertPathValidator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathChecker.h>
#include <java/security/cert/CertPathParameters.h>
#include <java/security/cert/CertPathValidator$1.h>
#include <java/security/cert/CertPathValidatorResult.h>
#include <java/security/cert/CertPathValidatorSpi.h>
#include <java/util/Objects.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <jcpp.h>

#undef CPV_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathChecker = ::java::security::cert::CertPathChecker;
using $CertPathParameters = ::java::security::cert::CertPathParameters;
using $CertPathValidator$1 = ::java::security::cert::CertPathValidator$1;
using $CertPathValidatorResult = ::java::security::cert::CertPathValidatorResult;
using $CertPathValidatorSpi = ::java::security::cert::CertPathValidatorSpi;
using $Objects = ::java::util::Objects;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertPathValidator_FieldInfo_[] = {
	{"CPV_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CertPathValidator, CPV_TYPE)},
	{"validatorSpi", "Ljava/security/cert/CertPathValidatorSpi;", nullptr, $PRIVATE | $FINAL, $field(CertPathValidator, validatorSpi)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE | $FINAL, $field(CertPathValidator, provider)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CertPathValidator, algorithm)},
	{}
};

$MethodInfo _CertPathValidator_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/CertPathValidatorSpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(CertPathValidator::*)($CertPathValidatorSpi*,$Provider*,$String*)>(&CertPathValidator::init$))},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(CertPathValidator::*)()>(&CertPathValidator::getAlgorithm))},
	{"getDefaultType", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)()>(&CertPathValidator::getDefaultType))},
	{"getInstance", "(Ljava/lang/String;)Ljava/security/cert/CertPathValidator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CertPathValidator*(*)($String*)>(&CertPathValidator::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathValidator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CertPathValidator*(*)($String*,$String*)>(&CertPathValidator::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathValidator;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CertPathValidator*(*)($String*,$Provider*)>(&CertPathValidator::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(CertPathValidator::*)()>(&CertPathValidator::getProvider))},
	{"getRevocationChecker", "()Ljava/security/cert/CertPathChecker;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CertPathChecker*(CertPathValidator::*)()>(&CertPathValidator::getRevocationChecker))},
	{"validate", "(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CertPathValidatorResult*(CertPathValidator::*)($CertPath*,$CertPathParameters*)>(&CertPathValidator::validate)), "java.security.cert.CertPathValidatorException,java.security.InvalidAlgorithmParameterException"},
	{}
};

$InnerClassInfo _CertPathValidator_InnerClassesInfo_[] = {
	{"java.security.cert.CertPathValidator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CertPathValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertPathValidator",
	"java.lang.Object",
	nullptr,
	_CertPathValidator_FieldInfo_,
	_CertPathValidator_MethodInfo_,
	nullptr,
	nullptr,
	_CertPathValidator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.cert.CertPathValidator$1"
};

$Object* allocate$CertPathValidator($Class* clazz) {
	return $of($alloc(CertPathValidator));
}

$String* CertPathValidator::CPV_TYPE = nullptr;

void CertPathValidator::init$($CertPathValidatorSpi* validatorSpi, $Provider* provider, $String* algorithm) {
	$set(this, validatorSpi, validatorSpi);
	$set(this, provider, provider);
	$set(this, algorithm, algorithm);
}

CertPathValidator* CertPathValidator::getInstance($String* algorithm) {
	$init(CertPathValidator);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($CertPathValidatorSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertPathValidator"_s, $CertPathValidatorSpi::class$, algorithm));
	return $new(CertPathValidator, $cast($CertPathValidatorSpi, $nc(instance)->impl), instance->provider, algorithm);
}

CertPathValidator* CertPathValidator::getInstance($String* algorithm, $String* provider) {
	$init(CertPathValidator);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($CertPathValidatorSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertPathValidator"_s, $CertPathValidatorSpi::class$, algorithm, provider));
	return $new(CertPathValidator, $cast($CertPathValidatorSpi, $nc(instance)->impl), instance->provider, algorithm);
}

CertPathValidator* CertPathValidator::getInstance($String* algorithm, $Provider* provider) {
	$init(CertPathValidator);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($CertPathValidatorSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertPathValidator"_s, $CertPathValidatorSpi::class$, algorithm, provider));
	return $new(CertPathValidator, $cast($CertPathValidatorSpi, $nc(instance)->impl), instance->provider, algorithm);
}

$Provider* CertPathValidator::getProvider() {
	return this->provider;
}

$String* CertPathValidator::getAlgorithm() {
	return this->algorithm;
}

$CertPathValidatorResult* CertPathValidator::validate($CertPath* certPath, $CertPathParameters* params) {
	return $nc(this->validatorSpi)->engineValidate(certPath, params);
}

$String* CertPathValidator::getDefaultType() {
	$init(CertPathValidator);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, cpvtype, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CertPathValidator$1)))));
	return (cpvtype == nullptr) ? "PKIX"_s : cpvtype;
}

$CertPathChecker* CertPathValidator::getRevocationChecker() {
	return $nc(this->validatorSpi)->engineGetRevocationChecker();
}

CertPathValidator::CertPathValidator() {
}

void clinit$CertPathValidator($Class* class$) {
	$assignStatic(CertPathValidator::CPV_TYPE, "certpathvalidator.type"_s);
}

$Class* CertPathValidator::load$($String* name, bool initialize) {
	$loadClass(CertPathValidator, name, initialize, &_CertPathValidator_ClassInfo_, clinit$CertPathValidator, allocate$CertPathValidator);
	return class$;
}

$Class* CertPathValidator::class$ = nullptr;

		} // cert
	} // security
} // java