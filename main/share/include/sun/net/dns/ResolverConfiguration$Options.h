#ifndef _sun_net_dns_ResolverConfiguration$Options_h_
#define _sun_net_dns_ResolverConfiguration$Options_h_
//$ class sun.net.dns.ResolverConfiguration$Options
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {
		namespace dns {

class $import ResolverConfiguration$Options : public ::java::lang::Object {
	$class(ResolverConfiguration$Options, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ResolverConfiguration$Options();
	void init$();
	virtual int32_t attempts();
	virtual int32_t retrans();
};

		} // dns
	} // net
} // sun

#endif // _sun_net_dns_ResolverConfiguration$Options_h_