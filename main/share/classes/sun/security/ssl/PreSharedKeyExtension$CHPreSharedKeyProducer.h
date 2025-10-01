#ifndef _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeyProducer_h_
#define _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeyProducer_h_
//$ class sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyProducer
//$ extends sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
			class PreSharedKeyExtension$CHPreSharedKeySpec;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class PreSharedKeyExtension$CHPreSharedKeyProducer : public ::sun::security::ssl::HandshakeProducer {
	$class(PreSharedKeyExtension$CHPreSharedKeyProducer, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeProducer)
public:
	PreSharedKeyExtension$CHPreSharedKeyProducer();
	void init$();
	::sun::security::ssl::PreSharedKeyExtension$CHPreSharedKeySpec* createPskPrototype(int32_t hashLength, ::java::util::List* identities);
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_PreSharedKeyExtension$CHPreSharedKeyProducer_h_