#ifndef _sun_net_dns_ResolverConfigurationImpl_h_
#define _sun_net_dns_ResolverConfigurationImpl_h_
//$ class sun.net.dns.ResolverConfigurationImpl
//$ extends sun.net.dns.ResolverConfiguration

#include <sun/net/dns/ResolverConfiguration.h>

#pragma push_macro("TIMEOUT_NANOS")
#undef TIMEOUT_NANOS

namespace java {
	namespace util {
		class ArrayList;
		class List;
	}
}
namespace sun {
	namespace net {
		namespace dns {
			class ResolverConfiguration$Options;
		}
	}
}

namespace sun {
	namespace net {
		namespace dns {

class $import ResolverConfigurationImpl : public ::sun::net::dns::ResolverConfiguration {
	$class(ResolverConfigurationImpl, 0, ::sun::net::dns::ResolverConfiguration)
public:
	ResolverConfigurationImpl();
	void init$();
	::java::util::ArrayList* addressesToList($String* str);
	static void init0();
	void loadConfig();
	static void loadDNSconfig0();
	virtual ::java::util::List* nameservers() override;
	static int32_t notifyAddrChange0();
	virtual ::sun::net::dns::ResolverConfiguration$Options* options() override;
	virtual ::java::util::List* searchlist() override;
	::java::util::ArrayList* stringToList($String* str);
	static bool $assertionsDisabled;
	static $Object* lock;
	::sun::net::dns::ResolverConfiguration$Options* opts = nullptr;
	static bool changed;
	static int64_t lastRefresh;
	static int64_t TIMEOUT_NANOS;
	static $String* os_searchlist;
	static $String* os_nameservers;
	static ::java::util::ArrayList* searchlist$;
	static ::java::util::ArrayList* nameservers$;
};

		} // dns
	} // net
} // sun

#pragma pop_macro("TIMEOUT_NANOS")

#endif // _sun_net_dns_ResolverConfigurationImpl_h_