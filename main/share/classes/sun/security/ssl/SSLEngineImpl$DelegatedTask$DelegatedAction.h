#ifndef _sun_security_ssl_SSLEngineImpl$DelegatedTask$DelegatedAction_h_
#define _sun_security_ssl_SSLEngineImpl$DelegatedTask$DelegatedAction_h_
//$ class sun.security.ssl.SSLEngineImpl$DelegatedTask$DelegatedAction
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace sun {
	namespace security {
		namespace ssl {
			class HandshakeContext;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLEngineImpl$DelegatedTask$DelegatedAction : public ::java::security::PrivilegedExceptionAction {
	$class(SSLEngineImpl$DelegatedTask$DelegatedAction, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	SSLEngineImpl$DelegatedTask$DelegatedAction();
	void init$(::sun::security::ssl::HandshakeContext* context);
	virtual $Object* run() override;
	::sun::security::ssl::HandshakeContext* context = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLEngineImpl$DelegatedTask$DelegatedAction_h_