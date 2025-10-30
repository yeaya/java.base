#include <sun/net/www/protocol/https/Handler.h>

#include <java/net/HttpURLConnection.h>
#include <java/net/Proxy.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <javax/net/ssl/HttpsURLConnection.h>
#include <sun/net/www/protocol/http/Handler.h>
#include <sun/net/www/protocol/https/HttpsURLConnectionImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $Proxy = ::java::net::Proxy;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $HttpsURLConnection = ::javax::net::ssl::HttpsURLConnection;
using $Handler = ::sun::net::www::protocol::http::Handler;
using $HttpsURLConnectionImpl = ::sun::net::www::protocol::https::HttpsURLConnectionImpl;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace https {

$FieldInfo _Handler_FieldInfo_[] = {
	{"proxy", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Handler, proxy)},
	{"proxyPort", "I", nullptr, $PROTECTED, $field(Handler, proxyPort)},
	{}
};

$MethodInfo _Handler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Handler::*)()>(&Handler::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(Handler::*)($String*,int32_t)>(&Handler::init$))},
	{"getDefaultPort", "()I", nullptr, $PROTECTED},
	{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"openConnection", "(Ljava/net/URL;Ljava/net/Proxy;)Ljava/net/URLConnection;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _Handler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.https.Handler",
	"sun.net.www.protocol.http.Handler",
	nullptr,
	_Handler_FieldInfo_,
	_Handler_MethodInfo_
};

$Object* allocate$Handler($Class* clazz) {
	return $of($alloc(Handler));
}

int32_t Handler::getDefaultPort() {
	return 443;
}

void Handler::init$() {
	$Handler::init$();
	$set(this, proxy, nullptr);
	this->proxyPort = -1;
}

void Handler::init$($String* proxy, int32_t port) {
	$Handler::init$();
	$set(this, proxy, proxy);
	this->proxyPort = port;
}

$URLConnection* Handler::openConnection($URL* u) {
	return openConnection(u, ($Proxy*)nullptr);
}

$URLConnection* Handler::openConnection($URL* u, $Proxy* p) {
	return $new($HttpsURLConnectionImpl, u, p, this);
}

Handler::Handler() {
}

$Class* Handler::load$($String* name, bool initialize) {
	$loadClass(Handler, name, initialize, &_Handler_ClassInfo_, allocate$Handler);
	return class$;
}

$Class* Handler::class$ = nullptr;

				} // https
			} // protocol
		} // www
	} // net
} // sun