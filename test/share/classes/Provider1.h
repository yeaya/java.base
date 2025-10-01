#ifndef _Provider1_h_
#define _Provider1_h_
//$ class Provider1
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

class $export Provider1 : public ::java::nio::channels::spi::AsynchronousChannelProvider {
	$class(Provider1, $NO_CLASS_INIT, ::java::nio::channels::spi::AsynchronousChannelProvider)
public:
	Provider1();
	void init$();
	virtual ::java::nio::channels::AsynchronousChannelGroup* openAsynchronousChannelGroup(int32_t nThreads, ::java::util::concurrent::ThreadFactory* factorry) override;
	virtual ::java::nio::channels::AsynchronousChannelGroup* openAsynchronousChannelGroup(::java::util::concurrent::ExecutorService* executor, int32_t initialSize) override;
	virtual ::java::nio::channels::AsynchronousServerSocketChannel* openAsynchronousServerSocketChannel(::java::nio::channels::AsynchronousChannelGroup* group) override;
	virtual ::java::nio::channels::AsynchronousSocketChannel* openAsynchronousSocketChannel(::java::nio::channels::AsynchronousChannelGroup* group) override;
};

#endif // _Provider1_h_