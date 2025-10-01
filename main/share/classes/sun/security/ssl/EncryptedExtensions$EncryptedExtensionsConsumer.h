#ifndef _sun_security_ssl_EncryptedExtensions$EncryptedExtensionsConsumer_h_
#define _sun_security_ssl_EncryptedExtensions$EncryptedExtensionsConsumer_h_
//$ class sun.security.ssl.EncryptedExtensions$EncryptedExtensionsConsumer
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

class EncryptedExtensions$EncryptedExtensionsConsumer : public ::sun::security::ssl::SSLConsumer {
	$class(EncryptedExtensions$EncryptedExtensionsConsumer, $NO_CLASS_INIT, ::sun::security::ssl::SSLConsumer)
public:
	EncryptedExtensions$EncryptedExtensionsConsumer();
	void init$();
	virtual void consume(::sun::security::ssl::ConnectionContext* context, ::java::nio::ByteBuffer* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_EncryptedExtensions$EncryptedExtensionsConsumer_h_