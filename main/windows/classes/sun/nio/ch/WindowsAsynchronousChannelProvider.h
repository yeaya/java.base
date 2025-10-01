#ifndef _sun_nio_ch_WindowsAsynchronousChannelProvider_h_
#define _sun_nio_ch_WindowsAsynchronousChannelProvider_h_
//$ class sun.nio.ch.WindowsAsynchronousChannelProvider
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
namespace sun {
	namespace nio {
		namespace ch {
			class Iocp;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $export WindowsAsynchronousChannelProvider : public ::java::nio::channels::spi::AsynchronousChannelProvider {
	$class(WindowsAsynchronousChannelProvider, $NO_CLASS_INIT, ::java::nio::channels::spi::AsynchronousChannelProvider)
public:
	WindowsAsynchronousChannelProvider();
	void init$();
	::sun::nio::ch::Iocp* defaultIocp();
	virtual ::java::nio::channels::AsynchronousChannelGroup* openAsynchronousChannelGroup(int32_t nThreads, ::java::util::concurrent::ThreadFactory* factory) override;
	virtual ::java::nio::channels::AsynchronousChannelGroup* openAsynchronousChannelGroup(::java::util::concurrent::ExecutorService* executor, int32_t initialSize) override;
	virtual ::java::nio::channels::AsynchronousServerSocketChannel* openAsynchronousServerSocketChannel(::java::nio::channels::AsynchronousChannelGroup* group) override;
	virtual ::java::nio::channels::AsynchronousSocketChannel* openAsynchronousSocketChannel(::java::nio::channels::AsynchronousChannelGroup* group) override;
	::sun::nio::ch::Iocp* toIocp(::java::nio::channels::AsynchronousChannelGroup* group);
	static $volatile(::sun::nio::ch::Iocp*) defaultIocp$;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_WindowsAsynchronousChannelProvider_h_