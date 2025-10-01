#ifndef _sun_nio_ch_DatagramSocketAdaptor$DatagramPackets_h_
#define _sun_nio_ch_DatagramSocketAdaptor$DatagramPackets_h_
//$ class sun.nio.ch.DatagramSocketAdaptor$DatagramPackets
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LENGTH")
#undef LENGTH
#pragma push_macro("BUF_LENGTH")
#undef BUF_LENGTH

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
			class VarHandle;
		}
	}
}
namespace java {
	namespace net {
		class DatagramPacket;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class DatagramSocketAdaptor$DatagramPackets : public ::java::lang::Object {
	$class(DatagramSocketAdaptor$DatagramPackets, 0, ::java::lang::Object)
public:
	DatagramSocketAdaptor$DatagramPackets();
	void init$();
	static int32_t getBufLength(::java::net::DatagramPacket* p);
	static ::java::lang::invoke::MethodHandles$Lookup* lambda$static$0();
	static void setLength(::java::net::DatagramPacket* p, int32_t value);
	static ::java::lang::invoke::VarHandle* LENGTH;
	static ::java::lang::invoke::VarHandle* BUF_LENGTH;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("LENGTH")
#pragma pop_macro("BUF_LENGTH")

#endif // _sun_nio_ch_DatagramSocketAdaptor$DatagramPackets_h_