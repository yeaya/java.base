#ifndef _sun_nio_fs_LinuxWatchService_h_
#define _sun_nio_fs_LinuxWatchService_h_
//$ class sun.nio.fs.LinuxWatchService
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
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class LinuxWatchService$Poller;
			class UnixFileSystem;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class LinuxWatchService : public ::sun::nio::fs::AbstractWatchService {
	$class(LinuxWatchService, 0, ::sun::nio::fs::AbstractWatchService)
public:
	LinuxWatchService();
	void init$(::sun::nio::fs::UnixFileSystem* fs);
	static void configureBlocking(int32_t fd, bool blocking);
	static $ints* eventOffsets();
	static int32_t eventSize();
	virtual void implClose() override;
	static int32_t inotifyAddWatch(int32_t fd, int64_t pathAddress, int32_t mask);
	static int32_t inotifyInit();
	static void inotifyRmWatch(int32_t fd, int32_t wd);
	using ::sun::nio::fs::AbstractWatchService::poll;
	static int32_t poll(int32_t fd1, int32_t fd2);
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::Path* dir, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override;
	static void socketpair($ints* sv);
	static ::jdk::internal::misc::Unsafe* unsafe;
	::sun::nio::fs::LinuxWatchService$Poller* poller = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_LinuxWatchService_h_