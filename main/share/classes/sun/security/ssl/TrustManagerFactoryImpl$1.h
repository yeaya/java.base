#ifndef _sun_security_ssl_TrustManagerFactoryImpl$1_h_
#define _sun_security_ssl_TrustManagerFactoryImpl$1_h_
//$ class sun.security.ssl.TrustManagerFactoryImpl$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class TrustManagerFactoryImpl$1 : public ::java::security::PrivilegedExceptionAction {
	$class(TrustManagerFactoryImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	TrustManagerFactoryImpl$1();
	void init$(::java::io::File* val$file);
	virtual $Object* run() override;
	::java::io::File* val$file = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_TrustManagerFactoryImpl$1_h_