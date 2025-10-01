#ifndef _sun_security_ssl_X509KeyManagerImpl_h_
#define _sun_security_ssl_X509KeyManagerImpl_h_
//$ class sun.security.ssl.X509KeyManagerImpl
//$ extends javax.net.ssl.X509ExtendedKeyManager

#include <java/lang/Array.h>
#include <javax/net/ssl/X509ExtendedKeyManager.h>

namespace java {
	namespace net {
		class Socket;
	}
}
namespace java {
	namespace security {
		class AlgorithmConstraints;
		class KeyStore$Builder;
		class KeyStore$PrivateKeyEntry;
		class Principal;
		class PrivateKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class List;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SSLEngine;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class X509KeyManagerImpl$CheckType;
			class X509KeyManagerImpl$EntryStatus;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class X509KeyManagerImpl : public ::javax::net::ssl::X509ExtendedKeyManager {
	$class(X509KeyManagerImpl, $NO_CLASS_INIT, ::javax::net::ssl::X509ExtendedKeyManager)
public:
	X509KeyManagerImpl();
	void init$(::java::security::KeyStore$Builder* builder);
	void init$(::java::util::List* builders);
	$String* chooseAlias(::java::util::List* keyTypeList, $Array<::java::security::Principal>* issuers, ::sun::security::ssl::X509KeyManagerImpl$CheckType* checkType, ::java::security::AlgorithmConstraints* constraints);
	$String* chooseAlias(::java::util::List* keyTypeList, $Array<::java::security::Principal>* issuers, ::sun::security::ssl::X509KeyManagerImpl$CheckType* checkType, ::java::security::AlgorithmConstraints* constraints, ::java::util::List* requestedServerNames, $String* idAlgorithm);
	virtual $String* chooseClientAlias($StringArray* keyTypes, $Array<::java::security::Principal>* issuers, ::java::net::Socket* socket) override;
	virtual $String* chooseEngineClientAlias($StringArray* keyTypes, $Array<::java::security::Principal>* issuers, ::javax::net::ssl::SSLEngine* engine) override;
	virtual $String* chooseEngineServerAlias($String* keyType, $Array<::java::security::Principal>* issuers, ::javax::net::ssl::SSLEngine* engine) override;
	virtual $String* chooseServerAlias($String* keyType, $Array<::java::security::Principal>* issuers, ::java::net::Socket* socket) override;
	static bool conformsToAlgorithmConstraints(::java::security::AlgorithmConstraints* constraints, $Array<::java::security::cert::Certificate>* chain, $String* variant);
	::java::security::AlgorithmConstraints* getAlgorithmConstraints(::java::net::Socket* socket);
	::java::security::AlgorithmConstraints* getAlgorithmConstraints(::javax::net::ssl::SSLEngine* engine);
	$StringArray* getAliases($String* keyType, $Array<::java::security::Principal>* issuers, ::sun::security::ssl::X509KeyManagerImpl$CheckType* checkType, ::java::security::AlgorithmConstraints* constraints);
	::java::util::List* getAliases(int32_t builderIndex, ::java::util::List* keyTypes, ::java::util::Set* issuerSet, bool findAll, ::sun::security::ssl::X509KeyManagerImpl$CheckType* checkType, ::java::security::AlgorithmConstraints* constraints, ::java::util::List* requestedServerNames, $String* idAlgorithm);
	virtual $Array<::java::security::cert::X509Certificate>* getCertificateChain($String* alias) override;
	virtual $StringArray* getClientAliases($String* keyType, $Array<::java::security::Principal>* issuers) override;
	::java::security::KeyStore$PrivateKeyEntry* getEntry($String* alias);
	::java::util::Set* getIssuerSet($Array<::java::security::Principal>* issuers);
	static ::java::util::List* getKeyTypes($StringArray* keyTypes);
	virtual ::java::security::PrivateKey* getPrivateKey($String* alias) override;
	virtual $StringArray* getServerAliases($String* keyType, $Array<::java::security::Principal>* issuers) override;
	$String* makeAlias(::sun::security::ssl::X509KeyManagerImpl$EntryStatus* entry);
	$StringArray* toAliases(::java::util::List* results);
	static ::java::util::Date* verificationDate;
	::java::util::List* builders = nullptr;
	::java::util::concurrent::atomic::AtomicLong* uidCounter = nullptr;
	::java::util::Map* entryCacheMap = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_X509KeyManagerImpl_h_