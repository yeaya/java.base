#ifndef _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$1_h_
#define _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$1_h_
//$ class sun.nio.ch.WindowsAsynchronousSocketChannelImpl$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace net {
		class SocketAddress;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class WindowsAsynchronousSocketChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsAsynchronousSocketChannelImpl$1 : public ::java::security::PrivilegedExceptionAction {
	$class(WindowsAsynchronousSocketChannelImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	WindowsAsynchronousSocketChannelImpl$1();
	void init$(::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* this$0, ::java::net::SocketAddress* val$sa);
	virtual $Object* run() override;
	::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* this$0 = nullptr;
	::java::net::SocketAddress* val$sa = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$1_h_