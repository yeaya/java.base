#include <sun/security/provider/certpath/ssl/SSLServerCertStore$CS.h>

#include <java/security/Provider.h>
#include <java/security/cert/CertStore.h>
#include <java/security/cert/CertStoreParameters.h>
#include <java/security/cert/CertStoreSpi.h>
#include <sun/security/provider/certpath/ssl/SSLServerCertStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $CertStore = ::java::security::cert::CertStore;
using $CertStoreParameters = ::java::security::cert::CertStoreParameters;
using $CertStoreSpi = ::java::security::cert::CertStoreSpi;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ssl {

$MethodInfo _SSLServerCertStore$CS_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/CertStoreSpi;Ljava/security/Provider;Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)V", nullptr, $PROTECTED, $method(SSLServerCertStore$CS, init$, void, $CertStoreSpi*, $Provider*, $String*, $CertStoreParameters*)},
	{}
};

$InnerClassInfo _SSLServerCertStore$CS_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ssl.SSLServerCertStore$CS", "sun.security.provider.certpath.ssl.SSLServerCertStore", "CS", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLServerCertStore$CS_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.ssl.SSLServerCertStore$CS",
	"java.security.cert.CertStore",
	nullptr,
	nullptr,
	_SSLServerCertStore$CS_MethodInfo_,
	nullptr,
	nullptr,
	_SSLServerCertStore$CS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ssl.SSLServerCertStore"
};

$Object* allocate$SSLServerCertStore$CS($Class* clazz) {
	return $of($alloc(SSLServerCertStore$CS));
}

void SSLServerCertStore$CS::init$($CertStoreSpi* spi, $Provider* p, $String* type, $CertStoreParameters* params) {
	$CertStore::init$(spi, p, type, params);
}

SSLServerCertStore$CS::SSLServerCertStore$CS() {
}

$Class* SSLServerCertStore$CS::load$($String* name, bool initialize) {
	$loadClass(SSLServerCertStore$CS, name, initialize, &_SSLServerCertStore$CS_ClassInfo_, allocate$SSLServerCertStore$CS);
	return class$;
}

$Class* SSLServerCertStore$CS::class$ = nullptr;

				} // ssl
			} // certpath
		} // provider
	} // security
} // sun