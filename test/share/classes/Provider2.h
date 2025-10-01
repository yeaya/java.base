#ifndef _Provider2_h_
#define _Provider2_h_
//$ class Provider2
//$ extends java.nio.channels.spi.AsynchronousChannelProvider

#include <java/nio/channels/spi/AsynchronousChannelProvider.h>

namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousChannelGroup;
			class AsynchronousServerSocketChannel;
			class AsynchronousSocketChannel;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
			class ThreadFactory;
		}
	}
}

class $export Provider2 : public ::java::nio::channels::spi::AsynchronousChannelProvider {
	$class(Provider2, $NO_CLASS_INIT, ::java::nio::channels::spi::AsynchronousChannelProvider)
public:
	Provider2();
	void init$();
	virtual ::java::nio::channels::AsynchronousChannelGroup* openAsynchronousChannelGroup(int32_t nThreads, ::java::util::concurrent::ThreadFactory* threadFactory) override;
	virtual ::java::nio::channels::AsynchronousChannelGroup* openAsynchronousChannelGroup(::java::util::concurrent::ExecutorService* executor, int32_t initialSize) override;
	virtual ::java::nio::channels::AsynchronousServerSocketChannel* openAsynchronousServerSocketChannel(::java::nio::channels::AsynchronousChannelGroup* group) override;
	virtual ::java::nio::channels::AsynchronousSocketChannel* openAsynchronousSocketChannel(::java::nio::channels::AsynchronousChannelGroup* group) override;
};

#endif // _Provider2_h_