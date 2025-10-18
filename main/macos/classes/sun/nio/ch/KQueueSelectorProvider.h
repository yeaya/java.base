#ifndef _sun_nio_ch_KQueueSelectorProvider_h_
#define _sun_nio_ch_KQueueSelectorProvider_h_
//$ class sun.nio.ch.KQueueSelectorProvider
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

class $export KQueueSelectorProvider : public ::sun::nio::ch::SelectorProviderImpl {
	$class(KQueueSelectorProvider, $NO_CLASS_INIT, ::sun::nio::ch::SelectorProviderImpl)
public:
	KQueueSelectorProvider();
	void init$();
	virtual ::java::nio::channels::Channel* inheritedChannel() override;
	virtual ::java::nio::channels::spi::AbstractSelector* openSelector() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_KQueueSelectorProvider_h_