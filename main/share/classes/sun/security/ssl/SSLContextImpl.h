#ifndef _sun_security_ssl_SSLContextImpl_h_
#define _sun_security_ssl_SSLContextImpl_h_
//$ class sun.security.ssl.SSLContextImpl
//$ extends javax.net.ssl.SSLContextSpi

#include <java/lang/Array.h>
#include <javax/net/ssl/SSLContextSpi.h>

namespace java {
	namespace security {
		class SecureRandom;
	}
}
namespace java {
	namespace util {
		class Collection;
		class HashMap;
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class KeyManager;
			class SSLEngine;
			class SSLServerSocketFactory;
			class SSLSessionContext;
			class SSLSocketFactory;
			class TrustManager;
			class X509ExtendedKeyManager;
			class X509TrustManager;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class EphemeralKeyManager;
			class HelloCookieManager;
			class HelloCookieManager$Builder;
			class ProtocolVersion;
			class SSLSessionContextImpl;
			class StatusResponseManager;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl : public ::javax::net::ssl::SSLContextSpi {
	$class(SSLContextImpl, 0, ::javax::net::ssl::SSLContextSpi)
public:
	SSLContextImpl();
	void init$();
	::javax::net::ssl::X509ExtendedKeyManager* chooseKeyManager($Array<::javax::net::ssl::KeyManager>* kms);
	::javax::net::ssl::X509TrustManager* chooseTrustManager($Array<::javax::net::ssl::TrustManager>* tm);
	virtual ::javax::net::ssl::SSLEngine* createSSLEngineImpl() {return nullptr;}
	virtual ::javax::net::ssl::SSLEngine* createSSLEngineImpl($String* host, int32_t port) {return nullptr;}
	virtual ::javax::net::ssl::SSLEngine* engineCreateSSLEngine() override;
	virtual ::javax::net::ssl::SSLEngine* engineCreateSSLEngine($String* host, int32_t port) override;
	virtual ::javax::net::ssl::SSLSessionContext* engineGetClientSessionContext() override;
	virtual ::javax::net::ssl::SSLSessionContext* engineGetServerSessionContext() override;
	virtual ::javax::net::ssl::SSLServerSocketFactory* engineGetServerSocketFactory() override;
	virtual ::javax::net::ssl::SSLSocketFactory* engineGetSocketFactory() override;
	virtual void engineInit($Array<::javax::net::ssl::KeyManager>* km, $Array<::javax::net::ssl::TrustManager>* tm, ::java::security::SecureRandom* sr) override;
	static ::java::util::List* getApplicableCipherSuites(::java::util::Collection* allowedCipherSuites, ::java::util::List* protocols);
	static ::java::util::List* getApplicableEnabledCipherSuites(::java::util::List* protocols, bool isClient);
	static ::java::util::List* getApplicableSupportedCipherSuites(::java::util::List* protocols);
	static ::java::util::List* getAvailableProtocols($Array<::sun::security::ssl::ProtocolVersion>* protocolCandidates);
	virtual ::java::util::List* getClientDefaultCipherSuites() {return nullptr;}
	virtual ::java::util::List* getClientDefaultProtocolVersions() {return nullptr;}
	static ::java::util::Collection* getCustomizedCipherSuites($String* propertyName);
	virtual ::java::util::List* getDefaultCipherSuites(bool roleIsServer);
	virtual ::java::util::List* getDefaultProtocolVersions(bool roleIsServer);
	virtual ::sun::security::ssl::EphemeralKeyManager* getEphemeralKeyManager();
	virtual ::sun::security::ssl::HelloCookieManager* getHelloCookieManager(::sun::security::ssl::ProtocolVersion* protocolVersion);
	virtual ::java::security::SecureRandom* getSecureRandom();
	virtual ::java::util::List* getServerDefaultCipherSuites() {return nullptr;}
	virtual ::java::util::List* getServerDefaultProtocolVersions() {return nullptr;}
	virtual ::sun::security::ssl::StatusResponseManager* getStatusResponseManager();
	virtual ::java::util::List* getSupportedCipherSuites() {return nullptr;}
	virtual ::java::util::List* getSupportedProtocolVersions() {return nullptr;}
	virtual ::javax::net::ssl::X509ExtendedKeyManager* getX509KeyManager();
	virtual ::javax::net::ssl::X509TrustManager* getX509TrustManager();
	virtual bool isDTLS() {return false;}
	virtual bool isDefaultCipherSuiteList(::java::util::List* cipherSuites);
	virtual bool isDefaultProtocolVesions(::java::util::List* protocols);
	virtual bool isStaplingEnabled(bool isClient);
	::sun::security::ssl::EphemeralKeyManager* ephemeralKeyManager = nullptr;
	::sun::security::ssl::SSLSessionContextImpl* clientCache = nullptr;
	::sun::security::ssl::SSLSessionContextImpl* serverCache = nullptr;
	bool isInitialized = false;
	::javax::net::ssl::X509ExtendedKeyManager* keyManager = nullptr;
	::javax::net::ssl::X509TrustManager* trustManager = nullptr;
	::java::security::SecureRandom* secureRandom = nullptr;
	$volatile(::sun::security::ssl::HelloCookieManager$Builder*) helloCookieManagerBuilder = nullptr;
	bool clientEnableStapling = false;
	bool serverEnableStapling = false;
	static ::java::util::Collection* clientCustomizedCipherSuites;
	static ::java::util::Collection* serverCustomizedCipherSuites;
	$volatile(::sun::security::ssl::StatusResponseManager*) statusResponseManager = nullptr;
	::java::util::concurrent::locks::ReentrantLock* contextLock = nullptr;
	::java::util::HashMap* keyHashMap = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl_h_