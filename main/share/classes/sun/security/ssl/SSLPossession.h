#ifndef _sun_security_ssl_SSLPossession_h_
#define _sun_security_ssl_SSLPossession_h_
//$ interface sun.security.ssl.SSLPossession
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace ssl {

class SSLPossession : public ::java::lang::Object {
	$interface(SSLPossession, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $bytes* encode();
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLPossession_h_