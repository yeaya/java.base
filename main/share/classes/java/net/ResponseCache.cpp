#include <java/net/ResponseCache.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/CacheRequest.h>
#include <java/net/CacheResponse.h>
#include <java/net/NetPermission.h>
#include <java/net/URI.h>
#include <java/net/URLConnection.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Map.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef GET_RESPONSECACHE_PERMISSION
#undef SET_RESPONSECACHE_PERMISSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $CacheRequest = ::java::net::CacheRequest;
using $CacheResponse = ::java::net::CacheResponse;
using $NetPermission = ::java::net::NetPermission;
using $URI = ::java::net::URI;
using $URLConnection = ::java::net::URLConnection;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Map = ::java::util::Map;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace net {

$FieldInfo _ResponseCache_FieldInfo_[] = {
	{"theResponseCache", "Ljava/net/ResponseCache;", nullptr, $PRIVATE | $STATIC, $staticField(ResponseCache, theResponseCache)},
	{}
};

$MethodInfo _ResponseCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResponseCache::*)()>(&ResponseCache::init$))},
	{"get", "(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map;)Ljava/net/CacheResponse;", "(Ljava/net/URI;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)Ljava/net/CacheResponse;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getDefault", "()Ljava/net/ResponseCache;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<ResponseCache*(*)()>(&ResponseCache::getDefault))},
	{"put", "(Ljava/net/URI;Ljava/net/URLConnection;)Ljava/net/CacheRequest;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setDefault", "(Ljava/net/ResponseCache;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(ResponseCache*)>(&ResponseCache::setDefault))},
	{}
};

$ClassInfo _ResponseCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.ResponseCache",
	"java.lang.Object",
	nullptr,
	_ResponseCache_FieldInfo_,
	_ResponseCache_MethodInfo_
};

$Object* allocate$ResponseCache($Class* clazz) {
	return $of($alloc(ResponseCache));
}


ResponseCache* ResponseCache::theResponseCache = nullptr;

void ResponseCache::init$() {
}

ResponseCache* ResponseCache::getDefault() {
	$load(ResponseCache);
	$synchronized(class$) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$init($SecurityConstants);
			sm->checkPermission($SecurityConstants::GET_RESPONSECACHE_PERMISSION);
		}
		$init(ResponseCache);
		return ResponseCache::theResponseCache;
	}
}

void ResponseCache::setDefault(ResponseCache* responseCache) {
	$load(ResponseCache);
	$synchronized(class$) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$init($SecurityConstants);
			sm->checkPermission($SecurityConstants::SET_RESPONSECACHE_PERMISSION);
		}
		$init(ResponseCache);
		$assignStatic(ResponseCache::theResponseCache, responseCache);
	}
}

ResponseCache::ResponseCache() {
}

$Class* ResponseCache::load$($String* name, bool initialize) {
	$loadClass(ResponseCache, name, initialize, &_ResponseCache_ClassInfo_, allocate$ResponseCache);
	return class$;
}

$Class* ResponseCache::class$ = nullptr;

	} // net
} // java