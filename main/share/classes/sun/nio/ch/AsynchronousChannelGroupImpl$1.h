#ifndef _sun_nio_ch_AsynchronousChannelGroupImpl$1_h_
#define _sun_nio_ch_AsynchronousChannelGroupImpl$1_h_
//$ class sun.nio.ch.AsynchronousChannelGroupImpl$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace ch {
			class AsynchronousChannelGroupImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class AsynchronousChannelGroupImpl$1 : public ::java::lang::Runnable {
	$class(AsynchronousChannelGroupImpl$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AsynchronousChannelGroupImpl$1();
	void init$(::sun::nio::ch::AsynchronousChannelGroupImpl* this$0, ::sun::nio::ch::AsynchronousChannelGroupImpl* val$thisGroup, ::java::lang::Runnable* val$task);
	virtual void run() override;
	::sun::nio::ch::AsynchronousChannelGroupImpl* this$0 = nullptr;
	::java::lang::Runnable* val$task = nullptr;
	::sun::nio::ch::AsynchronousChannelGroupImpl* val$thisGroup = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_AsynchronousChannelGroupImpl$1_h_