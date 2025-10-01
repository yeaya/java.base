#ifndef _sun_nio_ch_WindowsSelectorImpl$SubSelector_h_
#define _sun_nio_ch_WindowsSelectorImpl$SubSelector_h_
//$ class sun.nio.ch.WindowsSelectorImpl$SubSelector
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
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

class WindowsSelectorImpl$SubSelector : public ::java::lang::Object {
	$class(WindowsSelectorImpl$SubSelector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsSelectorImpl$SubSelector();
	void init$(::sun::nio::ch::WindowsSelectorImpl* this$0);
	void init$(::sun::nio::ch::WindowsSelectorImpl* this$0, int32_t threadIndex);
	void freeFDSetBuffer();
	int32_t poll();
	int32_t poll(int32_t index);
	int32_t poll0(int64_t pollAddress, int32_t numfds, $ints* readFds, $ints* writeFds, $ints* exceptFds, int64_t timeout, int64_t fdsBuffer);
	int32_t processFDSet(int64_t updateCount, ::java::util::function::Consumer* action, $ints* fds, int32_t rOps, bool isExceptFds);
	int32_t processSelectedKeys(int64_t updateCount, ::java::util::function::Consumer* action);
	::sun::nio::ch::WindowsSelectorImpl* this$0 = nullptr;
	int32_t pollArrayIndex = 0;
	$ints* readFds = nullptr;
	$ints* writeFds = nullptr;
	$ints* exceptFds = nullptr;
	int64_t fdsBuffer = 0;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsSelectorImpl$SubSelector_h_