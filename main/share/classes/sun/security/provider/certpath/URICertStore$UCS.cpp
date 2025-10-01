#include <sun/security/provider/certpath/URICertStore$UCS.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $URICertStore = ::sun::security::provider::certpath::URICertStore;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$MethodInfo _URICertStore$UCS_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/CertStoreSpi;Ljava/security/Provider;Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)V", nullptr, $PROTECTED, $method(static_cast<void(URICertStore$UCS::*)($CertStoreSpi*,$Provider*,$String*,$CertStoreParameters*)>(&URICertStore$UCS::init$))},
	{}
};

$InnerClassInfo _URICertStore$UCS_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.URICertStore$UCS", "sun.security.provider.certpath.URICertStore", "UCS", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _URICertStore$UCS_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.URICertStore$UCS",
	"java.security.cert.CertStore",
	nullptr,
	nullptr,
	_URICertStore$UCS_MethodInfo_,
	nullptr,
	nullptr,
	_URICertStore$UCS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.URICertStore"
};

$Object* allocate$URICertStore$UCS($Class* clazz) {
	return $of($alloc(URICertStore$UCS));
}

void URICertStore$UCS::init$($CertStoreSpi* spi, $Provider* p, $String* type, $CertStoreParameters* params) {
	$CertStore::init$(spi, p, type, params);
}

URICertStore$UCS::URICertStore$UCS() {
}

$Class* URICertStore$UCS::load$($String* name, bool initialize) {
	$loadClass(URICertStore$UCS, name, initialize, &_URICertStore$UCS_ClassInfo_, allocate$URICertStore$UCS);
	return class$;
}

$Class* URICertStore$UCS::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun