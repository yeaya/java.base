#include <sun/security/provider/certpath/ssl/SSLServerCertStore$GetChainTrustManager.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/X509ExtendedTrustManager.h>
#include <sun/security/provider/certpath/ssl/SSLServerCertStore.h>
#include <jcpp.h>

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Socket = ::java::net::Socket;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $X509ExtendedTrustManager = ::javax::net::ssl::X509ExtendedTrustManager;
using $SSLServerCertStore = ::sun::security::provider::certpath::ssl::SSLServerCertStore;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ssl {

$FieldInfo _SSLServerCertStore$GetChainTrustManager_FieldInfo_[] = {
	{"serverChain", "Ljava/util/List;", "Ljava/util/List<Ljava/security/cert/X509Certificate;>;", $PRIVATE, $field(SSLServerCertStore$GetChainTrustManager, serverChain)},
	{"exchangedServerCerts", "Z", nullptr, $PRIVATE, $field(SSLServerCertStore$GetChainTrustManager, exchangedServerCerts)},
	{}
};

$MethodInfo _SSLServerCertStore$GetChainTrustManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLServerCertStore$GetChainTrustManager::*)()>(&SSLServerCertStore$GetChainTrustManager::init$))},
	{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"checkClientTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/net/Socket;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"checkServerTrusted", "([Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljavax/net/ssl/SSLEngine;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"cleanup", "()V", nullptr, 0},
	{"getAcceptedIssuers", "()[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SSLServerCertStore$GetChainTrustManager_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ssl.SSLServerCertStore$GetChainTrustManager", "sun.security.provider.certpath.ssl.SSLServerCertStore", "GetChainTrustManager", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLServerCertStore$GetChainTrustManager_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.ssl.SSLServerCertStore$GetChainTrustManager",
	"javax.net.ssl.X509ExtendedTrustManager",
	nullptr,
	_SSLServerCertStore$GetChainTrustManager_FieldInfo_,
	_SSLServerCertStore$GetChainTrustManager_MethodInfo_,
	nullptr,
	nullptr,
	_SSLServerCertStore$GetChainTrustManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ssl.SSLServerCertStore"
};

$Object* allocate$SSLServerCertStore$GetChainTrustManager($Class* clazz) {
	return $of($alloc(SSLServerCertStore$GetChainTrustManager));
}

void SSLServerCertStore$GetChainTrustManager::init$() {
	$X509ExtendedTrustManager::init$();
	$set(this, serverChain, $Collections::emptyList());
	this->exchangedServerCerts = false;
}

$X509CertificateArray* SSLServerCertStore$GetChainTrustManager::getAcceptedIssuers() {
	return $new($X509CertificateArray, 0);
}

void SSLServerCertStore$GetChainTrustManager::checkClientTrusted($X509CertificateArray* chain, $String* authType) {
	$throwNew($UnsupportedOperationException);
}

void SSLServerCertStore$GetChainTrustManager::checkClientTrusted($X509CertificateArray* chain, $String* authType, $Socket* socket) {
	$throwNew($UnsupportedOperationException);
}

void SSLServerCertStore$GetChainTrustManager::checkClientTrusted($X509CertificateArray* chain, $String* authType, $SSLEngine* engine) {
	$throwNew($UnsupportedOperationException);
}

void SSLServerCertStore$GetChainTrustManager::checkServerTrusted($X509CertificateArray* chain, $String* authType) {
	this->exchangedServerCerts = true;
	$set(this, serverChain, (chain == nullptr) ? $Collections::emptyList() : $Arrays::asList(chain));
}

void SSLServerCertStore$GetChainTrustManager::checkServerTrusted($X509CertificateArray* chain, $String* authType, $Socket* socket) {
	checkServerTrusted(chain, authType);
}

void SSLServerCertStore$GetChainTrustManager::checkServerTrusted($X509CertificateArray* chain, $String* authType, $SSLEngine* engine) {
	checkServerTrusted(chain, authType);
}

void SSLServerCertStore$GetChainTrustManager::cleanup() {
	this->exchangedServerCerts = false;
	$set(this, serverChain, $Collections::emptyList());
}

SSLServerCertStore$GetChainTrustManager::SSLServerCertStore$GetChainTrustManager() {
}

$Class* SSLServerCertStore$GetChainTrustManager::load$($String* name, bool initialize) {
	$loadClass(SSLServerCertStore$GetChainTrustManager, name, initialize, &_SSLServerCertStore$GetChainTrustManager_ClassInfo_, allocate$SSLServerCertStore$GetChainTrustManager);
	return class$;
}

$Class* SSLServerCertStore$GetChainTrustManager::class$ = nullptr;

				} // ssl
			} // certpath
		} // provider
	} // security
} // sun