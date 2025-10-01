#ifndef _jdk_internal_logger_BootstrapLogger$BootstrapExecutors_h_
#define _jdk_internal_logger_BootstrapLogger$BootstrapExecutors_h_
//$ class jdk.internal.logger.BootstrapLogger$BootstrapExecutors
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

#pragma push_macro("KEEP_EXECUTOR_ALIVE_SECONDS")
#undef KEEP_EXECUTOR_ALIVE_SECONDS

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace logger {
			class BootstrapLogger$LogEvent;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace logger {

class BootstrapLogger$BootstrapExecutors : public ::java::util::concurrent::ThreadFactory {
	$class(BootstrapLogger$BootstrapExecutors, $NO_CLASS_INIT, ::java::util::concurrent::ThreadFactory)
public:
	BootstrapLogger$BootstrapExecutors();
	void init$();
	static void awaitPendingTasks();
	static void enqueue(::jdk::internal::logger::BootstrapLogger$LogEvent* event);
	static void flush();
	static ::java::util::concurrent::ExecutorService* getExecutor();
	static bool isAlive();
	static void join(::java::lang::Runnable* r);
	static void lambda$awaitPendingTasks$0();
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
	static void submit(::java::lang::Runnable* r);
	static const int64_t KEEP_EXECUTOR_ALIVE_SECONDS = 30;
	static $volatile(::java::lang::ref::WeakReference*) executorRef;
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* head;
	static ::jdk::internal::logger::BootstrapLogger$LogEvent* tail;
};

		} // logger
	} // internal
} // jdk

#pragma pop_macro("KEEP_EXECUTOR_ALIVE_SECONDS")

#endif // _jdk_internal_logger_BootstrapLogger$BootstrapExecutors_h_