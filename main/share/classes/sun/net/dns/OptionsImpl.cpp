#include <sun/net/dns/OptionsImpl.h>
#include <sun/net/dns/ResolverConfiguration$Options.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResolverConfiguration$Options = ::sun::net::dns::ResolverConfiguration$Options;

namespace sun {
	namespace net {
		namespace dns {

void OptionsImpl::init$() {
	$ResolverConfiguration$Options::init$();
}

OptionsImpl::OptionsImpl() {
}

$Class* OptionsImpl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(OptionsImpl, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.dns.ResolverConfiguration$Options", "sun.net.dns.ResolverConfiguration", "Options", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.dns.OptionsImpl",
		"sun.net.dns.ResolverConfiguration$Options",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(OptionsImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OptionsImpl);
	});
	return class$;
}

$Class* OptionsImpl::class$ = nullptr;

		} // dns
	} // net
} // sun