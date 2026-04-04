#include <sun/nio/ch/EPollSelectorProvider.h>
#include <java/nio/channels/Channel.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <sun/nio/ch/EPollSelectorImpl.h>
#include <sun/nio/ch/InheritedChannel.h>
#include <sun/nio/ch/SelectorProviderImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channel = ::java::nio::channels::Channel;
using $AbstractSelector = ::java::nio::channels::spi::AbstractSelector;
using $EPollSelectorImpl = ::sun::nio::ch::EPollSelectorImpl;
using $InheritedChannel = ::sun::nio::ch::InheritedChannel;
using $SelectorProviderImpl = ::sun::nio::ch::SelectorProviderImpl;

namespace sun {
	namespace nio {
		namespace ch {

void EPollSelectorProvider::init$() {
	$SelectorProviderImpl::init$();
}

$AbstractSelector* EPollSelectorProvider::openSelector() {
	return $new($EPollSelectorImpl, this);
}

$Channel* EPollSelectorProvider::inheritedChannel() {
	return $InheritedChannel::getChannel();
}

EPollSelectorProvider::EPollSelectorProvider() {
}

$Class* EPollSelectorProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(EPollSelectorProvider, init$, void)},
		{"inheritedChannel", "()Ljava/nio/channels/Channel;", nullptr, $PUBLIC, $virtualMethod(EPollSelectorProvider, inheritedChannel, $Channel*), "java.io.IOException"},
		{"openSelector", "()Ljava/nio/channels/spi/AbstractSelector;", nullptr, $PUBLIC, $virtualMethod(EPollSelectorProvider, openSelector, $AbstractSelector*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.ch.EPollSelectorProvider",
		"sun.nio.ch.SelectorProviderImpl",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EPollSelectorProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EPollSelectorProvider);
	});
	return class$;
}

$Class* EPollSelectorProvider::class$ = nullptr;

		} // ch
	} // nio
} // sun