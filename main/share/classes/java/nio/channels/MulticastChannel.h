#ifndef _java_nio_channels_MulticastChannel_h_
#define _java_nio_channels_MulticastChannel_h_
//$ interface java.nio.channels.MulticastChannel
//$ extends java.nio.channels.NetworkChannel

#include <java/nio/channels/NetworkChannel.h>

namespace java {
	namespace net {
		class InetAddress;
		class NetworkInterface;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class MembershipKey;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $export MulticastChannel : public ::java::nio::channels::NetworkChannel {
	$interface(MulticastChannel, $NO_CLASS_INIT, ::java::nio::channels::NetworkChannel)
public:
	virtual void close() override {}
	virtual ::java::nio::channels::MembershipKey* join(::java::net::InetAddress* group, ::java::net::NetworkInterface* interf) {return nullptr;}
	virtual ::java::nio::channels::MembershipKey* join(::java::net::InetAddress* group, ::java::net::NetworkInterface* interf, ::java::net::InetAddress* source) {return nullptr;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_MulticastChannel_h_