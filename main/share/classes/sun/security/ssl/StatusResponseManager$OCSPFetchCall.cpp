#include <sun/security/ssl/StatusResponseManager$OCSPFetchCall.h>
#include <java/io/IOException.h>
#include <java/math/BigInteger.h>
#include <java/net/URI.h>
#include <java/util/Collections.h>
#include <java/util/Date.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <sun/security/provider/certpath/CertId.h>
#include <sun/security/provider/certpath/OCSP.h>
#include <sun/security/provider/certpath/OCSPResponse$ResponseStatus.h>
#include <sun/security/ssl/CertStatusExtension$OCSPStatusRequest.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/StatusResponseManager$ResponseCacheEntry.h>
#include <sun/security/ssl/StatusResponseManager$StatusInfo.h>
#include <sun/security/ssl/StatusResponseManager.h>
#include <sun/security/util/Cache.h>
#include <jcpp.h>

#undef SUCCESSFUL

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $CertId = ::sun::security::provider::certpath::CertId;
using $OCSP = ::sun::security::provider::certpath::OCSP;
using $OCSPResponse$ResponseStatus = ::sun::security::provider::certpath::OCSPResponse$ResponseStatus;
using $CertStatusExtension$OCSPStatusRequest = ::sun::security::ssl::CertStatusExtension$OCSPStatusRequest;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $StatusResponseManager = ::sun::security::ssl::StatusResponseManager;
using $StatusResponseManager$ResponseCacheEntry = ::sun::security::ssl::StatusResponseManager$ResponseCacheEntry;
using $StatusResponseManager$StatusInfo = ::sun::security::ssl::StatusResponseManager$StatusInfo;

namespace sun {
	namespace security {
		namespace ssl {

void StatusResponseManager$OCSPFetchCall::init$($StatusResponseManager* this$0, $StatusResponseManager$StatusInfo* info, $CertStatusExtension$OCSPStatusRequest* request) {
	$set(this, this$0, this$0);
	$set(this, statInfo, $cast($StatusResponseManager$StatusInfo, $Objects::requireNonNull(info, "Null StatusInfo not allowed"_s)));
	$set(this, ocspRequest, $cast($CertStatusExtension$OCSPStatusRequest, $Objects::requireNonNull(request, "Null OCSPStatusRequest not allowed"_s)));
	$set(this, extensions, $nc(this->ocspRequest)->extensions);
	$set(this, responderIds, this->ocspRequest->responderIds);
}

$Object* StatusResponseManager$OCSPFetchCall::call() {
	$useLocalObjectStack();
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
		$SSLLogger::fine($$str({"Starting fetch for SN "_s, $($nc($nc(this->statInfo)->cid)->getSerialNumber())}), $$new($ObjectArray, 0));
	}
	try {
		$var($StatusResponseManager$ResponseCacheEntry, cacheEntry, nullptr);
		$var($List, extsToSend, nullptr);
		if ($nc(this->statInfo)->responder == nullptr) {
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
				$SSLLogger::fine("Null URI detected, OCSP fetch aborted"_s, $$new($ObjectArray, 0));
			}
			return this->statInfo;
		} else if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
			$SSLLogger::fine($$str({"Attempting fetch from "_s, this->statInfo->responder}), $$new($ObjectArray, 0));
		}
		$assign(extsToSend, (this->this$0->ignoreExtensions || !$nc(this->responderIds)->isEmpty()) ? $Collections::emptyList() : this->extensions);
		$var($bytes, respBytes, $OCSP::getOCSPBytes($($Collections::singletonList(this->statInfo->cid)), this->statInfo->responder, extsToSend));
		if (respBytes != nullptr) {
			$assign(cacheEntry, $new($StatusResponseManager$ResponseCacheEntry, respBytes, this->statInfo->cid));
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
				$SSLLogger::fine($$str({"OCSP Status: "_s, cacheEntry->status, " ("_s, $$str(respBytes->length), " bytes)"_s}), $$new($ObjectArray, 0));
			}
			$init($OCSPResponse$ResponseStatus);
			if (cacheEntry->status == $OCSPResponse$ResponseStatus::SUCCESSFUL) {
				$set(this->statInfo, responseData, cacheEntry);
				addToCache(this->statInfo->cid, cacheEntry);
			}
		} else if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
			$SSLLogger::fine("No data returned from OCSP Responder"_s, $$new($ObjectArray, 0));
		}
	} catch ($IOException& ioe) {
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
			$SSLLogger::fine("Caught exception: "_s, $$new($ObjectArray, {ioe}));
		}
	}
	return this->statInfo;
}

void StatusResponseManager$OCSPFetchCall::addToCache($CertId* certId, $StatusResponseManager$ResponseCacheEntry* entry) {
	$useLocalObjectStack();
	if ($nc(entry)->nextUpdate == nullptr && this->this$0->cacheLifetime == 0) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
			$SSLLogger::fine("Not caching this OCSP response"_s, $$new($ObjectArray, 0));
		}
	} else {
		$nc(this->this$0->responseCache)->put(certId, entry);
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
			$SSLLogger::fine($$str({"Added response for SN "_s, $($nc(certId)->getSerialNumber()), " to cache"_s}), $$new($ObjectArray, 0));
		}
	}
}

int64_t StatusResponseManager$OCSPFetchCall::getNextTaskDelay($Date* nextUpdate) {
	int64_t delaySec = 0;
	int32_t lifetime = this->this$0->getCacheLifetime();
	if (nextUpdate != nullptr) {
		int64_t var$0 = nextUpdate->getTime();
		int64_t nuDiffSec = (var$0 - $System::currentTimeMillis()) / 1000;
		delaySec = lifetime > 0 ? $Long::min(nuDiffSec, lifetime) : nuDiffSec;
	} else {
		delaySec = lifetime > 0 ? lifetime : -1;
	}
	return delaySec;
}

StatusResponseManager$OCSPFetchCall::StatusResponseManager$OCSPFetchCall() {
}

$Class* StatusResponseManager$OCSPFetchCall::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/ssl/StatusResponseManager;", nullptr, $FINAL | $SYNTHETIC, $field(StatusResponseManager$OCSPFetchCall, this$0)},
		{"statInfo", "Lsun/security/ssl/StatusResponseManager$StatusInfo;", nullptr, 0, $field(StatusResponseManager$OCSPFetchCall, statInfo)},
		{"ocspRequest", "Lsun/security/ssl/CertStatusExtension$OCSPStatusRequest;", nullptr, 0, $field(StatusResponseManager$OCSPFetchCall, ocspRequest)},
		{"extensions", "Ljava/util/List;", "Ljava/util/List<Ljava/security/cert/Extension;>;", 0, $field(StatusResponseManager$OCSPFetchCall, extensions)},
		{"responderIds", "Ljava/util/List;", "Ljava/util/List<Lsun/security/provider/certpath/ResponderId;>;", 0, $field(StatusResponseManager$OCSPFetchCall, responderIds)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/StatusResponseManager;Lsun/security/ssl/StatusResponseManager$StatusInfo;Lsun/security/ssl/CertStatusExtension$OCSPStatusRequest;)V", nullptr, $PUBLIC, $method(StatusResponseManager$OCSPFetchCall, init$, void, $StatusResponseManager*, $StatusResponseManager$StatusInfo*, $CertStatusExtension$OCSPStatusRequest*)},
		{"addToCache", "(Lsun/security/provider/certpath/CertId;Lsun/security/ssl/StatusResponseManager$ResponseCacheEntry;)V", nullptr, $PRIVATE, $method(StatusResponseManager$OCSPFetchCall, addToCache, void, $CertId*, $StatusResponseManager$ResponseCacheEntry*)},
		{"call", "()Lsun/security/ssl/StatusResponseManager$StatusInfo;", nullptr, $PUBLIC, $virtualMethod(StatusResponseManager$OCSPFetchCall, call, $Object*)},
		{"getNextTaskDelay", "(Ljava/util/Date;)J", nullptr, $PRIVATE, $method(StatusResponseManager$OCSPFetchCall, getNextTaskDelay, int64_t, $Date*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.StatusResponseManager$OCSPFetchCall", "sun.security.ssl.StatusResponseManager", "OCSPFetchCall", 0},
		{"sun.security.ssl.StatusResponseManager$StatusInfo", "sun.security.ssl.StatusResponseManager", "StatusInfo", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.StatusResponseManager$OCSPFetchCall",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Lsun/security/ssl/StatusResponseManager$StatusInfo;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.StatusResponseManager"
	};
	$loadClass(StatusResponseManager$OCSPFetchCall, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StatusResponseManager$OCSPFetchCall);
	});
	return class$;
}

$Class* StatusResponseManager$OCSPFetchCall::class$ = nullptr;

		} // ssl
	} // security
} // sun