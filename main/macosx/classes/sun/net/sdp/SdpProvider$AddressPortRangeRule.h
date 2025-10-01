#ifndef _sun_net_sdp_SdpProvider$AddressPortRangeRule_h_
#define _sun_net_sdp_SdpProvider$AddressPortRangeRule_h_
//$ class sun.net.sdp.SdpProvider$AddressPortRangeRule
//$ extends sun.net.sdp.SdpProvider$PortRangeRule

#include <java/lang/Array.h>
#include <sun/net/sdp/SdpProvider$PortRangeRule.h>

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

class SdpProvider$AddressPortRangeRule : public ::sun::net::sdp::SdpProvider$PortRangeRule {
	$class(SdpProvider$AddressPortRangeRule, $NO_CLASS_INIT, ::sun::net::sdp::SdpProvider$PortRangeRule)
public:
	SdpProvider$AddressPortRangeRule();
	void init$(::sun::net::sdp::SdpProvider$Action* action, ::java::net::InetAddress* address, int32_t prefix, int32_t port, int32_t end);
	virtual bool match(::sun::net::sdp::SdpProvider$Action* action, ::java::net::InetAddress* address, int32_t port) override;
	$bytes* addressAsBytes = nullptr;
	int32_t prefixByteCount = 0;
	int8_t mask = 0;
};

		} // sdp
	} // net
} // sun

#endif // _sun_net_sdp_SdpProvider$AddressPortRangeRule_h_