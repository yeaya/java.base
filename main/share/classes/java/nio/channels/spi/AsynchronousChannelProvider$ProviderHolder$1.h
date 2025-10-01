#ifndef _java_nio_channels_spi_AsynchronousChannelProvider$ProviderHolder$1_h_
#define _java_nio_channels_spi_AsynchronousChannelProvider$ProviderHolder$1_h_
//$ class java.nio.channels.spi.AsynchronousChannelProvider$ProviderHolder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

class AsynchronousChannelProvider$ProviderHolder$1 : public ::java::security::PrivilegedAction {
	$class(AsynchronousChannelProvider$ProviderHolder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	AsynchronousChannelProvider$ProviderHolder$1();
	void init$();
	virtual $Object* run() override;
};

			} // spi
		} // channels
	} // nio
} // java

#endif // _java_nio_channels_spi_AsynchronousChannelProvider$ProviderHolder$1_h_