#include <sun/net/www/protocol/http/AuthenticationInfo.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/PasswordAuthentication.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashMap.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/locks/Condition.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/function/Function.h>
#include <sun/net/www/HeaderParser.h>
#include <sun/net/www/protocol/http/AuthCache.h>
#include <sun/net/www/protocol/http/AuthCacheValue$Type.h>
#include <sun/net/www/protocol/http/AuthCacheValue.h>
#include <sun/net/www/protocol/http/AuthScheme.h>
#include <sun/net/www/protocol/http/AuthenticatorKeys.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <sun/security/action/GetBooleanAction.h>
#include <jcpp.h>

#undef DEFAULT
#undef PROXY_AUTHENTICATION
#undef SERVER_AUTHENTICATION

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashMap = ::java::util::HashMap;
using $Objects = ::java::util::Objects;
using $Condition = ::java::util::concurrent::locks::Condition;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $Function = ::java::util::function::Function;
using $HeaderParser = ::sun::net::www::HeaderParser;
using $AuthCache = ::sun::net::www::protocol::http::AuthCache;
using $AuthCacheValue = ::sun::net::www::protocol::http::AuthCacheValue;
using $AuthCacheValue$Type = ::sun::net::www::protocol::http::AuthCacheValue$Type;
using $AuthScheme = ::sun::net::www::protocol::http::AuthScheme;
using $AuthenticatorKeys = ::sun::net::www::protocol::http::AuthenticatorKeys;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

class AuthenticationInfo$$Lambda$getCachedServerAuth : public $Function {
	$class(AuthenticationInfo$$Lambda$getCachedServerAuth, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* key) override {
		 return $of(AuthenticationInfo::getCachedServerAuth($cast($String, key)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AuthenticationInfo$$Lambda$getCachedServerAuth>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AuthenticationInfo$$Lambda$getCachedServerAuth::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AuthenticationInfo$$Lambda$getCachedServerAuth, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthenticationInfo$$Lambda$getCachedServerAuth, apply, $Object*, Object$*)},
	{}
};
$ClassInfo AuthenticationInfo$$Lambda$getCachedServerAuth::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.net.www.protocol.http.AuthenticationInfo$$Lambda$getCachedServerAuth",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* AuthenticationInfo$$Lambda$getCachedServerAuth::load$($String* name, bool initialize) {
	$loadClass(AuthenticationInfo$$Lambda$getCachedServerAuth, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AuthenticationInfo$$Lambda$getCachedServerAuth::class$ = nullptr;

class AuthenticationInfo$$Lambda$getCachedProxyAuth$1 : public $Function {
	$class(AuthenticationInfo$$Lambda$getCachedProxyAuth$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* key) override {
		 return $of(AuthenticationInfo::getCachedProxyAuth($cast($String, key)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AuthenticationInfo$$Lambda$getCachedProxyAuth$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AuthenticationInfo$$Lambda$getCachedProxyAuth$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AuthenticationInfo$$Lambda$getCachedProxyAuth$1, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthenticationInfo$$Lambda$getCachedProxyAuth$1, apply, $Object*, Object$*)},
	{}
};
$ClassInfo AuthenticationInfo$$Lambda$getCachedProxyAuth$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.net.www.protocol.http.AuthenticationInfo$$Lambda$getCachedProxyAuth$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* AuthenticationInfo$$Lambda$getCachedProxyAuth$1::load$($String* name, bool initialize) {
	$loadClass(AuthenticationInfo$$Lambda$getCachedProxyAuth$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AuthenticationInfo$$Lambda$getCachedProxyAuth$1::class$ = nullptr;

$FieldInfo _AuthenticationInfo_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AuthenticationInfo, $assertionsDisabled)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AuthenticationInfo, serialVersionUID)},
	{"SERVER_AUTHENTICATION", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AuthenticationInfo, SERVER_AUTHENTICATION)},
	{"PROXY_AUTHENTICATION", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AuthenticationInfo, PROXY_AUTHENTICATION)},
	{"serializeAuth", "Z", nullptr, $STATIC | $FINAL, $staticField(AuthenticationInfo, serializeAuth)},
	{"pw", "Ljava/net/PasswordAuthentication;", nullptr, $PROTECTED | $TRANSIENT, $field(AuthenticationInfo, pw)},
	{"requests", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Thread;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AuthenticationInfo, requests)},
	{"requestLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthenticationInfo, requestLock)},
	{"requestFinished", "Ljava/util/concurrent/locks/Condition;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AuthenticationInfo, requestFinished)},
	{"type", "C", nullptr, 0, $field(AuthenticationInfo, type)},
	{"authScheme", "Lsun/net/www/protocol/http/AuthScheme;", nullptr, 0, $field(AuthenticationInfo, authScheme)},
	{"protocol", "Ljava/lang/String;", nullptr, 0, $field(AuthenticationInfo, protocol)},
	{"host", "Ljava/lang/String;", nullptr, 0, $field(AuthenticationInfo, host)},
	{"port", "I", nullptr, 0, $field(AuthenticationInfo, port)},
	{"realm", "Ljava/lang/String;", nullptr, 0, $field(AuthenticationInfo, realm)},
	{"path", "Ljava/lang/String;", nullptr, 0, $field(AuthenticationInfo, path)},
	{"authenticatorKey", "Ljava/lang/String;", nullptr, 0, $field(AuthenticationInfo, authenticatorKey)},
	{"s1", "Ljava/lang/String;", nullptr, 0, $field(AuthenticationInfo, s1)},
	{"s2", "Ljava/lang/String;", nullptr, 0, $field(AuthenticationInfo, s2)},
	{}
};

$MethodInfo _AuthenticationInfo_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(CLsun/net/www/protocol/http/AuthScheme;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AuthenticationInfo, init$, void, char16_t, $AuthScheme*, $String*, int32_t, $String*, $String*)},
	{"<init>", "(CLsun/net/www/protocol/http/AuthScheme;Ljava/net/URL;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AuthenticationInfo, init$, void, char16_t, $AuthScheme*, $URL*, $String*, $String*)},
	{"addToCache", "()V", nullptr, 0, $virtualMethod(AuthenticationInfo, addToCache, void)},
	{"cacheKey", "(Z)Ljava/lang/String;", nullptr, 0, $virtualMethod(AuthenticationInfo, cacheKey, $String*, bool)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AuthenticationInfo, clone, $Object*)},
	{"credentials", "()Ljava/net/PasswordAuthentication;", nullptr, $PUBLIC, $virtualMethod(AuthenticationInfo, credentials, $PasswordAuthentication*)},
	{"endAuthRequest", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(AuthenticationInfo, endAuthRequest, void, $String*)},
	{"getAuth", "(Ljava/lang/String;Ljava/net/URL;)Lsun/net/www/protocol/http/AuthenticationInfo;", nullptr, $STATIC, $staticMethod(AuthenticationInfo, getAuth, AuthenticationInfo*, $String*, $URL*)},
	{"getAuthScheme", "()Lsun/net/www/protocol/http/AuthScheme;", nullptr, 0, $virtualMethod(AuthenticationInfo, getAuthScheme, $AuthScheme*)},
	{"getAuthType", "()Lsun/net/www/protocol/http/AuthCacheValue$Type;", nullptr, $PUBLIC, $virtualMethod(AuthenticationInfo, getAuthType, $AuthCacheValue$Type*)},
	{"getAuthenticatorKey", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(AuthenticationInfo, getAuthenticatorKey, $String*)},
	{"getCachedProxyAuth", "(Ljava/lang/String;)Lsun/net/www/protocol/http/AuthenticationInfo;", nullptr, $PRIVATE | $STATIC, $staticMethod(AuthenticationInfo, getCachedProxyAuth, AuthenticationInfo*, $String*)},
	{"getCachedServerAuth", "(Ljava/lang/String;)Lsun/net/www/protocol/http/AuthenticationInfo;", nullptr, $PRIVATE | $STATIC, $staticMethod(AuthenticationInfo, getCachedServerAuth, AuthenticationInfo*, $String*)},
	{"getHeaderName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AuthenticationInfo, getHeaderName, $String*)},
	{"getHeaderValue", "(Ljava/net/URL;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AuthenticationInfo, getHeaderValue, $String*, $URL*, $String*)},
	{"getHost", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AuthenticationInfo, getHost, $String*)},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AuthenticationInfo, getPath, $String*)},
	{"getPort", "()I", nullptr, $PUBLIC, $virtualMethod(AuthenticationInfo, getPort, int32_t)},
	{"getProtocolScheme", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AuthenticationInfo, getProtocolScheme, $String*)},
	{"getProxyAuth", "(Ljava/lang/String;ILjava/lang/String;)Lsun/net/www/protocol/http/AuthenticationInfo;", nullptr, $STATIC, $staticMethod(AuthenticationInfo, getProxyAuth, AuthenticationInfo*, $String*, int32_t, $String*)},
	{"getProxyAuth", "(Ljava/lang/String;)Lsun/net/www/protocol/http/AuthenticationInfo;", nullptr, $STATIC, $staticMethod(AuthenticationInfo, getProxyAuth, AuthenticationInfo*, $String*)},
	{"getProxyAuthKey", "(Ljava/lang/String;ILjava/lang/String;Lsun/net/www/protocol/http/AuthScheme;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(AuthenticationInfo, getProxyAuthKey, $String*, $String*, int32_t, $String*, $AuthScheme*, $String*)},
	{"getRealm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AuthenticationInfo, getRealm, $String*)},
	{"getServerAuth", "(Ljava/net/URL;Ljava/lang/String;)Lsun/net/www/protocol/http/AuthenticationInfo;", nullptr, $STATIC, $staticMethod(AuthenticationInfo, getServerAuth, AuthenticationInfo*, $URL*, $String*)},
	{"getServerAuth", "(Ljava/lang/String;)Lsun/net/www/protocol/http/AuthenticationInfo;", nullptr, $STATIC, $staticMethod(AuthenticationInfo, getServerAuth, AuthenticationInfo*, $String*)},
	{"getServerAuthKey", "(Ljava/net/URL;Ljava/lang/String;Lsun/net/www/protocol/http/AuthScheme;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(AuthenticationInfo, getServerAuthKey, $String*, $URL*, $String*, $AuthScheme*, $String*)},
	{"isAuthorizationStale", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AuthenticationInfo, isAuthorizationStale, bool, $String*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(AuthenticationInfo, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"reducePath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(AuthenticationInfo, reducePath, $String*, $String*)},
	{"removeFromCache", "()V", nullptr, 0, $virtualMethod(AuthenticationInfo, removeFromCache, void)},
	{"requestAuthentication", "(Ljava/lang/String;Ljava/util/function/Function;)Lsun/net/www/protocol/http/AuthenticationInfo;", "(Ljava/lang/String;Ljava/util/function/Function<Ljava/lang/String;Lsun/net/www/protocol/http/AuthenticationInfo;>;)Lsun/net/www/protocol/http/AuthenticationInfo;", $PRIVATE | $STATIC, $staticMethod(AuthenticationInfo, requestAuthentication, AuthenticationInfo*, $String*, $Function*)},
	{"requestCompleted", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(AuthenticationInfo, requestCompleted, void, $String*)},
	{"setHeaders", "(Lsun/net/www/protocol/http/HttpURLConnection;Lsun/net/www/HeaderParser;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AuthenticationInfo, setHeaders, bool, $HttpURLConnection*, $HeaderParser*, $String*)},
	{"supportsPreemptiveAuthorization", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AuthenticationInfo, supportsPreemptiveAuthorization, bool)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"useAuthCache", "()Z", nullptr, $PROTECTED, $virtualMethod(AuthenticationInfo, useAuthCache, bool)},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(AuthenticationInfo, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _AuthenticationInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.www.protocol.http.AuthenticationInfo",
	"sun.net.www.protocol.http.AuthCacheValue",
	"java.lang.Cloneable",
	_AuthenticationInfo_FieldInfo_,
	_AuthenticationInfo_MethodInfo_
};

$Object* allocate$AuthenticationInfo($Class* clazz) {
	return $of($alloc(AuthenticationInfo));
}

int32_t AuthenticationInfo::hashCode() {
	 return this->$AuthCacheValue::hashCode();
}

bool AuthenticationInfo::equals(Object$* obj) {
	 return this->$AuthCacheValue::equals(obj);
}

$String* AuthenticationInfo::toString() {
	 return this->$AuthCacheValue::toString();
}

void AuthenticationInfo::finalize() {
	this->$AuthCacheValue::finalize();
}

bool AuthenticationInfo::$assertionsDisabled = false;
bool AuthenticationInfo::serializeAuth = false;
$HashMap* AuthenticationInfo::requests = nullptr;
$ReentrantLock* AuthenticationInfo::requestLock = nullptr;
$Condition* AuthenticationInfo::requestFinished = nullptr;

$PasswordAuthentication* AuthenticationInfo::credentials() {
	return this->pw;
}

$AuthCacheValue$Type* AuthenticationInfo::getAuthType() {
	$init($AuthCacheValue$Type);
	return this->type == AuthenticationInfo::SERVER_AUTHENTICATION ? $AuthCacheValue$Type::Server : $AuthCacheValue$Type::Proxy;
}

$AuthScheme* AuthenticationInfo::getAuthScheme() {
	return this->authScheme;
}

$String* AuthenticationInfo::getHost() {
	return this->host;
}

int32_t AuthenticationInfo::getPort() {
	return this->port;
}

$String* AuthenticationInfo::getRealm() {
	return this->realm;
}

$String* AuthenticationInfo::getPath() {
	return this->path;
}

$String* AuthenticationInfo::getProtocolScheme() {
	return this->protocol;
}

bool AuthenticationInfo::useAuthCache() {
	return true;
}

AuthenticationInfo* AuthenticationInfo::requestAuthentication($String* key, $Function* cache) {
	$init(AuthenticationInfo);
	$useLocalCurrentObjectStackCache();
	$var(AuthenticationInfo, cached, $cast(AuthenticationInfo, $nc(cache)->apply(key)));
	if (cached != nullptr || !AuthenticationInfo::serializeAuth) {
		return cached;
	}
	$nc(AuthenticationInfo::requestLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var(AuthenticationInfo, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(cached, $cast(AuthenticationInfo, cache->apply(key)));
			if (cached != nullptr) {
				$assign(var$2, cached);
				return$1 = true;
				goto $finally;
			}
			$var($Thread, t, nullptr);
			$var($Thread, c, nullptr);
			$assign(c, $Thread::currentThread());
			if (($assign(t, $cast($Thread, $nc(AuthenticationInfo::requests)->get(key)))) == nullptr) {
				$nc(AuthenticationInfo::requests)->put(key, c);
				if (!AuthenticationInfo::$assertionsDisabled && !(cached == nullptr)) {
					$throwNew($AssertionError);
				}
				$assign(var$2, cached);
				return$1 = true;
				goto $finally;
			}
			if (t == c) {
				if (!AuthenticationInfo::$assertionsDisabled && !(cached == nullptr)) {
					$throwNew($AssertionError);
				}
				$assign(var$2, cached);
				return$1 = true;
				goto $finally;
			}
			while ($nc(AuthenticationInfo::requests)->containsKey(key)) {
				$nc(AuthenticationInfo::requestFinished)->awaitUninterruptibly();
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(AuthenticationInfo::requestLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return $cast(AuthenticationInfo, cache->apply(key));
}

void AuthenticationInfo::requestCompleted($String* key) {
	$init(AuthenticationInfo);
	$useLocalCurrentObjectStackCache();
	$nc(AuthenticationInfo::requestLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Thread, thread, $cast($Thread, $nc(AuthenticationInfo::requests)->get(key)));
			if (thread != nullptr && thread == $Thread::currentThread()) {
				bool waspresent = $nc(AuthenticationInfo::requests)->remove(key) != nullptr;
				if (!AuthenticationInfo::$assertionsDisabled && !waspresent) {
					$throwNew($AssertionError);
				}
			}
			$nc(AuthenticationInfo::requestFinished)->signalAll();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(AuthenticationInfo::requestLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void AuthenticationInfo::init$(char16_t type, $AuthScheme* authScheme, $String* host, int32_t port, $String* realm, $String* authenticatorKey) {
	$AuthCacheValue::init$();
	this->type = type;
	$set(this, authScheme, authScheme);
	$set(this, protocol, ""_s);
	$set(this, host, $nc(host)->toLowerCase());
	this->port = port;
	$set(this, realm, realm);
	$set(this, path, nullptr);
	$set(this, authenticatorKey, $cast($String, $Objects::requireNonNull(authenticatorKey)));
}

$Object* AuthenticationInfo::clone() {
	try {
		return $of($AuthCacheValue::clone());
	} catch ($CloneNotSupportedException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

void AuthenticationInfo::init$(char16_t type, $AuthScheme* authScheme, $URL* url, $String* realm, $String* authenticatorKey) {
	$useLocalCurrentObjectStackCache();
	$AuthCacheValue::init$();
	this->type = type;
	$set(this, authScheme, authScheme);
	$set(this, protocol, $nc($($nc(url)->getProtocol()))->toLowerCase());
	$set(this, host, $nc($(url->getHost()))->toLowerCase());
	this->port = url->getPort();
	if (this->port == -1) {
		this->port = url->getDefaultPort();
	}
	$set(this, realm, realm);
	$var($String, urlPath, url->getPath());
	if ($nc(urlPath)->isEmpty()) {
		$set(this, path, urlPath);
	} else {
		$set(this, path, reducePath(urlPath));
	}
	$set(this, authenticatorKey, $cast($String, $Objects::requireNonNull(authenticatorKey)));
}

$String* AuthenticationInfo::getAuthenticatorKey() {
	return this->authenticatorKey;
}

$String* AuthenticationInfo::reducePath($String* urlPath) {
	$init(AuthenticationInfo);
	int32_t sepIndex = $nc(urlPath)->lastIndexOf((int32_t)u'/');
	int32_t targetSuffixIndex = urlPath->lastIndexOf((int32_t)u'.');
	if (sepIndex != -1) {
		if (sepIndex < targetSuffixIndex) {
			return urlPath->substring(0, sepIndex + 1);
		} else {
			return urlPath;
		}
	} else {
		return urlPath;
	}
}

AuthenticationInfo* AuthenticationInfo::getServerAuth($URL* url, $String* authenticatorKey) {
	$init(AuthenticationInfo);
	$useLocalCurrentObjectStackCache();
	int32_t port = $nc(url)->getPort();
	if (port == -1) {
		port = url->getDefaultPort();
	}
	$var($String, var$4, $$str({$$str(AuthenticationInfo::SERVER_AUTHENTICATION), ":"_s, $($nc($(url->getProtocol()))->toLowerCase()), ":"_s}));
	$var($String, var$3, $$concat(var$4, $($nc($(url->getHost()))->toLowerCase())));
	$var($String, var$2, $$concat(var$3, ":"_s));
	$var($String, var$1, $$concat(var$2, $$str(port)));
	$var($String, var$0, $$concat(var$1, ";auth="_s));
	$var($String, key, $concat(var$0, authenticatorKey));
	return getAuth(key, url);
}

$String* AuthenticationInfo::getServerAuthKey($URL* url, $String* realm, $AuthScheme* scheme, $String* authenticatorKey) {
	$init(AuthenticationInfo);
	$useLocalCurrentObjectStackCache();
	int32_t port = $nc(url)->getPort();
	if (port == -1) {
		port = url->getDefaultPort();
	}
	$var($String, var$8, $$str({$$str(AuthenticationInfo::SERVER_AUTHENTICATION), ":"_s, scheme, ":"_s}));
	$var($String, var$7, $$concat(var$8, $($nc($(url->getProtocol()))->toLowerCase())));
	$var($String, var$6, $$concat(var$7, ":"_s));
	$var($String, var$5, $$concat(var$6, $($nc($(url->getHost()))->toLowerCase())));
	$var($String, var$4, $$concat(var$5, ":"_s));
	$var($String, var$3, $$concat(var$4, $$str(port)));
	$var($String, var$2, $$concat(var$3, ":"_s));
	$var($String, var$1, $$concat(var$2, realm));
	$var($String, var$0, $$concat(var$1, ";auth="_s));
	$var($String, key, $concat(var$0, authenticatorKey));
	return key;
}

AuthenticationInfo* AuthenticationInfo::getCachedServerAuth($String* key) {
	$init(AuthenticationInfo);
	return getAuth(key, nullptr);
}

AuthenticationInfo* AuthenticationInfo::getServerAuth($String* key) {
	$init(AuthenticationInfo);
	if (!AuthenticationInfo::serializeAuth) {
		return getCachedServerAuth(key);
	}
	return requestAuthentication(key, static_cast<$Function*>($$new(AuthenticationInfo$$Lambda$getCachedServerAuth)));
}

AuthenticationInfo* AuthenticationInfo::getAuth($String* key, $URL* url) {
	$init(AuthenticationInfo);
	if (url == nullptr) {
		$init($AuthCacheValue);
		return $cast(AuthenticationInfo, $nc($AuthCacheValue::cache)->get(key, nullptr));
	} else {
		$init($AuthCacheValue);
		return $cast(AuthenticationInfo, $nc($AuthCacheValue::cache)->get(key, $($nc(url)->getPath())));
	}
}

AuthenticationInfo* AuthenticationInfo::getProxyAuth($String* host, int32_t port, $String* authenticatorKey) {
	$init(AuthenticationInfo);
	$useLocalCurrentObjectStackCache();
	$var($String, key, $str({$$str(AuthenticationInfo::PROXY_AUTHENTICATION), "::"_s, $($nc(host)->toLowerCase()), ":"_s, $$str(port), ";auth="_s, authenticatorKey}));
	$init($AuthCacheValue);
	$var(AuthenticationInfo, result, $cast(AuthenticationInfo, $nc($AuthCacheValue::cache)->get(key, nullptr)));
	return result;
}

$String* AuthenticationInfo::getProxyAuthKey($String* host, int32_t port, $String* realm, $AuthScheme* scheme, $String* authenticatorKey) {
	$init(AuthenticationInfo);
	$useLocalCurrentObjectStackCache();
	$var($String, var$6, $$str({$$str(AuthenticationInfo::PROXY_AUTHENTICATION), ":"_s, scheme, "::"_s}));
	$var($String, var$5, $$concat(var$6, $($nc(host)->toLowerCase())));
	$var($String, var$4, $$concat(var$5, ":"_s));
	$var($String, var$3, $$concat(var$4, $$str(port)));
	$var($String, var$2, $$concat(var$3, ":"_s));
	$var($String, var$1, $$concat(var$2, realm));
	$var($String, var$0, $$concat(var$1, ";auth="_s));
	$var($String, key, $concat(var$0, authenticatorKey));
	return key;
}

AuthenticationInfo* AuthenticationInfo::getCachedProxyAuth($String* key) {
	$init(AuthenticationInfo);
	$init($AuthCacheValue);
	return $cast(AuthenticationInfo, $nc($AuthCacheValue::cache)->get(key, nullptr));
}

AuthenticationInfo* AuthenticationInfo::getProxyAuth($String* key) {
	$init(AuthenticationInfo);
	if (!AuthenticationInfo::serializeAuth) {
		return getCachedProxyAuth(key);
	}
	return requestAuthentication(key, static_cast<$Function*>($$new(AuthenticationInfo$$Lambda$getCachedProxyAuth$1)));
}

void AuthenticationInfo::addToCache() {
	$useLocalCurrentObjectStackCache();
	$var($String, key, cacheKey(true));
	if (useAuthCache()) {
		$init($AuthCacheValue);
		$nc($AuthCacheValue::cache)->put(key, this);
		if (supportsPreemptiveAuthorization()) {
			$nc($AuthCacheValue::cache)->put($(cacheKey(false)), this);
		}
	}
	endAuthRequest(key);
}

void AuthenticationInfo::endAuthRequest($String* key) {
	$init(AuthenticationInfo);
	if (!AuthenticationInfo::serializeAuth) {
		return;
	}
	requestCompleted(key);
}

void AuthenticationInfo::removeFromCache() {
	$useLocalCurrentObjectStackCache();
	$init($AuthCacheValue);
	$nc($AuthCacheValue::cache)->remove($(cacheKey(true)), this);
	if (supportsPreemptiveAuthorization()) {
		$nc($AuthCacheValue::cache)->remove($(cacheKey(false)), this);
	}
}

$String* AuthenticationInfo::getHeaderName() {
	if (this->type == AuthenticationInfo::SERVER_AUTHENTICATION) {
		return "Authorization"_s;
	} else {
		return "Proxy-authorization"_s;
	}
}

$String* AuthenticationInfo::cacheKey(bool includeRealm) {
	$useLocalCurrentObjectStackCache();
	$var($String, authenticatorKey, getAuthenticatorKey());
	if (includeRealm) {
		return $str({$$str(this->type), ":"_s, this->authScheme, ":"_s, this->protocol, ":"_s, this->host, ":"_s, $$str(this->port), ":"_s, this->realm, ";auth="_s, authenticatorKey});
	} else {
		return $str({$$str(this->type), ":"_s, this->protocol, ":"_s, this->host, ":"_s, $$str(this->port), ";auth="_s, authenticatorKey});
	}
}

void AuthenticationInfo::readObject($ObjectInputStream* s) {
	$synchronized(this) {
		$nc(s)->defaultReadObject();
		$set(this, pw, $new($PasswordAuthentication, this->s1, $($nc(this->s2)->toCharArray())));
		$set(this, s1, nullptr);
		$set(this, s2, nullptr);
		if (this->authenticatorKey == nullptr) {
			$init($AuthenticatorKeys);
			$set(this, authenticatorKey, $AuthenticatorKeys::DEFAULT);
		}
	}
}

void AuthenticationInfo::writeObject($ObjectOutputStream* s) {
	$synchronized(this) {
		$Objects::requireNonNull(this->authenticatorKey);
		$set(this, s1, $nc(this->pw)->getUserName());
		$set(this, s2, $new($String, $($nc(this->pw)->getPassword())));
		$nc(s)->defaultWriteObject();
	}
}

void clinit$AuthenticationInfo($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	AuthenticationInfo::$assertionsDisabled = !AuthenticationInfo::class$->desiredAssertionStatus();
	{
		AuthenticationInfo::serializeAuth = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "http.auth.serializeRequests"_s)))))))->booleanValue();
	}
	$assignStatic(AuthenticationInfo::requests, $new($HashMap));
	$assignStatic(AuthenticationInfo::requestLock, $new($ReentrantLock));
	$assignStatic(AuthenticationInfo::requestFinished, $nc(AuthenticationInfo::requestLock)->newCondition());
}

AuthenticationInfo::AuthenticationInfo() {
}

$Class* AuthenticationInfo::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AuthenticationInfo$$Lambda$getCachedServerAuth::classInfo$.name)) {
			return AuthenticationInfo$$Lambda$getCachedServerAuth::load$(name, initialize);
		}
		if (name->equals(AuthenticationInfo$$Lambda$getCachedProxyAuth$1::classInfo$.name)) {
			return AuthenticationInfo$$Lambda$getCachedProxyAuth$1::load$(name, initialize);
		}
	}
	$loadClass(AuthenticationInfo, name, initialize, &_AuthenticationInfo_ClassInfo_, clinit$AuthenticationInfo, allocate$AuthenticationInfo);
	return class$;
}

$Class* AuthenticationInfo::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun