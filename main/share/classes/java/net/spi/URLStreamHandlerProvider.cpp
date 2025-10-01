#include <java/net/spi/URLStreamHandlerProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $URLStreamHandlerFactory = ::java::net::URLStreamHandlerFactory;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;

namespace java {
	namespace net {
		namespace spi {

$MethodInfo _URLStreamHandlerProvider_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(static_cast<void(URLStreamHandlerProvider::*)($Void*)>(&URLStreamHandlerProvider::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(URLStreamHandlerProvider::*)()>(&URLStreamHandlerProvider::init$))},
	{"checkPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Void*(*)()>(&URLStreamHandlerProvider::checkPermission))},
	{}
};

$ClassInfo _URLStreamHandlerProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.spi.URLStreamHandlerProvider",
	"java.lang.Object",
	"java.net.URLStreamHandlerFactory",
	nullptr,
	_URLStreamHandlerProvider_MethodInfo_
};

$Object* allocate$URLStreamHandlerProvider($Class* clazz) {
	return $of($alloc(URLStreamHandlerProvider));
}

$Void* URLStreamHandlerProvider::checkPermission() {
	$init(URLStreamHandlerProvider);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "setFactory"_s));
	}
	return nullptr;
}

void URLStreamHandlerProvider::init$($Void* ignore) {
}

void URLStreamHandlerProvider::init$() {
	URLStreamHandlerProvider::init$($(checkPermission()));
}

URLStreamHandlerProvider::URLStreamHandlerProvider() {
}

$Class* URLStreamHandlerProvider::load$($String* name, bool initialize) {
	$loadClass(URLStreamHandlerProvider, name, initialize, &_URLStreamHandlerProvider_ClassInfo_, allocate$URLStreamHandlerProvider);
	return class$;
}

$Class* URLStreamHandlerProvider::class$ = nullptr;

		} // spi
	} // net
} // java