#ifndef _sun_net_spi_DefaultProxySelector$1_h_
#define _sun_net_spi_DefaultProxySelector$1_h_
//$ class sun.net.spi.DefaultProxySelector$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace spi {

class DefaultProxySelector$1 : public ::java::security::PrivilegedAction {
	$class(DefaultProxySelector$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DefaultProxySelector$1();
	void init$();
	virtual $Object* run() override;
};

		} // spi
	} // net
} // sun

#endif // _sun_net_spi_DefaultProxySelector$1_h_