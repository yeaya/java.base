#ifndef _sun_security_ssl_SSLSessionImpl_h_
#define _sun_security_ssl_SSLSessionImpl_h_
//$ class sun.security.ssl.SSLSessionImpl
//$ extends javax.net.ssl.ExtendedSSLSession

#include <java/lang/Array.h>
#include <javax/net/ssl/ExtendedSSLSession.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace net {
		class InetAddress;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace security {
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
		class ArrayList;
		class Collection;
		class List;
		class Queue;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
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
	namespace crypto {
		class SecretKey;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class SNIServerName;
			class SSLSessionContext;
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CipherSuite;
			class HandshakeContext;
			class ProtocolVersion;
			class SSLSessionContextImpl;
			class SessionId;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLSessionImpl : public ::javax::net::ssl::ExtendedSSLSession {
	$class(SSLSessionImpl, 0, ::javax::net::ssl::ExtendedSSLSession)
public:
	SSLSessionImpl();
	void init$();
	void init$(::sun::security::ssl::HandshakeContext* hc, ::sun::security::ssl::CipherSuite* cipherSuite);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::sun::security::ssl::CipherSuite* cipherSuite, ::sun::security::ssl::SessionId* id);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::sun::security::ssl::CipherSuite* cipherSuite, ::sun::security::ssl::SessionId* id, int64_t creationTime);
	void init$(::sun::security::ssl::SSLSessionImpl* baseSession, ::sun::security::ssl::SessionId* newId);
	void init$(::sun::security::ssl::HandshakeContext* hc, ::java::nio::ByteBuffer* buf);
	void addChild(::sun::security::ssl::SSLSessionImpl* session);
	::javax::crypto::SecretKey* consumePreSharedKey();
	$bytes* consumePskIdentity();
	virtual bool equals(Object$* obj) override;
	void expandBufferSizes();
	::sun::security::ssl::SSLSessionImpl* finish();
	virtual int32_t getApplicationBufferSize() override;
	$Array<::java::security::cert::X509Certificate>* getCertificateChain();
	virtual $String* getCipherSuite() override;
	virtual int64_t getCreationTime() override;
	virtual $bytes* getId() override;
	$String* getIdentificationProtocol();
	virtual int64_t getLastAccessedTime() override;
	virtual $Array<::java::security::cert::Certificate>* getLocalCertificates() override;
	virtual ::java::security::Principal* getLocalPrincipal() override;
	virtual $StringArray* getLocalSupportedSignatureAlgorithms() override;
	::java::util::Collection* getLocalSupportedSignatureSchemes();
	::javax::crypto::SecretKey* getMasterSecret();
	int32_t getMaximumPacketSize();
	int32_t getNegotiatedMaxFragSize();
	virtual int32_t getPacketBufferSize() override;
	::java::net::InetAddress* getPeerAddress();
	virtual $Array<::java::security::cert::Certificate>* getPeerCertificates() override;
	virtual $String* getPeerHost() override;
	virtual int32_t getPeerPort() override;
	virtual ::java::security::Principal* getPeerPrincipal() override;
	virtual $StringArray* getPeerSupportedSignatureAlgorithms() override;
	::javax::crypto::SecretKey* getPreSharedKey();
	virtual $String* getProtocol() override;
	::sun::security::ssl::ProtocolVersion* getProtocolVersion();
	$bytes* getPskIdentity();
	virtual ::java::util::List* getRequestedServerNames() override;
	::javax::crypto::SecretKey* getResumptionMasterSecret();
	virtual ::javax::net::ssl::SSLSessionContext* getSessionContext() override;
	::sun::security::ssl::SessionId* getSessionId();
	virtual ::java::util::List* getStatusResponses() override;
	::sun::security::ssl::CipherSuite* getSuite();
	int32_t getTicketAgeAdd();
	int64_t getTicketCreationTime();
	virtual $Object* getValue($String* key) override;
	virtual $StringArray* getValueNames() override;
	virtual int32_t hashCode() override;
	::java::math::BigInteger* incrTicketNonceCounter();
	virtual void invalidate() override;
	bool isLocalAuthenticationValid();
	bool isPSKable();
	bool isRejoinable();
	bool isSessionResumption();
	bool isStatelessable();
	virtual bool isValid() override;
	virtual void putValue($String* key, Object$* value) override;
	virtual void removeValue($String* key) override;
	void setAsSessionResumption(bool flag);
	void setContext(::sun::security::ssl::SSLSessionContextImpl* ctx);
	void setLastAccessedTime(int64_t time);
	void setLocalCertificates($Array<::java::security::cert::X509Certificate>* local);
	void setLocalPrivateKey(::java::security::PrivateKey* privateKey);
	void setMasterSecret(::javax::crypto::SecretKey* secret);
	void setMaximumPacketSize(int32_t maximumPacketSize);
	void setNegotiatedMaxFragSize(int32_t negotiatedMaxFragLen);
	void setPeerCertificates($Array<::java::security::cert::X509Certificate>* peer);
	void setPeerSupportedSignatureAlgorithms(::java::util::Collection* signatureSchemes);
	void setPreSharedKey(::javax::crypto::SecretKey* key);
	void setPskIdentity($bytes* pskIdentity);
	void setResumptionMasterSecret(::javax::crypto::SecretKey* secret);
	void setStatusResponses(::java::util::List* responses);
	void setSuite(::sun::security::ssl::CipherSuite* suite);
	void setTicketAgeAdd(int32_t ticketAgeAdd);
	void setUseDefaultPeerSignAlgs();
	virtual $String* toString() override;
	$bytes* write();
	::sun::security::ssl::ProtocolVersion* protocolVersion = nullptr;
	::sun::security::ssl::SessionId* sessionId = nullptr;
	$Array<::java::security::cert::X509Certificate>* peerCerts = nullptr;
	::sun::security::ssl::CipherSuite* cipherSuite = nullptr;
	::javax::crypto::SecretKey* masterSecret = nullptr;
	bool useExtendedMasterSecret = false;
	int64_t creationTime = 0;
	int64_t lastUsedTime = 0;
	$String* host = nullptr;
	int32_t port = 0;
	::sun::security::ssl::SSLSessionContextImpl* context = nullptr;
	bool invalidated = false;
	$Array<::java::security::cert::X509Certificate>* localCerts = nullptr;
	::java::security::PrivateKey* localPrivateKey = nullptr;
	::java::util::Collection* localSupportedSignAlgs = nullptr;
	::java::util::Collection* peerSupportedSignAlgs = nullptr;
	bool useDefaultPeerSignAlgs = false;
	::java::util::List* statusResponses = nullptr;
	::javax::crypto::SecretKey* resumptionMasterSecret = nullptr;
	::javax::crypto::SecretKey* preSharedKey = nullptr;
	$bytes* pskIdentity = nullptr;
	int64_t ticketCreationTime = 0;
	int32_t ticketAgeAdd = 0;
	int32_t negotiatedMaxFragLen = 0;
	int32_t maximumPacketSize = 0;
	::java::util::Queue* childSessions = nullptr;
	bool isSessionResumption$ = false;
	static const bool defaultRejoinable = true;
	::javax::net::ssl::SNIServerName* serverNameIndication = nullptr;
	::java::util::List* requestedServerNames = nullptr;
	::java::math::BigInteger* ticketNonceCounter = nullptr;
	$String* identificationProtocol = nullptr;
	::java::util::concurrent::locks::ReentrantLock* sessionLock = nullptr;
	static ::java::util::ArrayList* defaultPeerSupportedSignAlgs;
	::java::util::concurrent::ConcurrentHashMap* boundValues = nullptr;
	bool updateNST = false;
	bool acceptLargeFragments = false;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLSessionImpl_h_