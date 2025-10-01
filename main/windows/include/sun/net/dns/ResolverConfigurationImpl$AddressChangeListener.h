#ifndef _sun_net_dns_ResolverConfigurationImpl$AddressChangeListener_h_
#define _sun_net_dns_ResolverConfigurationImpl$AddressChangeListener_h_
//$ class sun.net.dns.ResolverConfigurationImpl$AddressChangeListener
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace sun {
	namespace net {
		namespace dns {

class $import ResolverConfigurationImpl$AddressChangeListener : public ::java::lang::Thread {
	$class(ResolverConfigurationImpl$AddressChangeListener, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	ResolverConfigurationImpl$AddressChangeListener();
	void init$();
	virtual void run() override;
};

		} // dns
	} // net
} // sun

#endif // _sun_net_dns_ResolverConfigurationImpl$AddressChangeListener_h_