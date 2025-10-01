#ifndef _sun_security_ssl_Finished$T13FinishedConsumer_h_
#define _sun_security_ssl_Finished$T13FinishedConsumer_h_
//$ class sun.security.ssl.Finished$T13FinishedConsumer
//$ extends sun.security.ssl.SSLConsumer

#include <sun/security/ssl/SSLConsumer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class ClientHandshakeContext;
			class ConnectionContext;
			class ServerHandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class Finished$T13FinishedConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(Finished$T13FinishedConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	Finished$T13FinishedConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
	void onConsumeFinished(::sun::security::ssl::ClientHandshakeContext* chc, ::java::nio::ByteBuffer* message);
	void onConsumeFinished(::sun::security::ssl::ServerHandshakeContext* shc, ::java::nio::ByteBuffer* message);
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_Finished$T13FinishedConsumer_h_