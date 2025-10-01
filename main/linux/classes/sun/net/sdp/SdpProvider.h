#ifndef _sun_net_sdp_SdpProvider_h_
#define _sun_net_sdp_SdpProvider_h_
//$ class sun.net.sdp.SdpProvider
//$ extends sun.net.NetHooks$Provider

#include <java/lang/Array.h>
#include <sun/net/NetHooks$Provider.h>

#pragma push_macro("MAX_PORT")
#undef MAX_PORT

namespace java {
	namespace io {
		class FileDescriptor;
		class PrintStream;
	}
}
namespace java {
	namespace net {
		class InetAddress;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace net {
		namespace sdp {
			class SdpProvider$Action;
		}
	}
}

namespace sun {
	namespace net {
		namespace sdp {

class SdpProvider : public ::sun::net::NetHooks$Provider {
	$class(SdpProvider, $NO_CLASS_INIT, ::sun::net::NetHooks$Provider)
public:
	SdpProvider();
	void init$();
	void convertTcpToSdpIfMatch(::java::io::FileDescriptor* fdObj, ::sun::net::sdp::SdpProvider$Action* action, ::java::net::InetAddress* address, int32_t port);
	static void fail($String* msg, $ObjectArray* args);
	virtual void implBeforeTcpBind(::java::io::FileDescriptor* fdObj, ::java::net::InetAddress* address, int32_t port) override;
	virtual void implBeforeTcpConnect(::java::io::FileDescriptor* fdObj, ::java::net::InetAddress* address, int32_t port) override;
	static ::java::util::List* loadRulesFromFile($String* file);
	static $ints* parsePortRange($String* s);
	static const int32_t MAX_PORT = 0x0000FFFF;
	bool enabled = false;
	::java::util::List* rules = nullptr;
	::java::io::PrintStream* log = nullptr;
};

		} // sdp
	} // net
} // sun

#pragma pop_macro("MAX_PORT")

#endif // _sun_net_sdp_SdpProvider_h_