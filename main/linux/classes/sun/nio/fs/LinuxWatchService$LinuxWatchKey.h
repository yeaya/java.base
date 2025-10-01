#ifndef _sun_nio_fs_LinuxWatchService$LinuxWatchKey_h_
#define _sun_nio_fs_LinuxWatchService$LinuxWatchKey_h_
//$ class sun.nio.fs.LinuxWatchService$LinuxWatchKey
//$ extends sun.nio.fs.AbstractWatchKey

#include <sun/nio/fs/AbstractWatchKey.h>

namespace sun {
	namespace nio {
		namespace fs {
			class LinuxWatchService;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class LinuxWatchService$LinuxWatchKey : public ::sun::nio::fs::AbstractWatchKey {
	$class(LinuxWatchService$LinuxWatchKey, $NO_CLASS_INIT, ::sun::nio::fs::AbstractWatchKey)
public:
	LinuxWatchService$LinuxWatchKey();
	void init$(::sun::nio::fs::UnixPath* dir, ::sun::nio::fs::LinuxWatchService* watcher, int32_t ifd, int32_t wd);
	virtual void cancel() override;
	virtual int32_t descriptor();
	virtual void invalidate(bool remove);
	virtual bool isValid() override;
	int32_t ifd = 0;
	$volatile(int32_t) wd = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_LinuxWatchService$LinuxWatchKey_h_