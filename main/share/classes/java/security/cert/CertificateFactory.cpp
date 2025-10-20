#include <java/security/cert/CertificateFactory.h>

#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider.h>
#include <java/security/cert/CRL.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateFactorySpi.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $CRL = ::java::security::cert::CRL;
using $CertPath = ::java::security::cert::CertPath;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateFactorySpi = ::java::security::cert::CertificateFactorySpi;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertificateFactory_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CertificateFactory, type)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(CertificateFactory, provider)},
	{"certFacSpi", "Ljava/security/cert/CertificateFactorySpi;", nullptr, $PRIVATE, $field(CertificateFactory, certFacSpi)},
	{}
};

$MethodInfo _CertificateFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/CertificateFactorySpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(CertificateFactory::*)($CertificateFactorySpi*,$Provider*,$String*)>(&CertificateFactory::init$))},
	{"generateCRL", "(Ljava/io/InputStream;)Ljava/security/cert/CRL;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CRL*(CertificateFactory::*)($InputStream*)>(&CertificateFactory::generateCRL)), "java.security.cert.CRLException"},
	{"generateCRLs", "(Ljava/io/InputStream;)Ljava/util/Collection;", "(Ljava/io/InputStream;)Ljava/util/Collection<+Ljava/security/cert/CRL;>;", $PUBLIC | $FINAL, $method(static_cast<$Collection*(CertificateFactory::*)($InputStream*)>(&CertificateFactory::generateCRLs)), "java.security.cert.CRLException"},
	{"generateCertPath", "(Ljava/io/InputStream;)Ljava/security/cert/CertPath;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CertPath*(CertificateFactory::*)($InputStream*)>(&CertificateFactory::generateCertPath)), "java.security.cert.CertificateException"},
	{"generateCertPath", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$CertPath*(CertificateFactory::*)($InputStream*,$String*)>(&CertificateFactory::generateCertPath)), "java.security.cert.CertificateException"},
	{"generateCertPath", "(Ljava/util/List;)Ljava/security/cert/CertPath;", "(Ljava/util/List<+Ljava/security/cert/Certificate;>;)Ljava/security/cert/CertPath;", $PUBLIC | $FINAL, $method(static_cast<$CertPath*(CertificateFactory::*)($List*)>(&CertificateFactory::generateCertPath)), "java.security.cert.CertificateException"},
	{"generateCertificate", "(Ljava/io/InputStream;)Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Certificate*(CertificateFactory::*)($InputStream*)>(&CertificateFactory::generateCertificate)), "java.security.cert.CertificateException"},
	{"generateCertificates", "(Ljava/io/InputStream;)Ljava/util/Collection;", "(Ljava/io/InputStream;)Ljava/util/Collection<+Ljava/security/cert/Certificate;>;", $PUBLIC | $FINAL, $method(static_cast<$Collection*(CertificateFactory::*)($InputStream*)>(&CertificateFactory::generateCertificates)), "java.security.cert.CertificateException"},
	{"getCertPathEncodings", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC | $FINAL, $method(static_cast<$Iterator*(CertificateFactory::*)()>(&CertificateFactory::getCertPathEncodings))},
	{"getInstance", "(Ljava/lang/String;)Ljava/security/cert/CertificateFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<CertificateFactory*(*)($String*)>(&CertificateFactory::getInstance)), "java.security.cert.CertificateException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertificateFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<CertificateFactory*(*)($String*,$String*)>(&CertificateFactory::getInstance)), "java.security.cert.CertificateException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertificateFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<CertificateFactory*(*)($String*,$Provider*)>(&CertificateFactory::getInstance)), "java.security.cert.CertificateException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(CertificateFactory::*)()>(&CertificateFactory::getProvider))},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(CertificateFactory::*)()>(&CertificateFactory::getType))},
	{}
};

$ClassInfo _CertificateFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertificateFactory",
	"java.lang.Object",
	nullptr,
	_CertificateFactory_FieldInfo_,
	_CertificateFactory_MethodInfo_
};

$Object* allocate$CertificateFactory($Class* clazz) {
	return $of($alloc(CertificateFactory));
}

void CertificateFactory::init$($CertificateFactorySpi* certFacSpi, $Provider* provider, $String* type) {
	$set(this, certFacSpi, certFacSpi);
	$set(this, provider, provider);
	$set(this, type, type);
}

CertificateFactory* CertificateFactory::getInstance($String* type) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(type), "null type name"_s);
	try {
		$load($CertificateFactorySpi);
		$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertificateFactory"_s, $CertificateFactorySpi::class$, type));
		return $new(CertificateFactory, $cast($CertificateFactorySpi, $nc(instance)->impl), instance->provider, type);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, e, $catch());
		$throwNew($CertificateException, $$str({type, " not found"_s}), e);
	}
	$shouldNotReachHere();
}

CertificateFactory* CertificateFactory::getInstance($String* type, $String* provider) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(type), "null type name"_s);
	try {
		$load($CertificateFactorySpi);
		$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertificateFactory"_s, $CertificateFactorySpi::class$, type, provider));
		return $new(CertificateFactory, $cast($CertificateFactorySpi, $nc(instance)->impl), instance->provider, type);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, e, $catch());
		$throwNew($CertificateException, $$str({type, " not found"_s}), e);
	}
	$shouldNotReachHere();
}

CertificateFactory* CertificateFactory::getInstance($String* type, $Provider* provider) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(type), "null type name"_s);
	try {
		$load($CertificateFactorySpi);
		$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertificateFactory"_s, $CertificateFactorySpi::class$, type, provider));
		return $new(CertificateFactory, $cast($CertificateFactorySpi, $nc(instance)->impl), instance->provider, type);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, e, $catch());
		$throwNew($CertificateException, $$str({type, " not found"_s}), e);
	}
	$shouldNotReachHere();
}

$Provider* CertificateFactory::getProvider() {
	return this->provider;
}

$String* CertificateFactory::getType() {
	return this->type;
}

$Certificate* CertificateFactory::generateCertificate($InputStream* inStream) {
	return $nc(this->certFacSpi)->engineGenerateCertificate(inStream);
}

$Iterator* CertificateFactory::getCertPathEncodings() {
	return ($nc(this->certFacSpi)->engineGetCertPathEncodings());
}

$CertPath* CertificateFactory::generateCertPath($InputStream* inStream) {
	return ($nc(this->certFacSpi)->engineGenerateCertPath(inStream));
}

$CertPath* CertificateFactory::generateCertPath($InputStream* inStream, $String* encoding) {
	return ($nc(this->certFacSpi)->engineGenerateCertPath(inStream, encoding));
}

$CertPath* CertificateFactory::generateCertPath($List* certificates) {
	return ($nc(this->certFacSpi)->engineGenerateCertPath(certificates));
}

$Collection* CertificateFactory::generateCertificates($InputStream* inStream) {
	return $nc(this->certFacSpi)->engineGenerateCertificates(inStream);
}

$CRL* CertificateFactory::generateCRL($InputStream* inStream) {
	return $nc(this->certFacSpi)->engineGenerateCRL(inStream);
}

$Collection* CertificateFactory::generateCRLs($InputStream* inStream) {
	return $nc(this->certFacSpi)->engineGenerateCRLs(inStream);
}

CertificateFactory::CertificateFactory() {
}

$Class* CertificateFactory::load$($String* name, bool initialize) {
	$loadClass(CertificateFactory, name, initialize, &_CertificateFactory_ClassInfo_, allocate$CertificateFactory);
	return class$;
}

$Class* CertificateFactory::class$ = nullptr;

		} // cert
	} // security
} // java