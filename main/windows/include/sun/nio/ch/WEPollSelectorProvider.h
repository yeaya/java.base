#ifndef _sun_nio_ch_WEPollSelectorProvider_h_
#define _sun_nio_ch_WEPollSelectorProvider_h_
//$ class sun.nio.ch.WEPollSelectorProvider
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

class $import WEPollSelectorProvider : public ::sun::nio::ch::SelectorProviderImpl {
	$class(WEPollSelectorProvider, $NO_CLASS_INIT, ::sun::nio::ch::SelectorProviderImpl)
public:
	WEPollSelectorProvider();
	void init$();
	virtual ::java::nio::channels::spi::AbstractSelector* openSelector() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WEPollSelectorProvider_h_