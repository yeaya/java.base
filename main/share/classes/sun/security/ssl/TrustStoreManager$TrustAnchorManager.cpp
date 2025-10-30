#include <sun/security/ssl/TrustStoreManager$TrustAnchorManager.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/InputStream.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessController.h>
#include <java/security/KeyStore.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Collections.h>
#include <java/util/Set.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <sun/security/action/OpenFileInputStreamAction.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TrustStoreManager$TrustStoreDescriptor.h>
#include <sun/security/ssl/TrustStoreManager.h>
#include <sun/security/validator/TrustStoreUtil.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessController = ::java::security::AccessController;
using $KeyStore = ::java::security::KeyStore;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Collections = ::java::util::Collections;
using $Set = ::java::util::Set;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $OpenFileInputStreamAction = ::sun::security::action::OpenFileInputStreamAction;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TrustStoreManager = ::sun::security::ssl::TrustStoreManager;
using $TrustStoreManager$TrustStoreDescriptor = ::sun::security::ssl::TrustStoreManager$TrustStoreDescriptor;
using $TrustStoreUtil = ::sun::security::validator::TrustStoreUtil;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _TrustStoreManager$TrustAnchorManager_FieldInfo_[] = {
	{"descriptor", "Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;", nullptr, $PRIVATE, $field(TrustStoreManager$TrustAnchorManager, descriptor)},
	{"ksRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/security/KeyStore;>;", $PRIVATE, $field(TrustStoreManager$TrustAnchorManager, ksRef)},
	{"csRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/util/Set<Ljava/security/cert/X509Certificate;>;>;", $PRIVATE, $field(TrustStoreManager$TrustAnchorManager, csRef)},
	{"tamLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(TrustStoreManager$TrustAnchorManager, tamLock)},
	{}
};

$MethodInfo _TrustStoreManager$TrustAnchorManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TrustStoreManager$TrustAnchorManager::*)()>(&TrustStoreManager$TrustAnchorManager::init$))},
	{"getKeyStore", "(Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;)Ljava/security/KeyStore;", nullptr, 0, $method(static_cast<$KeyStore*(TrustStoreManager$TrustAnchorManager::*)($TrustStoreManager$TrustStoreDescriptor*)>(&TrustStoreManager$TrustAnchorManager::getKeyStore)), "java.lang.Exception"},
	{"getTrustedCerts", "(Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;)Ljava/util/Set;", "(Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;)Ljava/util/Set<Ljava/security/cert/X509Certificate;>;", 0, $method(static_cast<$Set*(TrustStoreManager$TrustAnchorManager::*)($TrustStoreManager$TrustStoreDescriptor*)>(&TrustStoreManager$TrustAnchorManager::getTrustedCerts)), "java.lang.Exception"},
	{"loadKeyStore", "(Lsun/security/ssl/TrustStoreManager$TrustStoreDescriptor;)Ljava/security/KeyStore;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$KeyStore*(*)($TrustStoreManager$TrustStoreDescriptor*)>(&TrustStoreManager$TrustAnchorManager::loadKeyStore)), "java.lang.Exception"},
	{"loadTrustedCerts", "(Ljava/security/KeyStore;)Ljava/util/Set;", "(Ljava/security/KeyStore;)Ljava/util/Set<Ljava/security/cert/X509Certificate;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)($KeyStore*)>(&TrustStoreManager$TrustAnchorManager::loadTrustedCerts))},
	{}
};

$InnerClassInfo _TrustStoreManager$TrustAnchorManager_InnerClassesInfo_[] = {
	{"sun.security.ssl.TrustStoreManager$TrustAnchorManager", "sun.security.ssl.TrustStoreManager", "TrustAnchorManager", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _TrustStoreManager$TrustAnchorManager_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.TrustStoreManager$TrustAnchorManager",
	"java.lang.Object",
	nullptr,
	_TrustStoreManager$TrustAnchorManager_FieldInfo_,
	_TrustStoreManager$TrustAnchorManager_MethodInfo_,
	nullptr,
	nullptr,
	_TrustStoreManager$TrustAnchorManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.TrustStoreManager"
};

$Object* allocate$TrustStoreManager$TrustAnchorManager($Class* clazz) {
	return $of($alloc(TrustStoreManager$TrustAnchorManager));
}

void TrustStoreManager$TrustAnchorManager::init$() {
	$set(this, tamLock, $new($ReentrantLock));
	$set(this, descriptor, nullptr);
	$set(this, ksRef, $new($WeakReference, nullptr));
	$set(this, csRef, $new($WeakReference, nullptr));
}

$KeyStore* TrustStoreManager$TrustAnchorManager::getKeyStore($TrustStoreManager$TrustStoreDescriptor* descriptor) {
	$useLocalCurrentObjectStackCache();
	$var($TrustStoreManager$TrustStoreDescriptor, temporaryDesc, this->descriptor);
	$var($KeyStore, ks, $cast($KeyStore, $nc(this->ksRef)->get()));
	if ((ks != nullptr) && $nc(descriptor)->equals(temporaryDesc)) {
		return ks;
	}
	$nc(this->tamLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($KeyStore, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(ks, $cast($KeyStore, $nc(this->ksRef)->get()));
			if ((ks != nullptr) && $nc(descriptor)->equals(temporaryDesc)) {
				$assign(var$2, ks);
				return$1 = true;
				goto $finally;
			}
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
				$SSLLogger::fine("Reload the trust store"_s, $$new($ObjectArray, 0));
			}
			$assign(ks, loadKeyStore(descriptor));
			$set(this, descriptor, descriptor);
			$set(this, ksRef, $new($WeakReference, ks));
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->tamLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return ks;
}

$Set* TrustStoreManager$TrustAnchorManager::getTrustedCerts($TrustStoreManager$TrustStoreDescriptor* descriptor) {
	$useLocalCurrentObjectStackCache();
	$var($KeyStore, ks, nullptr);
	$var($TrustStoreManager$TrustStoreDescriptor, temporaryDesc, this->descriptor);
	$var($Set, certs, $cast($Set, $nc(this->csRef)->get()));
	if ((certs != nullptr) && $nc(descriptor)->equals(temporaryDesc)) {
		return certs;
	}
	$nc(this->tamLock)->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($Set, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(temporaryDesc, this->descriptor);
			$assign(certs, $cast($Set, $nc(this->csRef)->get()));
			if (certs != nullptr) {
				if ($nc(descriptor)->equals(temporaryDesc)) {
					$assign(var$2, certs);
					return$1 = true;
					goto $finally;
				} else {
					$set(this, descriptor, descriptor);
				}
			} else if ($nc(descriptor)->equals(temporaryDesc)) {
				$assign(ks, $cast($KeyStore, $nc(this->ksRef)->get()));
			} else {
				$set(this, descriptor, descriptor);
			}
			if (ks == nullptr) {
				$init($SSLLogger);
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
					$SSLLogger::fine("Reload the trust store"_s, $$new($ObjectArray, 0));
				}
				$assign(ks, loadKeyStore(descriptor));
				$set(this, ksRef, $new($WeakReference, ks));
			}
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
				$SSLLogger::fine("Reload trust certs"_s, $$new($ObjectArray, 0));
			}
			$assign(certs, loadTrustedCerts(ks));
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
				$SSLLogger::fine($$str({"Reloaded "_s, $$str($nc(certs)->size()), " trust certs"_s}), $$new($ObjectArray, 0));
			}
			$set(this, csRef, $new($WeakReference, certs));
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(this->tamLock)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return certs;
}

$KeyStore* TrustStoreManager$TrustAnchorManager::loadKeyStore($TrustStoreManager$TrustStoreDescriptor* descriptor) {
	$load(TrustStoreManager$TrustAnchorManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!"NONE"_s->equals($nc(descriptor)->storeName) && $nc(descriptor)->storeFile == nullptr) {
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
			$SSLLogger::fine("No available key store"_s, $$new($ObjectArray, 0));
		}
		return nullptr;
	}
	$var($KeyStore, ks, nullptr);
	if ($nc($nc(descriptor)->storeProvider)->isEmpty()) {
		$assign(ks, $KeyStore::getInstance(descriptor->storeType));
	} else {
		$assign(ks, $KeyStore::getInstance(descriptor->storeType, descriptor->storeProvider));
	}
	$var($chars, password, nullptr);
	if (!$nc($nc(descriptor)->storePassword)->isEmpty()) {
		$assign(password, $nc(descriptor->storePassword)->toCharArray());
	}
	if (!"NONE"_s->equals($nc(descriptor)->storeName)) {
		try {
			$var($FileInputStream, fis, $cast($FileInputStream, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($OpenFileInputStreamAction, $nc(descriptor)->storeFile)))));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc(ks)->load(fis, password);
					} catch ($Throwable& t$) {
						if (fis != nullptr) {
							try {
								fis->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (fis != nullptr) {
						fis->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		} catch ($FileNotFoundException& fnfe) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
				$SSLLogger::fine($$str({"Not available key store: "_s, $nc(descriptor)->storeName}), $$new($ObjectArray, 0));
			}
			return nullptr;
		}
	} else {
		$nc(ks)->load(nullptr, password);
	}
	return ks;
}

$Set* TrustStoreManager$TrustAnchorManager::loadTrustedCerts($KeyStore* ks) {
	if (ks == nullptr) {
		return $Collections::emptySet();
	}
	return $TrustStoreUtil::getTrustedCerts(ks);
}

TrustStoreManager$TrustAnchorManager::TrustStoreManager$TrustAnchorManager() {
}

$Class* TrustStoreManager$TrustAnchorManager::load$($String* name, bool initialize) {
	$loadClass(TrustStoreManager$TrustAnchorManager, name, initialize, &_TrustStoreManager$TrustAnchorManager_ClassInfo_, allocate$TrustStoreManager$TrustAnchorManager);
	return class$;
}

$Class* TrustStoreManager$TrustAnchorManager::class$ = nullptr;

		} // ssl
	} // security
} // sun