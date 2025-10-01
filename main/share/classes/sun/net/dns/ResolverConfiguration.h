#ifndef _sun_net_dns_ResolverConfiguration_h_
#define _sun_net_dns_ResolverConfiguration_h_
//$ class sun.net.dns.ResolverConfiguration
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
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

class $export ResolverConfiguration : public ::java::lang::Object {
	$class(ResolverConfiguration, 0, ::java::lang::Object)
public:
	ResolverConfiguration();
	void init$();
	virtual ::java::util::List* nameservers() {return nullptr;}
	static ::sun::net::dns::ResolverConfiguration* open();
	virtual ::sun::net::dns::ResolverConfiguration$Options* options() {return nullptr;}
	virtual ::java::util::List* searchlist() {return nullptr;}
	static $Object* lock;
	static ::sun::net::dns::ResolverConfiguration* provider;
};

		} // dns
	} // net
} // sun

#endif // _sun_net_dns_ResolverConfiguration_h_