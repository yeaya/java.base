#include <sun/nio/ch/WEPollSelectorProvider.h>
#include <java/nio/channels/spi/AbstractSelector.h>
#include <java/nio/channels/spi/SelectorProvider.h>
#include <sun/nio/ch/SelectorProviderImpl.h>
#include <sun/nio/ch/WEPollSelectorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSelector = ::java::nio::channels::spi::AbstractSelector;
using $SelectorProviderImpl = ::sun::nio::ch::SelectorProviderImpl;
using $WEPollSelectorImpl = ::sun::nio::ch::WEPollSelectorImpl;

namespace sun {
	namespace nio {
		namespace ch {

void WEPollSelectorProvider::init$() {
	$SelectorProviderImpl::init$();
}

$AbstractSelector* WEPollSelectorProvider::openSelector() {
	return $new($WEPollSelectorImpl, this);
}

WEPollSelectorProvider::WEPollSelectorProvider() {
}

$Class* WEPollSelectorProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WEPollSelectorProvider, init$, void)},
		{"openSelector", "()Ljava/nio/channels/spi/AbstractSelector;", nullptr, $PUBLIC, $virtualMethod(WEPollSelectorProvider, openSelector, $AbstractSelector*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.ch.WEPollSelectorProvider",
		"sun.nio.ch.SelectorProviderImpl",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WEPollSelectorProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WEPollSelectorProvider);
	});
	return class$;
}

$Class* WEPollSelectorProvider::class$ = nullptr;

		} // ch
	} // nio
} // sun