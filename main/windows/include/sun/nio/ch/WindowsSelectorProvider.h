#ifndef _sun_nio_ch_WindowsSelectorProvider_h_
#define _sun_nio_ch_WindowsSelectorProvider_h_
//$ class sun.nio.ch.WindowsSelectorProvider
//$ extends sun.nio.ch.SelectorProviderImpl

#include <sun/nio/ch/SelectorProviderImpl.h>

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AbstractSelector;
			}
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $import WindowsSelectorProvider : public ::sun::nio::ch::SelectorProviderImpl {
	$class(WindowsSelectorProvider, $NO_CLASS_INIT, ::sun::nio::ch::SelectorProviderImpl)
public:
	WindowsSelectorProvider();
	void init$();
	virtual ::java::nio::channels::spi::AbstractSelector* openSelector() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsSelectorProvider_h_