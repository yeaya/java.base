#ifndef _sun_nio_ch_UnixAsynchronousServerSocketChannelImpl$1_h_
#define _sun_nio_ch_UnixAsynchronousServerSocketChannelImpl$1_h_
//$ class sun.nio.ch.UnixAsynchronousServerSocketChannelImpl$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class InetSocketAddress;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class UnixAsynchronousServerSocketChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class UnixAsynchronousServerSocketChannelImpl$1 : public ::java::security::PrivilegedAction {
	$class(UnixAsynchronousServerSocketChannelImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	UnixAsynchronousServerSocketChannelImpl$1();
	void init$(::sun::nio::ch::UnixAsynchronousServerSocketChannelImpl* this$0, ::java::net::InetSocketAddress* val$remote);
	virtual $Object* run() override;
	::sun::nio::ch::UnixAsynchronousServerSocketChannelImpl* this$0 = nullptr;
	::java::net::InetSocketAddress* val$remote = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_UnixAsynchronousServerSocketChannelImpl$1_h_