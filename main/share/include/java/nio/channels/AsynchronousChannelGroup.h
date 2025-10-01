#ifndef _java_nio_channels_AsynchronousChannelGroup_h_
#define _java_nio_channels_AsynchronousChannelGroup_h_
//$ class java.nio.channels.AsynchronousChannelGroup
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			class ExecutorService;
			class ThreadFactory;
			class TimeUnit;
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $import AsynchronousChannelGroup : public ::java::lang::Object {
	$class(AsynchronousChannelGroup, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AsynchronousChannelGroup();
	void init$(::java::nio::channels::spi::AsynchronousChannelProvider* provider);
	virtual bool awaitTermination(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) {return false;}
	virtual bool isShutdown() {return false;}
	virtual bool isTerminated() {return false;}
	::java::nio::channels::spi::AsynchronousChannelProvider* provider();
	virtual void shutdown() {}
	virtual void shutdownNow() {}
	static ::java::nio::channels::AsynchronousChannelGroup* withCachedThreadPool(::java::util::concurrent::ExecutorService* executor, int32_t initialSize);
	static ::java::nio::channels::AsynchronousChannelGroup* withFixedThreadPool(int32_t nThreads, ::java::util::concurrent::ThreadFactory* threadFactory);
	static ::java::nio::channels::AsynchronousChannelGroup* withThreadPool(::java::util::concurrent::ExecutorService* executor);
	::java::nio::channels::spi::AsynchronousChannelProvider* provider$ = nullptr;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_AsynchronousChannelGroup_h_