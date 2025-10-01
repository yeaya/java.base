#ifndef _sun_net_sdp_SdpProvider$Rule_h_
#define _sun_net_sdp_SdpProvider$Rule_h_
//$ interface sun.net.sdp.SdpProvider$Rule
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class SdpProvider$Rule : public ::java::lang::Object {
	$interface(SdpProvider$Rule, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool match(::sun::net::sdp::SdpProvider$Action* action, ::java::net::InetAddress* address, int32_t port) {return false;}
};

		} // sdp
	} // net
} // sun

#endif // _sun_net_sdp_SdpProvider$Rule_h_