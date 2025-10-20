#include <sun/net/ftp/FtpClientProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ServiceConfigurationError.h>
#include <sun/net/ftp/FtpClient.h>
#include <sun/net/ftp/FtpClientProvider$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $FtpClient = ::sun::net::ftp::FtpClient;
using $FtpClientProvider$1 = ::sun::net::ftp::FtpClientProvider$1;

namespace sun {
	namespace net {
		namespace ftp {

$FieldInfo _FtpClientProvider_FieldInfo_[] = {
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FtpClientProvider, lock)},
	{"provider", "Lsun/net/ftp/FtpClientProvider;", nullptr, $PRIVATE | $STATIC, $staticField(FtpClientProvider, provider$)},
	{}
};

$MethodInfo _FtpClientProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FtpClientProvider::*)()>(&FtpClientProvider::init$))},
	{"createFtpClient", "()Lsun/net/ftp/FtpClient;", nullptr, $PUBLIC | $ABSTRACT},
	{"loadProviderAsService", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&FtpClientProvider::loadProviderAsService))},
	{"loadProviderFromProperty", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&FtpClientProvider::loadProviderFromProperty))},
	{"provider", "()Lsun/net/ftp/FtpClientProvider;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FtpClientProvider*(*)()>(&FtpClientProvider::provider))},
	{}
};

$InnerClassInfo _FtpClientProvider_InnerClassesInfo_[] = {
	{"sun.net.ftp.FtpClientProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FtpClientProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.ftp.FtpClientProvider",
	"java.lang.Object",
	nullptr,
	_FtpClientProvider_FieldInfo_,
	_FtpClientProvider_MethodInfo_,
	nullptr,
	nullptr,
	_FtpClientProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.ftp.FtpClientProvider$1"
};

$Object* allocate$FtpClientProvider($Class* clazz) {
	return $of($alloc(FtpClientProvider));
}

$Object* FtpClientProvider::lock = nullptr;
FtpClientProvider* FtpClientProvider::provider$ = nullptr;

void FtpClientProvider::init$() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "ftpClientProvider"_s));
	}
}

bool FtpClientProvider::loadProviderFromProperty() {
	$init(FtpClientProvider);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, cm, $System::getProperty("sun.net.ftpClientProvider"_s));
	if (cm == nullptr) {
		return false;
	}
	try {
		$var($Object, o, $Class::forName(cm, true, nullptr)->newInstance());
		$assignStatic(FtpClientProvider::provider$, $cast(FtpClientProvider, o));
		return true;
	} catch ($ClassNotFoundException&) {
		$var($Exception, x, $catch());
		$throwNew($ServiceConfigurationError, $(x->toString()));
	} catch ($IllegalAccessException&) {
		$var($Exception, x, $catch());
		$throwNew($ServiceConfigurationError, $(x->toString()));
	} catch ($InstantiationException&) {
		$var($Exception, x, $catch());
		$throwNew($ServiceConfigurationError, $(x->toString()));
	} catch ($SecurityException&) {
		$var($Exception, x, $catch());
		$throwNew($ServiceConfigurationError, $(x->toString()));
	}
	$shouldNotReachHere();
}

bool FtpClientProvider::loadProviderAsService() {
	$init(FtpClientProvider);
	return false;
}

FtpClientProvider* FtpClientProvider::provider() {
	$init(FtpClientProvider);
	$beforeCallerSensitive();
	$synchronized(FtpClientProvider::lock) {
		if (FtpClientProvider::provider$ != nullptr) {
			return FtpClientProvider::provider$;
		}
		return $cast(FtpClientProvider, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FtpClientProvider$1))));
	}
}

void clinit$FtpClientProvider($Class* class$) {
	$assignStatic(FtpClientProvider::lock, $new($Object));
	$assignStatic(FtpClientProvider::provider$, nullptr);
}

FtpClientProvider::FtpClientProvider() {
}

$Class* FtpClientProvider::load$($String* name, bool initialize) {
	$loadClass(FtpClientProvider, name, initialize, &_FtpClientProvider_ClassInfo_, clinit$FtpClientProvider, allocate$FtpClientProvider);
	return class$;
}

$Class* FtpClientProvider::class$ = nullptr;

		} // ftp
	} // net
} // sun