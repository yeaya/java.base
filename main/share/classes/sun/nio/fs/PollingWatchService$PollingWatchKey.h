#ifndef _sun_nio_fs_PollingWatchService$PollingWatchKey_h_
#define _sun_nio_fs_PollingWatchService$PollingWatchKey_h_
//$ class sun.nio.fs.PollingWatchService$PollingWatchKey
//$ extends sun.nio.fs.AbstractWatchKey

#include <sun/nio/fs/AbstractWatchKey.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ScheduledFuture;
		}
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

class PollingWatchService$PollingWatchKey : public ::sun::nio::fs::AbstractWatchKey {
	$class(PollingWatchService$PollingWatchKey, $NO_CLASS_INIT, ::sun::nio::fs::AbstractWatchKey)
public:
	PollingWatchService$PollingWatchKey();
	void init$(::sun::nio::fs::PollingWatchService* this$0, ::java::nio::file::Path* dir, ::sun::nio::fs::PollingWatchService* watcher, Object$* fileKey);
	virtual void cancel() override;
	virtual void disable();
	virtual void enable(::java::util::Set* events, int64_t period);
	virtual $Object* fileKey();
	virtual void invalidate();
	virtual bool isValid() override;
	virtual void poll();
	::sun::nio::fs::PollingWatchService* this$0 = nullptr;
	$Object* fileKey$ = nullptr;
	::java::util::Set* events = nullptr;
	::java::util::concurrent::ScheduledFuture* poller = nullptr;
	$volatile(bool) valid = false;
	int32_t tickCount = 0;
	::java::util::Map* entries = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_PollingWatchService$PollingWatchKey_h_