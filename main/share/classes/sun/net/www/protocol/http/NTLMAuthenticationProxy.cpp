#include <sun/net/www/protocol/http/NTLMAuthenticationProxy.h>

#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/PasswordAuthentication.h>
#include <java/net/URL.h>
#include <sun/net/www/protocol/http/AuthenticationInfo.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINEST
#undef TYPE

using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $URL = ::java::net::URL;
using $AuthenticationInfo = ::sun::net::www::protocol::http::AuthenticationInfo;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _NTLMAuthenticationProxy_FieldInfo_[] = {
	{"supportsTA", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticField(NTLMAuthenticationProxy, supportsTA)},
	{"isTrustedSite", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticField(NTLMAuthenticationProxy, isTrustedSite$)},
	{"clazzStr", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMAuthenticationProxy, clazzStr)},
	{"supportsTAStr", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMAuthenticationProxy, supportsTAStr)},
	{"isTrustedSiteStr", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMAuthenticationProxy, isTrustedSiteStr)},
	{"proxy", "Lsun/net/www/protocol/http/NTLMAuthenticationProxy;", nullptr, $STATIC | $FINAL, $staticField(NTLMAuthenticationProxy, proxy)},
	{"supported", "Z", nullptr, $STATIC | $FINAL, $staticField(NTLMAuthenticationProxy, supported)},
	{"supportsTransparentAuth", "Z", nullptr, $STATIC | $FINAL, $staticField(NTLMAuthenticationProxy, supportsTransparentAuth$)},
	{"fourArgCtr", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<+Lsun/net/www/protocol/http/AuthenticationInfo;>;", $PRIVATE | $FINAL, $field(NTLMAuthenticationProxy, fourArgCtr)},
	{"sixArgCtr", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<+Lsun/net/www/protocol/http/AuthenticationInfo;>;", $PRIVATE | $FINAL, $field(NTLMAuthenticationProxy, sixArgCtr)},
	{}
};

$MethodInfo _NTLMAuthenticationProxy_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Constructor;Ljava/lang/reflect/Constructor;)V", "(Ljava/lang/reflect/Constructor<+Lsun/net/www/protocol/http/AuthenticationInfo;>;Ljava/lang/reflect/Constructor<+Lsun/net/www/protocol/http/AuthenticationInfo;>;)V", $PRIVATE, $method(static_cast<void(NTLMAuthenticationProxy::*)($Constructor*,$Constructor*)>(&NTLMAuthenticationProxy::init$))},
	{"create", "(ZLjava/net/URL;Ljava/net/PasswordAuthentication;Ljava/lang/String;)Lsun/net/www/protocol/http/AuthenticationInfo;", nullptr, 0},
	{"create", "(ZLjava/lang/String;ILjava/net/PasswordAuthentication;Ljava/lang/String;)Lsun/net/www/protocol/http/AuthenticationInfo;", nullptr, 0},
	{"finest", "(Ljava/lang/Exception;)V", nullptr, $STATIC, $method(static_cast<void(*)($Exception*)>(&NTLMAuthenticationProxy::finest))},
	{"isTrustedSite", "(Ljava/net/URL;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($URL*)>(&NTLMAuthenticationProxy::isTrustedSite))},
	{"supportsTransparentAuth", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&NTLMAuthenticationProxy::supportsTransparentAuth))},
	{"tryLoadNTLMAuthentication", "()Lsun/net/www/protocol/http/NTLMAuthenticationProxy;", nullptr, $PRIVATE | $STATIC, $method(static_cast<NTLMAuthenticationProxy*(*)()>(&NTLMAuthenticationProxy::tryLoadNTLMAuthentication))},
	{}
};

$ClassInfo _NTLMAuthenticationProxy_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.NTLMAuthenticationProxy",
	"java.lang.Object",
	nullptr,
	_NTLMAuthenticationProxy_FieldInfo_,
	_NTLMAuthenticationProxy_MethodInfo_
};

$Object* allocate$NTLMAuthenticationProxy($Class* clazz) {
	return $of($alloc(NTLMAuthenticationProxy));
}

$Method* NTLMAuthenticationProxy::supportsTA = nullptr;
$Method* NTLMAuthenticationProxy::isTrustedSite$ = nullptr;
$String* NTLMAuthenticationProxy::clazzStr = nullptr;
$String* NTLMAuthenticationProxy::supportsTAStr = nullptr;
$String* NTLMAuthenticationProxy::isTrustedSiteStr = nullptr;
NTLMAuthenticationProxy* NTLMAuthenticationProxy::proxy = nullptr;
bool NTLMAuthenticationProxy::supported = false;
bool NTLMAuthenticationProxy::supportsTransparentAuth$ = false;

void NTLMAuthenticationProxy::init$($Constructor* fourArgCtr, $Constructor* sixArgCtr) {
	$set(this, fourArgCtr, fourArgCtr);
	$set(this, sixArgCtr, sixArgCtr);
}

$AuthenticationInfo* NTLMAuthenticationProxy::create(bool isProxy, $URL* url, $PasswordAuthentication* pw, $String* authenticatorKey) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $cast($AuthenticationInfo, $nc(this->fourArgCtr)->newInstance($$new($ObjectArray, {
			$($of($Boolean::valueOf(isProxy))),
			$of(url),
			$of(pw),
			$of(authenticatorKey)
		})));
	} catch ($ReflectiveOperationException& roe) {
		finest(roe);
	}
	return nullptr;
}

$AuthenticationInfo* NTLMAuthenticationProxy::create(bool isProxy, $String* host, int32_t port, $PasswordAuthentication* pw, $String* authenticatorKey) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $cast($AuthenticationInfo, $nc(this->sixArgCtr)->newInstance($$new($ObjectArray, {
			$($of($Boolean::valueOf(isProxy))),
			$of(host),
			$($of($Integer::valueOf(port))),
			$of(pw),
			$of(authenticatorKey)
		})));
	} catch ($ReflectiveOperationException& roe) {
		finest(roe);
	}
	return nullptr;
}

bool NTLMAuthenticationProxy::supportsTransparentAuth() {
	$init(NTLMAuthenticationProxy);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $nc(($cast($Boolean, $($nc(NTLMAuthenticationProxy::supportsTA)->invoke(nullptr, $$new($ObjectArray, 0))))))->booleanValue();
	} catch ($ReflectiveOperationException& roe) {
		finest(roe);
	}
	return false;
}

bool NTLMAuthenticationProxy::isTrustedSite($URL* url) {
	$init(NTLMAuthenticationProxy);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $nc(($cast($Boolean, $($nc(NTLMAuthenticationProxy::isTrustedSite$)->invoke(nullptr, $$new($ObjectArray, {$of(url)}))))))->booleanValue();
	} catch ($ReflectiveOperationException& roe) {
		finest(roe);
	}
	return false;
}

NTLMAuthenticationProxy* NTLMAuthenticationProxy::tryLoadNTLMAuthentication() {
	$init(NTLMAuthenticationProxy);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* cl = nullptr;
	$var($Constructor, fourArg, nullptr);
	$var($Constructor, sixArg, nullptr);
	try {
		cl = $Class::forName(NTLMAuthenticationProxy::clazzStr, true, nullptr);
		if (cl != nullptr) {
			$init($Boolean);
			$load($URL);
			$load($PasswordAuthentication);
			$assign(fourArg, cl->getConstructor($$new($ClassArray, {
				$Boolean::TYPE,
				$URL::class$,
				$PasswordAuthentication::class$,
				$String::class$
			})));
			$init($Integer);
			$assign(sixArg, cl->getConstructor($$new($ClassArray, {
				$Boolean::TYPE,
				$String::class$,
				$Integer::TYPE,
				$PasswordAuthentication::class$,
				$String::class$
			})));
			$assignStatic(NTLMAuthenticationProxy::supportsTA, cl->getDeclaredMethod(NTLMAuthenticationProxy::supportsTAStr, $$new($ClassArray, 0)));
			$assignStatic(NTLMAuthenticationProxy::isTrustedSite$, cl->getDeclaredMethod(NTLMAuthenticationProxy::isTrustedSiteStr, $$new($ClassArray, {$URL::class$})));
			return $new(NTLMAuthenticationProxy, fourArg, sixArg);
		}
	} catch ($ClassNotFoundException& cnfe) {
		finest(cnfe);
	} catch ($ReflectiveOperationException& roe) {
		$throwNew($AssertionError, $of(roe));
	}
	return nullptr;
}

void NTLMAuthenticationProxy::finest($Exception* e) {
	$init(NTLMAuthenticationProxy);
	$useLocalCurrentObjectStackCache();
	$var($PlatformLogger, logger, $HttpURLConnection::getHttpLogger());
	$init($PlatformLogger$Level);
	if ($nc(logger)->isLoggable($PlatformLogger$Level::FINEST)) {
		logger->finest($$str({"NTLMAuthenticationProxy: "_s, e}));
	}
}

void clinit$NTLMAuthenticationProxy($Class* class$) {
	$assignStatic(NTLMAuthenticationProxy::clazzStr, "sun.net.www.protocol.http.ntlm.NTLMAuthentication"_s);
	$assignStatic(NTLMAuthenticationProxy::supportsTAStr, "supportsTransparentAuth"_s);
	$assignStatic(NTLMAuthenticationProxy::isTrustedSiteStr, "isTrustedSite"_s);
	$assignStatic(NTLMAuthenticationProxy::proxy, NTLMAuthenticationProxy::tryLoadNTLMAuthentication());
	NTLMAuthenticationProxy::supported = NTLMAuthenticationProxy::proxy != nullptr ? true : false;
	NTLMAuthenticationProxy::supportsTransparentAuth$ = NTLMAuthenticationProxy::supported ? NTLMAuthenticationProxy::supportsTransparentAuth() : false;
}

NTLMAuthenticationProxy::NTLMAuthenticationProxy() {
}

$Class* NTLMAuthenticationProxy::load$($String* name, bool initialize) {
	$loadClass(NTLMAuthenticationProxy, name, initialize, &_NTLMAuthenticationProxy_ClassInfo_, clinit$NTLMAuthenticationProxy, allocate$NTLMAuthenticationProxy);
	return class$;
}

$Class* NTLMAuthenticationProxy::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun