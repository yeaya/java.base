#ifndef _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$2_h_
#define _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$2_h_
//$ class sun.nio.ch.WindowsAsynchronousSocketChannelImpl$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace ch {
			class WindowsAsynchronousSocketChannelImpl;
			class WindowsAsynchronousSocketChannelImpl$ReadTask;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsAsynchronousSocketChannelImpl$2 : public ::java::lang::Runnable {
	$class(WindowsAsynchronousSocketChannelImpl$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WindowsAsynchronousSocketChannelImpl$2();
	void init$(::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* this$0, ::sun::nio::ch::WindowsAsynchronousSocketChannelImpl$ReadTask* val$readTask);
	virtual void run() override;
	::sun::nio::ch::WindowsAsynchronousSocketChannelImpl* this$0 = nullptr;
	::sun::nio::ch::WindowsAsynchronousSocketChannelImpl$ReadTask* val$readTask = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsAsynchronousSocketChannelImpl$2_h_