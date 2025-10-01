#include <sun/net/www/protocol/https/DelegateHttpsURLConnection.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Proxy.h>
#include <java/net/URL.h>
#include <javax/net/ssl/HostnameVerifier.h>
#include <javax/net/ssl/HttpsURLConnection.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <sun/net/www/protocol/http/Handler.h>
#include <sun/net/www/protocol/https/AbstractDelegateHttpsURLConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::net::Proxy;
using $URL = ::java::net::URL;
using $HostnameVerifier = ::javax::net::ssl::HostnameVerifier;
using $HttpsURLConnection = ::javax::net::ssl::HttpsURLConnection;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;
using $Handler = ::sun::net::www::protocol::http::Handler;
using $AbstractDelegateHttpsURLConnection = ::sun::net::www::protocol::https::AbstractDelegateHttpsURLConnection;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace https {

$FieldInfo _DelegateHttpsURLConnection_FieldInfo_[] = {
	{"httpsURLConnection", "Ljavax/net/ssl/HttpsURLConnection;", nullptr, $PUBLIC, $field(DelegateHttpsURLConnection, httpsURLConnection)},
	{}
};

$MethodInfo _DelegateHttpsURLConnection_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;Lsun/net/www/protocol/http/Handler;Ljavax/net/ssl/HttpsURLConnection;)V", nullptr, 0, $method(static_cast<void(DelegateHttpsURLConnection::*)($URL*,$Handler*,$HttpsURLConnection*)>(&DelegateHttpsURLConnection::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/net/URL;Ljava/net/Proxy;Lsun/net/www/protocol/http/Handler;Ljavax/net/ssl/HttpsURLConnection;)V", nullptr, 0, $method(static_cast<void(DelegateHttpsURLConnection::*)($URL*,$Proxy*,$Handler*,$HttpsURLConnection*)>(&DelegateHttpsURLConnection::init$)), "java.io.IOException"},
	{"getHostnameVerifier", "()Ljavax/net/ssl/HostnameVerifier;", nullptr, $PROTECTED},
	{"getSSLSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _DelegateHttpsURLConnection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.https.DelegateHttpsURLConnection",
	"sun.net.www.protocol.https.AbstractDelegateHttpsURLConnection",
	nullptr,
	_DelegateHttpsURLConnection_FieldInfo_,
	_DelegateHttpsURLConnection_MethodInfo_
};

$Object* allocate$DelegateHttpsURLConnection($Class* clazz) {
	return $of($alloc(DelegateHttpsURLConnection));
}

void DelegateHttpsURLConnection::init$($URL* url, $Handler* handler, $HttpsURLConnection* httpsURLConnection) {
	DelegateHttpsURLConnection::init$(url, nullptr, handler, httpsURLConnection);
}

void DelegateHttpsURLConnection::init$($URL* url, $Proxy* p, $Handler* handler, $HttpsURLConnection* httpsURLConnection) {
	$AbstractDelegateHttpsURLConnection::init$(url, p, handler);
	$set(this, httpsURLConnection, httpsURLConnection);
}

$SSLSocketFactory* DelegateHttpsURLConnection::getSSLSocketFactory() {
	return $nc(this->httpsURLConnection)->getSSLSocketFactory();
}

$HostnameVerifier* DelegateHttpsURLConnection::getHostnameVerifier() {
	return $nc(this->httpsURLConnection)->getHostnameVerifier();
}

DelegateHttpsURLConnection::DelegateHttpsURLConnection() {
}

$Class* DelegateHttpsURLConnection::load$($String* name, bool initialize) {
	$loadClass(DelegateHttpsURLConnection, name, initialize, &_DelegateHttpsURLConnection_ClassInfo_, allocate$DelegateHttpsURLConnection);
	return class$;
}

$Class* DelegateHttpsURLConnection::class$ = nullptr;

				} // https
			} // protocol
		} // www
	} // net
} // sun