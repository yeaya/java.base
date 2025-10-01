#ifndef _sun_net_spi_DefaultProxySelector$2_h_
#define _sun_net_spi_DefaultProxySelector$2_h_
//$ class sun.net.spi.DefaultProxySelector$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace spi {

class DefaultProxySelector$2 : public ::java::security::PrivilegedAction {
	$class(DefaultProxySelector$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DefaultProxySelector$2();
	void init$();
	virtual $Object* run() override;
};

		} // spi
	} // net
} // sun

#endif // _sun_net_spi_DefaultProxySelector$2_h_