#include <javax/net/ssl/X509TrustManager.h>

#include <java/security/cert/X509Certificate.h>
#include <jcpp.h>

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace net {
		namespace ssl {

$MethodInfo _X509TrustManager_MethodInfo_[] = {
	{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509TrustManager, checkClientTrusted, void, $X509CertificateArray*, $String*), "java.security.cert.CertificateException"},
	{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509TrustManager, checkServerTrusted, void, $X509CertificateArray*, $String*), "java.security.cert.CertificateException"},
	{"getAcceptedIssuers", "()[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(X509TrustManager, getAcceptedIssuers, $X509CertificateArray*)},
	{}
};

$ClassInfo _X509TrustManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.net.ssl.X509TrustManager",
	nullptr,
	"javax.net.ssl.TrustManager",
	nullptr,
	_X509TrustManager_MethodInfo_
};

$Object* allocate$X509TrustManager($Class* clazz) {
	return $of($alloc(X509TrustManager));
}

$Class* X509TrustManager::load$($String* name, bool initialize) {
	$loadClass(X509TrustManager, name, initialize, &_X509TrustManager_ClassInfo_, allocate$X509TrustManager);
	return class$;
}

$Class* X509TrustManager::class$ = nullptr;

		} // ssl
	} // net
} // javax