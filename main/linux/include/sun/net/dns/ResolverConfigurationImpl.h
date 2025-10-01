#ifndef _sun_net_dns_ResolverConfigurationImpl_h_
#define _sun_net_dns_ResolverConfigurationImpl_h_
//$ class sun.net.dns.ResolverConfigurationImpl
//$ extends sun.net.dns.ResolverConfiguration

#include <sun/net/dns/ResolverConfiguration.h>

#pragma push_macro("TIMEOUT")
#undef TIMEOUT

namespace java {
	namespace util {
		class LinkedList;
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
	static $String* fallbackDomain0();
	::java::util::LinkedList* getSearchList();
	void loadConfig();
	virtual ::java::util::List* nameservers() override;
	virtual ::sun::net::dns::ResolverConfiguration$Options* options() override;
	::java::util::LinkedList* resolvconf($String* keyword, int32_t maxperkeyword, int32_t maxkeywords);
	virtual ::java::util::List* searchlist() override;
	static bool $assertionsDisabled;
	static $Object* lock;
	static int64_t lastRefresh;
	static const int32_t TIMEOUT = 0x000493E0;
	::sun::net::dns::ResolverConfiguration$Options* opts = nullptr;
	::java::util::LinkedList* searchlist$ = nullptr;
	::java::util::LinkedList* nameservers$ = nullptr;
};

		} // dns
	} // net
} // sun

#pragma pop_macro("TIMEOUT")

#endif // _sun_net_dns_ResolverConfigurationImpl_h_