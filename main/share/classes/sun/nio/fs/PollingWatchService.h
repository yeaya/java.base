#ifndef _sun_nio_fs_PollingWatchService_h_
#define _sun_nio_fs_PollingWatchService_h_
//$ class sun.nio.fs.PollingWatchService
//$ extends sun.nio.fs.AbstractWatchService

#include <java/lang/Array.h>
#include <sun/nio/fs/AbstractWatchService.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
			class WatchEvent$Kind;
			class WatchEvent$Modifier;
			class WatchKey;
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
			class ScheduledExecutorService;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class PollingWatchService$PollingWatchKey;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class PollingWatchService : public ::sun::nio::fs::AbstractWatchService {
	$class(PollingWatchService, $NO_CLASS_INIT, ::sun::nio::fs::AbstractWatchService)
public:
	PollingWatchService();
	void init$();
	::sun::nio::fs::PollingWatchService$PollingWatchKey* doPrivilegedRegister(::java::nio::file::Path* path, ::java::util::Set* events, int32_t sensitivityInSeconds);
	virtual void implClose() override;
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::Path* path, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override;
	::java::util::Map* map = nullptr;
	::java::util::concurrent::ScheduledExecutorService* scheduledExecutor = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_PollingWatchService_h_