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

void CertStoreSpi::init$($CertStoreParameters* params) {
}

CertStoreSpi::CertStoreSpi() {
}

$Class* CertStoreSpi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/cert/CertStoreParameters;)V", nullptr, $PUBLIC, $method(CertStoreSpi, init$, void, $CertStoreParameters*), "java.security.InvalidAlgorithmParameterException"},
		{"engineGetCRLs", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;", "(Ljava/security/cert/CRLSelector;)Ljava/util/Collection<+Ljava/security/cert/CRL;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CertStoreSpi, engineGetCRLs, $Collection*, $CRLSelector*), "java.security.cert.CertStoreException"},
		{"engineGetCertificates", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection;", "(Ljava/security/cert/CertSelector;)Ljava/util/Collection<+Ljava/security/cert/Certificate;>;", $PUBLIC | $ABSTRACT, $virtualMethod(CertStoreSpi, engineGetCertificates, $Collection*, $CertSelector*), "java.security.cert.CertStoreException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.security.cert.CertStoreSpi",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CertStoreSpi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertStoreSpi);
	});
	return class$;
}

$Class* CertStoreSpi::class$ = nullptr;

		} // cert
	} // security
} // java