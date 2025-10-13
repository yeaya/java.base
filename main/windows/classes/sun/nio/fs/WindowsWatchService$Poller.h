#ifndef _sun_nio_fs_WindowsWatchService$Poller_h_
#define _sun_nio_fs_WindowsWatchService$Poller_h_
//$ class sun.nio.fs.WindowsWatchService$Poller
//$ extends sun.nio.fs.AbstractPoller

#include <java/lang/Array.h>
#include <sun/nio/fs/AbstractPoller.h>

#pragma push_macro("CHANGES_BUFFER_SIZE")
#undef CHANGES_BUFFER_SIZE
#pragma push_macro("OFFSETOF_ACTION")
#undef OFFSETOF_ACTION
#pragma push_macro("OFFSETOF_FILENAME")
#undef OFFSETOF_FILENAME
#pragma push_macro("OFFSETOF_FILENAMELENGTH")
#undef OFFSETOF_FILENAMELENGTH
#pragma push_macro("OFFSETOF_HEVENT")
#undef OFFSETOF_HEVENT
#pragma push_macro("OFFSETOF_NEXTENTRYOFFSET")
#undef OFFSETOF_NEXTENTRYOFFSET
#pragma push_macro("SIZEOF_DWORD")
#undef SIZEOF_DWORD
#pragma push_macro("SIZEOF_OVERLAPPED")
#undef SIZEOF_OVERLAPPED
#pragma push_macro("UNSAFE")
#undef UNSAFE

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
			class WindowsFileSystem;
			class WindowsWatchService;
			class WindowsWatchService$WindowsWatchKey;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsWatchService$Poller : public ::sun::nio::fs::AbstractPoller {
	$class(WindowsWatchService$Poller, 0, ::sun::nio::fs::AbstractPoller)
public:
	WindowsWatchService$Poller();
	void init$(::sun::nio::fs::WindowsFileSystem* fs, ::sun::nio::fs::WindowsWatchService* watcher, int64_t port);
	void closeAttachedEvent(int64_t ov);
	void createAndAttachEvent(int64_t ov);
	virtual void implCancelKey(::java::nio::file::WatchKey* obj) override;
	virtual void implCloseAll() override;
	virtual $Object* implRegister(::java::nio::file::Path* obj, ::java::util::Set* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override;
	void processEvents(::sun::nio::fs::WindowsWatchService$WindowsWatchKey* key, int32_t size);
	void releaseResources(::sun::nio::fs::WindowsWatchService$WindowsWatchKey* key);
	virtual void run() override;
	::java::nio::file::WatchEvent$Kind* translateActionToEvent(int32_t action);
	virtual void wakeup() override;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static const int16_t SIZEOF_DWORD = 4;
	static const int16_t SIZEOF_OVERLAPPED = 32;
	static int16_t OFFSETOF_HEVENT;
	static const int16_t OFFSETOF_NEXTENTRYOFFSET = 0;
	static const int16_t OFFSETOF_ACTION = 4;
	static const int16_t OFFSETOF_FILENAMELENGTH = 8;
	static const int16_t OFFSETOF_FILENAME = 12;
	static const int32_t CHANGES_BUFFER_SIZE = 16384; // 16 * 1024
	::sun::nio::fs::WindowsFileSystem* fs = nullptr;
	::sun::nio::fs::WindowsWatchService* watcher = nullptr;
	int64_t port = 0;
	::java::util::Map* ck2key = nullptr;
	::java::util::Map* fk2key = nullptr;
	int32_t lastCompletionKey = 0;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("CHANGES_BUFFER_SIZE")
#pragma pop_macro("OFFSETOF_ACTION")
#pragma pop_macro("OFFSETOF_FILENAME")
#pragma pop_macro("OFFSETOF_FILENAMELENGTH")
#pragma pop_macro("OFFSETOF_HEVENT")
#pragma pop_macro("OFFSETOF_NEXTENTRYOFFSET")
#pragma pop_macro("SIZEOF_DWORD")
#pragma pop_macro("SIZEOF_OVERLAPPED")
#pragma pop_macro("UNSAFE")

#endif // _sun_nio_fs_WindowsWatchService$Poller_h_