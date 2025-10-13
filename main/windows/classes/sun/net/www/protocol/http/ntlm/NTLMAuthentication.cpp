#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/PasswordAuthentication.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Objects.h>
#include <java/util/Properties.h>
#include <sun/net/www/HeaderParser.h>
#include <sun/net/www/protocol/http/AuthScheme.h>
#include <sun/net/www/protocol/http/AuthenticationInfo.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthSequence.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$1.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$2.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$3.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthenticationCallback.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef ALL_HOSTS
#undef DISABLED
#undef NTLM
#undef PROXY_AUTHENTICATION
#undef SERVER_AUTHENTICATION
#undef TRUSTED_HOSTS

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Objects = ::java::util::Objects;
using $Properties = ::java::util::Properties;
using $HeaderParser = ::sun::net::www::HeaderParser;
using $AuthScheme = ::sun::net::www::protocol::http::AuthScheme;
using $AuthenticationInfo = ::sun::net::www::protocol::http::AuthenticationInfo;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;
using $NTLMAuthSequence = ::sun::net::www::protocol::http::ntlm::NTLMAuthSequence;
using $NTLMAuthentication$1 = ::sun::net::www::protocol::http::ntlm::NTLMAuthentication$1;
using $NTLMAuthentication$2 = ::sun::net::www::protocol::http::ntlm::NTLMAuthentication$2;
using $NTLMAuthentication$3 = ::sun::net::www::protocol::http::ntlm::NTLMAuthentication$3;
using $NTLMAuthentication$TransparentAuth = ::sun::net::www::protocol::http::ntlm::NTLMAuthentication$TransparentAuth;
using $NTLMAuthenticationCallback = ::sun::net::www::protocol::http::ntlm::NTLMAuthenticationCallback;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

$FieldInfo _NTLMAuthentication_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NTLMAuthentication, $assertionsDisabled)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NTLMAuthentication, serialVersionUID)},
	{"NTLMAuthCallback", "Lsun/net/www/protocol/http/ntlm/NTLMAuthenticationCallback;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMAuthentication, NTLMAuthCallback)},
	{"hostname", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NTLMAuthentication, hostname)},
	{"defaultDomain", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMAuthentication, defaultDomain)},
	{"ntlmCache", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMAuthentication, ntlmCache)},
	{"authMode", "Lsun/net/www/protocol/http/ntlm/NTLMAuthentication$TransparentAuth;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMAuthentication, authMode)},
	{"username", "Ljava/lang/String;", nullptr, 0, $field(NTLMAuthentication, username)},
	{"ntdomain", "Ljava/lang/String;", nullptr, 0, $field(NTLMAuthentication, ntdomain)},
	{"password", "Ljava/lang/String;", nullptr, 0, $field(NTLMAuthentication, password)},
	{"isTrustedSiteAvailable", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMAuthentication, isTrustedSiteAvailable$)},
	{}
};

$MethodInfo _NTLMAuthentication_MethodInfo_[] = {
	{"<init>", "(ZLjava/net/URL;Ljava/net/PasswordAuthentication;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NTLMAuthentication::*)(bool,$URL*,$PasswordAuthentication*,$String*)>(&NTLMAuthentication::init$))},
	{"<init>", "(ZLjava/lang/String;ILjava/net/PasswordAuthentication;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NTLMAuthentication::*)(bool,$String*,int32_t,$PasswordAuthentication*,$String*)>(&NTLMAuthentication::init$))},
	{"getHeaderValue", "(Ljava/net/URL;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"init", "(Ljava/net/PasswordAuthentication;)V", nullptr, $PRIVATE, $method(static_cast<void(NTLMAuthentication::*)($PasswordAuthentication*)>(&NTLMAuthentication::init))},
	{"init0", "()V", nullptr, $PRIVATE, $method(static_cast<void(NTLMAuthentication::*)()>(&NTLMAuthentication::init0))},
	{"isAuthorizationStale", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isTrustedSite", "(Ljava/net/URL;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($URL*)>(&NTLMAuthentication::isTrustedSite))},
	{"isTrustedSite", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&NTLMAuthentication::isTrustedSite))},
	{"isTrustedSite0", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)($String*)>(&NTLMAuthentication::isTrustedSite0))},
	{"isTrustedSiteAvailable", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&NTLMAuthentication::isTrustedSiteAvailable))},
	{"setHeaders", "(Lsun/net/www/protocol/http/HttpURLConnection;Lsun/net/www/HeaderParser;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"supportsPreemptiveAuthorization", "()Z", nullptr, $PUBLIC},
	{"supportsTransparentAuth", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&NTLMAuthentication::supportsTransparentAuth))},
	{"useAuthCache", "()Z", nullptr, $PROTECTED},
	{}
};

#define _METHOD_INDEX_isTrustedSite0 8
#define _METHOD_INDEX_isTrustedSiteAvailable 9

$InnerClassInfo _NTLMAuthentication_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.ntlm.NTLMAuthentication$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.net.www.protocol.http.ntlm.NTLMAuthentication$TransparentAuth", "sun.net.www.protocol.http.ntlm.NTLMAuthentication", "TransparentAuth", $STATIC | $FINAL | $ENUM},
	{"sun.net.www.protocol.http.ntlm.NTLMAuthentication$2", nullptr, nullptr, 0},
	{"sun.net.www.protocol.http.ntlm.NTLMAuthentication$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NTLMAuthentication_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication",
	"sun.net.www.protocol.http.AuthenticationInfo",
	nullptr,
	_NTLMAuthentication_FieldInfo_,
	_NTLMAuthentication_MethodInfo_,
	nullptr,
	nullptr,
	_NTLMAuthentication_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication$3,sun.net.www.protocol.http.ntlm.NTLMAuthentication$TransparentAuth,sun.net.www.protocol.http.ntlm.NTLMAuthentication$2,sun.net.www.protocol.http.ntlm.NTLMAuthentication$1"
};

$Object* allocate$NTLMAuthentication($Class* clazz) {
	return $of($alloc(NTLMAuthentication));
}

bool NTLMAuthentication::$assertionsDisabled = false;
$NTLMAuthenticationCallback* NTLMAuthentication::NTLMAuthCallback = nullptr;
$String* NTLMAuthentication::defaultDomain = nullptr;
bool NTLMAuthentication::ntlmCache = false;
$NTLMAuthentication$TransparentAuth* NTLMAuthentication::authMode = nullptr;
bool NTLMAuthentication::isTrustedSiteAvailable$ = false;

void NTLMAuthentication::init0() {
	$beforeCallerSensitive();
	$set(this, hostname, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($NTLMAuthentication$2, this)))));
	int32_t x = $nc(this->hostname)->indexOf((int32_t)u'.');
	if (x != -1) {
		$set(this, hostname, $nc(this->hostname)->substring(0, x));
	}
}

void NTLMAuthentication::init$(bool isProxy, $URL* url, $PasswordAuthentication* pw, $String* authenticatorKey) {
	$init($AuthScheme);
	$AuthenticationInfo::init$(isProxy ? $AuthenticationInfo::PROXY_AUTHENTICATION : $AuthenticationInfo::SERVER_AUTHENTICATION, $AuthScheme::NTLM, url, ""_s, $cast($String, $Objects::requireNonNull(authenticatorKey)));
	init(pw);
}

void NTLMAuthentication::init($PasswordAuthentication* pw) {
	$set(this, pw, pw);
	if (pw != nullptr) {
		$var($String, s, pw->getUserName());
		int32_t i = $nc(s)->indexOf((int32_t)u'\\');
		if (i == -1) {
			$set(this, username, s);
			$set(this, ntdomain, NTLMAuthentication::defaultDomain);
		} else {
			$set(this, ntdomain, $(s->substring(0, i))->toUpperCase());
			$set(this, username, s->substring(i + 1));
		}
		$set(this, password, $new($String, $(pw->getPassword())));
	} else {
		$set(this, username, nullptr);
		$set(this, ntdomain, nullptr);
		$set(this, password, nullptr);
	}
	init0();
}

void NTLMAuthentication::init$(bool isProxy, $String* host, int32_t port, $PasswordAuthentication* pw, $String* authenticatorKey) {
	$init($AuthScheme);
	$AuthenticationInfo::init$(isProxy ? $AuthenticationInfo::PROXY_AUTHENTICATION : $AuthenticationInfo::SERVER_AUTHENTICATION, $AuthScheme::NTLM, host, port, ""_s, $cast($String, $Objects::requireNonNull(authenticatorKey)));
	init(pw);
}

bool NTLMAuthentication::useAuthCache() {
	return NTLMAuthentication::ntlmCache && $AuthenticationInfo::useAuthCache();
}

bool NTLMAuthentication::supportsPreemptiveAuthorization() {
	return false;
}

bool NTLMAuthentication::supportsTransparentAuth() {
	$init(NTLMAuthentication);
	return true;
}

bool NTLMAuthentication::isTrustedSite($URL* url) {
	$init(NTLMAuthentication);
	if (NTLMAuthentication::NTLMAuthCallback != nullptr) {
		return $nc(NTLMAuthentication::NTLMAuthCallback)->isTrustedSite(url);
	}
	$init($NTLMAuthentication$3);
	switch ($nc($NTLMAuthentication$3::$SwitchMap$sun$net$www$protocol$http$ntlm$NTLMAuthentication$TransparentAuth)->get((NTLMAuthentication::authMode)->ordinal())) {
	case 1:
		{
			return isTrustedSite($($nc(url)->toString()));
		}
	case 2:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

bool NTLMAuthentication::isTrustedSiteAvailable() {
	$init(NTLMAuthentication);
	bool $ret = false;
	$prepareNativeStatic(NTLMAuthentication, isTrustedSiteAvailable, bool);
	$ret = $invokeNativeStatic(NTLMAuthentication, isTrustedSiteAvailable);
	$finishNativeStatic();
	return $ret;
}

bool NTLMAuthentication::isTrustedSite($String* url) {
	$init(NTLMAuthentication);
	if (NTLMAuthentication::isTrustedSiteAvailable$) {
		return isTrustedSite0(url);
	}
	return false;
}

bool NTLMAuthentication::isTrustedSite0($String* url) {
	$init(NTLMAuthentication);
	bool $ret = false;
	$prepareNativeStatic(NTLMAuthentication, isTrustedSite0, bool, $String* url);
	$ret = $invokeNativeStatic(NTLMAuthentication, isTrustedSite0, url);
	$finishNativeStatic();
	return $ret;
}

$String* NTLMAuthentication::getHeaderValue($URL* url, $String* method) {
	$throwNew($RuntimeException, "getHeaderValue not supported"_s);
	$shouldNotReachHere();
}

bool NTLMAuthentication::isAuthorizationStale($String* header) {
	return false;
}

bool NTLMAuthentication::setHeaders($HttpURLConnection* conn, $HeaderParser* p, $String* raw) {
	if (!NTLMAuthentication::$assertionsDisabled && !$nc(conn)->isLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	try {
		$var($NTLMAuthSequence, seq, $cast($NTLMAuthSequence, $nc(conn)->authObj()));
		if (seq == nullptr) {
			$assign(seq, $new($NTLMAuthSequence, this->username, this->password, this->ntdomain));
			conn->authObj(seq);
		}
		$var($String, response, $str({"NTLM "_s, $($nc(seq)->getAuthHeader($nc(raw)->length() > 6 ? $($nc(raw)->substring(5)) : ($String*)nullptr))}));
		conn->setAuthenticationProperty($(getHeaderName()), response);
		if (seq->isComplete()) {
			conn->authObj(nullptr);
		}
		return true;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$nc(conn)->authObj(nullptr);
		return false;
	}
	$shouldNotReachHere();
}

void clinit$NTLMAuthentication($Class* class$) {
	$beforeCallerSensitive();
	NTLMAuthentication::$assertionsDisabled = !NTLMAuthentication::class$->desiredAssertionStatus();
	$assignStatic(NTLMAuthentication::NTLMAuthCallback, $NTLMAuthenticationCallback::getNTLMAuthenticationCallback());
	{
		$var($Properties, props, $GetPropertyAction::privilegedGetProperties());
		$assignStatic(NTLMAuthentication::defaultDomain, $nc(props)->getProperty("http.auth.ntlm.domain"_s, "domain"_s));
		$var($String, ntlmCacheProp, props->getProperty("jdk.ntlm.cache"_s, "true"_s));
		NTLMAuthentication::ntlmCache = $Boolean::parseBoolean(ntlmCacheProp);
		$var($String, modeProp, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($NTLMAuthentication$1)))));
		if ("trustedHosts"_s->equalsIgnoreCase(modeProp)) {
			$init($NTLMAuthentication$TransparentAuth);
			$assignStatic(NTLMAuthentication::authMode, $NTLMAuthentication$TransparentAuth::TRUSTED_HOSTS);
		} else if ("allHosts"_s->equalsIgnoreCase(modeProp)) {
			$init($NTLMAuthentication$TransparentAuth);
			$assignStatic(NTLMAuthentication::authMode, $NTLMAuthentication$TransparentAuth::ALL_HOSTS);
		} else {
			$init($NTLMAuthentication$TransparentAuth);
			$assignStatic(NTLMAuthentication::authMode, $NTLMAuthentication$TransparentAuth::DISABLED);
		}
	}
	NTLMAuthentication::isTrustedSiteAvailable$ = NTLMAuthentication::isTrustedSiteAvailable();
}

NTLMAuthentication::NTLMAuthentication() {
}

$Class* NTLMAuthentication::load$($String* name, bool initialize) {
	$loadClass(NTLMAuthentication, name, initialize, &_NTLMAuthentication_ClassInfo_, clinit$NTLMAuthentication, allocate$NTLMAuthentication);
	return class$;
}

$Class* NTLMAuthentication::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun