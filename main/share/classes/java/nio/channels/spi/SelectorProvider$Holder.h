#ifndef _java_nio_channels_spi_SelectorProvider$Holder_h_
#define _java_nio_channels_spi_SelectorProvider$Holder_h_
//$ class java.nio.channels.spi.SelectorProvider$Holder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class SelectorProvider;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

class SelectorProvider$Holder : public ::java::lang::Object {
	$class(SelectorProvider$Holder, 0, ::java::lang::Object)
public:
	SelectorProvider$Holder();
	void init$();
	static ::java::nio::channels::spi::SelectorProvider* lambda$provider$0();
	static ::java::nio::channels::spi::SelectorProvider* loadProviderAsService();
	static ::java::nio::channels::spi::SelectorProvider* loadProviderFromProperty();
	static ::java::nio::channels::spi::SelectorProvider* provider();
	static ::java::nio::channels::spi::SelectorProvider* INSTANCE;
};

			} // spi
		} // channels
	} // nio
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_nio_channels_spi_SelectorProvider$Holder_h_