#ifndef _sun_nio_ch_KQueuePort_h_
#define _sun_nio_ch_KQueuePort_h_
//$ class sun.nio.ch.KQueuePort
//$ extends sun.nio.ch.Port

#include <java/lang/Array.h>
#include <sun/nio/ch/Port.h>

#pragma push_macro("EXECUTE_TASK_OR_SHUTDOWN")
#undef EXECUTE_TASK_OR_SHUTDOWN
#pragma push_macro("MAX_KEVENTS_TO_POLL")
#undef MAX_KEVENTS_TO_POLL
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
			class KQueuePort$Event;
			class ThreadPool;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class KQueuePort : public ::sun::nio::ch::Port {
	$class(KQueuePort, $NO_CLASS_INIT, ::sun::nio::ch::Port)
public:
	KQueuePort();
	void init$(::java::nio::channels::spi::AsynchronousChannelProvider* provider, ::sun::nio::ch::ThreadPool* pool);
	virtual void executeOnHandlerTask(::java::lang::Runnable* task) override;
	void implClose();
	virtual void shutdownHandlerTasks() override;
	::sun::nio::ch::KQueuePort* start();
	virtual void startPoll(int32_t fd, int32_t events) override;
	void wakeup();
	static const int32_t MAX_KEVENTS_TO_POLL = 512;
	int32_t kqfd = 0;
	int64_t address = 0;
	bool closed = false;
	$ints* sp = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* wakeupCount = nullptr;
	::java::util::concurrent::ArrayBlockingQueue* queue = nullptr;
	::sun::nio::ch::KQueuePort$Event* NEED_TO_POLL = nullptr;
	::sun::nio::ch::KQueuePort$Event* EXECUTE_TASK_OR_SHUTDOWN = nullptr;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("EXECUTE_TASK_OR_SHUTDOWN")
#pragma pop_macro("MAX_KEVENTS_TO_POLL")
#pragma pop_macro("NEED_TO_POLL")

#endif // _sun_nio_ch_KQueuePort_h_