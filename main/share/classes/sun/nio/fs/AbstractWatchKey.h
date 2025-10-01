#ifndef _sun_nio_fs_AbstractWatchKey_h_
#define _sun_nio_fs_AbstractWatchKey_h_
//$ class sun.nio.fs.AbstractWatchKey
//$ extends java.nio.file.WatchKey

#include <java/nio/file/WatchKey.h>

#pragma push_macro("MAX_EVENT_LIST_SIZE")
#undef MAX_EVENT_LIST_SIZE
#pragma push_macro("OVERFLOW_EVENT")
#undef OVERFLOW_EVENT

namespace java {
	namespace nio {
		namespace file {
			class Path;
			class WatchEvent$Kind;
			class Watchable;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class AbstractWatchKey$Event;
			class AbstractWatchKey$State;
			class AbstractWatchService;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class AbstractWatchKey : public ::java::nio::file::WatchKey {
	$class(AbstractWatchKey, 0, ::java::nio::file::WatchKey)
public:
	AbstractWatchKey();
	void init$(::java::nio::file::Path* dir, ::sun::nio::fs::AbstractWatchService* watcher);
	virtual ::java::util::List* pollEvents() override;
	virtual bool reset() override;
	void signal();
	void signalEvent(::java::nio::file::WatchEvent$Kind* kind, Object$* context);
	virtual ::java::nio::file::Watchable* watchable() override;
	::sun::nio::fs::AbstractWatchService* watcher();
	static bool $assertionsDisabled;
	static const int32_t MAX_EVENT_LIST_SIZE = 512;
	static ::sun::nio::fs::AbstractWatchKey$Event* OVERFLOW_EVENT;
	::sun::nio::fs::AbstractWatchService* watcher$ = nullptr;
	::java::nio::file::Path* dir = nullptr;
	::sun::nio::fs::AbstractWatchKey$State* state = nullptr;
	::java::util::List* events = nullptr;
	::java::util::Map* lastModifyEvents = nullptr;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("MAX_EVENT_LIST_SIZE")
#pragma pop_macro("OVERFLOW_EVENT")

#endif // _sun_nio_fs_AbstractWatchKey_h_