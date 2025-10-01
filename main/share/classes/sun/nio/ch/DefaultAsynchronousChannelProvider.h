#ifndef _sun_nio_ch_DefaultAsynchronousChannelProvider_h_
#define _sun_nio_ch_DefaultAsynchronousChannelProvider_h_
//$ class sun.nio.ch.DefaultAsynchronousChannelProvider
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

namespace sun {
	namespace nio {
		namespace ch {

class $export DefaultAsynchronousChannelProvider : public ::java::lang::Object {
	$class(DefaultAsynchronousChannelProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultAsynchronousChannelProvider();
	void init$();
	static ::java::nio::channels::spi::AsynchronousChannelProvider* create();
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_DefaultAsynchronousChannelProvider_h_