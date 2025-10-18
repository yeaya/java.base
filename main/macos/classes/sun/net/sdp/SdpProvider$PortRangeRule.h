#ifndef _sun_net_sdp_SdpProvider$PortRangeRule_h_
#define _sun_net_sdp_SdpProvider$PortRangeRule_h_
//$ class sun.net.sdp.SdpProvider$PortRangeRule
//$ extends sun.net.sdp.SdpProvider$Rule

#include <sun/net/sdp/SdpProvider$Rule.h>

namespace java {
	namespace net {
		class InetAddress;
	}
}
namespace sun {
	namespace net {
		namespace sdp {
			class SdpProvider$Action;
		}
	}
}

namespace sun {
	namespace net {
		namespace sdp {

class SdpProvider$PortRangeRule : public ::sun::net::sdp::SdpProvider$Rule {
	$class(SdpProvider$PortRangeRule, $NO_CLASS_INIT, ::sun::net::sdp::SdpProvider$Rule)
public:
	SdpProvider$PortRangeRule();
	void init$(::sun::net::sdp::SdpProvider$Action* action, int32_t portStart, int32_t portEnd);
	virtual ::sun::net::sdp::SdpProvider$Action* action();
	virtual bool match(::sun::net::sdp::SdpProvider$Action* action, ::java::net::InetAddress* address, int32_t port) override;
	::sun::net::sdp::SdpProvider$Action* action$ = nullptr;
	int32_t portStart = 0;
	int32_t portEnd = 0;
};

		} // sdp
	} // net
} // sun

#endif // _sun_net_sdp_SdpProvider$PortRangeRule_h_