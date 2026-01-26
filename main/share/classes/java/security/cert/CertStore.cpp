#include <java/security/cert/CertStore.h>

#include <java/security/AccessController.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider.h>
#include <java/security/cert/CRLSelector.h>
#include <java/security/cert/CertSelector.h>
#include <java/security/cert/CertStore$1.h>
#include <java/security/cert/CertStoreParameters.h>
#include <java/security/cert/CertStoreSpi.h>
#include <java/util/Collection.h>
#include <java/util/Objects.h>
#include <sun/security/jca/GetInstance$Instance.h>
#include <sun/security/jca/GetInstance.h>
#include <jcpp.h>

#undef CERTSTORE_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $CRLSelector = ::java::security::cert::CRLSelector;
using $CertSelector = ::java::security::cert::CertSelector;
using $CertStore$1 = ::java::security::cert::CertStore$1;
using $CertStoreParameters = ::java::security::cert::CertStoreParameters;
using $CertStoreSpi = ::java::security::cert::CertStoreSpi;
using $Collection = ::java::util::Collection;
using $Objects = ::java::util::Objects;
using $GetInstance = ::sun::security::jca::GetInstance;
using $GetInstance$Instance = ::sun::security::jca::GetInstance$Instance;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _CertStore_FieldInfo_[] = {
	{"CERTSTORE_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CertStore, CERTSTORE_TYPE)},
	{"storeSpi", "Ljava/security/cert/CertStoreSpi;", nullptr, $PRIVATE, $field(CertStore, storeSpi)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(CertStore, provider)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CertStore, type)},
	{"params", "Ljava/security/cert/CertStoreParameters;", nullptr, $PRIVATE, $field(CertStore, params)},
	{}
};

$MethodInfo _CertStore_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/CertStoreSpi;Ljava/security/Provider;Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)V", nullptr, $PROTECTED, $method(CertStore, init$, void, $CertStoreSpi*, $Provider*, $String*, $CertStoreParameters*)},
	{"getCRLs", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection<+Ljava/security/cert/CRL;>;", $PUBLIC | $FINAL, $method(CertStore, getCRLs, $Collection*, $CRLSelector*), "java.security.cert.CertStoreException"},
	{"getCertStoreParameters", "()Ljava/security/cert/CertStoreParameters;", nullptr, $PUBLIC | $FINAL, $method(CertStore, getCertStoreParameters, $CertStoreParameters*)},
	{"getCertificates", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection;", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection<+Ljava/security/cert/Certificate;>;", $PUBLIC | $FINAL, $method(CertStore, getCertificates, $Collection*, $CertSelector*), "java.security.cert.CertStoreException"},
	{"getDefaultType", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(CertStore, getDefaultType, $String*)},
	{"getInstance", "(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)Ljava/security/cert/CertStore;", nullptr, $PUBLIC | $STATIC, $staticMethod(CertStore, getInstance, CertStore*, $String*, $CertStoreParameters*), "java.security.InvalidAlgorithmParameterException,java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/lang/String;)Ljava/security/cert/CertStore;", nullptr, $PUBLIC | $STATIC, $staticMethod(CertStore, getInstance, CertStore*, $String*, $CertStoreParameters*, $String*), "java.security.InvalidAlgorithmParameterException,java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getInstance", "(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/security/Provider;)Ljava/security/cert/CertStore;", nullptr, $PUBLIC | $STATIC, $staticMethod(CertStore, getInstance, CertStore*, $String*, $CertStoreParameters*, $Provider*), "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(CertStore, getProvider, $Provider*)},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(CertStore, getType, $String*)},
	{"handleException", "(Ljava/security/NoSuchAlgorithmException;)Ljava/security/cert/CertStore;", nullptr, $PRIVATE | $STATIC, $staticMethod(CertStore, handleException, CertStore*, $NoSuchAlgorithmException*), "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{}
};

$InnerClassInfo _CertStore_InnerClassesInfo_[] = {
	{"java.security.cert.CertStore$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CertStore_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.CertStore",
	"java.lang.Object",
	nullptr,
	_CertStore_FieldInfo_,
	_CertStore_MethodInfo_,
	nullptr,
	nullptr,
	_CertStore_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.security.cert.CertStore$1"
};

$Object* allocate$CertStore($Class* clazz) {
	return $of($alloc(CertStore));
}

$String* CertStore::CERTSTORE_TYPE = nullptr;

void CertStore::init$($CertStoreSpi* storeSpi, $Provider* provider, $String* type, $CertStoreParameters* params) {
	$set(this, storeSpi, storeSpi);
	$set(this, provider, provider);
	$set(this, type, type);
	if (params != nullptr) {
		$set(this, params, $cast($CertStoreParameters, params->clone()));
	}
}

$Collection* CertStore::getCertificates($CertSelector* selector) {
	return $nc(this->storeSpi)->engineGetCertificates(selector);
}

$Collection* CertStore::getCRLs($CRLSelector* selector) {
	return $nc(this->storeSpi)->engineGetCRLs(selector);
}

CertStore* CertStore::getInstance($String* type, $CertStoreParameters* params) {
	$init(CertStore);
	$Objects::requireNonNull($of(type), "null type name"_s);
	try {
		$load($CertStoreSpi);
		$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertStore"_s, $CertStoreSpi::class$, type, $of(params)));
		return $new(CertStore, $cast($CertStoreSpi, $nc(instance)->impl), instance->provider, type, params);
	} catch ($NoSuchAlgorithmException& e) {
		return handleException(e);
	}
	$shouldNotReachHere();
}

CertStore* CertStore::handleException($NoSuchAlgorithmException* e) {
	$init(CertStore);
	$var($Throwable, cause, $nc(e)->getCause());
	if ($instanceOf($InvalidAlgorithmParameterException, cause)) {
		$throw($cast($InvalidAlgorithmParameterException, cause));
	}
	$throw(e);
	$shouldNotReachHere();
}

CertStore* CertStore::getInstance($String* type, $CertStoreParameters* params, $String* provider) {
	$init(CertStore);
	$Objects::requireNonNull($of(type), "null type name"_s);
	try {
		$load($CertStoreSpi);
		$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertStore"_s, $CertStoreSpi::class$, type, $of(params), provider));
		return $new(CertStore, $cast($CertStoreSpi, $nc(instance)->impl), instance->provider, type, params);
	} catch ($NoSuchAlgorithmException& e) {
		return handleException(e);
	}
	$shouldNotReachHere();
}

CertStore* CertStore::getInstance($String* type, $CertStoreParameters* params, $Provider* provider) {
	$init(CertStore);
	$Objects::requireNonNull($of(type), "null type name"_s);
	try {
		$load($CertStoreSpi);
		$var($GetInstance$Instance, instance, $GetInstance::getInstance("CertStore"_s, $CertStoreSpi::class$, type, $of(params), provider));
		return $new(CertStore, $cast($CertStoreSpi, $nc(instance)->impl), instance->provider, type, params);
	} catch ($NoSuchAlgorithmException& e) {
		return handleException(e);
	}
	$shouldNotReachHere();
}

$CertStoreParameters* CertStore::getCertStoreParameters() {
	return (this->params == nullptr ? ($CertStoreParameters*)nullptr : $cast($CertStoreParameters, $nc(this->params)->clone()));
}

$String* CertStore::getType() {
	return this->type;
}

$Provider* CertStore::getProvider() {
	return this->provider;
}

$String* CertStore::getDefaultType() {
	$init(CertStore);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, cstype, nullptr);
	$assign(cstype, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($CertStore$1)))));
	if (cstype == nullptr) {
		$assign(cstype, "LDAP"_s);
	}
	return cstype;
}

CertStore::CertStore() {
}

void clinit$CertStore($Class* class$) {
	$assignStatic(CertStore::CERTSTORE_TYPE, "certstore.type"_s);
}

$Class* CertStore::load$($String* name, bool initialize) {
	$loadClass(CertStore, name, initialize, &_CertStore_ClassInfo_, clinit$CertStore, allocate$CertStore);
	return class$;
}

$Class* CertStore::class$ = nullptr;

		} // cert
	} // security
} // java