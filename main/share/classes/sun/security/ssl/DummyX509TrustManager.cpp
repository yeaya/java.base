#include <sun/security/ssl/DummyX509TrustManager.h>

#include <java/net/Socket.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/X509ExtendedTrustManager.h>
#include <javax/net/ssl/X509TrustManager.h>
#include <jcpp.h>

#undef INSTANCE

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $CertificateException = ::java::security::cert::CertificateException;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $X509ExtendedTrustManager = ::javax::net::ssl::X509ExtendedTrustManager;
using $X509TrustManager = ::javax::net::ssl::X509TrustManager;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _DummyX509TrustManager_FieldInfo_[] = {
	{"INSTANCE", "Ljavax/net/ssl/X509TrustManager;", nullptr, $STATIC | $FINAL, $staticField(DummyX509TrustManager, INSTANCE)},
	{}
};

$MethodInfo _DummyX509TrustManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DummyX509TrustManager, init$, void)},
	{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DummyX509TrustManager, checkClientTrusted, void, $X509CertificateArray*, $String*), "java.security.cert.CertificateException"},
	{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V", nullptr, $PUBLIC, $virtualMethod(DummyX509TrustManager, checkClientTrusted, void, $X509CertificateArray*, $String*, $Socket*), "java.security.cert.CertificateException"},
	{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V", nullptr, $PUBLIC, $virtualMethod(DummyX509TrustManager, checkClientTrusted, void, $X509CertificateArray*, $String*, $SSLEngine*), "java.security.cert.CertificateException"},
	{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(DummyX509TrustManager, checkServerTrusted, void, $X509CertificateArray*, $String*), "java.security.cert.CertificateException"},
	{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V", nullptr, $PUBLIC, $virtualMethod(DummyX509TrustManager, checkServerTrusted, void, $X509CertificateArray*, $String*, $Socket*), "java.security.cert.CertificateException"},
	{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V", nullptr, $PUBLIC, $virtualMethod(DummyX509TrustManager, checkServerTrusted, void, $X509CertificateArray*, $String*, $SSLEngine*), "java.security.cert.CertificateException"},
	{"getAcceptedIssuers", "()[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $virtualMethod(DummyX509TrustManager, getAcceptedIssuers, $X509CertificateArray*)},
	{}
};

$ClassInfo _DummyX509TrustManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.DummyX509TrustManager",
	"javax.net.ssl.X509ExtendedTrustManager",
	nullptr,
	_DummyX509TrustManager_FieldInfo_,
	_DummyX509TrustManager_MethodInfo_
};

$Object* allocate$DummyX509TrustManager($Class* clazz) {
	return $of($alloc(DummyX509TrustManager));
}

$X509TrustManager* DummyX509TrustManager::INSTANCE = nullptr;

void DummyX509TrustManager::init$() {
	$X509ExtendedTrustManager::init$();
}

void DummyX509TrustManager::checkClientTrusted($X509CertificateArray* chain, $String* authType) {
	$throwNew($CertificateException, "No X509TrustManager implementation avaiable"_s);
}

void DummyX509TrustManager::checkServerTrusted($X509CertificateArray* chain, $String* authType) {
	$throwNew($CertificateException, "No X509TrustManager implementation available"_s);
}

$X509CertificateArray* DummyX509TrustManager::getAcceptedIssuers() {
	return $new($X509CertificateArray, 0);
}

void DummyX509TrustManager::checkClientTrusted($X509CertificateArray* chain, $String* authType, $Socket* socket) {
	$throwNew($CertificateException, "No X509TrustManager implementation available"_s);
}

void DummyX509TrustManager::checkServerTrusted($X509CertificateArray* chain, $String* authType, $Socket* socket) {
	$throwNew($CertificateException, "No X509TrustManager implementation available"_s);
}

void DummyX509TrustManager::checkClientTrusted($X509CertificateArray* chain, $String* authType, $SSLEngine* engine) {
	$throwNew($CertificateException, "No X509TrustManager implementation available"_s);
}

void DummyX509TrustManager::checkServerTrusted($X509CertificateArray* chain, $String* authType, $SSLEngine* engine) {
	$throwNew($CertificateException, "No X509TrustManager implementation available"_s);
}

void clinit$DummyX509TrustManager($Class* class$) {
	$assignStatic(DummyX509TrustManager::INSTANCE, $new(DummyX509TrustManager));
}

DummyX509TrustManager::DummyX509TrustManager() {
}

$Class* DummyX509TrustManager::load$($String* name, bool initialize) {
	$loadClass(DummyX509TrustManager, name, initialize, &_DummyX509TrustManager_ClassInfo_, clinit$DummyX509TrustManager, allocate$DummyX509TrustManager);
	return class$;
}

$Class* DummyX509TrustManager::class$ = nullptr;

		} // ssl
	} // security
} // sun