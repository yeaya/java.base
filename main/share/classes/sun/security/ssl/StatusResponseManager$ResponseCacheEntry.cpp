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

namespace sun {
	namespace security {
		namespace ssl {

void StatusResponseManager$ResponseCacheEntry::init$($bytes* responseBytes, $CertId* cid) {
	$useLocalObjectStack();
	$Objects::requireNonNull(responseBytes, "Non-null responseBytes required"_s);
	$Objects::requireNonNull(cid, "Non-null Cert ID required"_s);
	$set(this, ocspBytes, $cast($bytes, $nc(responseBytes)->clone()));
	$var($OCSPResponse, oResp, $new($OCSPResponse, this->ocspBytes));
	$set(this, status, oResp->getResponseStatus());
	$set(this, respId, oResp->getResponderId());
	$set(this, singleResp, oResp->getSingleResponse(cid));
	$init($OCSPResponse$ResponseStatus);
	if (this->status == $OCSPResponse$ResponseStatus::SUCCESSFUL) {
		if (this->singleResp != nullptr) {
			$set(this, nextUpdate, this->singleResp->getNextUpdate());
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
	$FieldInfo fieldInfos$$[] = {
		{"status", "Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;", nullptr, $FINAL, $field(StatusResponseManager$ResponseCacheEntry, status)},
		{"ocspBytes", "[B", nullptr, $FINAL, $field(StatusResponseManager$ResponseCacheEntry, ocspBytes)},
		{"nextUpdate", "Ljava/util/Date;", nullptr, $FINAL, $field(StatusResponseManager$ResponseCacheEntry, nextUpdate)},
		{"singleResp", "Lsun/security/provider/certpath/OCSPResponse$SingleResponse;", nullptr, $FINAL, $field(StatusResponseManager$ResponseCacheEntry, singleResp)},
		{"respId", "Lsun/security/provider/certpath/ResponderId;", nullptr, $FINAL, $field(StatusResponseManager$ResponseCacheEntry, respId)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BLsun/security/provider/certpath/CertId;)V", nullptr, 0, $method(StatusResponseManager$ResponseCacheEntry, init$, void, $bytes*, $CertId*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.StatusResponseManager$ResponseCacheEntry", "sun.security.ssl.StatusResponseManager", "ResponseCacheEntry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.StatusResponseManager$ResponseCacheEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.StatusResponseManager"
	};
	$loadClass(StatusResponseManager$ResponseCacheEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StatusResponseManager$ResponseCacheEntry);
	});
	return class$;
}

$Class* StatusResponseManager$ResponseCacheEntry::class$ = nullptr;

		} // ssl
	} // security
} // sun