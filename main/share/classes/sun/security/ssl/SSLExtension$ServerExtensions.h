#ifndef _sun_security_ssl_SSLExtension$ServerExtensions_h_
#define _sun_security_ssl_SSLExtension$ServerExtensions_h_
//$ class sun.security.ssl.SSLExtension$ServerExtensions
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

class SSLExtension$ServerExtensions : public ::java::lang::Object {
	$class(SSLExtension$ServerExtensions, 0, ::java::lang::Object)
public:
	SSLExtension$ServerExtensions();
	void init$();
	static ::java::util::Collection* defaults;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLExtension$ServerExtensions_h_