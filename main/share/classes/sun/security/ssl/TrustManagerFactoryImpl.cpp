#include <sun/security/ssl/TrustManagerFactoryImpl.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/SecurityException.h>
#include <java/security/AccessController.h>
#include <java/security/KeyStore.h>
#include <java/security/KeyStoreException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Collection.h>
#include <java/util/Set.h>
#include <javax/net/ssl/ManagerFactoryParameters.h>
#include <javax/net/ssl/TrustManager.h>
#include <javax/net/ssl/TrustManagerFactorySpi.h>
#include <javax/net/ssl/X509TrustManager.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/TrustManagerFactoryImpl$1.h>
#include <sun/security/ssl/TrustStoreManager.h>
#include <sun/security/validator/TrustStoreUtil.h>
#include <jcpp.h>

using $TrustManagerArray = $Array<::javax::net::ssl::TrustManager>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $AccessController = ::java::security::AccessController;
using $KeyStore = ::java::security::KeyStore;
using $KeyStoreException = ::java::security::KeyStoreException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Collection = ::java::util::Collection;
using $ManagerFactoryParameters = ::javax::net::ssl::ManagerFactoryParameters;
using $TrustManager = ::javax::net::ssl::TrustManager;
using $TrustManagerFactorySpi = ::javax::net::ssl::TrustManagerFactorySpi;
using $X509TrustManager = ::javax::net::ssl::X509TrustManager;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $TrustManagerFactoryImpl$1 = ::sun::security::ssl::TrustManagerFactoryImpl$1;
using $TrustStoreManager = ::sun::security::ssl::TrustStoreManager;
using $TrustStoreUtil = ::sun::security::validator::TrustStoreUtil;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _TrustManagerFactoryImpl_FieldInfo_[] = {
	{"trustManager", "Ljavax/net/ssl/X509TrustManager;", nullptr, $PRIVATE, $field(TrustManagerFactoryImpl, trustManager)},
	{"isInitialized", "Z", nullptr, $PRIVATE, $field(TrustManagerFactoryImpl, isInitialized)},
	{}
};

$MethodInfo _TrustManagerFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(TrustManagerFactoryImpl, init$, void)},
	{"engineGetTrustManagers", "()[Ljavax/net/ssl/TrustManager;", nullptr, $PROTECTED, $virtualMethod(TrustManagerFactoryImpl, engineGetTrustManagers, $TrustManagerArray*)},
	{"engineInit", "(Ljava/security/KeyStore;)V", nullptr, $PROTECTED, $virtualMethod(TrustManagerFactoryImpl, engineInit, void, $KeyStore*), "java.security.KeyStoreException"},
	{"engineInit", "(Ljavax/net/ssl/ManagerFactoryParameters;)V", nullptr, $PROTECTED, $virtualMethod(TrustManagerFactoryImpl, engineInit, void, $ManagerFactoryParameters*), "java.security.InvalidAlgorithmParameterException"},
	{"getFileInputStream", "(Ljava/io/File;)Ljava/io/FileInputStream;", nullptr, $PRIVATE | $STATIC, $staticMethod(TrustManagerFactoryImpl, getFileInputStream, $FileInputStream*, $File*), "java.lang.Exception"},
	{"getInstance", "(Ljava/util/Collection;)Ljavax/net/ssl/X509TrustManager;", "(Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;)Ljavax/net/ssl/X509TrustManager;", $ABSTRACT, $virtualMethod(TrustManagerFactoryImpl, getInstance, $X509TrustManager*, $Collection*)},
	{"getInstance", "(Ljavax/net/ssl/ManagerFactoryParameters;)Ljavax/net/ssl/X509TrustManager;", nullptr, $ABSTRACT, $virtualMethod(TrustManagerFactoryImpl, getInstance, $X509TrustManager*, $ManagerFactoryParameters*), "java.security.InvalidAlgorithmParameterException"},
	{}
};

$InnerClassInfo _TrustManagerFactoryImpl_InnerClassesInfo_[] = {
	{"sun.security.ssl.TrustManagerFactoryImpl$PKIXFactory", "sun.security.ssl.TrustManagerFactoryImpl", "PKIXFactory", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.TrustManagerFactoryImpl$SimpleFactory", "sun.security.ssl.TrustManagerFactoryImpl", "SimpleFactory", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.TrustManagerFactoryImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TrustManagerFactoryImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.ssl.TrustManagerFactoryImpl",
	"javax.net.ssl.TrustManagerFactorySpi",
	nullptr,
	_TrustManagerFactoryImpl_FieldInfo_,
	_TrustManagerFactoryImpl_MethodInfo_,
	nullptr,
	nullptr,
	_TrustManagerFactoryImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.TrustManagerFactoryImpl$PKIXFactory,sun.security.ssl.TrustManagerFactoryImpl$SimpleFactory,sun.security.ssl.TrustManagerFactoryImpl$1"
};

$Object* allocate$TrustManagerFactoryImpl($Class* clazz) {
	return $of($alloc(TrustManagerFactoryImpl));
}

void TrustManagerFactoryImpl::init$() {
	$TrustManagerFactorySpi::init$();
	$set(this, trustManager, nullptr);
	this->isInitialized = false;
}

void TrustManagerFactoryImpl::engineInit($KeyStore* ks) {
	$useLocalCurrentObjectStackCache();
	if (ks == nullptr) {
		try {
			$set(this, trustManager, getInstance($(static_cast<$Collection*>($TrustStoreManager::getTrustedCerts()))));
		} catch ($SecurityException& se) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
				$SSLLogger::fine("SunX509: skip default keystore"_s, $$new($ObjectArray, {$of(se)}));
			}
		} catch ($Error& err) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
				$SSLLogger::fine("SunX509: skip default keystore"_s, $$new($ObjectArray, {$of(err)}));
			}
			$throw(err);
		} catch ($RuntimeException& re) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
				$SSLLogger::fine("SunX509: skip default keystor"_s, $$new($ObjectArray, {$of(re)}));
			}
			$throw(re);
		} catch ($Exception& e) {
			$init($SSLLogger);
			if ($SSLLogger::isOn$ && $SSLLogger::isOn("trustmanager"_s)) {
				$SSLLogger::fine("SunX509: skip default keystore"_s, $$new($ObjectArray, {$of(e)}));
			}
			$throwNew($KeyStoreException, "problem accessing trust store"_s, e);
		}
	} else {
		$set(this, trustManager, getInstance($(static_cast<$Collection*>($TrustStoreUtil::getTrustedCerts(ks)))));
	}
	this->isInitialized = true;
}

void TrustManagerFactoryImpl::engineInit($ManagerFactoryParameters* spec) {
	$set(this, trustManager, getInstance(spec));
	this->isInitialized = true;
}

$TrustManagerArray* TrustManagerFactoryImpl::engineGetTrustManagers() {
	if (!this->isInitialized) {
		$throwNew($IllegalStateException, "TrustManagerFactoryImpl is not initialized"_s);
	}
	return $new($TrustManagerArray, {static_cast<$TrustManager*>(this->trustManager)});
}

$FileInputStream* TrustManagerFactoryImpl::getFileInputStream($File* file) {
	$init(TrustManagerFactoryImpl);
	$beforeCallerSensitive();
	return $cast($FileInputStream, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($TrustManagerFactoryImpl$1, file))));
}

TrustManagerFactoryImpl::TrustManagerFactoryImpl() {
}

$Class* TrustManagerFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(TrustManagerFactoryImpl, name, initialize, &_TrustManagerFactoryImpl_ClassInfo_, allocate$TrustManagerFactoryImpl);
	return class$;
}

$Class* TrustManagerFactoryImpl::class$ = nullptr;

		} // ssl
	} // security
} // sun