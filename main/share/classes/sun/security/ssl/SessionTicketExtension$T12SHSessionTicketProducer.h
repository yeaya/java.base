#ifndef _sun_security_ssl_SessionTicketExtension$T12SHSessionTicketProducer_h_
#define _sun_security_ssl_SessionTicketExtension$T12SHSessionTicketProducer_h_
//$ class sun.security.ssl.SessionTicketExtension$T12SHSessionTicketProducer
//$ extends sun.security.ssl.SupportedGroupsExtension$SupportedGroups
//$ implements sun.security.ssl.HandshakeProducer

#include <java/lang/Array.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroups.h>

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

class SessionTicketExtension$T12SHSessionTicketProducer : public ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups, public ::sun::security::ssl::HandshakeProducer {
	$class(SessionTicketExtension$T12SHSessionTicketProducer, $NO_CLASS_INIT, ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups, ::sun::security::ssl::HandshakeProducer)
public:
	SessionTicketExtension$T12SHSessionTicketProducer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $bytes* produce(::sun::security::ssl::ConnectionContext* context, ::sun::security::ssl::SSLHandshake$HandshakeMessage* message) override;
	virtual $String* toString() override;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SessionTicketExtension$T12SHSessionTicketProducer_h_