#ifndef _sun_security_ssl_KeyUpdate$KeyUpdateKickstartProducer_h_
#define _sun_security_ssl_KeyUpdate$KeyUpdateKickstartProducer_h_
//$ class sun.security.ssl.KeyUpdate$KeyUpdateKickstartProducer
//$ extends sun.security.ssl.SSLProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/SSLProducer.h>

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

class KeyUpdate$KeyUpdateKickstartProducer : public ::sun::security::ssl::SSLProducer {
	$class(KeyUpdate$KeyUpdateKickstartProducer, $NO_CLASS_INIT, ::sun::security::ssl::SSLProducer)
public:
	KeyUpdate$KeyUpdateKickstartProducer();
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_KeyUpdate$KeyUpdateKickstartProducer_h_