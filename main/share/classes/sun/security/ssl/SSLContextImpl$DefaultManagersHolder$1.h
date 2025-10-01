#ifndef _sun_security_ssl_SSLContextImpl$DefaultManagersHolder$1_h_
#define _sun_security_ssl_SSLContextImpl$DefaultManagersHolder$1_h_
//$ class sun.security.ssl.SSLContextImpl$DefaultManagersHolder$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLContextImpl$DefaultManagersHolder$1 : public ::java::security::PrivilegedExceptionAction {
	$class(SSLContextImpl$DefaultManagersHolder$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	SSLContextImpl$DefaultManagersHolder$1();
	void init$(::java::util::Map* val$props);
	virtual $Object* run() override;
	::java::util::Map* val$props = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLContextImpl$DefaultManagersHolder$1_h_