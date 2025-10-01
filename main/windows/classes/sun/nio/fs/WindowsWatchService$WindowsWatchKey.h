#ifndef _sun_nio_fs_WindowsWatchService$WindowsWatchKey_h_
#define _sun_nio_fs_WindowsWatchService$WindowsWatchKey_h_
//$ class sun.nio.fs.WindowsWatchService$WindowsWatchKey
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
		class Set;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class AbstractWatchService;
			class NativeBuffer;
			class WindowsWatchService$FileKey;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsWatchService$WindowsWatchKey : public ::sun::nio::fs::AbstractWatchKey {
	$class(WindowsWatchService$WindowsWatchKey, $NO_CLASS_INIT, ::sun::nio::fs::AbstractWatchKey)
public:
	WindowsWatchService$WindowsWatchKey();
	void init$(::java::nio::file::Path* dir, ::sun::nio::fs::AbstractWatchService* watcher, ::sun::nio::fs::WindowsWatchService$FileKey* fileKey);
	virtual ::sun::nio::fs::NativeBuffer* buffer();
	virtual void cancel() override;
	virtual int32_t completionKey();
	virtual int64_t countAddress();
	virtual ::java::util::Set* events();
	virtual ::sun::nio::fs::WindowsWatchService$FileKey* fileKey();
	virtual int64_t handle();
	virtual ::sun::nio::fs::WindowsWatchService$WindowsWatchKey* init(int64_t handle, ::java::util::Set* events, bool watchSubtree, ::sun::nio::fs::NativeBuffer* buffer, int64_t countAddress, int64_t overlappedAddress, int32_t completionKey);
	virtual void invalidate();
	virtual bool isErrorStartingOverlapped();
	virtual bool isValid() override;
	virtual int64_t overlappedAddress();
	virtual void setErrorStartingOverlapped(bool value);
	virtual void setEvents(::java::util::Set* events);
	virtual bool watchSubtree();
	::sun::nio::fs::WindowsWatchService$FileKey* fileKey$ = nullptr;
	$volatile(int64_t) handle$ = 0;
	::java::util::Set* events$ = nullptr;
	bool watchSubtree$ = false;
	::sun::nio::fs::NativeBuffer* buffer$ = nullptr;
	int64_t countAddress$ = 0;
	int64_t overlappedAddress$ = 0;
	int32_t completionKey$ = 0;
	bool errorStartingOverlapped = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsWatchService$WindowsWatchKey_h_