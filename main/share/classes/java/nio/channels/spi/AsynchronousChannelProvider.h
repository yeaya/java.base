#ifndef _java_nio_channels_spi_AsynchronousChannelProvider_h_
#define _java_nio_channels_spi_AsynchronousChannelProvider_h_
//$ class java.nio.channels.spi.AsynchronousChannelProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Void;
	}
}
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

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

class $export AsynchronousChannelProvider : public ::java::lang::Object {
	$class(AsynchronousChannelProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AsynchronousChannelProvider();
	void init$(::java::lang::Void* ignore);
	void init$();
	static ::java::lang::Void* checkPermission();
	virtual ::java::nio::channels::AsynchronousChannelGroup* openAsynchronousChannelGroup(int32_t nThreads, ::java::util::concurrent::ThreadFactory* threadFactory) {return nullptr;}
	virtual ::java::nio::channels::AsynchronousChannelGroup* openAsynchronousChannelGroup(::java::util::concurrent::ExecutorService* executor, int32_t initialSize) {return nullptr;}
	virtual ::java::nio::channels::AsynchronousServerSocketChannel* openAsynchronousServerSocketChannel(::java::nio::channels::AsynchronousChannelGroup* group) {return nullptr;}
	virtual ::java::nio::channels::AsynchronousSocketChannel* openAsynchronousSocketChannel(::java::nio::channels::AsynchronousChannelGroup* group) {return nullptr;}
	static ::java::nio::channels::spi::AsynchronousChannelProvider* provider();
};

			} // spi
		} // channels
	} // nio
} // java

#endif // _java_nio_channels_spi_AsynchronousChannelProvider_h_