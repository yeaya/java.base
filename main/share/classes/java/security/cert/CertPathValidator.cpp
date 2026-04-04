#include <java/security/cert/CertPathValidator.h>
#include <java/security/AccessController.h>
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

$String* CertPathValidator::CPV_TYPE = nullptr;

void CertPathValidator::init$($CertPathValidatorSpi* validatorSpi, $Provider* provider, $String* algorithm) {
	$set(this, validatorSpi, validatorSpi);
	$set(this, provider, provider);
	$set(this, algorithm, algorithm);
}

CertPathValidator* CertPathValidator::getInstance($String* algorithm) {
	$init(CertPathValidator);
	$Objects::requireNonNull(algorithm, "null algorithm name"_s);
	$load($CertPathValidatorSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertPathValidator"_s, $CertPathValidatorSpi::class$, algorithm));
	return $new(CertPathValidator, $cast($CertPathValidatorSpi, $nc(instance)->impl), $nc(instance)->provider, algorithm);
}

CertPathValidator* CertPathValidator::getInstance($String* algorithm, $String* provider) {
	$init(CertPathValidator);
	$Objects::requireNonNull(algorithm, "null algorithm name"_s);
	$load($CertPathValidatorSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertPathValidator"_s, $CertPathValidatorSpi::class$, algorithm, provider));
	return $new(CertPathValidator, $cast($CertPathValidatorSpi, $nc(instance)->impl), $nc(instance)->provider, algorithm);
}

CertPathValidator* CertPathValidator::getInstance($String* algorithm, $Provider* provider) {
	$init(CertPathValidator);
	$Objects::requireNonNull(algorithm, "null algorithm name"_s);
	$load($CertPathValidatorSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertPathValidator"_s, $CertPathValidatorSpi::class$, algorithm, provider));
	return $new(CertPathValidator, $cast($CertPathValidatorSpi, $nc(instance)->impl), $nc(instance)->provider, algorithm);
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
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, cpvtype, $cast($String, $AccessController::doPrivileged($$new($CertPathValidator$1))));
	return (cpvtype == nullptr) ? "PKIX"_s : cpvtype;
}

$CertPathChecker* CertPathValidator::getRevocationChecker() {
	return $nc(this->validatorSpi)->engineGetRevocationChecker();
}

CertPathValidator::CertPathValidator() {
}

void CertPathValidator::clinit$($Class* clazz) {
	$assignStatic(CertPathValidator::CPV_TYPE, "certpathvalidator.type"_s);
}

$Class* CertPathValidator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CPV_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CertPathValidator, CPV_TYPE)},
		{"validatorSpi", "Ljava/security/cert/CertPathValidatorSpi;", nullptr, $PRIVATE | $FINAL, $field(CertPathValidator, validatorSpi)},
		{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE | $FINAL, $field(CertPathValidator, provider)},
		{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CertPathValidator, algorithm)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/cert/CertPathValidatorSpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(CertPathValidator, init$, void, $CertPathValidatorSpi*, $Provider*, $String*)},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(CertPathValidator, getAlgorithm, $String*)},
		{"getDefaultType", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(CertPathValidator, getDefaultType, $String*)},
		{"getInstance", "(Ljava/lang/String;)Ljava/security/cert/CertPathValidator;", nullptr, $PUBLIC | $STATIC, $staticMethod(CertPathValidator, getInstance, CertPathValidator*, $String*), "java.security.NoSuchAlgorithmException"},
		{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathValidator;", nullptr, $PUBLIC | $STATIC, $staticMethod(CertPathValidator, getInstance, CertPathValidator*, $String*, $String*), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
		{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathValidator;", nullptr, $PUBLIC | $STATIC, $staticMethod(CertPathValidator, getInstance, CertPathValidator*, $String*, $Provider*), "java.security.NoSuchAlgorithmException"},
		{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(CertPathValidator, getProvider, $Provider*)},
		{"getRevocationChecker", "()Ljava/security/cert/CertPathChecker;", nullptr, $PUBLIC | $FINAL, $method(CertPathValidator, getRevocationChecker, $CertPathChecker*)},
		{"validate", "(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;", nullptr, $PUBLIC | $FINAL, $method(CertPathValidator, validate, $CertPathValidatorResult*, $CertPath*, $CertPathParameters*), "java.security.cert.CertPathValidatorException,java.security.InvalidAlgorithmParameterException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.cert.CertPathValidator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.cert.CertPathValidator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.security.cert.CertPathValidator$1"
	};
	$loadClass(CertPathValidator, name, initialize, &classInfo$$, CertPathValidator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CertPathValidator);
	});
	return class$;
}

$Class* CertPathValidator::class$ = nullptr;

		} // cert
	} // security
} // java