#ifndef _sun_nio_fs_AbstractWatchService_h_
#define _sun_nio_fs_AbstractWatchService_h_
//$ class sun.nio.fs.AbstractWatchService
//$ extends java.nio.file.WatchService

#include <java/lang/Array.h>
#include <java/nio/file/WatchService.h>

#pragma push_macro("CLOSE_KEY")
#undef CLOSE_KEY

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
		namespace concurrent {
			class LinkedBlockingDeque;
			class TimeUnit;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class AbstractWatchService : public ::java::nio::file::WatchService {
	$class(AbstractWatchService, $NO_CLASS_INIT, ::java::nio::file::WatchService)
public:
	AbstractWatchService();
	void init$();
	void checkKey(::java::nio::file::WatchKey* key);
	void checkOpen();
	virtual void close() override;
	$Object* closeLock();
	void enqueueKey(::java::nio::file::WatchKey* key);
	virtual void implClose() {}
	bool isOpen();
	virtual ::java::nio::file::WatchKey* poll() override;
	virtual ::java::nio::file::WatchKey* poll(int64_t timeout, ::java::util::concurrent::TimeUnit* unit) override;
	virtual ::java::nio::file::WatchKey* register$(::java::nio::file::Path* path, $Array<::java::nio::file::WatchEvent$Kind>* events, $Array<::java::nio::file::WatchEvent$Modifier>* modifers) {return nullptr;}
	virtual ::java::nio::file::WatchKey* take() override;
	::java::util::concurrent::LinkedBlockingDeque* pendingKeys = nullptr;
	::java::nio::file::WatchKey* CLOSE_KEY = nullptr;
	$volatile(bool) closed = false;
	$Object* closeLock$ = nullptr;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("CLOSE_KEY")

#endif // _sun_nio_fs_AbstractWatchService_h_