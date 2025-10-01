#ifndef _sun_security_ssl_SSLExtension$ClientExtensions_h_
#define _sun_security_ssl_SSLExtension$ClientExtensions_h_
//$ class sun.security.ssl.SSLExtension$ClientExtensions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Collection;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLExtension$ClientExtensions : public ::java::lang::Object {
	$class(SSLExtension$ClientExtensions, 0, ::java::lang::Object)
public:
	SSLExtension$ClientExtensions();
	void init$();
	static ::java::util::Collection* defaults;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLExtension$ClientExtensions_h_