#ifndef _sun_net_dns_ResolverConfigurationImpl$2_h_
#define _sun_net_dns_ResolverConfigurationImpl$2_h_
//$ class sun.net.dns.ResolverConfigurationImpl$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {
		namespace dns {
			class ResolverConfigurationImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace dns {

class ResolverConfigurationImpl$2 : public ::java::security::PrivilegedAction {
	$class(ResolverConfigurationImpl$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ResolverConfigurationImpl$2();
	void init$(::sun::net::dns::ResolverConfigurationImpl* this$0);
	virtual $Object* run() override;
	::sun::net::dns::ResolverConfigurationImpl* this$0 = nullptr;
};

		} // dns
	} // net
} // sun

#endif // _sun_net_dns_ResolverConfigurationImpl$2_h_