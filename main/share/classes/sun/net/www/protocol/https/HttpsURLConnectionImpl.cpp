#include <sun/net/www/protocol/https/HttpsURLConnectionImpl.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/net/Authenticator.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/MalformedURLException.h>
#include <java/net/Proxy.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/security/Permission.h>
#include <java/security/Principal.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <javax/net/ssl/HttpsURLConnection.h>
#include <javax/net/ssl/SSLSession.h>
#include <sun/net/util/IPAddressUtil.h>
#include <sun/net/www/protocol/http/Handler.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <sun/net/www/protocol/https/DelegateHttpsURLConnection.h>
#include <sun/net/www/protocol/https/Handler.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Authenticator = ::java::net::Authenticator;
using $MalformedURLException = ::java::net::MalformedURLException;
using $Proxy = ::java::net::Proxy;
using $URL = ::java::net::URL;
using $Permission = ::java::security::Permission;
using $Principal = ::java::security::Principal;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $HttpsURLConnection = ::javax::net::ssl::HttpsURLConnection;
using $IPAddressUtil = ::sun::net::util::IPAddressUtil;
using $1Handler = ::sun::net::www::protocol::http::Handler;
using $DelegateHttpsURLConnection = ::sun::net::www::protocol::https::DelegateHttpsURLConnection;
using $Handler = ::sun::net::www::protocol::https::Handler;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace https {

$FieldInfo _HttpsURLConnectionImpl_FieldInfo_[] = {
	{"delegate", "Lsun/net/www/protocol/https/DelegateHttpsURLConnection;", nullptr, $PRIVATE | $FINAL, $field(HttpsURLConnectionImpl, delegate)},
	{}
};

$MethodInfo _HttpsURLConnectionImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;Lsun/net/www/protocol/https/Handler;)V", nullptr, 0, $method(HttpsURLConnectionImpl, init$, void, $URL*, $Handler*), "java.io.IOException"},
	{"<init>", "(Ljava/net/URL;Ljava/net/Proxy;Lsun/net/www/protocol/https/Handler;)V", nullptr, 0, $method(HttpsURLConnectionImpl, init$, void, $URL*, $Proxy*, $Handler*), "java.io.IOException"},
	{"addRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, addRequestProperty, void, $String*, $String*)},
	{"checkURL", "(Ljava/net/URL;)Ljava/net/URL;", nullptr, $STATIC, $staticMethod(HttpsURLConnectionImpl, checkURL, $URL*, $URL*), "java.io.IOException"},
	{"connect", "()V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, connect, void), "java.io.IOException"},
	{"disconnect", "()V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, disconnect, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, equals, bool, Object$*)},
	{"getAllowUserInteraction", "()Z", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getAllowUserInteraction, bool)},
	{"getCipherSuite", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getCipherSuite, $String*)},
	{"getConnectTimeout", "()I", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getConnectTimeout, int32_t)},
	{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getContent, $Object*), "java.io.IOException"},
	{"getContent", "([Ljava/lang/Class;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getContent, $Object*, $ClassArray*), "java.io.IOException"},
	{"getContentEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getContentEncoding, $String*)},
	{"getContentLength", "()I", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getContentLength, int32_t)},
	{"getContentLengthLong", "()J", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getContentLengthLong, int64_t)},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getContentType, $String*)},
	{"getDate", "()J", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getDate, int64_t)},
	{"getDefaultUseCaches", "()Z", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getDefaultUseCaches, bool)},
	{"getDoInput", "()Z", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getDoInput, bool)},
	{"getDoOutput", "()Z", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getDoOutput, bool)},
	{"getErrorStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getErrorStream, $InputStream*)},
	{"getExpiration", "()J", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getExpiration, int64_t)},
	{"getHeaderField", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getHeaderField, $String*, $String*)},
	{"getHeaderField", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getHeaderField, $String*, int32_t)},
	{"getHeaderFieldDate", "(Ljava/lang/String;J)J", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getHeaderFieldDate, int64_t, $String*, int64_t)},
	{"getHeaderFieldInt", "(Ljava/lang/String;I)I", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getHeaderFieldInt, int32_t, $String*, int32_t)},
	{"getHeaderFieldKey", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getHeaderFieldKey, $String*, int32_t)},
	{"getHeaderFieldLong", "(Ljava/lang/String;J)J", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getHeaderFieldLong, int64_t, $String*, int64_t)},
	{"getHeaderFields", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getHeaderFields, $Map*)},
	{"getIfModifiedSince", "()J", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getIfModifiedSince, int64_t)},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getInputStream, $InputStream*), "java.io.IOException"},
	{"getInstanceFollowRedirects", "()Z", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getInstanceFollowRedirects, bool)},
	{"getLastModified", "()J", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getLastModified, int64_t)},
	{"getLocalCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getLocalCertificates, $CertificateArray*)},
	{"getLocalPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getLocalPrincipal, $Principal*)},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getOutputStream, $OutputStream*), "java.io.IOException"},
	{"getPeerPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getPeerPrincipal, $Principal*), "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getPermission", "()Ljava/security/Permission;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getPermission, $Permission*), "java.io.IOException"},
	{"getReadTimeout", "()I", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getReadTimeout, int32_t)},
	{"getRequestMethod", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getRequestMethod, $String*)},
	{"getRequestProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getRequestProperties, $Map*)},
	{"getRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getRequestProperty, $String*, $String*)},
	{"getResponseCode", "()I", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getResponseCode, int32_t), "java.io.IOException"},
	{"getResponseMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getResponseMessage, $String*), "java.io.IOException"},
	{"getSSLSession", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljavax/net/ssl/SSLSession;>;", $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getSSLSession, $Optional*)},
	{"getServerCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getServerCertificates, $CertificateArray*), "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getURL, $URL*)},
	{"getUseCaches", "()Z", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, getUseCaches, bool)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, hashCode, int32_t)},
	{"isConnected", "()Z", nullptr, $PROTECTED, $virtualMethod(HttpsURLConnectionImpl, isConnected, bool)},
	{"setAllowUserInteraction", "(Z)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setAllowUserInteraction, void, bool)},
	{"setAuthenticator", "(Ljava/net/Authenticator;)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setAuthenticator, void, $Authenticator*)},
	{"setChunkedStreamingMode", "(I)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setChunkedStreamingMode, void, int32_t)},
	{"setConnectTimeout", "(I)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setConnectTimeout, void, int32_t)},
	{"setConnected", "(Z)V", nullptr, $PROTECTED, $virtualMethod(HttpsURLConnectionImpl, setConnected, void, bool)},
	{"setDefaultUseCaches", "(Z)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setDefaultUseCaches, void, bool)},
	{"setDoInput", "(Z)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setDoInput, void, bool)},
	{"setDoOutput", "(Z)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setDoOutput, void, bool)},
	{"setFixedLengthStreamingMode", "(I)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setFixedLengthStreamingMode, void, int32_t)},
	{"setFixedLengthStreamingMode", "(J)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setFixedLengthStreamingMode, void, int64_t)},
	{"setIfModifiedSince", "(J)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setIfModifiedSince, void, int64_t)},
	{"setInstanceFollowRedirects", "(Z)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setInstanceFollowRedirects, void, bool)},
	{"setNewClient", "(Ljava/net/URL;)V", nullptr, $PROTECTED, $virtualMethod(HttpsURLConnectionImpl, setNewClient, void, $URL*), "java.io.IOException"},
	{"setNewClient", "(Ljava/net/URL;Z)V", nullptr, $PROTECTED, $virtualMethod(HttpsURLConnectionImpl, setNewClient, void, $URL*, bool), "java.io.IOException"},
	{"setProxiedClient", "(Ljava/net/URL;Ljava/lang/String;I)V", nullptr, $PROTECTED, $virtualMethod(HttpsURLConnectionImpl, setProxiedClient, void, $URL*, $String*, int32_t), "java.io.IOException"},
	{"setProxiedClient", "(Ljava/net/URL;Ljava/lang/String;IZ)V", nullptr, $PROTECTED, $virtualMethod(HttpsURLConnectionImpl, setProxiedClient, void, $URL*, $String*, int32_t, bool), "java.io.IOException"},
	{"setReadTimeout", "(I)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setReadTimeout, void, int32_t)},
	{"setRequestMethod", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setRequestMethod, void, $String*), "java.net.ProtocolException"},
	{"setRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setRequestProperty, void, $String*, $String*)},
	{"setUseCaches", "(Z)V", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, setUseCaches, void, bool)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, toString, $String*)},
	{"usingProxy", "()Z", nullptr, $PUBLIC, $virtualMethod(HttpsURLConnectionImpl, usingProxy, bool)},
	{}
};

$ClassInfo _HttpsURLConnectionImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.https.HttpsURLConnectionImpl",
	"javax.net.ssl.HttpsURLConnection",
	nullptr,
	_HttpsURLConnectionImpl_FieldInfo_,
	_HttpsURLConnectionImpl_MethodInfo_
};

$Object* allocate$HttpsURLConnectionImpl($Class* clazz) {
	return $of($alloc(HttpsURLConnectionImpl));
}

void HttpsURLConnectionImpl::init$($URL* u, $Handler* handler) {
	HttpsURLConnectionImpl::init$(u, nullptr, handler);
}

$URL* HttpsURLConnectionImpl::checkURL($URL* u) {
	$init(HttpsURLConnectionImpl);
	$useLocalCurrentObjectStackCache();
	if (u != nullptr) {
		if ($nc($(u->toExternalForm()))->indexOf((int32_t)u'\n') > -1) {
			$throwNew($MalformedURLException, "Illegal character in URL"_s);
		}
	}
	$var($String, s, $IPAddressUtil::checkAuthority(u));
	if (s != nullptr) {
		$throwNew($MalformedURLException, s);
	}
	return u;
}

void HttpsURLConnectionImpl::init$($URL* u, $Proxy* p, $Handler* handler) {
	$HttpsURLConnection::init$($(checkURL(u)));
	$set(this, delegate, $new($DelegateHttpsURLConnection, this->url, p, handler, this));
}

void HttpsURLConnectionImpl::setNewClient($URL* url) {
	$nc(this->delegate)->setNewClient(url, false);
}

void HttpsURLConnectionImpl::setNewClient($URL* url, bool useCache) {
	$nc(this->delegate)->setNewClient(url, useCache);
}

void HttpsURLConnectionImpl::setProxiedClient($URL* url, $String* proxyHost, int32_t proxyPort) {
	$nc(this->delegate)->setProxiedClient(url, proxyHost, proxyPort);
}

void HttpsURLConnectionImpl::setProxiedClient($URL* url, $String* proxyHost, int32_t proxyPort, bool useCache) {
	$nc(this->delegate)->setProxiedClient(url, proxyHost, proxyPort, useCache);
}

void HttpsURLConnectionImpl::connect() {
	$nc(this->delegate)->connect();
}

bool HttpsURLConnectionImpl::isConnected() {
	return $nc(this->delegate)->isConnected();
}

void HttpsURLConnectionImpl::setConnected(bool conn) {
	$nc(this->delegate)->setConnected(conn);
}

$String* HttpsURLConnectionImpl::getCipherSuite() {
	return $nc(this->delegate)->getCipherSuite();
}

$CertificateArray* HttpsURLConnectionImpl::getLocalCertificates() {
	return $nc(this->delegate)->getLocalCertificates();
}

$CertificateArray* HttpsURLConnectionImpl::getServerCertificates() {
	return $nc(this->delegate)->getServerCertificates();
}

$Principal* HttpsURLConnectionImpl::getPeerPrincipal() {
	return $nc(this->delegate)->getPeerPrincipal();
}

$Principal* HttpsURLConnectionImpl::getLocalPrincipal() {
	return $nc(this->delegate)->getLocalPrincipal();
}

$OutputStream* HttpsURLConnectionImpl::getOutputStream() {
	return $nc(this->delegate)->getOutputStream();
}

$InputStream* HttpsURLConnectionImpl::getInputStream() {
	return $nc(this->delegate)->getInputStream();
}

$InputStream* HttpsURLConnectionImpl::getErrorStream() {
	return $nc(this->delegate)->getErrorStream();
}

void HttpsURLConnectionImpl::disconnect() {
	$nc(this->delegate)->disconnect();
}

bool HttpsURLConnectionImpl::usingProxy() {
	return $nc(this->delegate)->usingProxy();
}

$Map* HttpsURLConnectionImpl::getHeaderFields() {
	return $nc(this->delegate)->getHeaderFields();
}

$String* HttpsURLConnectionImpl::getHeaderField($String* name) {
	return $nc(this->delegate)->getHeaderField(name);
}

$String* HttpsURLConnectionImpl::getHeaderField(int32_t n) {
	return $nc(this->delegate)->getHeaderField(n);
}

$String* HttpsURLConnectionImpl::getHeaderFieldKey(int32_t n) {
	return $nc(this->delegate)->getHeaderFieldKey(n);
}

void HttpsURLConnectionImpl::setRequestProperty($String* key, $String* value) {
	$nc(this->delegate)->setRequestProperty(key, value);
}

void HttpsURLConnectionImpl::addRequestProperty($String* key, $String* value) {
	$nc(this->delegate)->addRequestProperty(key, value);
}

int32_t HttpsURLConnectionImpl::getResponseCode() {
	return $nc(this->delegate)->getResponseCode();
}

$String* HttpsURLConnectionImpl::getRequestProperty($String* key) {
	return $nc(this->delegate)->getRequestProperty(key);
}

$Map* HttpsURLConnectionImpl::getRequestProperties() {
	return $nc(this->delegate)->getRequestProperties();
}

void HttpsURLConnectionImpl::setInstanceFollowRedirects(bool shouldFollow) {
	$nc(this->delegate)->setInstanceFollowRedirects(shouldFollow);
}

bool HttpsURLConnectionImpl::getInstanceFollowRedirects() {
	return $nc(this->delegate)->getInstanceFollowRedirects();
}

void HttpsURLConnectionImpl::setRequestMethod($String* method) {
	$nc(this->delegate)->setRequestMethod(method);
}

$String* HttpsURLConnectionImpl::getRequestMethod() {
	return $nc(this->delegate)->getRequestMethod();
}

$String* HttpsURLConnectionImpl::getResponseMessage() {
	return $nc(this->delegate)->getResponseMessage();
}

int64_t HttpsURLConnectionImpl::getHeaderFieldDate($String* name, int64_t Default) {
	return $nc(this->delegate)->getHeaderFieldDate(name, Default);
}

$Permission* HttpsURLConnectionImpl::getPermission() {
	return $nc(this->delegate)->getPermission();
}

$URL* HttpsURLConnectionImpl::getURL() {
	return $nc(this->delegate)->getURL();
}

int32_t HttpsURLConnectionImpl::getContentLength() {
	return $nc(this->delegate)->getContentLength();
}

int64_t HttpsURLConnectionImpl::getContentLengthLong() {
	return $nc(this->delegate)->getContentLengthLong();
}

$String* HttpsURLConnectionImpl::getContentType() {
	return $nc(this->delegate)->getContentType();
}

$String* HttpsURLConnectionImpl::getContentEncoding() {
	return $nc(this->delegate)->getContentEncoding();
}

int64_t HttpsURLConnectionImpl::getExpiration() {
	return $nc(this->delegate)->getExpiration();
}

int64_t HttpsURLConnectionImpl::getDate() {
	return $nc(this->delegate)->getDate();
}

int64_t HttpsURLConnectionImpl::getLastModified() {
	return $nc(this->delegate)->getLastModified();
}

int32_t HttpsURLConnectionImpl::getHeaderFieldInt($String* name, int32_t Default) {
	return $nc(this->delegate)->getHeaderFieldInt(name, Default);
}

int64_t HttpsURLConnectionImpl::getHeaderFieldLong($String* name, int64_t Default) {
	return $nc(this->delegate)->getHeaderFieldLong(name, Default);
}

$Object* HttpsURLConnectionImpl::getContent() {
	return $of($nc(this->delegate)->getContent());
}

$Object* HttpsURLConnectionImpl::getContent($ClassArray* classes) {
	return $of($nc(this->delegate)->getContent(classes));
}

$String* HttpsURLConnectionImpl::toString() {
	return $nc(this->delegate)->toString();
}

void HttpsURLConnectionImpl::setDoInput(bool doinput) {
	$nc(this->delegate)->setDoInput(doinput);
}

bool HttpsURLConnectionImpl::getDoInput() {
	return $nc(this->delegate)->getDoInput();
}

void HttpsURLConnectionImpl::setDoOutput(bool dooutput) {
	$nc(this->delegate)->setDoOutput(dooutput);
}

bool HttpsURLConnectionImpl::getDoOutput() {
	return $nc(this->delegate)->getDoOutput();
}

void HttpsURLConnectionImpl::setAllowUserInteraction(bool allowuserinteraction) {
	$nc(this->delegate)->setAllowUserInteraction(allowuserinteraction);
}

bool HttpsURLConnectionImpl::getAllowUserInteraction() {
	return $nc(this->delegate)->getAllowUserInteraction();
}

void HttpsURLConnectionImpl::setUseCaches(bool usecaches) {
	$nc(this->delegate)->setUseCaches(usecaches);
}

bool HttpsURLConnectionImpl::getUseCaches() {
	return $nc(this->delegate)->getUseCaches();
}

void HttpsURLConnectionImpl::setIfModifiedSince(int64_t ifmodifiedsince) {
	$nc(this->delegate)->setIfModifiedSince(ifmodifiedsince);
}

int64_t HttpsURLConnectionImpl::getIfModifiedSince() {
	return $nc(this->delegate)->getIfModifiedSince();
}

bool HttpsURLConnectionImpl::getDefaultUseCaches() {
	return $nc(this->delegate)->getDefaultUseCaches();
}

void HttpsURLConnectionImpl::setDefaultUseCaches(bool defaultusecaches) {
	$nc(this->delegate)->setDefaultUseCaches(defaultusecaches);
}

bool HttpsURLConnectionImpl::equals(Object$* obj) {
	return $equals(this, obj) || (($instanceOf(HttpsURLConnectionImpl, obj)) && $nc($of(this->delegate))->equals($nc(($cast(HttpsURLConnectionImpl, obj)))->delegate));
}

int32_t HttpsURLConnectionImpl::hashCode() {
	return $nc($of(this->delegate))->hashCode();
}

void HttpsURLConnectionImpl::setConnectTimeout(int32_t timeout) {
	$nc(this->delegate)->setConnectTimeout(timeout);
}

int32_t HttpsURLConnectionImpl::getConnectTimeout() {
	return $nc(this->delegate)->getConnectTimeout();
}

void HttpsURLConnectionImpl::setReadTimeout(int32_t timeout) {
	$nc(this->delegate)->setReadTimeout(timeout);
}

int32_t HttpsURLConnectionImpl::getReadTimeout() {
	return $nc(this->delegate)->getReadTimeout();
}

void HttpsURLConnectionImpl::setFixedLengthStreamingMode(int32_t contentLength) {
	$nc(this->delegate)->setFixedLengthStreamingMode(contentLength);
}

void HttpsURLConnectionImpl::setFixedLengthStreamingMode(int64_t contentLength) {
	$nc(this->delegate)->setFixedLengthStreamingMode(contentLength);
}

void HttpsURLConnectionImpl::setChunkedStreamingMode(int32_t chunklen) {
	$nc(this->delegate)->setChunkedStreamingMode(chunklen);
}

void HttpsURLConnectionImpl::setAuthenticator($Authenticator* auth) {
	$nc(this->delegate)->setAuthenticator(auth);
}

$Optional* HttpsURLConnectionImpl::getSSLSession() {
	return $Optional::ofNullable($($nc(this->delegate)->getSSLSession()));
}

HttpsURLConnectionImpl::HttpsURLConnectionImpl() {
}

$Class* HttpsURLConnectionImpl::load$($String* name, bool initialize) {
	$loadClass(HttpsURLConnectionImpl, name, initialize, &_HttpsURLConnectionImpl_ClassInfo_, allocate$HttpsURLConnectionImpl);
	return class$;
}

$Class* HttpsURLConnectionImpl::class$ = nullptr;

				} // https
			} // protocol
		} // www
	} // net
} // sun