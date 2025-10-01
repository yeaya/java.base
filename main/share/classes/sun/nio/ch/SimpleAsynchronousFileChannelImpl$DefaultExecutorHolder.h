#ifndef _sun_nio_ch_SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder_h_
#define _sun_nio_ch_SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder_h_
//$ class sun.nio.ch.SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder : public ::java::lang::Object {
	$class(SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder, 0, ::java::lang::Object)
public:
	SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder();
	void init$();
	static ::java::util::concurrent::ExecutorService* defaultExecutor;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SimpleAsynchronousFileChannelImpl$DefaultExecutorHolder_h_