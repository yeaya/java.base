#ifndef _java_net_SocketAddress_h_
#define _java_net_SocketAddress_h_
//$ class java.net.SocketAddress
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace net {

class $export SocketAddress : public ::java::io::Serializable {
	$class(SocketAddress, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	SocketAddress();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x4861F662F4979D6A;
};

	} // net
} // java

#endif // _java_net_SocketAddress_h_