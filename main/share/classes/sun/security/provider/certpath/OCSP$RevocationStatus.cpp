#include <sun/security/provider/certpath/OCSP$RevocationStatus.h>

#include <java/security/cert/CRLReason.h>
#include <java/util/Date.h>
#include <java/util/Map.h>
#include <sun/security/provider/certpath/OCSP$RevocationStatus$CertStatus.h>
#include <sun/security/provider/certpath/OCSP.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CRLReason = ::java::security::cert::CRLReason;
using $Date = ::java::util::Date;
using $Map = ::java::util::Map;
using $OCSP$RevocationStatus$CertStatus = ::sun::security::provider::certpath::OCSP$RevocationStatus$CertStatus;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$MethodInfo _OCSP$RevocationStatus_MethodInfo_[] = {
	{"getCertStatus", "()Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OCSP$RevocationStatus, getCertStatus, $OCSP$RevocationStatus$CertStatus*)},
	{"getRevocationReason", "()Ljava/security/cert/CRLReason;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OCSP$RevocationStatus, getRevocationReason, $CRLReason*)},
	{"getRevocationTime", "()Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OCSP$RevocationStatus, getRevocationTime, $Date*)},
	{"getSingleExtensions", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/security/cert/Extension;>;", $PUBLIC | $ABSTRACT, $virtualMethod(OCSP$RevocationStatus, getSingleExtensions, $Map*)},
	{}
};

$InnerClassInfo _OCSP$RevocationStatus_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.OCSP$RevocationStatus", "sun.security.provider.certpath.OCSP", "RevocationStatus", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.security.provider.certpath.OCSP$RevocationStatus$CertStatus", "sun.security.provider.certpath.OCSP$RevocationStatus", "CertStatus", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _OCSP$RevocationStatus_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.provider.certpath.OCSP$RevocationStatus",
	nullptr,
	nullptr,
	nullptr,
	_OCSP$RevocationStatus_MethodInfo_,
	nullptr,
	nullptr,
	_OCSP$RevocationStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.OCSP"
};

$Object* allocate$OCSP$RevocationStatus($Class* clazz) {
	return $of($alloc(OCSP$RevocationStatus));
}

$Class* OCSP$RevocationStatus::load$($String* name, bool initialize) {
	$loadClass(OCSP$RevocationStatus, name, initialize, &_OCSP$RevocationStatus_ClassInfo_, allocate$OCSP$RevocationStatus);
	return class$;
}

$Class* OCSP$RevocationStatus::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun