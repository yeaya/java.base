#ifndef _sun_security_ssl_SSLContextImpl$DefaultManagersHolder$2_h_
#define _sun_security_ssl_SSLContextImpl$DefaultManagersHolder$2_h_
//$ class sun.security.ssl.SSLContextImpl$DefaultManagersHolder$2
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl$DefaultManagersHolder$2 : public ::java::security::PrivilegedExceptionAction {
	$class(SSLContextImpl$DefaultManagersHolder$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	SSLContextImpl$DefaultManagersHolder$2();
	void init$($String* val$defaultKeyStore);
	virtual $Object* run() override;
	$String* val$defaultKeyStore = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl$DefaultManagersHolder$2_h_