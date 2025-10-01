#ifndef _sun_nio_ch_WindowsSelectorImpl$FinishLock_h_
#define _sun_nio_ch_WindowsSelectorImpl$FinishLock_h_
//$ class sun.nio.ch.WindowsSelectorImpl$FinishLock
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class IOException;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class WindowsSelectorImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class WindowsSelectorImpl$FinishLock : public ::java::lang::Object {
	$class(WindowsSelectorImpl$FinishLock, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsSelectorImpl$FinishLock();
	void init$(::sun::nio::ch::WindowsSelectorImpl* this$0);
	void checkForException();
	void reset();
	void setException(::java::io::IOException* e);
	void threadFinished();
	void waitForHelperThreads();
	::sun::nio::ch::WindowsSelectorImpl* this$0 = nullptr;
	int32_t threadsToFinish = 0;
	::java::io::IOException* exception = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsSelectorImpl$FinishLock_h_