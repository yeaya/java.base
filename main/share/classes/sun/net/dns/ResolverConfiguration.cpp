#include <sun/net/dns/ResolverConfiguration.h>
#include <java/util/List.h>
#include <sun/net/dns/ResolverConfiguration$Options.h>
#include <sun/net/dns/ResolverConfigurationImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $ResolverConfiguration$Options = ::sun::net::dns::ResolverConfiguration$Options;
using $ResolverConfigurationImpl = ::sun::net::dns::ResolverConfigurationImpl;

namespace sun {
	namespace net {
		namespace dns {

$Object* ResolverConfiguration::lock = nullptr;
ResolverConfiguration* ResolverConfiguration::provider = nullptr;

void ResolverConfiguration::init$() {
}

ResolverConfiguration* ResolverConfiguration::open() {
	$init(ResolverConfiguration);
	$synchronized(ResolverConfiguration::lock) {
		if (ResolverConfiguration::provider == nullptr) {
			$assignStatic(ResolverConfiguration::provider, $new($ResolverConfigurationImpl));
		}
		return ResolverConfiguration::provider;
	}
}

void ResolverConfiguration::clinit$($Class* clazz) {
	$assignStatic(ResolverConfiguration::lock, $new($Object));
}

ResolverConfiguration::ResolverConfiguration() {
}

$Class* ResolverConfiguration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverConfiguration, lock)},
		{"provider", "Lsun/net/dns/ResolverConfiguration;", nullptr, $PRIVATE | $STATIC, $staticField(ResolverConfiguration, provider)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ResolverConfiguration, init$, void)},
		{"nameservers", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ResolverConfiguration, nameservers, $List*)},
		{"open", "()Lsun/net/dns/ResolverConfiguration;", nullptr, $PUBLIC | $STATIC, $staticMethod(ResolverConfiguration, open, ResolverConfiguration*)},
		{"options", "()Lsun/net/dns/ResolverConfiguration$Options;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResolverConfiguration, options, $ResolverConfiguration$Options*)},
		{"searchlist", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ResolverConfiguration, searchlist, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.dns.ResolverConfiguration$Options", "sun.net.dns.ResolverConfiguration", "Options", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.net.dns.ResolverConfiguration",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.net.dns.ResolverConfiguration$Options"
	};
	$loadClass(ResolverConfiguration, name, initialize, &classInfo$$, ResolverConfiguration::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResolverConfiguration);
	});
	return class$;
}

$Class* ResolverConfiguration::class$ = nullptr;

		} // dns
	} // net
} // sun