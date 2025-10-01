#ifndef _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$3_h_
#define _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$3_h_
//$ class sun.nio.ch.WindowsAsynchronousSocketChannelImpl$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace ch {
			class WindowsAsynchronousSocketChannelImpl;
			class WindowsAsynchronousSocketChannelImpl$WriteTask;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsAsynchronousSocketChannelImpl$3 : public ::java::lang::Runnable {
	$class(WindowsAsynchronousSocketChannelImpl$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WindowsAsynchronousSocketChannelImpl$3();
	void init$(::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* this$0, ::sun::nio::ch::WindowsAsynchronousSocketChannelImpl$WriteTask* val$writeTask);
	virtual void run() override;
	::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* this$0 = nullptr;
	::sun::nio::ch::WindowsAsynchronousSocketChannelImpl$WriteTask* val$writeTask = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$3_h_