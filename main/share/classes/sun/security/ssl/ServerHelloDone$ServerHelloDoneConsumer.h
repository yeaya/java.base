#ifndef _sun_security_ssl_ServerHelloDone$ServerHelloDoneConsumer_h_
#define _sun_security_ssl_ServerHelloDone$ServerHelloDoneConsumer_h_
//$ class sun.security.ssl.ServerHelloDone$ServerHelloDoneConsumer
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
			class ConnectionContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class ServerHelloDone$ServerHelloDoneConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(ServerHelloDone$ServerHelloDoneConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	ServerHelloDone$ServerHelloDoneConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_ServerHelloDone$ServerHelloDoneConsumer_h_