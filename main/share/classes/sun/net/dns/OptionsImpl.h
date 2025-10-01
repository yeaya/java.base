#ifndef _sun_net_dns_OptionsImpl_h_
#define _sun_net_dns_OptionsImpl_h_
//$ class sun.net.dns.OptionsImpl
//$ extends sun.net.dns.ResolverConfiguration$Options

#include <sun/net/dns/ResolverConfiguration$Options.h>

namespace sun {
	namespace net {
		namespace dns {

class OptionsImpl : public ::sun::net::dns::ResolverConfiguration$Options {
	$class(OptionsImpl, $NO_CLASS_INIT, ::sun::net::dns::ResolverConfiguration$Options)
public:
	OptionsImpl();
	void init$();
};

		} // dns
	} // net
} // sun

#endif // _sun_net_dns_OptionsImpl_h_