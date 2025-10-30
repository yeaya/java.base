#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication.h>

#include <com/sun/security/ntlm/Client.h>
#include <com/sun/security/ntlm/NTLMException.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/net/PasswordAuthentication.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/Objects.h>
#include <java/util/Properties.h>
#include <java/util/Random.h>
#include <sun/net/www/HeaderParser.h>
#include <sun/net/www/protocol/http/AuthScheme.h>
#include <sun/net/www/protocol/http/AuthenticationInfo.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthentication$1.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthenticationCallback.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef NTLM
#undef PROXY_AUTHENTICATION
#undef SERVER_AUTHENTICATION

using $Client = ::com::sun::security::ntlm::Client;
using $NTLMException = ::com::sun::security::ntlm::NTLMException;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PasswordAuthentication = ::java::net::PasswordAuthentication;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Base64 = ::java::util::Base64;
using $Base64$Decoder = ::java::util::Base64$Decoder;
using $Base64$Encoder = ::java::util::Base64$Encoder;
using $Objects = ::java::util::Objects;
using $Properties = ::java::util::Properties;
using $Random = ::java::util::Random;
using $HeaderParser = ::sun::net::www::HeaderParser;
using $AuthScheme = ::sun::net::www::protocol::http::AuthScheme;
using $AuthenticationInfo = ::sun::net::www::protocol::http::AuthenticationInfo;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;
using $NTLMAuthentication$1 = ::sun::net::www::protocol::http::ntlm::NTLMAuthentication$1;
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
	{"pw", "Ljava/net/PasswordAuthentication;", nullptr, 0, $field(NTLMAuthentication, pw)},
	{"client", "Lcom/sun/security/ntlm/Client;", nullptr, 0, $field(NTLMAuthentication, client)},
	{}
};

$MethodInfo _NTLMAuthentication_MethodInfo_[] = {
	{"<init>", "(ZLjava/net/URL;Ljava/net/PasswordAuthentication;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NTLMAuthentication::*)(bool,$URL*,$PasswordAuthentication*,$String*)>(&NTLMAuthentication::init$))},
	{"<init>", "(ZLjava/lang/String;ILjava/net/PasswordAuthentication;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NTLMAuthentication::*)(bool,$String*,int32_t,$PasswordAuthentication*,$String*)>(&NTLMAuthentication::init$))},
	{"buildType1Msg", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(NTLMAuthentication::*)()>(&NTLMAuthentication::buildType1Msg))},
	{"buildType3Msg", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(NTLMAuthentication::*)($String*)>(&NTLMAuthentication::buildType3Msg)), "java.security.GeneralSecurityException,java.io.IOException"},
	{"getHeaderValue", "(Ljava/net/URL;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"init", "(Ljava/net/PasswordAuthentication;)V", nullptr, $PRIVATE, $method(static_cast<void(NTLMAuthentication::*)($PasswordAuthentication*)>(&NTLMAuthentication::init))},
	{"init0", "()V", nullptr, $PRIVATE, $method(static_cast<void(NTLMAuthentication::*)()>(&NTLMAuthentication::init0))},
	{"isAuthorizationStale", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"isTrustedSite", "(Ljava/net/URL;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($URL*)>(&NTLMAuthentication::isTrustedSite))},
	{"setHeaders", "(Lsun/net/www/protocol/http/HttpURLConnection;Lsun/net/www/HeaderParser;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"supportsPreemptiveAuthorization", "()Z", nullptr, $PUBLIC},
	{"supportsTransparentAuth", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&NTLMAuthentication::supportsTransparentAuth))},
	{"useAuthCache", "()Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _NTLMAuthentication_InnerClassesInfo_[] = {
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
	"sun.net.www.protocol.http.ntlm.NTLMAuthentication$1"
};

$Object* allocate$NTLMAuthentication($Class* clazz) {
	return $of($alloc(NTLMAuthentication));
}

bool NTLMAuthentication::$assertionsDisabled = false;
$NTLMAuthenticationCallback* NTLMAuthentication::NTLMAuthCallback = nullptr;
$String* NTLMAuthentication::defaultDomain = nullptr;
bool NTLMAuthentication::ntlmCache = false;

bool NTLMAuthentication::supportsTransparentAuth() {
	$init(NTLMAuthentication);
	return false;
}

bool NTLMAuthentication::isTrustedSite($URL* url) {
	$init(NTLMAuthentication);
	if (NTLMAuthentication::NTLMAuthCallback != nullptr) {
		return $nc(NTLMAuthentication::NTLMAuthCallback)->isTrustedSite(url);
	}
	return false;
}

void NTLMAuthentication::init0() {
	$beforeCallerSensitive();
	$set(this, hostname, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($NTLMAuthentication$1, this)))));
}

void NTLMAuthentication::init$(bool isProxy, $URL* url, $PasswordAuthentication* pw, $String* authenticatorKey) {
	$init($AuthScheme);
	$AuthenticationInfo::init$(isProxy ? $AuthenticationInfo::PROXY_AUTHENTICATION : $AuthenticationInfo::SERVER_AUTHENTICATION, $AuthScheme::NTLM, url, ""_s, $cast($String, $Objects::requireNonNull(authenticatorKey)));
	init(pw);
}

void NTLMAuthentication::init($PasswordAuthentication* pw) {
	$useLocalCurrentObjectStackCache();
	$var($String, username, nullptr);
	$var($String, ntdomain, nullptr);
	$var($chars, password, nullptr);
	$set(this, pw, pw);
	$var($String, s, $nc(pw)->getUserName());
	int32_t i = $nc(s)->indexOf((int32_t)u'\\');
	if (i == -1) {
		$assign(username, s);
		$assign(ntdomain, NTLMAuthentication::defaultDomain);
	} else {
		$assign(ntdomain, $(s->substring(0, i))->toUpperCase());
		$assign(username, s->substring(i + 1));
	}
	$assign(password, pw->getPassword());
	init0();
	try {
		$var($String, version, $GetPropertyAction::privilegedGetProperty("ntlm.version"_s));
		$set(this, client, $new($Client, version, this->hostname, username, ntdomain, password));
	} catch ($NTLMException& ne) {
		try {
			$set(this, client, $new($Client, nullptr, this->hostname, username, ntdomain, password));
		} catch ($NTLMException& ne2) {
			$throwNew($AssertionError, $of("Really?"_s));
		}
	}
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

$String* NTLMAuthentication::getHeaderValue($URL* url, $String* method) {
	$throwNew($RuntimeException, "getHeaderValue not supported"_s);
	$shouldNotReachHere();
}

bool NTLMAuthentication::isAuthorizationStale($String* header) {
	return false;
}

bool NTLMAuthentication::setHeaders($HttpURLConnection* conn, $HeaderParser* p, $String* raw) {
	$useLocalCurrentObjectStackCache();
	if (!NTLMAuthentication::$assertionsDisabled && !$nc(conn)->isLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	try {
		$var($String, response, nullptr);
		if ($nc(raw)->length() < 6) {
			$assign(response, buildType1Msg());
		} else {
			$var($String, msg, raw->substring(5));
			$assign(response, buildType3Msg(msg));
		}
		$nc(conn)->setAuthenticationProperty($(getHeaderName()), response);
		return true;
	} catch ($IOException& e) {
		return false;
	} catch ($GeneralSecurityException& e) {
		return false;
	}
	$shouldNotReachHere();
}

$String* NTLMAuthentication::buildType1Msg() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, msg, $nc(this->client)->type1());
	$var($String, result, $str({"NTLM "_s, $($nc($($Base64::getEncoder()))->encodeToString(msg))}));
	return result;
}

$String* NTLMAuthentication::buildType3Msg($String* challenge) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, type2, $nc($($Base64::getDecoder()))->decode(challenge));
	$var($bytes, nonce, $new($bytes, 8));
	$$new($Random)->nextBytes(nonce);
	$var($bytes, msg, $nc(this->client)->type3(type2, nonce));
	$var($String, result, $str({"NTLM "_s, $($nc($($Base64::getEncoder()))->encodeToString(msg))}));
	return result;
}

void clinit$NTLMAuthentication($Class* class$) {
	$useLocalCurrentObjectStackCache();
	NTLMAuthentication::$assertionsDisabled = !NTLMAuthentication::class$->desiredAssertionStatus();
	$assignStatic(NTLMAuthentication::NTLMAuthCallback, $NTLMAuthenticationCallback::getNTLMAuthenticationCallback());
	{
		$var($Properties, props, $GetPropertyAction::privilegedGetProperties());
		$assignStatic(NTLMAuthentication::defaultDomain, $nc(props)->getProperty("http.auth.ntlm.domain"_s, ""_s));
		$var($String, ntlmCacheProp, props->getProperty("jdk.ntlm.cache"_s, "true"_s));
		NTLMAuthentication::ntlmCache = $Boolean::parseBoolean(ntlmCacheProp);
	}
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