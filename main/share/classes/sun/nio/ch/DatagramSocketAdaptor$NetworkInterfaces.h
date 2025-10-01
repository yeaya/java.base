#ifndef _sun_nio_ch_DatagramSocketAdaptor$NetworkInterfaces_h_
#define _sun_nio_ch_DatagramSocketAdaptor$NetworkInterfaces_h_
//$ class sun.nio.ch.DatagramSocketAdaptor$NetworkInterfaces
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GET_DEFAULT")
#undef GET_DEFAULT
#pragma push_macro("CONSTRUCTOR")
#undef CONSTRUCTOR

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
		}
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class NetworkInterface;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class DatagramSocketAdaptor$NetworkInterfaces : public ::java::lang::Object {
	$class(DatagramSocketAdaptor$NetworkInterfaces, 0, ::java::lang::Object)
public:
	DatagramSocketAdaptor$NetworkInterfaces();
	void init$();
	static ::java::net::NetworkInterface* getDefault();
	static ::java::lang::invoke::MethodHandles$Lookup* lambda$static$0();
	static ::java::net::NetworkInterface* newNetworkInterface($String* name, int32_t index, $Array<::java::net::InetAddress>* addrs);
	static ::java::lang::invoke::MethodHandle* GET_DEFAULT;
	static ::java::lang::invoke::MethodHandle* CONSTRUCTOR;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("GET_DEFAULT")
#pragma pop_macro("CONSTRUCTOR")

#endif // _sun_nio_ch_DatagramSocketAdaptor$NetworkInterfaces_h_