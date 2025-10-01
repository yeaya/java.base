#ifndef _sun_nio_ch_ThreadPool$DefaultThreadPoolHolder_h_
#define _sun_nio_ch_ThreadPool$DefaultThreadPoolHolder_h_
//$ class sun.nio.ch.ThreadPool$DefaultThreadPoolHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class ThreadPool$DefaultThreadPoolHolder : public ::java::lang::Object {
	$class(ThreadPool$DefaultThreadPoolHolder, 0, ::java::lang::Object)
public:
	ThreadPool$DefaultThreadPoolHolder();
	void init$();
	static ::sun::nio::ch::ThreadPool* defaultThreadPool;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_ThreadPool$DefaultThreadPoolHolder_h_