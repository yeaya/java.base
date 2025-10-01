#ifndef _sun_nio_ch_MembershipKeyImpl$Type6_h_
#define _sun_nio_ch_MembershipKeyImpl$Type6_h_
//$ class sun.nio.ch.MembershipKeyImpl$Type6
//$ extends sun.nio.ch.MembershipKeyImpl

#include <java/lang/Array.h>
#include <sun/nio/ch/MembershipKeyImpl.h>

namespace java {
	namespace net {
		class InetAddress;
		class NetworkInterface;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class MulticastChannel;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class MembershipKeyImpl$Type6 : public ::sun::nio::ch::MembershipKeyImpl {
	$class(MembershipKeyImpl$Type6, $NO_CLASS_INIT, ::sun::nio::ch::MembershipKeyImpl)
public:
	MembershipKeyImpl$Type6();
	void init$(::java::nio::channels::MulticastChannel* ch, ::java::net::InetAddress* group, ::java::net::NetworkInterface* interf, ::java::net::InetAddress* source, $bytes* groupAddress, int32_t index, $bytes* sourceAddress);
	virtual $bytes* groupAddress();
	virtual int32_t index();
	virtual $bytes* source();
	$bytes* groupAddress$ = nullptr;
	int32_t index$ = 0;
	$bytes* sourceAddress$ = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_MembershipKeyImpl$Type6_h_