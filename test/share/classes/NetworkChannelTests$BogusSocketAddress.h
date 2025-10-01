#ifndef _NetworkChannelTests$BogusSocketAddress_h_
#define _NetworkChannelTests$BogusSocketAddress_h_
//$ class NetworkChannelTests$BogusSocketAddress
//$ extends java.net.SocketAddress

#include <java/net/SocketAddress.h>

class $export NetworkChannelTests$BogusSocketAddress : public ::java::net::SocketAddress {
	$class(NetworkChannelTests$BogusSocketAddress, $NO_CLASS_INIT, ::java::net::SocketAddress)
public:
	NetworkChannelTests$BogusSocketAddress();
	void init$();
};

#endif // _NetworkChannelTests$BogusSocketAddress_h_