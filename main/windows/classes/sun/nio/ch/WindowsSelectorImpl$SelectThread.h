#ifndef _sun_nio_ch_WindowsSelectorImpl$SelectThread_h_
#define _sun_nio_ch_WindowsSelectorImpl$SelectThread_h_
//$ class sun.nio.ch.WindowsSelectorImpl$SelectThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace sun {
	namespace nio {
		namespace ch {
			class WindowsSelectorImpl;
			class WindowsSelectorImpl$SubSelector;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsSelectorImpl$SelectThread : public ::java::lang::Thread {
	$class(WindowsSelectorImpl$SelectThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	WindowsSelectorImpl$SelectThread();
	void init$(::sun::nio::ch::WindowsSelectorImpl* this$0, int32_t i);
	bool isZombie();
	void makeZombie();
	virtual void run() override;
	::sun::nio::ch::WindowsSelectorImpl* this$0 = nullptr;
	int32_t index = 0;
	::sun::nio::ch::WindowsSelectorImpl$SubSelector* subSelector = nullptr;
	int64_t lastRun = 0;
	$volatile(bool) zombie = false;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsSelectorImpl$SelectThread_h_