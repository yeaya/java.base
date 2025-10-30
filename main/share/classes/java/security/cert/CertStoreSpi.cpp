#include <java/security/cert/CertStoreSpi.h>

#include <java/security/cert/CRLSelector.h>
#include <java/security/cert/CertSelector.h>
#include <java/security/cert/CertStoreParameters.h>
#include <java/util/Collection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CRLSelector = ::java::security::cert::CRLSelector;
using $CertSelector = ::java::security::cert::CertSelector;
using $CertStoreParameters = ::java::security::cert::CertStoreParameters;
using $Collection = ::java::util::Collection;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _CertStoreSpi_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/CertStoreParameters;)V", nullptr, $PUBLIC, $method(static_cast<void(CertStoreSpi::*)($CertStoreParameters*)>(&CertStoreSpi::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"engineGetCRLs", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection<+Ljava/security/cert/CRL;>;", $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertStoreException"},
	{"engineGetCertificates", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection;", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection<+Ljava/security/cert/Certificate;>;", $PUBLIC | $ABSTRACT, nullptr, "java.security.cert.CertStoreException"},
	{}
};

$ClassInfo _CertStoreSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.cert.CertStoreSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CertStoreSpi_MethodInfo_
};

$Object* allocate$CertStoreSpi($Class* clazz) {
	return $of($alloc(CertStoreSpi));
}

void CertStoreSpi::init$($CertStoreParameters* params) {
}

CertStoreSpi::CertStoreSpi() {
}

$Class* CertStoreSpi::load$($String* name, bool initialize) {
	$loadClass(CertStoreSpi, name, initialize, &_CertStoreSpi_ClassInfo_, allocate$CertStoreSpi);
	return class$;
}

$Class* CertStoreSpi::class$ = nullptr;

		} // cert
	} // security
} // java