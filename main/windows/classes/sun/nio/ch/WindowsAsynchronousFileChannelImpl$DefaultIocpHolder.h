#ifndef _sun_nio_ch_WindowsAsynchronousFileChannelImpl$DefaultIocpHolder_h_
#define _sun_nio_ch_WindowsAsynchronousFileChannelImpl$DefaultIocpHolder_h_
//$ class sun.nio.ch.WindowsAsynchronousFileChannelImpl$DefaultIocpHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace ch {
			class Iocp;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsAsynchronousFileChannelImpl$DefaultIocpHolder : public ::java::lang::Object {
	$class(WindowsAsynchronousFileChannelImpl$DefaultIocpHolder, 0, ::java::lang::Object)
public:
	WindowsAsynchronousFileChannelImpl$DefaultIocpHolder();
	void init$();
	static ::sun::nio::ch::Iocp* defaultIocp();
	static ::sun::nio::ch::Iocp* defaultIocp$;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsAsynchronousFileChannelImpl$DefaultIocpHolder_h_