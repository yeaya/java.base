#ifndef _sun_security_ssl_SupportedGroupsExtension$CHSupportedGroupsProducer_h_
#define _sun_security_ssl_SupportedGroupsExtension$CHSupportedGroupsProducer_h_
//$ class sun.security.ssl.SupportedGroupsExtension$CHSupportedGroupsProducer
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

class SupportedGroupsExtension$CHSupportedGroupsProducer : public ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups, public ::sun::security::ssl::HandshakeProducer {
	$class(SupportedGroupsExtension$CHSupportedGroupsProducer, $NO_CLASS_INIT, ::sun::security::ssl::SupportedGroupsExtension$SupportedGroups, ::sun::security::ssl::HandshakeProducer)
public:
	SupportedGroupsExtension$CHSupportedGroupsProducer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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

#endif // _sun_security_ssl_SupportedGroupsExtension$CHSupportedGroupsProducer_h_