#include <sun/net/www/protocol/https/AbstractDelegateHttpsURLConnection.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/CacheResponse.h>
#include <java/net/Proxy.h>
#include <java/net/SecureCacheResponse.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/security/Principal.h>
#include <java/security/cert/Certificate.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <javax/net/ssl/HostnameVerifier.h>
#include <javax/net/ssl/SSLSession.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <sun/net/www/http/HttpClient.h>
#include <sun/net/www/protocol/http/Handler.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <sun/net/www/protocol/https/HttpsClient.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $CacheResponse = ::java::net::CacheResponse;
using $Proxy = ::java::net::Proxy;
using $SecureCacheResponse = ::java::net::SecureCacheResponse;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Principal = ::java::security::Principal;
using $Certificate = ::java::security::cert::Certificate;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $HostnameVerifier = ::javax::net::ssl::HostnameVerifier;
using $SSLSession = ::javax::net::ssl::SSLSession;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;
using $NetworkClient = ::sun::net::NetworkClient;
using $HttpClient = ::sun::net::www::http::HttpClient;
using $Handler = ::sun::net::www::protocol::http::Handler;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;
using $HttpsClient = ::sun::net::www::protocol::https::HttpsClient;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace https {

$MethodInfo _AbstractDelegateHttpsURLConnection_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;Lsun/net/www/protocol/http/Handler;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractDelegateHttpsURLConnection::*)($URL*,$Handler*)>(&AbstractDelegateHttpsURLConnection::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/net/URL;Ljava/net/Proxy;Lsun/net/www/protocol/http/Handler;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractDelegateHttpsURLConnection::*)($URL*,$Proxy*,$Handler*)>(&AbstractDelegateHttpsURLConnection::init$)), "java.io.IOException"},
	{"connect", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getCipherSuite", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getHostnameVerifier", "()Ljavax/net/ssl/HostnameVerifier;", nullptr, $PROTECTED | $ABSTRACT},
	{"getLocalCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC},
	{"getLocalPrincipal", "()Ljava/security/Principal;", nullptr, 0},
	{"getNewHttpClient", "(Ljava/net/URL;Ljava/net/Proxy;I)Lsun/net/www/http/HttpClient;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"getNewHttpClient", "(Ljava/net/URL;Ljava/net/Proxy;IZ)Lsun/net/www/http/HttpClient;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"getPeerPrincipal", "()Ljava/security/Principal;", nullptr, 0, nullptr, "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getSSLSession", "()Ljavax/net/ssl/SSLSession;", nullptr, 0},
	{"getSSLSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PROTECTED | $ABSTRACT},
	{"getServerCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, nullptr, "javax.net.ssl.SSLPeerUnverifiedException"},
	{"isConnected", "()Z", nullptr, $PUBLIC},
	{"proxiedConnect", "(Ljava/net/URL;Ljava/lang/String;IZ)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"setConnected", "(Z)V", nullptr, $PUBLIC},
	{"setNewClient", "(Ljava/net/URL;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setNewClient", "(Ljava/net/URL;Z)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setProxiedClient", "(Ljava/net/URL;Ljava/lang/String;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setProxiedClient", "(Ljava/net/URL;Ljava/lang/String;IZ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _AbstractDelegateHttpsURLConnection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.www.protocol.https.AbstractDelegateHttpsURLConnection",
	"sun.net.www.protocol.http.HttpURLConnection",
	nullptr,
	nullptr,
	_AbstractDelegateHttpsURLConnection_MethodInfo_
};

$Object* allocate$AbstractDelegateHttpsURLConnection($Class* clazz) {
	return $of($alloc(AbstractDelegateHttpsURLConnection));
}

void AbstractDelegateHttpsURLConnection::init$($URL* url, $Handler* handler) {
	AbstractDelegateHttpsURLConnection::init$(url, nullptr, handler);
}

void AbstractDelegateHttpsURLConnection::init$($URL* url, $Proxy* p, $Handler* handler) {
	$HttpURLConnection::init$(url, p, handler);
}

void AbstractDelegateHttpsURLConnection::setNewClient($URL* url) {
	setNewClient(url, false);
}

void AbstractDelegateHttpsURLConnection::setNewClient($URL* url, bool useCache) {
	$useLocalCurrentObjectStackCache();
	int32_t readTimeout = getReadTimeout();
	$var($SSLSocketFactory, var$0, getSSLSocketFactory());
	$var($URL, var$1, url);
	$var($HostnameVerifier, var$2, getHostnameVerifier());
	bool var$3 = useCache;
	$set(this, http, $HttpsClient::New(var$0, var$1, var$2, nullptr, -1, var$3, getConnectTimeout(), this));
	$nc(this->http)->setReadTimeout(readTimeout);
	$nc(($cast($HttpsClient, this->http)))->afterConnect();
}

void AbstractDelegateHttpsURLConnection::setProxiedClient($URL* url, $String* proxyHost, int32_t proxyPort) {
	setProxiedClient(url, proxyHost, proxyPort, false);
}

void AbstractDelegateHttpsURLConnection::setProxiedClient($URL* url, $String* proxyHost, int32_t proxyPort, bool useCache) {
	proxiedConnect(url, proxyHost, proxyPort, useCache);
	if (!$nc(this->http)->isCachedConnection()) {
		doTunneling();
	}
	$nc(($cast($HttpsClient, this->http)))->afterConnect();
}

void AbstractDelegateHttpsURLConnection::proxiedConnect($URL* url, $String* proxyHost, int32_t proxyPort, bool useCache) {
	$useLocalCurrentObjectStackCache();
	if (this->connected) {
		return;
	}
	int32_t readTimeout = getReadTimeout();
	$var($SSLSocketFactory, var$0, getSSLSocketFactory());
	$var($URL, var$1, url);
	$var($HostnameVerifier, var$2, getHostnameVerifier());
	$var($String, var$3, proxyHost);
	int32_t var$4 = proxyPort;
	bool var$5 = useCache;
	$set(this, http, $HttpsClient::New(var$0, var$1, var$2, var$3, var$4, var$5, getConnectTimeout(), this));
	$nc(this->http)->setReadTimeout(readTimeout);
	this->connected = true;
}

bool AbstractDelegateHttpsURLConnection::isConnected() {
	return this->connected;
}

void AbstractDelegateHttpsURLConnection::setConnected(bool conn) {
	this->connected = conn;
}

void AbstractDelegateHttpsURLConnection::connect() {
	if (this->connected) {
		return;
	}
	plainConnect();
	if (this->cachedResponse != nullptr) {
		return;
	}
	bool var$0 = !$nc(this->http)->isCachedConnection();
	if (var$0 && $nc(this->http)->needsTunneling()) {
		doTunneling();
	}
	$nc(($cast($HttpsClient, this->http)))->afterConnect();
}

$HttpClient* AbstractDelegateHttpsURLConnection::getNewHttpClient($URL* url, $Proxy* p, int32_t connectTimeout) {
	$useLocalCurrentObjectStackCache();
	$var($SSLSocketFactory, var$0, getSSLSocketFactory());
	$var($URL, var$1, url);
	return $HttpsClient::New(var$0, var$1, $(getHostnameVerifier()), p, true, connectTimeout, static_cast<$HttpURLConnection*>(this));
}

$HttpClient* AbstractDelegateHttpsURLConnection::getNewHttpClient($URL* url, $Proxy* p, int32_t connectTimeout, bool useCache) {
	$useLocalCurrentObjectStackCache();
	$var($SSLSocketFactory, var$0, getSSLSocketFactory());
	$var($URL, var$1, url);
	return $HttpsClient::New(var$0, var$1, $(getHostnameVerifier()), p, useCache, connectTimeout, static_cast<$HttpURLConnection*>(this));
}

$String* AbstractDelegateHttpsURLConnection::getCipherSuite() {
	if (this->cachedResponse != nullptr) {
		return $nc(($cast($SecureCacheResponse, this->cachedResponse)))->getCipherSuite();
	}
	if (this->http == nullptr) {
		$throwNew($IllegalStateException, "connection not yet open"_s);
	} else {
		return $nc(($cast($HttpsClient, this->http)))->getCipherSuite();
	}
}

$CertificateArray* AbstractDelegateHttpsURLConnection::getLocalCertificates() {
	$useLocalCurrentObjectStackCache();
	if (this->cachedResponse != nullptr) {
		$var($List, l, $nc(($cast($SecureCacheResponse, this->cachedResponse)))->getLocalCertificateChain());
		if (l == nullptr) {
			return nullptr;
		} else {
			return $fcast($CertificateArray, $nc(l)->toArray($$new($CertificateArray, 0)));
		}
	}
	if (this->http == nullptr) {
		$throwNew($IllegalStateException, "connection not yet open"_s);
	} else {
		return ($nc(($cast($HttpsClient, this->http)))->getLocalCertificates());
	}
}

$CertificateArray* AbstractDelegateHttpsURLConnection::getServerCertificates() {
	$useLocalCurrentObjectStackCache();
	if (this->cachedResponse != nullptr) {
		$var($List, l, $nc(($cast($SecureCacheResponse, this->cachedResponse)))->getServerCertificateChain());
		if (l == nullptr) {
			return nullptr;
		} else {
			return $fcast($CertificateArray, $nc(l)->toArray($$new($CertificateArray, 0)));
		}
	}
	if (this->http == nullptr) {
		$throwNew($IllegalStateException, "connection not yet open"_s);
	} else {
		return ($nc(($cast($HttpsClient, this->http)))->getServerCertificates());
	}
}

$Principal* AbstractDelegateHttpsURLConnection::getPeerPrincipal() {
	if (this->cachedResponse != nullptr) {
		return $nc(($cast($SecureCacheResponse, this->cachedResponse)))->getPeerPrincipal();
	}
	if (this->http == nullptr) {
		$throwNew($IllegalStateException, "connection not yet open"_s);
	} else {
		return ($nc(($cast($HttpsClient, this->http)))->getPeerPrincipal());
	}
}

$Principal* AbstractDelegateHttpsURLConnection::getLocalPrincipal() {
	if (this->cachedResponse != nullptr) {
		return $nc(($cast($SecureCacheResponse, this->cachedResponse)))->getLocalPrincipal();
	}
	if (this->http == nullptr) {
		$throwNew($IllegalStateException, "connection not yet open"_s);
	} else {
		return ($nc(($cast($HttpsClient, this->http)))->getLocalPrincipal());
	}
}

$SSLSession* AbstractDelegateHttpsURLConnection::getSSLSession() {
	if (this->cachedResponse != nullptr) {
		$var($Optional, option, $nc(($cast($SecureCacheResponse, this->cachedResponse)))->getSSLSession());
		if ($nc(option)->isPresent()) {
			return $cast($SSLSession, option->orElseThrow());
		}
	}
	if (this->http == nullptr) {
		$throwNew($IllegalStateException, "connection not yet open"_s);
	}
	return $nc(($cast($HttpsClient, this->http)))->getSSLSession();
}

AbstractDelegateHttpsURLConnection::AbstractDelegateHttpsURLConnection() {
}

$Class* AbstractDelegateHttpsURLConnection::load$($String* name, bool initialize) {
	$loadClass(AbstractDelegateHttpsURLConnection, name, initialize, &_AbstractDelegateHttpsURLConnection_ClassInfo_, allocate$AbstractDelegateHttpsURLConnection);
	return class$;
}

$Class* AbstractDelegateHttpsURLConnection::class$ = nullptr;

				} // https
			} // protocol
		} // www
	} // net
} // sun