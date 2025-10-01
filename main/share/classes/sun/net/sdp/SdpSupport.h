#ifndef _sun_net_sdp_SdpSupport_h_
#define _sun_net_sdp_SdpSupport_h_
//$ class sun.net.sdp.SdpSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaIOFileDescriptorAccess;
		}
	}
}

namespace sun {
	namespace net {
		namespace sdp {

class SdpSupport : public ::java::lang::Object {
	$class(SdpSupport, 0, ::java::lang::Object)
public:
	SdpSupport();
	void init$();
	static void convert0(int32_t fd);
	static void convertSocket(::java::io::FileDescriptor* fd);
	static int32_t create0();
	static ::java::io::FileDescriptor* createSocket();
	static $String* os;
	static bool isSupported;
	static ::jdk::internal::access::JavaIOFileDescriptorAccess* fdAccess;
};

		} // sdp
	} // net
} // sun

#endif // _sun_net_sdp_SdpSupport_h_