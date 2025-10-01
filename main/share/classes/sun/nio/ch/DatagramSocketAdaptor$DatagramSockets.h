#ifndef _sun_nio_ch_DatagramSocketAdaptor$DatagramSockets_h_
#define _sun_nio_ch_DatagramSocketAdaptor$DatagramSockets_h_
//$ class sun.nio.ch.DatagramSocketAdaptor$DatagramSockets
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NO_DELEGATE")
#undef NO_DELEGATE

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}
namespace java {
	namespace net {
		class SocketAddress;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class DatagramSocketAdaptor$DatagramSockets : public ::java::lang::Object {
	$class(DatagramSocketAdaptor$DatagramSockets, 0, ::java::lang::Object)
public:
	DatagramSocketAdaptor$DatagramSockets();
	void init$();
	static ::java::lang::invoke::MethodHandles$Lookup* lambda$static$0();
	static ::java::net::SocketAddress* NO_DELEGATE;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("NO_DELEGATE")

#endif // _sun_nio_ch_DatagramSocketAdaptor$DatagramSockets_h_