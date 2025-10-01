#include <sun/security/ssl/StatusResponseManager$OCSPFetchCall.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $BigInteger = ::java::math::BigInteger;
using $URI = ::java::net::URI;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Callable = ::java::util::concurrent::Callable;
using $CertId = ::sun::security::provider::certpath::CertId;
using $OCSP = ::sun::security::provider::certpath::OCSP;
using $OCSPResponse$ResponseStatus = ::sun::security::provider::certpath::OCSPResponse$ResponseStatus;
using $CertStatusExtension$OCSPStatusRequest = ::sun::security::ssl::CertStatusExtension$OCSPStatusRequest;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $StatusResponseManager = ::sun::security::ssl::StatusResponseManager;
using $StatusResponseManager$ResponseCacheEntry = ::sun::security::ssl::StatusResponseManager$ResponseCacheEntry;
using $StatusResponseManager$StatusInfo = ::sun::security::ssl::StatusResponseManager$StatusInfo;
using $Cache = ::sun::security::util::Cache;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _StatusResponseManager$OCSPFetchCall_FieldInfo_[] = {
	{"this$0", "Lsun/security/ssl/StatusResponseManager;", nullptr, $FINAL | $SYNTHETIC, $field(StatusResponseManager$OCSPFetchCall, this$0)},
	{"statInfo", "Lsun/security/ssl/StatusResponseManager$StatusInfo;", nullptr, 0, $field(StatusResponseManager$OCSPFetchCall, statInfo)},
	{"ocspRequest", "Lsun/security/ssl/CertStatusExtension$OCSPStatusRequest;", nullptr, 0, $field(StatusResponseManager$OCSPFetchCall, ocspRequest)},
	{"extensions", "Ljava/util/List;", "Ljava/util/List<Ljava/security/cert/Extension;>;", 0, $field(StatusResponseManager$OCSPFetchCall, extensions)},
	{"responderIds", "Ljava/util/List;", "Ljava/util/List<Lsun/security/provider/certpath/ResponderId;>;", 0, $field(StatusResponseManager$OCSPFetchCall, responderIds)},
	{}
};

$MethodInfo _StatusResponseManager$OCSPFetchCall_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/StatusResponseManager;Lsun/security/ssl/StatusResponseManager$StatusInfo;Lsun/security/ssl/CertStatusExtension$OCSPStatusRequest;)V", nullptr, $PUBLIC, $method(static_cast<void(StatusResponseManager$OCSPFetchCall::*)($StatusResponseManager*,$StatusResponseManager$StatusInfo*,$CertStatusExtension$OCSPStatusRequest*)>(&StatusResponseManager$OCSPFetchCall::init$))},
	{"addToCache", "(Lsun/security/provider/certpath/CertId;Lsun/security/ssl/StatusResponseManager$ResponseCacheEntry;)V", nullptr, $PRIVATE, $method(static_cast<void(StatusResponseManager$OCSPFetchCall::*)($CertId*,$StatusResponseManager$ResponseCacheEntry*)>(&StatusResponseManager$OCSPFetchCall::addToCache))},
	{"call", "()Lsun/security/ssl/StatusResponseManager$StatusInfo;", nullptr, $PUBLIC},
	{"getNextTaskDelay", "(Ljava/util/Date;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(StatusResponseManager$OCSPFetchCall::*)($Date*)>(&StatusResponseManager$OCSPFetchCall::getNextTaskDelay))},
	{}
};

$InnerClassInfo _StatusResponseManager$OCSPFetchCall_InnerClassesInfo_[] = {
	{"sun.security.ssl.StatusResponseManager$OCSPFetchCall", "sun.security.ssl.StatusResponseManager", "OCSPFetchCall", 0},
	{"sun.security.ssl.StatusResponseManager$StatusInfo", "sun.security.ssl.StatusResponseManager", "StatusInfo", 0},
	{}
};

$ClassInfo _StatusResponseManager$OCSPFetchCall_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.StatusResponseManager$OCSPFetchCall",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_StatusResponseManager$OCSPFetchCall_FieldInfo_,
	_StatusResponseManager$OCSPFetchCall_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Lsun/security/ssl/StatusResponseManager$StatusInfo;>;",
	nullptr,
	_StatusResponseManager$OCSPFetchCall_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.StatusResponseManager"
};

$Object* allocate$StatusResponseManager$OCSPFetchCall($Class* clazz) {
	return $of($alloc(StatusResponseManager$OCSPFetchCall));
}

void StatusResponseManager$OCSPFetchCall::init$($StatusResponseManager* this$0, $StatusResponseManager$StatusInfo* info, $CertStatusExtension$OCSPStatusRequest* request) {
	$set(this, this$0, this$0);
	$set(this, statInfo, $cast($StatusResponseManager$StatusInfo, $Objects::requireNonNull($of(info), "Null StatusInfo not allowed"_s)));
	$set(this, ocspRequest, $cast($CertStatusExtension$OCSPStatusRequest, $Objects::requireNonNull($of(request), "Null OCSPStatusRequest not allowed"_s)));
	$set(this, extensions, $nc(this->ocspRequest)->extensions);
	$set(this, responderIds, $nc(this->ocspRequest)->responderIds);
}

$Object* StatusResponseManager$OCSPFetchCall::call() {
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
			return $of(this->statInfo);
		} else {
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
				$SSLLogger::fine($$str({"Attempting fetch from "_s, $nc(this->statInfo)->responder}), $$new($ObjectArray, 0));
			}
		}
		$assign(extsToSend, (this->this$0->ignoreExtensions || !$nc(this->responderIds)->isEmpty()) ? $Collections::emptyList() : this->extensions);
		$var($bytes, respBytes, $OCSP::getOCSPBytes($($Collections::singletonList($nc(this->statInfo)->cid)), $nc(this->statInfo)->responder, extsToSend));
		if (respBytes != nullptr) {
			$assign(cacheEntry, $new($StatusResponseManager$ResponseCacheEntry, respBytes, $nc(this->statInfo)->cid));
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
				$SSLLogger::fine($$str({"OCSP Status: "_s, cacheEntry->status, " ("_s, $$str(respBytes->length), " bytes)"_s}), $$new($ObjectArray, 0));
			}
			$init($OCSPResponse$ResponseStatus);
			if (cacheEntry->status == $OCSPResponse$ResponseStatus::SUCCESSFUL) {
				$set($nc(this->statInfo), responseData, cacheEntry);
				addToCache($nc(this->statInfo)->cid, cacheEntry);
			}
		} else {
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
				$SSLLogger::fine("No data returned from OCSP Responder"_s, $$new($ObjectArray, 0));
			}
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("respmgr"_s)) {
			$SSLLogger::fine("Caught exception: "_s, $$new($ObjectArray, {$of(ioe)}));
		}
	}
	return $of(this->statInfo);
}

void StatusResponseManager$OCSPFetchCall::addToCache($CertId* certId, $StatusResponseManager$ResponseCacheEntry* entry) {
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
	$loadClass(StatusResponseManager$OCSPFetchCall, name, initialize, &_StatusResponseManager$OCSPFetchCall_ClassInfo_, allocate$StatusResponseManager$OCSPFetchCall);
	return class$;
}

$Class* StatusResponseManager$OCSPFetchCall::class$ = nullptr;

		} // ssl
	} // security
} // sun