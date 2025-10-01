#ifndef _sun_nio_ch_AsynchronousChannelGroupImpl_h_
#define _sun_nio_ch_AsynchronousChannelGroupImpl_h_
//$ class sun.nio.ch.AsynchronousChannelGroupImpl
//$ extends java.nio.channels.AsynchronousChannelGroup
//$ implements java.util.concurrent.Executor

#include <java/nio/channels/AsynchronousChannelGroup.h>
#include <java/util/concurrent/Executor.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class Channel;
		}
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
		class Queue;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
			class Future;
			class ScheduledThreadPoolExecutor;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
				class AtomicInteger;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class ThreadPool;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class AsynchronousChannelGroupImpl : public ::java::nio::channels::AsynchronousChannelGroup, public ::java::util::concurrent::Executor {
	$class(AsynchronousChannelGroupImpl, 0, ::java::nio::channels::AsynchronousChannelGroup, ::java::util::concurrent::Executor)
public:
	AsynchronousChannelGroupImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::nio::channels::spi::AsynchronousChannelProvider* provider, ::sun::nio::ch::ThreadPool* pool);
	virtual $Object* attachForeignChannel(::java::nio::channels::Channel* channel, ::java::io::FileDescriptor* fdo) {return nullptr;}
	virtual bool awaitTermination(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	::java::lang::Runnable* bindToGroup(::java::lang::Runnable* task);
	virtual void closeAllChannels() {}
	virtual void detachForeignChannel(Object$* key) {}
	void detachFromThreadPool();
	virtual void execute(::java::lang::Runnable* task) override;
	virtual void executeOnHandlerTask(::java::lang::Runnable* task) {}
	void executeOnPooledThread(::java::lang::Runnable* task);
	::java::util::concurrent::ExecutorService* executor();
	int32_t fixedThreadCount();
	virtual bool isEmpty() {return false;}
	bool isFixedThreadPool();
	virtual bool isShutdown() override;
	virtual bool isTerminated() override;
	void offerTask(::java::lang::Runnable* task);
	::java::lang::Runnable* pollTask();
	::java::util::concurrent::Future* schedule(::java::lang::Runnable* task, int64_t timeout, ::java::util::concurrent::TimeUnit* unit);
	virtual void shutdown() override;
	void shutdownExecutors();
	virtual void shutdownHandlerTasks() {}
	virtual void shutdownNow() override;
	void startInternalThread(::java::lang::Runnable* task);
	void startThreads(::java::lang::Runnable* task);
	int32_t threadCount();
	int32_t threadExit(::java::lang::Runnable* task, bool replaceMe);
	virtual $String* toString() override;
	static int32_t internalThreadCount;
	::sun::nio::ch::ThreadPool* pool = nullptr;
	::java::util::concurrent::atomic::AtomicInteger* threadCount$ = nullptr;
	::java::util::concurrent::ScheduledThreadPoolExecutor* timeoutExecutor = nullptr;
	::java::util::Queue* taskQueue = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* shutdown$ = nullptr;
	$Object* shutdownNowLock = nullptr;
	$volatile(bool) terminateInitiated = false;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_AsynchronousChannelGroupImpl_h_