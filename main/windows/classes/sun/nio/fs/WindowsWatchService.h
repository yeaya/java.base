#ifndef _sun_nio_fs_WindowsWatchService_h_
#define _sun_nio_fs_WindowsWatchService_h_
//$ class sun.nio.fs.WindowsWatchService
//$ extends sun.nio.fs.AbstractWatchService

#include <java/lang/Array.h>
#include <sun/nio/fs/AbstractWatchService.h>

#pragma push_macro("ALL_FILE_NOTIFY_EVENTS")
#undef ALL_FILE_NOTIFY_EVENTS
#pragma push_macro("WAKEUP_COMPLETION_KEY")
#undef WAKEUP_COMPLETION_KEY

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
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsFileSystem;
			class WindowsWatchService$Poller;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsWatchService : public ::sun::nio::fs::AbstractWatchService {
	$class(WindowsWatchService, $NO_CLASS_INIT, ::sun::nio::fs::AbstractWatchService)
public:
	WindowsWatchService();
	void init$(::sun::nio::fs::WindowsFileSystem* fs);
	virtual void implClose() override;
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::Path* path, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override;
	static const int32_t WAKEUP_COMPLETION_KEY = 0;
	::sun::nio::fs::WindowsWatchService$Poller* poller = nullptr;
	static const int32_t ALL_FILE_NOTIFY_EVENTS = 351; // 1 | 2 | 4 | 8 | 16 | 64 | 256
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("ALL_FILE_NOTIFY_EVENTS")
#pragma pop_macro("WAKEUP_COMPLETION_KEY")

#endif // _sun_nio_fs_WindowsWatchService_h_