#ifndef _sun_nio_ch_KQueuePort$EventHandlerTask_h_
#define _sun_nio_ch_KQueuePort$EventHandlerTask_h_
//$ class sun.nio.ch.KQueuePort$EventHandlerTask
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace ch {
			class KQueuePort;
			class KQueuePort$Event;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class KQueuePort$EventHandlerTask : public ::java::lang::Runnable {
	$class(KQueuePort$EventHandlerTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	KQueuePort$EventHandlerTask();
	void init$(::sun::nio::ch::KQueuePort* this$0);
	::sun::nio::ch::KQueuePort$Event* poll();
	virtual void run() override;
	::sun::nio::ch::KQueuePort* this$0 = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_KQueuePort$EventHandlerTask_h_