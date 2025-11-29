#include <sun/security/ssl/StatusResponseManager$ResponseCacheEntry.h>

#include <java/io/IOException.h>
#include <java/math/BigInteger.h>
#include <java/util/Date.h>
#include <java/util/Objects.h>
#include <sun/security/provider/certpath/CertId.h>
#include <sun/security/provider/certpath/OCSPResponse$ResponseStatus.h>
#include <sun/security/provider/certpath/OCSPResponse$SingleResponse.h>
#include <sun/security/provider/certpath/OCSPResponse.h>
#include <sun/security/provider/certpath/ResponderId.h>
#include <sun/security/ssl/StatusResponseManager.h>
#include <jcpp.h>

#undef SUCCESSFUL

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $CertId = ::sun::security::provider::certpath::CertId;
using $OCSPResponse = ::sun::security::provider::certpath::OCSPResponse;
using $OCSPResponse$ResponseStatus = ::sun::security::provider::certpath::OCSPResponse$ResponseStatus;
using $OCSPResponse$SingleResponse = ::sun::security::provider::certpath::OCSPResponse$SingleResponse;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _StatusResponseManager$ResponseCacheEntry_FieldInfo_[] = {
	{"status", "Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $FINAL, $field(StatusResponseManager$ResponseCacheEntry, status)},
	{"ocspBytes", "[B", nullptr, $FINAL, $field(StatusResponseManager$ResponseCacheEntry, ocspBytes)},
	{"nextUpdate", "Ljava/util/Date;", nullptr, $FINAL, $field(StatusResponseManager$ResponseCacheEntry, nextUpdate)},
	{"singleResp", "Lsun/security/provider/certpath/OCSPResponse$SingleResponse;", nullptr, $FINAL, $field(StatusResponseManager$ResponseCacheEntry, singleResp)},
	{"respId", "Lsun/security/provider/certpath/ResponderId;", nullptr, $FINAL, $field(StatusResponseManager$ResponseCacheEntry, respId)},
	{}
};

$MethodInfo _StatusResponseManager$ResponseCacheEntry_MethodInfo_[] = {
	{"<init>", "([BLsun/security/provider/certpath/CertId;)V", nullptr, 0, $method(static_cast<void(StatusResponseManager$ResponseCacheEntry::*)($bytes*,$CertId*)>(&StatusResponseManager$ResponseCacheEntry::init$)), "java.io.IOException"},
	{}
};

$InnerClassInfo _StatusResponseManager$ResponseCacheEntry_InnerClassesInfo_[] = {
	{"sun.security.ssl.StatusResponseManager$ResponseCacheEntry", "sun.security.ssl.StatusResponseManager", "ResponseCacheEntry", $STATIC},
	{}
};

$ClassInfo _StatusResponseManager$ResponseCacheEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.StatusResponseManager$ResponseCacheEntry",
	"java.lang.Object",
	nullptr,
	_StatusResponseManager$ResponseCacheEntry_FieldInfo_,
	_StatusResponseManager$ResponseCacheEntry_MethodInfo_,
	nullptr,
	nullptr,
	_StatusResponseManager$ResponseCacheEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.StatusResponseManager"
};

$Object* allocate$StatusResponseManager$ResponseCacheEntry($Class* clazz) {
	return $of($alloc(StatusResponseManager$ResponseCacheEntry));
}

void StatusResponseManager$ResponseCacheEntry::init$($bytes* responseBytes, $CertId* cid) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(responseBytes), "Non-null responseBytes required"_s);
	$Objects::requireNonNull($of(cid), "Non-null Cert ID required"_s);
	$set(this, ocspBytes, $cast($bytes, $nc(responseBytes)->clone()));
	$var($OCSPResponse, oResp, $new($OCSPResponse, this->ocspBytes));
	$set(this, status, oResp->getResponseStatus());
	$set(this, respId, oResp->getResponderId());
	$set(this, singleResp, oResp->getSingleResponse(cid));
	$init($OCSPResponse$ResponseStatus);
	if (this->status == $OCSPResponse$ResponseStatus::SUCCESSFUL) {
		if (this->singleResp != nullptr) {
			$set(this, nextUpdate, $nc(this->singleResp)->getNextUpdate());
		} else {
			$throwNew($IOException, $$str({"Unable to find SingleResponse for SN "_s, $($nc(cid)->getSerialNumber())}));
		}
	} else {
		$set(this, nextUpdate, nullptr);
	}
}

StatusResponseManager$ResponseCacheEntry::StatusResponseManager$ResponseCacheEntry() {
}

$Class* StatusResponseManager$ResponseCacheEntry::load$($String* name, bool initialize) {
	$loadClass(StatusResponseManager$ResponseCacheEntry, name, initialize, &_StatusResponseManager$ResponseCacheEntry_ClassInfo_, allocate$StatusResponseManager$ResponseCacheEntry);
	return class$;
}

$Class* StatusResponseManager$ResponseCacheEntry::class$ = nullptr;

		} // ssl
	} // security
} // sun