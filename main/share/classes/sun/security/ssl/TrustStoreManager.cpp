#include <sun/security/ssl/TrustStoreManager.h>

#include <java/security/KeyStore.h>
#include <java/util/Set.h>
#include <sun/security/ssl/TrustStoreManager$TrustAnchorManager.h>
#include <sun/security/ssl/TrustStoreManager$TrustStoreDescriptor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $Set = ::java::util::Set;
using $TrustStoreManager$TrustAnchorManager = ::sun::security::ssl::TrustStoreManager$TrustAnchorManager;
using $TrustStoreManager$TrustStoreDescriptor = ::sun::security::ssl::TrustStoreManager$TrustStoreDescriptor;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _TrustStoreManager_FieldInfo_[] = {
	{"tam", "Lsun/security/ssl/TrustStoreManager$TrustAnchorManager;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TrustStoreManager, tam)},
	{}
};

$MethodInfo _TrustStoreManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(TrustStoreManager, init$, void)},
	{"getTrustedCerts", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/cert/X509Certificate;>;", $PUBLIC | $STATIC, $staticMethod(TrustStoreManager, getTrustedCerts, $Set*), "java.lang.Exception"},
	{"getTrustedKeyStore", "()Ljava/security/KeyStore;", nullptr, $PUBLIC | $STATIC, $staticMethod(TrustStoreManager, getTrustedKeyStore, $KeyStore*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TrustStoreManager_InnerClassesInfo_[] = {
	{"sun.security.ssl.TrustStoreManager$TrustAnchorManager", "sun.security.ssl.TrustStoreManager", "TrustAnchorManager", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor", "sun.security.ssl.TrustStoreManager", "TrustStoreDescriptor", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _TrustStoreManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.TrustStoreManager",
	"java.lang.Object",
	nullptr,
	_TrustStoreManager_FieldInfo_,
	_TrustStoreManager_MethodInfo_,
	nullptr,
	nullptr,
	_TrustStoreManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.TrustStoreManager$TrustAnchorManager,sun.security.ssl.TrustStoreManager$TrustStoreDescriptor,sun.security.ssl.TrustStoreManager$TrustStoreDescriptor$1"
};

$Object* allocate$TrustStoreManager($Class* clazz) {
	return $of($alloc(TrustStoreManager));
}

$TrustStoreManager$TrustAnchorManager* TrustStoreManager::tam = nullptr;

void TrustStoreManager::init$() {
}

$Set* TrustStoreManager::getTrustedCerts() {
	$init(TrustStoreManager);
	return $nc(TrustStoreManager::tam)->getTrustedCerts($($TrustStoreManager$TrustStoreDescriptor::createInstance()));
}

$KeyStore* TrustStoreManager::getTrustedKeyStore() {
	$init(TrustStoreManager);
	return $nc(TrustStoreManager::tam)->getKeyStore($($TrustStoreManager$TrustStoreDescriptor::createInstance()));
}

void clinit$TrustStoreManager($Class* class$) {
	$assignStatic(TrustStoreManager::tam, $new($TrustStoreManager$TrustAnchorManager));
}

TrustStoreManager::TrustStoreManager() {
}

$Class* TrustStoreManager::load$($String* name, bool initialize) {
	$loadClass(TrustStoreManager, name, initialize, &_TrustStoreManager_ClassInfo_, clinit$TrustStoreManager, allocate$TrustStoreManager);
	return class$;
}

$Class* TrustStoreManager::class$ = nullptr;

		} // ssl
	} // security
} // sun