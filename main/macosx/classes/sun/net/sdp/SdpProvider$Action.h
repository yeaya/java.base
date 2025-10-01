#ifndef _sun_net_sdp_SdpProvider$Action_h_
#define _sun_net_sdp_SdpProvider$Action_h_
//$ class sun.net.sdp.SdpProvider$Action
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BIND")
#undef BIND
#pragma push_macro("CONNECT")
#undef CONNECT

namespace sun {
	namespace net {
		namespace sdp {

class SdpProvider$Action : public ::java::lang::Enum {
	$class(SdpProvider$Action, 0, ::java::lang::Enum)
public:
	SdpProvider$Action();
	static $Array<::sun::net::sdp::SdpProvider$Action>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::net::sdp::SdpProvider$Action* valueOf($String* name);
	static $Array<::sun::net::sdp::SdpProvider$Action>* values();
	static ::sun::net::sdp::SdpProvider$Action* BIND;
	static ::sun::net::sdp::SdpProvider$Action* CONNECT;
	static $Array<::sun::net::sdp::SdpProvider$Action>* $VALUES;
};

		} // sdp
	} // net
} // sun

#pragma pop_macro("BIND")
#pragma pop_macro("CONNECT")

#endif // _sun_net_sdp_SdpProvider$Action_h_