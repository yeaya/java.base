#ifndef _sun_nio_ch_WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_h_
#define _sun_nio_ch_WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_h_
//$ class sun.nio.ch.WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1
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
			class WindowsAsynchronousServerSocketChannelImpl$AcceptTask;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1 : public ::java::security::PrivilegedAction {
	$class(WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1();
	void init$(::sun::nio::ch::WindowsAsynchronousServerSocketChannelImpl$AcceptTask* this$1, ::java::net::InetSocketAddress* val$remote);
	virtual $Object* run() override;
	::sun::nio::ch::WindowsAsynchronousServerSocketChannelImpl$AcceptTask* this$1 = nullptr;
	::java::net::InetSocketAddress* val$remote = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsAsynchronousServerSocketChannelImpl$AcceptTask$1_h_