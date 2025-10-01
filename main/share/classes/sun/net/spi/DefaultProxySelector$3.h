#ifndef _sun_net_spi_DefaultProxySelector$3_h_
#define _sun_net_spi_DefaultProxySelector$3_h_
//$ class sun.net.spi.DefaultProxySelector$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace spi {
			class DefaultProxySelector;
			class DefaultProxySelector$NonProxyInfo;
		}
	}
}

namespace sun {
	namespace net {
		namespace spi {

class DefaultProxySelector$3 : public ::java::security::PrivilegedAction {
	$class(DefaultProxySelector$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DefaultProxySelector$3();
	void init$(::sun::net::spi::DefaultProxySelector* this$0, $String* val$proto, $String* val$urlhost, ::sun::net::spi::DefaultProxySelector$NonProxyInfo* val$nprop);
	virtual $Object* run() override;
	::sun::net::spi::DefaultProxySelector* this$0 = nullptr;
	::sun::net::spi::DefaultProxySelector$NonProxyInfo* val$nprop = nullptr;
	$String* val$urlhost = nullptr;
	$String* val$proto = nullptr;
};

		} // spi
	} // net
} // sun

#endif // _sun_net_spi_DefaultProxySelector$3_h_