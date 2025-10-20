#include <sun/security/ssl/SSLContextImpl.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmConstraints.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/CryptoPrimitive.h>
#include <java/security/KeyStore.h>
#include <java/security/SecureRandom.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <javax/net/ssl/KeyManager.h>
#include <javax/net/ssl/SSLContextSpi.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <javax/net/ssl/SSLSessionContext.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <javax/net/ssl/TrustManager.h>
#include <javax/net/ssl/TrustManagerFactory.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>
#include <javax/net/ssl/X509ExtendedTrustManager.h>
#include <javax/net/ssl/X509KeyManager.h>
#include <javax/net/ssl/X509TrustManager.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/ssl/AbstractKeyManagerWrapper.h>
#include <sun/security/ssl/AbstractTrustManagerWrapper.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/DummyX509KeyManager.h>
#include <sun/security/ssl/DummyX509TrustManager.h>
#include <sun/security/ssl/EphemeralKeyManager.h>
#include <sun/security/ssl/HelloCookieManager$Builder.h>
#include <sun/security/ssl/HelloCookieManager.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLAlgorithmConstraints.h>
#include <sun/security/ssl/SSLCipher.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SSLServerSocketFactoryImpl.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSocketFactoryImpl.h>
#include <sun/security/ssl/StatusResponseManager.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef DEFAULT
#undef INSTANCE
#undef KEY_AGREEMENT

using $KeyManagerArray = $Array<::javax::net::ssl::KeyManager>;
using $TrustManagerArray = $Array<::javax::net::ssl::TrustManager>;
using $ProtocolVersionArray = $Array<::sun::security::ssl::ProtocolVersion>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AlgorithmConstraints = ::java::security::AlgorithmConstraints;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $CryptoPrimitive = ::java::security::CryptoPrimitive;
using $KeyStore = ::java::security::KeyStore;
using $SecureRandom = ::java::security::SecureRandom;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Random = ::java::util::Random;
using $Set = ::java::util::Set;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $KeyManager = ::javax::net::ssl::KeyManager;
using $SSLContextSpi = ::javax::net::ssl::SSLContextSpi;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLServerSocketFactory = ::javax::net::ssl::SSLServerSocketFactory;
using $SSLSessionContext = ::javax::net::ssl::SSLSessionContext;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;
using $TrustManager = ::javax::net::ssl::TrustManager;
using $TrustManagerFactory = ::javax::net::ssl::TrustManagerFactory;
using $X509ExtendedKeyManager = ::javax::net::ssl::X509ExtendedKeyManager;
using $X509ExtendedTrustManager = ::javax::net::ssl::X509ExtendedTrustManager;
using $X509KeyManager = ::javax::net::ssl::X509KeyManager;
using $X509TrustManager = ::javax::net::ssl::X509TrustManager;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $AbstractKeyManagerWrapper = ::sun::security::ssl::AbstractKeyManagerWrapper;
using $AbstractTrustManagerWrapper = ::sun::security::ssl::AbstractTrustManagerWrapper;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $DummyX509KeyManager = ::sun::security::ssl::DummyX509KeyManager;
using $DummyX509TrustManager = ::sun::security::ssl::DummyX509TrustManager;
using $EphemeralKeyManager = ::sun::security::ssl::EphemeralKeyManager;
using $HelloCookieManager = ::sun::security::ssl::HelloCookieManager;
using $HelloCookieManager$Builder = ::sun::security::ssl::HelloCookieManager$Builder;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLAlgorithmConstraints = ::sun::security::ssl::SSLAlgorithmConstraints;
using $SSLCipher = ::sun::security::ssl::SSLCipher;
using $SSLLogger = ::sun::security::ssl::SSLLogger;
using $SSLServerSocketFactoryImpl = ::sun::security::ssl::SSLServerSocketFactoryImpl;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSocketFactoryImpl = ::sun::security::ssl::SSLSocketFactoryImpl;
using $StatusResponseManager = ::sun::security::ssl::StatusResponseManager;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLContextImpl_FieldInfo_[] = {
	{"ephemeralKeyManager", "Lsun/security/ssl/EphemeralKeyManager;", nullptr, $PRIVATE | $FINAL, $field(SSLContextImpl, ephemeralKeyManager)},
	{"clientCache", "Lsun/security/ssl/SSLSessionContextImpl;", nullptr, $PRIVATE | $FINAL, $field(SSLContextImpl, clientCache)},
	{"serverCache", "Lsun/security/ssl/SSLSessionContextImpl;", nullptr, $PRIVATE | $FINAL, $field(SSLContextImpl, serverCache)},
	{"isInitialized", "Z", nullptr, $PRIVATE, $field(SSLContextImpl, isInitialized)},
	{"keyManager", "Ljavax/net/ssl/X509ExtendedKeyManager;", nullptr, $PRIVATE, $field(SSLContextImpl, keyManager)},
	{"trustManager", "Ljavax/net/ssl/X509TrustManager;", nullptr, $PRIVATE, $field(SSLContextImpl, trustManager)},
	{"secureRandom", "Ljava/security/SecureRandom;", nullptr, $PRIVATE, $field(SSLContextImpl, secureRandom)},
	{"helloCookieManagerBuilder", "Lsun/security/ssl/HelloCookieManager$Builder;", nullptr, $PRIVATE | $VOLATILE, $field(SSLContextImpl, helloCookieManagerBuilder)},
	{"clientEnableStapling", "Z", nullptr, $PRIVATE | $FINAL, $field(SSLContextImpl, clientEnableStapling)},
	{"serverEnableStapling", "Z", nullptr, $PRIVATE | $FINAL, $field(SSLContextImpl, serverEnableStapling)},
	{"clientCustomizedCipherSuites", "Ljava/util/Collection;", "Ljava/util/Collection<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl, clientCustomizedCipherSuites)},
	{"serverCustomizedCipherSuites", "Ljava/util/Collection;", "Ljava/util/Collection<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SSLContextImpl, serverCustomizedCipherSuites)},
	{"statusResponseManager", "Lsun/security/ssl/StatusResponseManager;", nullptr, $PRIVATE | $VOLATILE, $field(SSLContextImpl, statusResponseManager)},
	{"contextLock", "Ljava/util/concurrent/locks/ReentrantLock;", nullptr, $PRIVATE | $FINAL, $field(SSLContextImpl, contextLock)},
	{"keyHashMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Integer;Lsun/security/ssl/SessionTicketExtension$StatelessKey;>;", $FINAL, $field(SSLContextImpl, keyHashMap)},
	{}
};

$MethodInfo _SSLContextImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SSLContextImpl::*)()>(&SSLContextImpl::init$))},
	{"chooseKeyManager", "([Ljavax/net/ssl/KeyManager;)Ljavax/net/ssl/X509ExtendedKeyManager;", nullptr, $PRIVATE, $method(static_cast<$X509ExtendedKeyManager*(SSLContextImpl::*)($KeyManagerArray*)>(&SSLContextImpl::chooseKeyManager)), "java.security.KeyManagementException"},
	{"chooseTrustManager", "([Ljavax/net/ssl/TrustManager;)Ljavax/net/ssl/X509TrustManager;", nullptr, $PRIVATE, $method(static_cast<$X509TrustManager*(SSLContextImpl::*)($TrustManagerArray*)>(&SSLContextImpl::chooseTrustManager)), "java.security.KeyManagementException"},
	{"createSSLEngineImpl", "()Ljavax/net/ssl/SSLEngine;", nullptr, $ABSTRACT},
	{"createSSLEngineImpl", "(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;", nullptr, $ABSTRACT},
	{"engineCreateSSLEngine", "()Ljavax/net/ssl/SSLEngine;", nullptr, $PROTECTED},
	{"engineCreateSSLEngine", "(Ljava/lang/String;I)Ljavax/net/ssl/SSLEngine;", nullptr, $PROTECTED},
	{"engineGetClientSessionContext", "()Ljavax/net/ssl/SSLSessionContext;", nullptr, $PROTECTED},
	{"engineGetServerSessionContext", "()Ljavax/net/ssl/SSLSessionContext;", nullptr, $PROTECTED},
	{"engineGetServerSocketFactory", "()Ljavax/net/ssl/SSLServerSocketFactory;", nullptr, $PROTECTED},
	{"engineGetSocketFactory", "()Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PROTECTED},
	{"engineInit", "([Ljavax/net/ssl/KeyManager;[Ljavax/net/ssl/TrustManager;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.KeyManagementException"},
	{"getApplicableCipherSuites", "(Ljava/util/Collection;Ljava/util/List;)Ljava/util/List;", "(Ljava/util/Collection<Lsun/security/ssl/CipherSuite;>;Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;)Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($Collection*,$List*)>(&SSLContextImpl::getApplicableCipherSuites))},
	{"getApplicableEnabledCipherSuites", "(Ljava/util/List;Z)Ljava/util/List;", "(Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;Z)Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($List*,bool)>(&SSLContextImpl::getApplicableEnabledCipherSuites))},
	{"getApplicableSupportedCipherSuites", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;)Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($List*)>(&SSLContextImpl::getApplicableSupportedCipherSuites))},
	{"getAvailableProtocols", "([Lsun/security/ssl/ProtocolVersion;)Ljava/util/List;", "([Lsun/security/ssl/ProtocolVersion;)Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($ProtocolVersionArray*)>(&SSLContextImpl::getAvailableProtocols))},
	{"getClientDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $ABSTRACT},
	{"getClientDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $ABSTRACT},
	{"getCustomizedCipherSuites", "(Ljava/lang/String;)Ljava/util/Collection;", "(Ljava/lang/String;)Ljava/util/Collection<Lsun/security/ssl/CipherSuite;>;", $PRIVATE | $STATIC, $method(static_cast<$Collection*(*)($String*)>(&SSLContextImpl::getCustomizedCipherSuites))},
	{"getDefaultCipherSuites", "(Z)Ljava/util/List;", "(Z)Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", 0},
	{"getDefaultProtocolVersions", "(Z)Ljava/util/List;", "(Z)Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", 0},
	{"getEphemeralKeyManager", "()Lsun/security/ssl/EphemeralKeyManager;", nullptr, 0},
	{"getHelloCookieManager", "(Lsun/security/ssl/ProtocolVersion;)Lsun/security/ssl/HelloCookieManager;", nullptr, 0},
	{"getSecureRandom", "()Ljava/security/SecureRandom;", nullptr, 0},
	{"getServerDefaultCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $ABSTRACT},
	{"getServerDefaultProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $ABSTRACT},
	{"getStatusResponseManager", "()Lsun/security/ssl/StatusResponseManager;", nullptr, 0},
	{"getSupportedCipherSuites", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/CipherSuite;>;", $ABSTRACT},
	{"getSupportedProtocolVersions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;", $ABSTRACT},
	{"getX509KeyManager", "()Ljavax/net/ssl/X509ExtendedKeyManager;", nullptr, 0},
	{"getX509TrustManager", "()Ljavax/net/ssl/X509TrustManager;", nullptr, 0},
	{"isDTLS", "()Z", nullptr, $ABSTRACT},
	{"isDefaultCipherSuiteList", "(Ljava/util/List;)Z", "(Ljava/util/List<Lsun/security/ssl/CipherSuite;>;)Z", 0},
	{"isDefaultProtocolVesions", "(Ljava/util/List;)Z", "(Ljava/util/List<Lsun/security/ssl/ProtocolVersion;>;)Z", 0},
	{"isStaplingEnabled", "(Z)Z", nullptr, 0},
	{}
};

$InnerClassInfo _SSLContextImpl_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLContextImpl$DTLSContext", "sun.security.ssl.SSLContextImpl", "DTLSContext", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$CustomizedDTLSContext", "sun.security.ssl.SSLContextImpl", "CustomizedDTLSContext", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLContextImpl$DTLS12Context", "sun.security.ssl.SSLContextImpl", "DTLS12Context", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$DTLS10Context", "sun.security.ssl.SSLContextImpl", "DTLS10Context", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$AbstractDTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractDTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.security.ssl.SSLContextImpl$DefaultSSLContext", "sun.security.ssl.SSLContextImpl", "DefaultSSLContext", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$DefaultSSLContextHolder", "sun.security.ssl.SSLContextImpl", "DefaultSSLContextHolder", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$DefaultManagersHolder", "sun.security.ssl.SSLContextImpl", "DefaultManagersHolder", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$TLSContext", "sun.security.ssl.SSLContextImpl", "TLSContext", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$CustomizedTLSContext", "sun.security.ssl.SSLContextImpl", "CustomizedTLSContext", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLContextImpl$CustomizedSSLProtocols", "sun.security.ssl.SSLContextImpl", "CustomizedSSLProtocols", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLContextImpl$TLS13Context", "sun.security.ssl.SSLContextImpl", "TLS13Context", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$TLS12Context", "sun.security.ssl.SSLContextImpl", "TLS12Context", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$TLS11Context", "sun.security.ssl.SSLContextImpl", "TLS11Context", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$TLS10Context", "sun.security.ssl.SSLContextImpl", "TLS10Context", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.ssl.SSLContextImpl$AbstractTLSContext", "sun.security.ssl.SSLContextImpl", "AbstractTLSContext", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLContextImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.security.ssl.SSLContextImpl",
	"javax.net.ssl.SSLContextSpi",
	nullptr,
	_SSLContextImpl_FieldInfo_,
	_SSLContextImpl_MethodInfo_,
	nullptr,
	nullptr,
	_SSLContextImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLContextImpl$DTLSContext,sun.security.ssl.SSLContextImpl$CustomizedDTLSContext,sun.security.ssl.SSLContextImpl$DTLS12Context,sun.security.ssl.SSLContextImpl$DTLS10Context,sun.security.ssl.SSLContextImpl$AbstractDTLSContext,sun.security.ssl.SSLContextImpl$DefaultSSLContext,sun.security.ssl.SSLContextImpl$DefaultSSLContextHolder,sun.security.ssl.SSLContextImpl$DefaultManagersHolder,sun.security.ssl.SSLContextImpl$DefaultManagersHolder$2,sun.security.ssl.SSLContextImpl$DefaultManagersHolder$1,sun.security.ssl.SSLContextImpl$TLSContext,sun.security.ssl.SSLContextImpl$CustomizedTLSContext,sun.security.ssl.SSLContextImpl$CustomizedSSLProtocols,sun.security.ssl.SSLContextImpl$TLS13Context,sun.security.ssl.SSLContextImpl$TLS12Context,sun.security.ssl.SSLContextImpl$TLS11Context,sun.security.ssl.SSLContextImpl$TLS10Context,sun.security.ssl.SSLContextImpl$AbstractTLSContext"
};

$Object* allocate$SSLContextImpl($Class* clazz) {
	return $of($alloc(SSLContextImpl));
}

$Collection* SSLContextImpl::clientCustomizedCipherSuites = nullptr;
$Collection* SSLContextImpl::serverCustomizedCipherSuites = nullptr;

void SSLContextImpl::init$() {
	$SSLContextSpi::init$();
	this->clientEnableStapling = $Utilities::getBooleanProperty("jdk.tls.client.enableStatusRequestExtension"_s, true);
	this->serverEnableStapling = $Utilities::getBooleanProperty("jdk.tls.server.enableStatusRequestExtension"_s, false);
	$set(this, contextLock, $new($ReentrantLock));
	$set(this, keyHashMap, $new($HashMap));
	$set(this, ephemeralKeyManager, $new($EphemeralKeyManager));
	$set(this, clientCache, $new($SSLSessionContextImpl, false));
	$set(this, serverCache, $new($SSLSessionContextImpl, true));
}

void SSLContextImpl::engineInit($KeyManagerArray* km, $TrustManagerArray* tm$renamed, $SecureRandom* sr) {
	$useLocalCurrentObjectStackCache();
	$var($TrustManagerArray, tm, tm$renamed);
	this->isInitialized = false;
	$set(this, keyManager, chooseKeyManager(km));
	if (tm == nullptr) {
		try {
			$var($TrustManagerFactory, tmf, $TrustManagerFactory::getInstance($($TrustManagerFactory::getDefaultAlgorithm())));
			$nc(tmf)->init(($KeyStore*)nullptr);
			$assign(tm, tmf->getTrustManagers());
		} catch ($Exception&) {
			$catch();
		}
	}
	$set(this, trustManager, chooseTrustManager(tm));
	if (sr == nullptr) {
		$set(this, secureRandom, $new($SecureRandom));
	} else {
		$set(this, secureRandom, sr);
	}
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,sslctx"_s)) {
		$SSLLogger::finest("trigger seeding of SecureRandom"_s, $$new($ObjectArray, 0));
	}
	$nc(this->secureRandom)->nextInt();
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,sslctx"_s)) {
		$SSLLogger::finest("done seeding of SecureRandom"_s, $$new($ObjectArray, 0));
	}
	this->isInitialized = true;
}

$X509TrustManager* SSLContextImpl::chooseTrustManager($TrustManagerArray* tm) {
	for (int32_t i = 0; tm != nullptr && i < tm->length; ++i) {
		if ($instanceOf($X509TrustManager, tm->get(i))) {
			if ($instanceOf($X509ExtendedTrustManager, tm->get(i))) {
				return $cast($X509TrustManager, tm->get(i));
			} else {
				return $new($AbstractTrustManagerWrapper, $cast($X509TrustManager, tm->get(i)));
			}
		}
	}
	$init($DummyX509TrustManager);
	return $DummyX509TrustManager::INSTANCE;
}

$X509ExtendedKeyManager* SSLContextImpl::chooseKeyManager($KeyManagerArray* kms) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; kms != nullptr && i < kms->length; ++i) {
		$var($KeyManager, km, kms->get(i));
		if (!($instanceOf($X509KeyManager, km))) {
			continue;
		}
		if ($instanceOf($X509ExtendedKeyManager, km)) {
			return $cast($X509ExtendedKeyManager, km);
		}
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,sslctx"_s)) {
			$SSLLogger::warning("X509KeyManager passed to SSLContext.init():  need an X509ExtendedKeyManager for SSLEngine use"_s, $$new($ObjectArray, 0));
		}
		return $new($AbstractKeyManagerWrapper, $cast($X509KeyManager, km));
	}
	$init($DummyX509KeyManager);
	return $DummyX509KeyManager::INSTANCE;
}

$SSLEngine* SSLContextImpl::engineCreateSSLEngine() {
	if (!this->isInitialized) {
		$throwNew($IllegalStateException, "SSLContext is not initialized"_s);
	}
	return createSSLEngineImpl();
}

$SSLEngine* SSLContextImpl::engineCreateSSLEngine($String* host, int32_t port) {
	if (!this->isInitialized) {
		$throwNew($IllegalStateException, "SSLContext is not initialized"_s);
	}
	return createSSLEngineImpl(host, port);
}

$SSLSocketFactory* SSLContextImpl::engineGetSocketFactory() {
	if (!this->isInitialized) {
		$throwNew($IllegalStateException, "SSLContext is not initialized"_s);
	}
	if (isDTLS()) {
		$throwNew($UnsupportedOperationException, "DTLS not supported with SSLSocket"_s);
	}
	return $new($SSLSocketFactoryImpl, this);
}

$SSLServerSocketFactory* SSLContextImpl::engineGetServerSocketFactory() {
	if (!this->isInitialized) {
		$throwNew($IllegalStateException, "SSLContext is not initialized"_s);
	}
	if (isDTLS()) {
		$throwNew($UnsupportedOperationException, "DTLS not supported with SSLServerSocket"_s);
	}
	return $new($SSLServerSocketFactoryImpl, this);
}

$SSLSessionContext* SSLContextImpl::engineGetClientSessionContext() {
	return this->clientCache;
}

$SSLSessionContext* SSLContextImpl::engineGetServerSessionContext() {
	return this->serverCache;
}

$SecureRandom* SSLContextImpl::getSecureRandom() {
	return this->secureRandom;
}

$X509ExtendedKeyManager* SSLContextImpl::getX509KeyManager() {
	return this->keyManager;
}

$X509TrustManager* SSLContextImpl::getX509TrustManager() {
	return this->trustManager;
}

$EphemeralKeyManager* SSLContextImpl::getEphemeralKeyManager() {
	return this->ephemeralKeyManager;
}

$HelloCookieManager* SSLContextImpl::getHelloCookieManager($ProtocolVersion* protocolVersion) {
	if (this->helloCookieManagerBuilder == nullptr) {
		$nc(this->contextLock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (this->helloCookieManagerBuilder == nullptr) {
					$set(this, helloCookieManagerBuilder, $new($HelloCookieManager$Builder, this->secureRandom));
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(this->contextLock)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return $nc(this->helloCookieManagerBuilder)->valueOf(protocolVersion);
}

$StatusResponseManager* SSLContextImpl::getStatusResponseManager() {
	$useLocalCurrentObjectStackCache();
	if (this->serverEnableStapling && this->statusResponseManager == nullptr) {
		$nc(this->contextLock)->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (this->statusResponseManager == nullptr) {
					$init($SSLLogger);
					if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,sslctx"_s)) {
						$SSLLogger::finest("Initializing StatusResponseManager"_s, $$new($ObjectArray, 0));
					}
					$set(this, statusResponseManager, $new($StatusResponseManager));
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(this->contextLock)->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return this->statusResponseManager;
}

$List* SSLContextImpl::getDefaultProtocolVersions(bool roleIsServer) {
	return roleIsServer ? getServerDefaultProtocolVersions() : getClientDefaultProtocolVersions();
}

$List* SSLContextImpl::getDefaultCipherSuites(bool roleIsServer) {
	return roleIsServer ? getServerDefaultCipherSuites() : getClientDefaultCipherSuites();
}

bool SSLContextImpl::isDefaultProtocolVesions($List* protocols) {
	bool var$0 = (protocols == getServerDefaultProtocolVersions());
	return var$0 || (protocols == getClientDefaultProtocolVersions());
}

bool SSLContextImpl::isDefaultCipherSuiteList($List* cipherSuites) {
	bool var$0 = (cipherSuites == getServerDefaultCipherSuites());
	return var$0 || (cipherSuites == getClientDefaultCipherSuites());
}

bool SSLContextImpl::isStaplingEnabled(bool isClient) {
	return isClient ? this->clientEnableStapling : this->serverEnableStapling;
}

$List* SSLContextImpl::getApplicableSupportedCipherSuites($List* protocols) {
	$init(SSLContextImpl);
	return getApplicableCipherSuites($($CipherSuite::allowedCipherSuites()), protocols);
}

$List* SSLContextImpl::getApplicableEnabledCipherSuites($List* protocols, bool isClient) {
	$init(SSLContextImpl);
	if (isClient) {
		if (!$nc(SSLContextImpl::clientCustomizedCipherSuites)->isEmpty()) {
			return getApplicableCipherSuites(SSLContextImpl::clientCustomizedCipherSuites, protocols);
		}
	} else {
		if (!$nc(SSLContextImpl::serverCustomizedCipherSuites)->isEmpty()) {
			return getApplicableCipherSuites(SSLContextImpl::serverCustomizedCipherSuites, protocols);
		}
	}
	return getApplicableCipherSuites($($CipherSuite::defaultCipherSuites()), protocols);
}

$List* SSLContextImpl::getApplicableCipherSuites($Collection* allowedCipherSuites, $List* protocols) {
	$init(SSLContextImpl);
	$useLocalCurrentObjectStackCache();
	$var($LinkedHashSet, suites, $new($LinkedHashSet));
	if (protocols != nullptr && (!protocols->isEmpty())) {
		{
			$var($Iterator, i$, $nc(allowedCipherSuites)->iterator());
			for (; $nc(i$)->hasNext();) {
				$CipherSuite* suite = $cast($CipherSuite, i$->next());
				{
					if (!$nc(suite)->isAvailable()) {
						continue;
					}
					bool isSupported = false;
					{
						$var($Iterator, i$, protocols->iterator());
						for (; $nc(i$)->hasNext();) {
							$ProtocolVersion* protocol = $cast($ProtocolVersion, i$->next());
							{
								bool var$0 = !$nc(suite)->supports(protocol);
								if (var$0 || !$nc(suite)->bulkCipher->isAvailable()) {
									continue;
								}
								$init($SSLAlgorithmConstraints);
								$init($CryptoPrimitive);
								if ($nc($SSLAlgorithmConstraints::DEFAULT)->permits($($EnumSet::of($CryptoPrimitive::KEY_AGREEMENT)), $nc(suite)->name$, nullptr)) {
									suites->add(suite);
									isSupported = true;
								} else {
									$init($SSLLogger);
									if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,sslctx,verbose"_s)) {
										$SSLLogger::fine($$str({"Ignore disabled cipher suite: "_s, $nc(suite)->name$}), $$new($ObjectArray, 0));
									}
								}
								break;
							}
						}
					}
					$init($SSLLogger);
					if (!isSupported && $SSLLogger::isOn$ && $SSLLogger::isOn("ssl,sslctx,verbose"_s)) {
						$SSLLogger::finest($$str({"Ignore unsupported cipher suite: "_s, suite}), $$new($ObjectArray, 0));
					}
				}
			}
		}
	}
	return $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(static_cast<$HashSet*>(suites)))));
}

$Collection* SSLContextImpl::getCustomizedCipherSuites($String* propertyName) {
	$init(SSLContextImpl);
	$useLocalCurrentObjectStackCache();
	$var($String, property, $GetPropertyAction::privilegedGetProperty(propertyName));
	$init($SSLLogger);
	if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,sslctx"_s)) {
		$SSLLogger::fine($$str({"System property "_s, propertyName, " is set to \'"_s, property, "\'"_s}), $$new($ObjectArray, 0));
	}
	if (property != nullptr && !property->isEmpty()) {
		bool var$1 = property->length() > 1;
		bool var$0 = var$1 && property->charAt(0) == u'\"';
		if (var$0 && property->charAt(property->length() - 1) == u'\"') {
			$assign(property, property->substring(1, property->length() - 1));
		}
	}
	if (property != nullptr && !property->isEmpty()) {
		$var($StringArray, cipherSuiteNames, property->split(","_s));
		$var($Collection, cipherSuites, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>($new($ArrayList, cipherSuiteNames->length)))));
		for (int32_t i = 0; i < cipherSuiteNames->length; ++i) {
			cipherSuiteNames->set(i, $($nc(cipherSuiteNames->get(i))->trim()));
			if ($nc(cipherSuiteNames->get(i))->isEmpty()) {
				continue;
			}
			$CipherSuite* suite = nullptr;
			try {
				suite = $CipherSuite::nameOf(cipherSuiteNames->get(i));
			} catch ($IllegalArgumentException&) {
				$var($IllegalArgumentException, iae, $catch());
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,sslctx"_s)) {
					$SSLLogger::fine($$str({"Unknown or unsupported cipher suite name: "_s, cipherSuiteNames->get(i)}), $$new($ObjectArray, 0));
				}
				continue;
			}
			if (suite != nullptr && suite->isAvailable()) {
				cipherSuites->add(suite);
			} else {
				if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,sslctx"_s)) {
					$SSLLogger::fine($$str({"The current installed providers do not support cipher suite: "_s, cipherSuiteNames->get(i)}), $$new($ObjectArray, 0));
				}
			}
		}
		return cipherSuites;
	}
	return $Collections::emptyList();
}

$List* SSLContextImpl::getAvailableProtocols($ProtocolVersionArray* protocolCandidates) {
	$init(SSLContextImpl);
	$useLocalCurrentObjectStackCache();
	$var($List, availableProtocols, $Collections::emptyList());
	if (protocolCandidates != nullptr && protocolCandidates->length != 0) {
		$assign(availableProtocols, $new($ArrayList, protocolCandidates->length));
		{
			$var($ProtocolVersionArray, arr$, protocolCandidates);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$ProtocolVersion* p = arr$->get(i$);
				{
					if ($nc(p)->isAvailable) {
						availableProtocols->add(p);
					}
				}
			}
		}
	}
	return availableProtocols;
}

void clinit$SSLContextImpl($Class* class$) {
	$assignStatic(SSLContextImpl::clientCustomizedCipherSuites, SSLContextImpl::getCustomizedCipherSuites("jdk.tls.client.cipherSuites"_s));
	$assignStatic(SSLContextImpl::serverCustomizedCipherSuites, SSLContextImpl::getCustomizedCipherSuites("jdk.tls.server.cipherSuites"_s));
}

SSLContextImpl::SSLContextImpl() {
}

$Class* SSLContextImpl::load$($String* name, bool initialize) {
	$loadClass(SSLContextImpl, name, initialize, &_SSLContextImpl_ClassInfo_, clinit$SSLContextImpl, allocate$SSLContextImpl);
	return class$;
}

$Class* SSLContextImpl::class$ = nullptr;

		} // ssl
	} // security
} // sun