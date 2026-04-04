#include <sun/security/provider/certpath/URICertStore$UCS.h>
#include <java/security/Provider.h>
#include <java/security/cert/CertStore.h>
#include <java/security/cert/CertStoreParameters.h>
#include <java/security/cert/CertStoreSpi.h>
#include <sun/security/provider/certpath/URICertStore.h>
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

void URICertStore$UCS::init$($CertStoreSpi* spi, $Provider* p, $String* type, $CertStoreParameters* params) {
	$CertStore::init$(spi, p, type, params);
}

URICertStore$UCS::URICertStore$UCS() {
}

$Class* URICertStore$UCS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/cert/CertStoreSpi;Ljava/security/Provider;Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)V", nullptr, $PROTECTED, $method(URICertStore$UCS, init$, void, $CertStoreSpi*, $Provider*, $String*, $CertStoreParameters*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.URICertStore$UCS", "sun.security.provider.certpath.URICertStore", "UCS", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.URICertStore$UCS",
		"java.security.cert.CertStore",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.URICertStore"
	};
	$loadClass(URICertStore$UCS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URICertStore$UCS);
	});
	return class$;
}

$Class* URICertStore$UCS::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun