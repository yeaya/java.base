#include <sun/net/www/protocol/http/NegotiateAuthentication.h>

#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ThreadLocal.h>
#include <java/net/Authenticator$RequestorType.h>
#include <java/net/Authenticator.h>
#include <java/net/URL.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/HashMap.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/net/www/HeaderParser.h>
#include <sun/net/www/protocol/http/AuthScheme.h>
#include <sun/net/www/protocol/http/AuthenticationInfo.h>
#include <sun/net/www/protocol/http/AuthenticatorKeys.h>
#include <sun/net/www/protocol/http/HttpCallerInfo.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <sun/net/www/protocol/http/NegotiateAuthentication$1.h>
#include <sun/net/www/protocol/http/Negotiator.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef KERBEROS
#undef NEGOTIATE
#undef PROXY
#undef PROXY_AUTHENTICATION
#undef SERVER_AUTHENTICATION

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Authenticator$RequestorType = ::java::net::Authenticator$RequestorType;
using $URL = ::java::net::URL;
using $Base64 = ::java::util::Base64;
using $Base64$Decoder = ::java::util::Base64$Decoder;
using $Base64$Encoder = ::java::util::Base64$Encoder;
using $HashMap = ::java::util::HashMap;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $HeaderParser = ::sun::net::www::HeaderParser;
using $AuthScheme = ::sun::net::www::protocol::http::AuthScheme;
using $AuthenticationInfo = ::sun::net::www::protocol::http::AuthenticationInfo;
using $AuthenticatorKeys = ::sun::net::www::protocol::http::AuthenticatorKeys;
using $HttpCallerInfo = ::sun::net::www::protocol::http::HttpCallerInfo;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;
using $NegotiateAuthentication$1 = ::sun::net::www::protocol::http::NegotiateAuthentication$1;
using $Negotiator = ::sun::net::www::protocol::http::Negotiator;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$FieldInfo _NegotiateAuthentication_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NegotiateAuthentication, $assertionsDisabled)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NegotiateAuthentication, serialVersionUID)},
	{"hci", "Lsun/net/www/protocol/http/HttpCallerInfo;", nullptr, $PRIVATE | $FINAL, $field(NegotiateAuthentication, hci)},
	{"supported", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Boolean;>;", $STATIC, $staticField(NegotiateAuthentication, supported)},
	{"cache", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/util/HashMap<Ljava/lang/String;Lsun/net/www/protocol/http/Negotiator;>;>;", $STATIC, $staticField(NegotiateAuthentication, cache)},
	{"negotiateLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NegotiateAuthentication, negotiateLock)},
	{"cacheSPNEGO", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NegotiateAuthentication, cacheSPNEGO)},
	{"negotiator", "Lsun/net/www/protocol/http/Negotiator;", nullptr, $PRIVATE, $field(NegotiateAuthentication, negotiator)},
	{}
};

$MethodInfo _NegotiateAuthentication_MethodInfo_[] = {
	{"<init>", "(Lsun/net/www/protocol/http/HttpCallerInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(NegotiateAuthentication::*)($HttpCallerInfo*)>(&NegotiateAuthentication::init$))},
	{"firstToken", "()[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(NegotiateAuthentication::*)()>(&NegotiateAuthentication::firstToken)), "java.io.IOException"},
	{"getCache", "()Ljava/util/HashMap;", "()Ljava/util/HashMap<Ljava/lang/String;Lsun/net/www/protocol/http/Negotiator;>;", $PRIVATE | $STATIC, $method(static_cast<$HashMap*(*)()>(&NegotiateAuthentication::getCache))},
	{"getHeaderValue", "(Ljava/net/URL;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isAuthorizationStale", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isSupported", "(Lsun/net/www/protocol/http/HttpCallerInfo;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($HttpCallerInfo*)>(&NegotiateAuthentication::isSupported))},
	{"nextToken", "([B)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(NegotiateAuthentication::*)($bytes*)>(&NegotiateAuthentication::nextToken)), "java.io.IOException"},
	{"setHeaders", "(Lsun/net/www/protocol/http/HttpURLConnection;Lsun/net/www/HeaderParser;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"supportsPreemptiveAuthorization", "()Z", nullptr, $PUBLIC},
	{"useAuthCache", "()Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _NegotiateAuthentication_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.NegotiateAuthentication$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NegotiateAuthentication_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.www.protocol.http.NegotiateAuthentication",
	"sun.net.www.protocol.http.AuthenticationInfo",
	nullptr,
	_NegotiateAuthentication_FieldInfo_,
	_NegotiateAuthentication_MethodInfo_,
	nullptr,
	nullptr,
	_NegotiateAuthentication_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.NegotiateAuthentication$1"
};

$Object* allocate$NegotiateAuthentication($Class* clazz) {
	return $of($alloc(NegotiateAuthentication));
}

bool NegotiateAuthentication::$assertionsDisabled = false;
$HashMap* NegotiateAuthentication::supported = nullptr;
$ThreadLocal* NegotiateAuthentication::cache = nullptr;
$ReentrantLock* NegotiateAuthentication::negotiateLock = nullptr;
bool NegotiateAuthentication::cacheSPNEGO = false;

void NegotiateAuthentication::init$($HttpCallerInfo* hci) {
	$useLocalCurrentObjectStackCache();
	$init($Authenticator$RequestorType);
	char16_t var$0 = $Authenticator$RequestorType::PROXY == $nc(hci)->authType ? $AuthenticationInfo::PROXY_AUTHENTICATION : $AuthenticationInfo::SERVER_AUTHENTICATION;
	$init($AuthScheme);
	$var($AuthScheme, var$1, $nc($nc(hci)->scheme)->equalsIgnoreCase("Negotiate"_s) ? $AuthScheme::NEGOTIATE : $AuthScheme::KERBEROS);
	$var($URL, var$2, $nc(hci)->url);
	$var($String, var$3, ""_s);
	$AuthenticationInfo::init$(var$0, var$1, var$2, var$3, $($AuthenticatorKeys::getKey(hci->authenticator)));
	$set(this, negotiator, nullptr);
	$set(this, hci, hci);
}

bool NegotiateAuthentication::supportsPreemptiveAuthorization() {
	return false;
}

bool NegotiateAuthentication::isSupported($HttpCallerInfo* hci) {
	$init(NegotiateAuthentication);
	$useLocalCurrentObjectStackCache();
	$nc(NegotiateAuthentication::negotiateLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			if (NegotiateAuthentication::supported == nullptr) {
				$assignStatic(NegotiateAuthentication::supported, $new($HashMap));
			}
			$var($String, hostname, $nc(hci)->host);
			$assign(hostname, $nc(hostname)->toLowerCase());
			if ($nc(NegotiateAuthentication::supported)->containsKey(hostname)) {
				var$2 = $nc(($cast($Boolean, $($nc(NegotiateAuthentication::supported)->get(hostname)))))->booleanValue();
				return$1 = true;
				goto $finally;
			}
			$var($Negotiator, neg, $Negotiator::getNegotiator(hci));
			if (neg != nullptr) {
				$nc(NegotiateAuthentication::supported)->put(hostname, $($Boolean::valueOf(true)));
				if (NegotiateAuthentication::cache == nullptr) {
					$assignStatic(NegotiateAuthentication::cache, $new($NegotiateAuthentication$1));
				}
				$nc(($cast($HashMap, $($nc(NegotiateAuthentication::cache)->get()))))->put(hostname, neg);
				var$2 = true;
				return$1 = true;
				goto $finally;
			} else {
				$nc(NegotiateAuthentication::supported)->put(hostname, $($Boolean::valueOf(false)));
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(NegotiateAuthentication::negotiateLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$HashMap* NegotiateAuthentication::getCache() {
	$init(NegotiateAuthentication);
	$useLocalCurrentObjectStackCache();
	$nc(NegotiateAuthentication::negotiateLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($HashMap, var$2, nullptr);
		bool return$1 = false;
		try {
			if (NegotiateAuthentication::cache == nullptr) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			}
			$assign(var$2, $cast($HashMap, $nc(NegotiateAuthentication::cache)->get()));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(NegotiateAuthentication::negotiateLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool NegotiateAuthentication::useAuthCache() {
	return $AuthenticationInfo::useAuthCache() && NegotiateAuthentication::cacheSPNEGO;
}

$String* NegotiateAuthentication::getHeaderValue($URL* url, $String* method) {
	$throwNew($RuntimeException, "getHeaderValue not supported"_s);
	$shouldNotReachHere();
}

bool NegotiateAuthentication::isAuthorizationStale($String* header) {
	return false;
}

bool NegotiateAuthentication::setHeaders($HttpURLConnection* conn, $HeaderParser* p, $String* raw) {
	$useLocalCurrentObjectStackCache();
	if (!NegotiateAuthentication::$assertionsDisabled && !$nc(conn)->isLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	try {
		$var($String, response, nullptr);
		$var($bytes, incoming, nullptr);
		$var($StringArray, parts, $nc(raw)->split("\\s+"_s));
		if (parts->length > 1) {
			$assign(incoming, $nc($($Base64::getDecoder()))->decode(parts->get(1)));
		}
		$assign(response, $str({$nc(this->hci)->scheme, " "_s, $($nc($($Base64::getEncoder()))->encodeToString(incoming == nullptr ? $(firstToken()) : $(nextToken(incoming))))}));
		$nc(conn)->setAuthenticationProperty($(getHeaderName()), response);
		return true;
	} catch ($IOException& e) {
		return false;
	}
	$shouldNotReachHere();
}

$bytes* NegotiateAuthentication::firstToken() {
	$useLocalCurrentObjectStackCache();
	$set(this, negotiator, nullptr);
	$var($HashMap, cachedMap, getCache());
	if (cachedMap != nullptr) {
		$set(this, negotiator, $cast($Negotiator, cachedMap->get($(getHost()))));
		if (this->negotiator != nullptr) {
			cachedMap->remove($(getHost()));
		}
	}
	if (this->negotiator == nullptr) {
		$set(this, negotiator, $Negotiator::getNegotiator(this->hci));
		if (this->negotiator == nullptr) {
			$var($IOException, ioe, $new($IOException, "Cannot initialize Negotiator"_s));
			$throw(ioe);
		}
	}
	return $nc(this->negotiator)->firstToken();
}

$bytes* NegotiateAuthentication::nextToken($bytes* token) {
	return $nc(this->negotiator)->nextToken(token);
}

void clinit$NegotiateAuthentication($Class* class$) {
	NegotiateAuthentication::$assertionsDisabled = !NegotiateAuthentication::class$->desiredAssertionStatus();
	$assignStatic(NegotiateAuthentication::supported, nullptr);
	$assignStatic(NegotiateAuthentication::cache, nullptr);
	$assignStatic(NegotiateAuthentication::negotiateLock, $new($ReentrantLock));
	{
		$var($String, spnegoCacheProp, $GetPropertyAction::privilegedGetProperty("jdk.spnego.cache"_s, "true"_s));
		NegotiateAuthentication::cacheSPNEGO = $Boolean::parseBoolean(spnegoCacheProp);
	}
}

NegotiateAuthentication::NegotiateAuthentication() {
}

$Class* NegotiateAuthentication::load$($String* name, bool initialize) {
	$loadClass(NegotiateAuthentication, name, initialize, &_NegotiateAuthentication_ClassInfo_, clinit$NegotiateAuthentication, allocate$NegotiateAuthentication);
	return class$;
}

$Class* NegotiateAuthentication::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun