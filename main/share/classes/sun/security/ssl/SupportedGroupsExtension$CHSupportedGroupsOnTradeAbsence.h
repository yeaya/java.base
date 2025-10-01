#ifndef _sun_security_ssl_SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence_h_
#define _sun_security_ssl_SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence_h_
//$ class sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence
//$ extends sun.security.ssl.HandshakeAbsence

#include <sun/security/ssl/HandshakeAbsence.h>

namespace sun {
	namespace security {
		namespace ssl {
			class ConnectionContext;
			class SSLHandshake$HandshakeMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence : public ::sun::security::ssl::HandshakeAbsence {
	$class(SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence, $NO_CLASS_INIT, ::sun::security::ssl::HandshakeAbsence)
public:
	SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence();
	void init$();
	virtual void absent(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SupportedGroupsExtension$CHSupportedGroupsOnTradeAbsence_h_