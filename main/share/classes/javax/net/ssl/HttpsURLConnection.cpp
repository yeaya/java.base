#include <javax/net/ssl/HttpsURLConnection.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URL.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/Principal.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Optional.h>
#include <javax/net/SocketFactory.h>
#include <javax/net/ssl/HostnameVerifier.h>
#include <javax/net/ssl/HttpsURLConnection$DefaultHostnameVerifier.h>
#include <javax/net/ssl/SSLPermission.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URL = ::java::net::URL;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Principal = ::java::security::Principal;
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Optional = ::java::util::Optional;
using $SocketFactory = ::javax::net::SocketFactory;
using $HostnameVerifier = ::javax::net::ssl::HostnameVerifier;
using $HttpsURLConnection$DefaultHostnameVerifier = ::javax::net::ssl::HttpsURLConnection$DefaultHostnameVerifier;
using $SSLPermission = ::javax::net::ssl::SSLPermission;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;
using $X500Principal = ::javax::security::auth::x500::X500Principal;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _HttpsURLConnection_FieldInfo_[] = {
	{"defaultHostnameVerifier", "Ljavax/net/ssl/HostnameVerifier;", nullptr, $PRIVATE | $STATIC, $staticField(HttpsURLConnection, defaultHostnameVerifier)},
	{"hostnameVerifier", "Ljavax/net/ssl/HostnameVerifier;", nullptr, $PROTECTED, $field(HttpsURLConnection, hostnameVerifier)},
	{"defaultSSLSocketFactory", "Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PRIVATE | $STATIC, $staticField(HttpsURLConnection, defaultSSLSocketFactory)},
	{"sslSocketFactory", "Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PRIVATE, $field(HttpsURLConnection, sslSocketFactory)},
	{}
};

$MethodInfo _HttpsURLConnection_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PROTECTED, $method(static_cast<void(HttpsURLConnection::*)($URL*)>(&HttpsURLConnection::init$))},
	{"getCipherSuite", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultHostnameVerifier", "()Ljavax/net/ssl/HostnameVerifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HostnameVerifier*(*)()>(&HttpsURLConnection::getDefaultHostnameVerifier))},
	{"getDefaultSSLSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SSLSocketFactory*(*)()>(&HttpsURLConnection::getDefaultSSLSocketFactory))},
	{"getHostnameVerifier", "()Ljavax/net/ssl/HostnameVerifier;", nullptr, $PUBLIC},
	{"getLocalCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocalPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC},
	{"getPeerPrincipal", "()Ljava/security/Principal;", nullptr, $PUBLIC, nullptr, "javax.net.ssl.SSLPeerUnverifiedException"},
	{"getSSLSession", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljavax/net/ssl/SSLSession;>;", $PUBLIC},
	{"getSSLSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PUBLIC},
	{"getServerCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.net.ssl.SSLPeerUnverifiedException"},
	{"setDefaultHostnameVerifier", "(Ljavax/net/ssl/HostnameVerifier;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($HostnameVerifier*)>(&HttpsURLConnection::setDefaultHostnameVerifier))},
	{"setDefaultSSLSocketFactory", "(Ljavax/net/ssl/SSLSocketFactory;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($SSLSocketFactory*)>(&HttpsURLConnection::setDefaultSSLSocketFactory))},
	{"setHostnameVerifier", "(Ljavax/net/ssl/HostnameVerifier;)V", nullptr, $PUBLIC},
	{"setSSLSocketFactory", "(Ljavax/net/ssl/SSLSocketFactory;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HttpsURLConnection_InnerClassesInfo_[] = {
	{"javax.net.ssl.HttpsURLConnection$DefaultHostnameVerifier", "javax.net.ssl.HttpsURLConnection", "DefaultHostnameVerifier", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HttpsURLConnection_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.net.ssl.HttpsURLConnection",
	"java.net.HttpURLConnection",
	nullptr,
	_HttpsURLConnection_FieldInfo_,
	_HttpsURLConnection_MethodInfo_,
	nullptr,
	nullptr,
	_HttpsURLConnection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.net.ssl.HttpsURLConnection$DefaultHostnameVerifier"
};

$Object* allocate$HttpsURLConnection($Class* clazz) {
	return $of($alloc(HttpsURLConnection));
}


$HostnameVerifier* HttpsURLConnection::defaultHostnameVerifier = nullptr;
$SSLSocketFactory* HttpsURLConnection::defaultSSLSocketFactory = nullptr;

void HttpsURLConnection::init$($URL* url) {
	$HttpURLConnection::init$(url);
	$set(this, hostnameVerifier, HttpsURLConnection::defaultHostnameVerifier);
	$set(this, sslSocketFactory, getDefaultSSLSocketFactory());
}

$Principal* HttpsURLConnection::getPeerPrincipal() {
	$var($CertificateArray, certs, getServerCertificates());
	return $nc(($cast($X509Certificate, $nc(certs)->get(0))))->getSubjectX500Principal();
}

$Principal* HttpsURLConnection::getLocalPrincipal() {
	$var($CertificateArray, certs, getLocalCertificates());
	if (certs != nullptr) {
		return $nc(($cast($X509Certificate, certs->get(0))))->getSubjectX500Principal();
	} else {
		return nullptr;
	}
}

void HttpsURLConnection::setDefaultHostnameVerifier($HostnameVerifier* v) {
	$init(HttpsURLConnection);
	if (v == nullptr) {
		$throwNew($IllegalArgumentException, "no default HostnameVerifier specified"_s);
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($SSLPermission, "setHostnameVerifier"_s));
	}
	$assignStatic(HttpsURLConnection::defaultHostnameVerifier, v);
}

$HostnameVerifier* HttpsURLConnection::getDefaultHostnameVerifier() {
	$init(HttpsURLConnection);
	return HttpsURLConnection::defaultHostnameVerifier;
}

void HttpsURLConnection::setHostnameVerifier($HostnameVerifier* v) {
	if (v == nullptr) {
		$throwNew($IllegalArgumentException, "no HostnameVerifier specified"_s);
	}
	$set(this, hostnameVerifier, v);
}

$HostnameVerifier* HttpsURLConnection::getHostnameVerifier() {
	return this->hostnameVerifier;
}

void HttpsURLConnection::setDefaultSSLSocketFactory($SSLSocketFactory* sf) {
	$init(HttpsURLConnection);
	if (sf == nullptr) {
		$throwNew($IllegalArgumentException, "no default SSLSocketFactory specified"_s);
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkSetFactory();
	}
	$assignStatic(HttpsURLConnection::defaultSSLSocketFactory, sf);
}

$SSLSocketFactory* HttpsURLConnection::getDefaultSSLSocketFactory() {
	$init(HttpsURLConnection);
	if (HttpsURLConnection::defaultSSLSocketFactory == nullptr) {
		$assignStatic(HttpsURLConnection::defaultSSLSocketFactory, $cast($SSLSocketFactory, $SSLSocketFactory::getDefault()));
	}
	return HttpsURLConnection::defaultSSLSocketFactory;
}

void HttpsURLConnection::setSSLSocketFactory($SSLSocketFactory* sf) {
	if (sf == nullptr) {
		$throwNew($IllegalArgumentException, "no SSLSocketFactory specified"_s);
	}
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkSetFactory();
	}
	$set(this, sslSocketFactory, sf);
}

$SSLSocketFactory* HttpsURLConnection::getSSLSocketFactory() {
	return this->sslSocketFactory;
}

$Optional* HttpsURLConnection::getSSLSession() {
	return $Optional::empty();
}

void clinit$HttpsURLConnection($Class* class$) {
	$assignStatic(HttpsURLConnection::defaultHostnameVerifier, $new($HttpsURLConnection$DefaultHostnameVerifier));
	$assignStatic(HttpsURLConnection::defaultSSLSocketFactory, nullptr);
}

HttpsURLConnection::HttpsURLConnection() {
}

$Class* HttpsURLConnection::load$($String* name, bool initialize) {
	$loadClass(HttpsURLConnection, name, initialize, &_HttpsURLConnection_ClassInfo_, clinit$HttpsURLConnection, allocate$HttpsURLConnection);
	return class$;
}

$Class* HttpsURLConnection::class$ = nullptr;

		} // ssl
	} // net
} // javax