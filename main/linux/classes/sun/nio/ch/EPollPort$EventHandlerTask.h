#ifndef _sun_nio_ch_EPollPort$EventHandlerTask_h_
#define _sun_nio_ch_EPollPort$EventHandlerTask_h_
//$ class sun.nio.ch.EPollPort$EventHandlerTask
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace ch {
			class EPollPort;
			class EPollPort$Event;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class EPollPort$EventHandlerTask : public ::java::lang::Runnable {
	$class(EPollPort$EventHandlerTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	EPollPort$EventHandlerTask();
	void init$(::sun::nio::ch::EPollPort* this$0);
	::sun::nio::ch::EPollPort$Event* poll();
	virtual void run() override;
	::sun::nio::ch::EPollPort* this$0 = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_EPollPort$EventHandlerTask_h_