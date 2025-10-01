#ifndef _sun_nio_ch_PollSelectorProvider_h_
#define _sun_nio_ch_PollSelectorProvider_h_
//$ class sun.nio.ch.PollSelectorProvider
//$ extends sun.nio.ch.SelectorProviderImpl

#include <sun/nio/ch/SelectorProviderImpl.h>

namespace java {
	namespace nio {
		namespace channels {
			class Channel;
		}
	}
}
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

class $import PollSelectorProvider : public ::sun::nio::ch::SelectorProviderImpl {
	$class(PollSelectorProvider, $NO_CLASS_INIT, ::sun::nio::ch::SelectorProviderImpl)
public:
	PollSelectorProvider();
	void init$();
	virtual ::java::nio::channels::Channel* inheritedChannel() override;
	virtual ::java::nio::channels::spi::AbstractSelector* openSelector() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_PollSelectorProvider_h_