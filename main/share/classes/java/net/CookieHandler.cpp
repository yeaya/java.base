#include <java/net/CookieHandler.h>

#include <java/lang/SecurityManager.h>
#include <java/net/NetPermission.h>
#include <java/net/URI.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Map.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef GET_COOKIEHANDLER_PERMISSION
#undef SET_COOKIEHANDLER_PERMISSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $NetPermission = ::java::net::NetPermission;
using $URI = ::java::net::URI;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Map = ::java::util::Map;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace net {

$FieldInfo _CookieHandler_FieldInfo_[] = {
	{"cookieHandler", "Ljava/net/CookieHandler;", nullptr, $PRIVATE | $STATIC, $staticField(CookieHandler, cookieHandler)},
	{}
};

$MethodInfo _CookieHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CookieHandler::*)()>(&CookieHandler::init$))},
	{"get", "(Ljava/net/URI;Ljava/util/Map;)Ljava/util/Map;", "(Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getDefault", "()Ljava/net/CookieHandler;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<CookieHandler*(*)()>(&CookieHandler::getDefault))},
	{"put", "(Ljava/net/URI;Ljava/util/Map;)V", "(Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)V", $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setDefault", "(Ljava/net/CookieHandler;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(CookieHandler*)>(&CookieHandler::setDefault))},
	{}
};

$ClassInfo _CookieHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.CookieHandler",
	"java.lang.Object",
	nullptr,
	_CookieHandler_FieldInfo_,
	_CookieHandler_MethodInfo_
};

$Object* allocate$CookieHandler($Class* clazz) {
	return $of($alloc(CookieHandler));
}

CookieHandler* CookieHandler::cookieHandler = nullptr;

void CookieHandler::init$() {
}

CookieHandler* CookieHandler::getDefault() {
	$load(CookieHandler);
	$synchronized(class$) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$init($SecurityConstants);
			sm->checkPermission($SecurityConstants::GET_COOKIEHANDLER_PERMISSION);
		}
		$init(CookieHandler);
		return CookieHandler::cookieHandler;
	}
}

void CookieHandler::setDefault(CookieHandler* cHandler) {
	$load(CookieHandler);
	$synchronized(class$) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$init($SecurityConstants);
			sm->checkPermission($SecurityConstants::SET_COOKIEHANDLER_PERMISSION);
		}
		$init(CookieHandler);
		$assignStatic(CookieHandler::cookieHandler, cHandler);
	}
}

CookieHandler::CookieHandler() {
}

$Class* CookieHandler::load$($String* name, bool initialize) {
	$loadClass(CookieHandler, name, initialize, &_CookieHandler_ClassInfo_, allocate$CookieHandler);
	return class$;
}

$Class* CookieHandler::class$ = nullptr;

	} // net
} // java