#ifndef _sun_nio_fs_PollingWatchService$1_h_
#define _sun_nio_fs_PollingWatchService$1_h_
//$ class sun.nio.fs.PollingWatchService$1
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class PollingWatchService;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class PollingWatchService$1 : public ::java::util::concurrent::ThreadFactory {
	$class(PollingWatchService$1, $NO_CLASS_INIT, ::java::util::concurrent::ThreadFactory)
public:
	PollingWatchService$1();
	void init$(::sun::nio::fs::PollingWatchService* this$0);
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
	::sun::nio::fs::PollingWatchService* this$0 = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_PollingWatchService$1_h_