#ifndef _java_nio_channels_spi_AsynchronousChannelProvider$ProviderHolder_h_
#define _java_nio_channels_spi_AsynchronousChannelProvider$ProviderHolder_h_
//$ class java.nio.channels.spi.AsynchronousChannelProvider$ProviderHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AsynchronousChannelProvider;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

class AsynchronousChannelProvider$ProviderHolder : public ::java::lang::Object {
	$class(AsynchronousChannelProvider$ProviderHolder, 0, ::java::lang::Object)
public:
	AsynchronousChannelProvider$ProviderHolder();
	void init$();
	static ::java::nio::channels::spi::AsynchronousChannelProvider* load();
	static ::java::nio::channels::spi::AsynchronousChannelProvider* loadProviderAsService();
	static ::java::nio::channels::spi::AsynchronousChannelProvider* loadProviderFromProperty();
	static ::java::nio::channels::spi::AsynchronousChannelProvider* provider;
};

			} // spi
		} // channels
	} // nio
} // java

#endif // _java_nio_channels_spi_AsynchronousChannelProvider$ProviderHolder_h_