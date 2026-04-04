#include <sun/net/dns/ResolverConfiguration$Options.h>
#include <sun/net/dns/ResolverConfiguration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace dns {

void ResolverConfiguration$Options::init$() {
}

int32_t ResolverConfiguration$Options::attempts() {
	return -1;
}

int32_t ResolverConfiguration$Options::retrans() {
	return -1;
}

ResolverConfiguration$Options::ResolverConfiguration$Options() {
}

$Class* ResolverConfiguration$Options::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResolverConfiguration$Options, init$, void)},
		{"attempts", "()I", nullptr, $PUBLIC, $virtualMethod(ResolverConfiguration$Options, attempts, int32_t)},
		{"retrans", "()I", nullptr, $PUBLIC, $virtualMethod(ResolverConfiguration$Options, retrans, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.dns.ResolverConfiguration$Options", "sun.net.dns.ResolverConfiguration", "Options", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.net.dns.ResolverConfiguration$Options",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.dns.ResolverConfiguration"
	};
	$loadClass(ResolverConfiguration$Options, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResolverConfiguration$Options);
	});
	return class$;
}

$Class* ResolverConfiguration$Options::class$ = nullptr;

		} // dns
	} // net
} // sun