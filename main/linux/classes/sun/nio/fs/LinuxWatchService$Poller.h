#ifndef _sun_nio_fs_LinuxWatchService$Poller_h_
#define _sun_nio_fs_LinuxWatchService$Poller_h_
//$ class sun.nio.fs.LinuxWatchService$Poller
//$ extends sun.nio.fs.AbstractPoller

#include <java/lang/Array.h>
#include <sun/nio/fs/AbstractPoller.h>

#pragma push_macro("IN_IGNORED")
#undef IN_IGNORED
#pragma push_macro("IN_ATTRIB")
#undef IN_ATTRIB
#pragma push_macro("OFFSETOF_MASK")
#undef OFFSETOF_MASK
#pragma push_macro("SIZEOF_INOTIFY_EVENT")
#undef SIZEOF_INOTIFY_EVENT
#pragma push_macro("IN_DELETE")
#undef IN_DELETE
#pragma push_macro("OFFSETOF_NAME")
#undef OFFSETOF_NAME
#pragma push_macro("IN_UNMOUNT")
#undef IN_UNMOUNT
#pragma push_macro("OFFSETOF_LEN")
#undef OFFSETOF_LEN
#pragma push_macro("IN_MOVED_TO")
#undef IN_MOVED_TO
#pragma push_macro("IN_CREATE")
#undef IN_CREATE
#pragma push_macro("IN_MODIFY")
#undef IN_MODIFY
#pragma push_macro("IN_MOVED_FROM")
#undef IN_MOVED_FROM
#pragma push_macro("OFFSETOF_WD")
#undef OFFSETOF_WD
#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE
#pragma push_macro("IN_Q_OVERFLOW")
#undef IN_Q_OVERFLOW

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
namespace sun {
	namespace nio {
		namespace fs {
			class LinuxWatchService;
			class UnixFileSystem;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class LinuxWatchService$Poller : public ::sun::nio::fs::AbstractPoller {
	$class(LinuxWatchService$Poller, 0, ::sun::nio::fs::AbstractPoller)
public:
	LinuxWatchService$Poller();
	void init$(::sun::nio::fs::UnixFileSystem* fs, ::sun::nio::fs::LinuxWatchService* watcher, int32_t ifd, $ints* sp);
	virtual void implCancelKey(::java::nio::file::WatchKey* obj) override;
	virtual void implCloseAll() override;
	virtual $Object* implRegister(::java::nio::file::Path* obj, ::java::util::Set* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifiers) override;
	::java::nio::file::WatchEvent$Kind* maskToEventKind(int32_t mask);
	void processEvent(int32_t wd, int32_t mask, ::sun::nio::fs::UnixPath* name);
	virtual void run() override;
	virtual void wakeup() override;
	static int32_t SIZEOF_INOTIFY_EVENT;
	static $ints* offsets;
	static int32_t OFFSETOF_WD;
	static int32_t OFFSETOF_MASK;
	static int32_t OFFSETOF_LEN;
	static int32_t OFFSETOF_NAME;
	static const int32_t IN_MODIFY = 2;
	static const int32_t IN_ATTRIB = 4;
	static const int32_t IN_MOVED_FROM = 64;
	static const int32_t IN_MOVED_TO = 128;
	static const int32_t IN_CREATE = 256;
	static const int32_t IN_DELETE = 512;
	static const int32_t IN_UNMOUNT = 8192;
	static const int32_t IN_Q_OVERFLOW = 16384;
	static const int32_t IN_IGNORED = 32768;
	static const int32_t BUFFER_SIZE = 8192;
	::sun::nio::fs::UnixFileSystem* fs = nullptr;
	::sun::nio::fs::LinuxWatchService* watcher = nullptr;
	int32_t ifd = 0;
	$ints* socketpair = nullptr;
	::java::util::Map* wdToKey = nullptr;
	int64_t address = 0;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("IN_IGNORED")
#pragma pop_macro("IN_ATTRIB")
#pragma pop_macro("OFFSETOF_MASK")
#pragma pop_macro("SIZEOF_INOTIFY_EVENT")
#pragma pop_macro("IN_DELETE")
#pragma pop_macro("OFFSETOF_NAME")
#pragma pop_macro("IN_UNMOUNT")
#pragma pop_macro("OFFSETOF_LEN")
#pragma pop_macro("IN_MOVED_TO")
#pragma pop_macro("IN_CREATE")
#pragma pop_macro("IN_MODIFY")
#pragma pop_macro("IN_MOVED_FROM")
#pragma pop_macro("OFFSETOF_WD")
#pragma pop_macro("BUFFER_SIZE")
#pragma pop_macro("IN_Q_OVERFLOW")

#endif // _sun_nio_fs_LinuxWatchService$Poller_h_