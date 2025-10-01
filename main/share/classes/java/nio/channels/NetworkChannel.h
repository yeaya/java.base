#ifndef _java_nio_channels_NetworkChannel_h_
#define _java_nio_channels_NetworkChannel_h_
//$ interface java.nio.channels.NetworkChannel
//$ extends java.nio.channels.Channel

#include <java/nio/channels/Channel.h>

namespace java {
	namespace net {
		class SocketAddress;
		class SocketOption;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $export NetworkChannel : public ::java::nio::channels::Channel {
	$interface(NetworkChannel, $NO_CLASS_INIT, ::java::nio::channels::Channel)
public:
	virtual ::java::nio::channels::NetworkChannel* bind(::java::net::SocketAddress* local) {return nullptr;}
	virtual ::java::net::SocketAddress* getLocalAddress() {return nullptr;}
	virtual $Object* getOption(::java::net::SocketOption* name) {return nullptr;}
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) {return nullptr;}
	virtual ::java::util::Set* supportedOptions() {return nullptr;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_NetworkChannel_h_