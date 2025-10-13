#ifndef _sun_nio_ch_EPollPort_h_
#define _sun_nio_ch_EPollPort_h_
//$ class sun.nio.ch.EPollPort
//$ extends sun.nio.ch.Port

#include <java/lang/Array.h>
#include <sun/nio/ch/Port.h>

#pragma push_macro("ENOENT")
#undef ENOENT
#pragma push_macro("EXECUTE_TASK_OR_SHUTDOWN")
#undef EXECUTE_TASK_OR_SHUTDOWN
#pragma push_macro("MAX_EPOLL_EVENTS")
#undef MAX_EPOLL_EVENTS
#pragma push_macro("NEED_TO_POLL")
#undef NEED_TO_POLL

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AsynchronousChannelProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ArrayBlockingQueue;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class EPollPort$Event;
			class ThreadPool;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class EPollPort : public ::sun::nio::ch::Port {
	$class(EPollPort, $NO_CLASS_INIT, ::sun::nio::ch::Port)
public:
	EPollPort();
	void init$(::java::nio::channels::spi::AsynchronousChannelProvider* provider, ::sun::nio::ch::ThreadPool* pool);
	virtual void executeOnHandlerTask(::java::lang::Runnable* task) override;
	void implClose();
	virtual void shutdownHandlerTasks() override;
	::sun::nio::ch::EPollPort* start();
	virtual void startPoll(int32_t fd, int32_t events) override;
	void wakeup();
	static const int32_t MAX_EPOLL_EVENTS = 512;
	static const int32_t ENOENT = 2;
	int32_t epfd = 0;
	int64_t address = 0;
	bool closed = false;
	$ints* sp = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* wakeupCount = nullptr;
	::java::util::concurrent::ArrayBlockingQueue* queue = nullptr;
	::sun::nio::ch::EPollPort$Event* NEED_TO_POLL = nullptr;
	::sun::nio::ch::EPollPort$Event* EXECUTE_TASK_OR_SHUTDOWN = nullptr;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("ENOENT")
#pragma pop_macro("EXECUTE_TASK_OR_SHUTDOWN")
#pragma pop_macro("MAX_EPOLL_EVENTS")
#pragma pop_macro("NEED_TO_POLL")

#endif // _sun_nio_ch_EPollPort_h_