#ifndef _sun_nio_ch_WindowsSelectorImpl$StartLock_h_
#define _sun_nio_ch_WindowsSelectorImpl$StartLock_h_
//$ class sun.nio.ch.WindowsSelectorImpl$StartLock
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace ch {
			class WindowsSelectorImpl;
			class WindowsSelectorImpl$SelectThread;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsSelectorImpl$StartLock : public ::java::lang::Object {
	$class(WindowsSelectorImpl$StartLock, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsSelectorImpl$StartLock();
	void init$(::sun::nio::ch::WindowsSelectorImpl* this$0);
	void startThreads();
	bool waitForStart(::sun::nio::ch::WindowsSelectorImpl$SelectThread* thread);
	::sun::nio::ch::WindowsSelectorImpl* this$0 = nullptr;
	int64_t runsCounter = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsSelectorImpl$StartLock_h_