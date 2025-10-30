#include <java/security/cert/CertPathBuilder.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider.h>
#include <java/security/cert/CertPathBuilder$1.h>
#include <java/security/cert/CertPathBuilderResult.h>
#include <java/security/cert/CertPathBuilderSpi.h>
#include <java/security/cert/CertPathChecker.h>
#include <java/security/cert/CertPathParameters.h>
#include <java/util/Objects.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <jcpp.h>

#undef CPB_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $CertPathBuilder$1 = ::java::security::cert::CertPathBuilder$1;
using $CertPathBuilderResult = ::java::security::cert::CertPathBuilderResult;
using $CertPathBuilderSpi = ::java::security::cert::CertPathBuilderSpi;
using $CertPathChecker = ::java::security::cert::CertPathChecker;
using $CertPathParameters = ::java::security::cert::CertPathParameters;
using $Objects = ::java::util::Objects;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertPathBuilder_FieldInfo_[] = {
	{"CPB_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CertPathBuilder, CPB_TYPE)},
	{"builderSpi", "Ljava/security/cert/CertPathBuilderSpi;", nullptr, $PRIVATE | $FINAL, $field(CertPathBuilder, builderSpi)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE | $FINAL, $field(CertPathBuilder, provider)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(CertPathBuilder, algorithm)},
	{}
};

$MethodInfo _CertPathBuilder_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/CertPathBuilderSpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(CertPathBuilder::*)($CertPathBuilderSpi*,$Provider*,$String*)>(&CertPathBuilder::init$))},
	{"build", "(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CertPathBuilderResult*(CertPathBuilder::*)($CertPathParameters*)>(&CertPathBuilder::build)), "java.security.cert.CertPathBuilderException,java.security.InvalidAlgorithmParameterException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(CertPathBuilder::*)()>(&CertPathBuilder::getAlgorithm))},
	{"getDefaultType", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)()>(&CertPathBuilder::getDefaultType))},
	{"getInstance", "(Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CertPathBuilder*(*)($String*)>(&CertPathBuilder::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CertPathBuilder*(*)($String*,$String*)>(&CertPathBuilder::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathBuilder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CertPathBuilder*(*)($String*,$Provider*)>(&CertPathBuilder::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(CertPathBuilder::*)()>(&CertPathBuilder::getProvider))},
	{"getRevocationChecker", "()Ljava/security/cert/CertPathChecker;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CertPathChecker*(CertPathBuilder::*)()>(&CertPathBuilder::getRevocationChecker))},
	{}
};

$InnerClassInfo _CertPathBuilder_InnerClassesInfo_[] = {
	{"java.security.cert.CertPathBuilder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CertPathBuilder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertPathBuilder",
	"java.lang.Object",
	nullptr,
	_CertPathBuilder_FieldInfo_,
	_CertPathBuilder_MethodInfo_,
	nullptr,
	nullptr,
	_CertPathBuilder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.cert.CertPathBuilder$1"
};

$Object* allocate$CertPathBuilder($Class* clazz) {
	return $of($alloc(CertPathBuilder));
}

$String* CertPathBuilder::CPB_TYPE = nullptr;

void CertPathBuilder::init$($CertPathBuilderSpi* builderSpi, $Provider* provider, $String* algorithm) {
	$set(this, builderSpi, builderSpi);
	$set(this, provider, provider);
	$set(this, algorithm, algorithm);
}

CertPathBuilder* CertPathBuilder::getInstance($String* algorithm) {
	$init(CertPathBuilder);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($CertPathBuilderSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertPathBuilder"_s, $CertPathBuilderSpi::class$, algorithm));
	return $new(CertPathBuilder, $cast($CertPathBuilderSpi, $nc(instance)->impl), instance->provider, algorithm);
}

CertPathBuilder* CertPathBuilder::getInstance($String* algorithm, $String* provider) {
	$init(CertPathBuilder);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($CertPathBuilderSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertPathBuilder"_s, $CertPathBuilderSpi::class$, algorithm, provider));
	return $new(CertPathBuilder, $cast($CertPathBuilderSpi, $nc(instance)->impl), instance->provider, algorithm);
}

CertPathBuilder* CertPathBuilder::getInstance($String* algorithm, $Provider* provider) {
	$init(CertPathBuilder);
	$Objects::requireNonNull($of(algorithm), "null algorithm name"_s);
	$load($CertPathBuilderSpi);
	$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertPathBuilder"_s, $CertPathBuilderSpi::class$, algorithm, provider));
	return $new(CertPathBuilder, $cast($CertPathBuilderSpi, $nc(instance)->impl), instance->provider, algorithm);
}

$Provider* CertPathBuilder::getProvider() {
	return this->provider;
}

$String* CertPathBuilder::getAlgorithm() {
	return this->algorithm;
}

$CertPathBuilderResult* CertPathBuilder::build($CertPathParameters* params) {
	return $nc(this->builderSpi)->engineBuild(params);
}

$String* CertPathBuilder::getDefaultType() {
	$init(CertPathBuilder);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, cpbtype, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CertPathBuilder$1)))));
	return (cpbtype == nullptr) ? "PKIX"_s : cpbtype;
}

$CertPathChecker* CertPathBuilder::getRevocationChecker() {
	return $nc(this->builderSpi)->engineGetRevocationChecker();
}

CertPathBuilder::CertPathBuilder() {
}

void clinit$CertPathBuilder($Class* class$) {
	$assignStatic(CertPathBuilder::CPB_TYPE, "certpathbuilder.type"_s);
}

$Class* CertPathBuilder::load$($String* name, bool initialize) {
	$loadClass(CertPathBuilder, name, initialize, &_CertPathBuilder_ClassInfo_, clinit$CertPathBuilder, allocate$CertPathBuilder);
	return class$;
}

$Class* CertPathBuilder::class$ = nullptr;

		} // cert
	} // security
} // java