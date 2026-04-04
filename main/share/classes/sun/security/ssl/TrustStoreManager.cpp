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

$TrustStoreManager$TrustAnchorManager* TrustStoreManager::tam = nullptr;

void TrustStoreManager::init$() {
}

$Set* TrustStoreManager::getTrustedCerts() {
	$init(TrustStoreManager);
	return TrustStoreManager::tam->getTrustedCerts($($TrustStoreManager$TrustStoreDescriptor::createInstance()));
}

$KeyStore* TrustStoreManager::getTrustedKeyStore() {
	$init(TrustStoreManager);
	return TrustStoreManager::tam->getKeyStore($($TrustStoreManager$TrustStoreDescriptor::createInstance()));
}

void TrustStoreManager::clinit$($Class* clazz) {
	$assignStatic(TrustStoreManager::tam, $new($TrustStoreManager$TrustAnchorManager));
}

TrustStoreManager::TrustStoreManager() {
}

$Class* TrustStoreManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tam", "Lsun/security/ssl/TrustStoreManager$TrustAnchorManager;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TrustStoreManager, tam)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TrustStoreManager, init$, void)},
		{"getTrustedCerts", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/cert/X509Certificate;>;", $PUBLIC | $STATIC, $staticMethod(TrustStoreManager, getTrustedCerts, $Set*), "java.lang.Exception"},
		{"getTrustedKeyStore", "()Ljava/security/KeyStore;", nullptr, $PUBLIC | $STATIC, $staticMethod(TrustStoreManager, getTrustedKeyStore, $KeyStore*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.TrustStoreManager$TrustAnchorManager", "sun.security.ssl.TrustStoreManager", "TrustAnchorManager", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.TrustStoreManager$TrustStoreDescriptor", "sun.security.ssl.TrustStoreManager", "TrustStoreDescriptor", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.TrustStoreManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.TrustStoreManager$TrustAnchorManager,sun.security.ssl.TrustStoreManager$TrustStoreDescriptor,sun.security.ssl.TrustStoreManager$TrustStoreDescriptor$1"
	};
	$loadClass(TrustStoreManager, name, initialize, &classInfo$$, TrustStoreManager::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TrustStoreManager);
	});
	return class$;
}

$Class* TrustStoreManager::class$ = nullptr;

		} // ssl
	} // security
} // sun