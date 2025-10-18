#ifndef _sun_nio_ch_UnixAsynchronousSocketChannelImpl$1_h_
#define _sun_nio_ch_UnixAsynchronousSocketChannelImpl$1_h_
//$ class sun.nio.ch.UnixAsynchronousSocketChannelImpl$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace ch {
			class UnixAsynchronousSocketChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class UnixAsynchronousSocketChannelImpl$1 : public ::java::lang::Runnable {
	$class(UnixAsynchronousSocketChannelImpl$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	UnixAsynchronousSocketChannelImpl$1();
	void init$(::sun::nio::ch::UnixAsynchronousSocketChannelImpl* this$0);
	virtual void run() override;
	::sun::nio::ch::UnixAsynchronousSocketChannelImpl* this$0 = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_UnixAsynchronousSocketChannelImpl$1_h_