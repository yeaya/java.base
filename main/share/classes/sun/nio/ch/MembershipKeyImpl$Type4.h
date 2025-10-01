#ifndef _sun_nio_ch_MembershipKeyImpl$Type4_h_
#define _sun_nio_ch_MembershipKeyImpl$Type4_h_
//$ class sun.nio.ch.MembershipKeyImpl$Type4
//$ extends sun.nio.ch.MembershipKeyImpl

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

class MembershipKeyImpl$Type4 : public ::sun::nio::ch::MembershipKeyImpl {
	$class(MembershipKeyImpl$Type4, $NO_CLASS_INIT, ::sun::nio::ch::MembershipKeyImpl)
public:
	MembershipKeyImpl$Type4();
	void init$(::java::nio::channels::MulticastChannel* ch, ::java::net::InetAddress* group, ::java::net::NetworkInterface* interf, ::java::net::InetAddress* source, int32_t groupAddress, int32_t interfAddress, int32_t sourceAddress);
	virtual int32_t groupAddress();
	virtual int32_t interfaceAddress();
	virtual int32_t source();
	int32_t groupAddress$ = 0;
	int32_t interfAddress = 0;
	int32_t sourceAddress$ = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_MembershipKeyImpl$Type4_h_