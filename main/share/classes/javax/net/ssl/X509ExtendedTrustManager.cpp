#include <javax/net/ssl/X509ExtendedTrustManager.h>
#include <java/net/Socket.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/net/ssl/SSLEngine.h>
#include <jcpp.h>

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $SSLEngine = ::javax::net::ssl::SSLEngine;

namespace javax {
	namespace net {
		namespace ssl {

void X509ExtendedTrustManager::init$() {
}

X509ExtendedTrustManager::X509ExtendedTrustManager() {
}

$Class* X509ExtendedTrustManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X509ExtendedTrustManager, init$, void)},
		{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509ExtendedTrustManager, checkClientTrusted, void, $X509CertificateArray*, $String*, $Socket*), "java.security.cert.CertificateException"},
		{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509ExtendedTrustManager, checkClientTrusted, void, $X509CertificateArray*, $String*, $SSLEngine*), "java.security.cert.CertificateException"},
		{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509ExtendedTrustManager, checkServerTrusted, void, $X509CertificateArray*, $String*, $Socket*), "java.security.cert.CertificateException"},
		{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509ExtendedTrustManager, checkServerTrusted, void, $X509CertificateArray*, $String*, $SSLEngine*), "java.security.cert.CertificateException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.net.ssl.X509ExtendedTrustManager",
		"java.lang.Object",
		"javax.net.ssl.X509TrustManager",
		nullptr,
		methodInfos$$
	};
	$loadClass(X509ExtendedTrustManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X509ExtendedTrustManager);
	});
	return class$;
}

$Class* X509ExtendedTrustManager::class$ = nullptr;

		} // ssl
	} // net
} // javax