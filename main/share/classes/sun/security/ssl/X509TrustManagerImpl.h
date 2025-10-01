#ifndef _sun_security_ssl_X509TrustManagerImpl_h_
#define _sun_security_ssl_X509TrustManagerImpl_h_
//$ class sun.security.ssl.X509TrustManagerImpl
//$ extends javax.net.ssl.X509ExtendedTrustManager

#include <java/lang/Array.h>
#include <javax/net/ssl/X509ExtendedTrustManager.h>

namespace java {
	namespace net {
		class Socket;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class PKIXBuilderParameters;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
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
			class SSLEngine;
			class SSLSession;
		}
	}
}
namespace sun {
	namespace security {
		namespace validator {
			class Validator;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class X509TrustManagerImpl : public ::javax::net::ssl::X509ExtendedTrustManager {
	$class(X509TrustManagerImpl, $NO_CLASS_INIT, ::javax::net::ssl::X509ExtendedTrustManager)
public:
	X509TrustManagerImpl();
	void init$($String* validatorType, ::java::util::Collection* trustedCerts);
	void init$($String* validatorType, ::java::security::cert::PKIXBuilderParameters* params);
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType) override;
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket) override;
	virtual void checkClientTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine) override;
	static void checkIdentity(::javax::net::ssl::SSLSession* session, $Array<::java::security::cert::X509Certificate>* trustedChain, $String* algorithm, bool checkClientTrusted);
	static void checkIdentity($String* hostname, ::java::security::cert::X509Certificate* cert, $String* algorithm);
	static void checkIdentity($String* hostname, ::java::security::cert::X509Certificate* cert, $String* algorithm, bool chainsToPublicCA);
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType) override;
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket) override;
	virtual void checkServerTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine) override;
	void checkTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::java::net::Socket* socket, bool checkClientTrusted);
	void checkTrusted($Array<::java::security::cert::X509Certificate>* chain, $String* authType, ::javax::net::ssl::SSLEngine* engine, bool checkClientTrusted);
	::sun::security::validator::Validator* checkTrustedInit($Array<::java::security::cert::X509Certificate>* chain, $String* authType, bool checkClientTrusted);
	virtual $Array<::java::security::cert::X509Certificate>* getAcceptedIssuers() override;
	static $String* getHostNameInSNI(::java::util::List* sniNames);
	static ::java::util::List* getRequestedServerNames(::java::net::Socket* socket);
	static ::java::util::List* getRequestedServerNames(::javax::net::ssl::SSLEngine* engine);
	static ::java::util::List* getRequestedServerNames(::javax::net::ssl::SSLSession* session);
	::sun::security::validator::Validator* getValidator($String* variant);
	$String* validatorType = nullptr;
	::java::util::Collection* trustedCerts = nullptr;
	::java::security::cert::PKIXBuilderParameters* pkixParams = nullptr;
	$volatile(::sun::security::validator::Validator*) clientValidator = nullptr;
	$volatile(::sun::security::validator::Validator*) serverValidator = nullptr;
	::java::util::concurrent::locks::ReentrantLock* validatorLock = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_X509TrustManagerImpl_h_