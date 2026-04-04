#include <sun/net/dns/ResolverConfigurationImpl$AddressChangeListener.h>
#include <sun/net/dns/ResolverConfigurationImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResolverConfigurationImpl = ::sun::net::dns::ResolverConfigurationImpl;

namespace sun {
	namespace net {
		namespace dns {

void ResolverConfigurationImpl$AddressChangeListener::init$() {
	$Thread::init$();
}

void ResolverConfigurationImpl$AddressChangeListener::run() {
	for (;;) {
		if ($ResolverConfigurationImpl::notifyAddrChange0() != 0) {
			return;
		}
		$synchronized($ResolverConfigurationImpl::lock) {
			$ResolverConfigurationImpl::changed = true;
		}
	}
}

ResolverConfigurationImpl$AddressChangeListener::ResolverConfigurationImpl$AddressChangeListener() {
}

$Class* ResolverConfigurationImpl$AddressChangeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ResolverConfigurationImpl$AddressChangeListener, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ResolverConfigurationImpl$AddressChangeListener, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.dns.ResolverConfigurationImpl$AddressChangeListener", "sun.net.dns.ResolverConfigurationImpl", "AddressChangeListener", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.dns.ResolverConfigurationImpl$AddressChangeListener",
		"java.lang.Thread",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.dns.ResolverConfigurationImpl"
	};
	$loadClass(ResolverConfigurationImpl$AddressChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResolverConfigurationImpl$AddressChangeListener);
	});
	return class$;
}

$Class* ResolverConfigurationImpl$AddressChangeListener::class$ = nullptr;

		} // dns
	} // net
} // sun