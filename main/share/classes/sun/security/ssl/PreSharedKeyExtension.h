#ifndef _sun_security_ssl_PreSharedKeyExtension_h_
#define _sun_security_ssl_PreSharedKeyExtension_h_
//$ class sun.security.ssl.PreSharedKeyExtension
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ClientHello$ClientHelloMessage;
			class HandshakeAbsence;
			class HandshakeConsumer;
			class HandshakeContext;
			class HandshakeHash;
			class HandshakeProducer;
			class PreSharedKeyExtension$CHPreSharedKeySpec;
			class SSLExtension$ExtensionConsumer;
			class SSLSessionImpl;
			class SSLStringizer;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class PreSharedKeyExtension : public ::java::lang::Object {
	$class(PreSharedKeyExtension, 0, ::java::lang::Object)
public:
	PreSharedKeyExtension();
	void init$();
	static bool canRejoin(::sun::security::ssl::ClientHello$ClientHelloMessage* clientHello, ::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::SSLSessionImpl* s);
	static void checkBinder(::sun::security::ssl::ServerHandshakeContext* shc, ::sun::security::ssl::SSLSessionImpl* session, ::sun::security::ssl::HandshakeHash* pskBinderHash, $bytes* binder);
	static $bytes* computeBinder(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* binderKey, ::sun::security::ssl::SSLSessionImpl* session, ::sun::security::ssl::HandshakeHash* pskBinderHash);
	static $bytes* computeBinder(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* binderKey, ::sun::security::ssl::HandshakeHash* hash, ::sun::security::ssl::SSLSessionImpl* session, ::sun::security::ssl::HandshakeContext* ctx, ::sun::security::ssl::ClientHello$ClientHelloMessage* hello, ::sun::security::ssl::PreSharedKeyExtension$CHPreSharedKeySpec* pskPrototype);
	static $bytes* computeBinder(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* binderKey, ::sun::security::ssl::SSLSessionImpl* session, $bytes* digest);
	static ::javax::crypto::SecretKey* deriveBinderKey(::sun::security::ssl::HandshakeContext* context, ::javax::crypto::SecretKey* psk, ::sun::security::ssl::SSLSessionImpl* session);
	static ::sun::security::ssl::HandshakeProducer* chNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* chOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* chOnLoadAbsence;
	static ::sun::security::ssl::HandshakeConsumer* chOnTradeConsumer;
	static ::sun::security::ssl::HandshakeAbsence* chOnTradAbsence;
	static ::sun::security::ssl::SSLStringizer* chStringizer;
	static ::sun::security::ssl::HandshakeProducer* shNetworkProducer;
	static ::sun::security::ssl::SSLExtension$ExtensionConsumer* shOnLoadConsumer;
	static ::sun::security::ssl::HandshakeAbsence* shOnLoadAbsence;
	static ::sun::security::ssl::SSLStringizer* shStringizer;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PreSharedKeyExtension_h_