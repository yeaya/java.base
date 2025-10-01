#ifndef _sun_nio_fs_LinuxNativeDispatcher_h_
#define _sun_nio_fs_LinuxNativeDispatcher_h_
//$ class sun.nio.fs.LinuxNativeDispatcher
//$ extends sun.nio.fs.UnixNativeDispatcher

#include <java/lang/Array.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>

namespace sun {
	namespace nio {
		namespace fs {
			class UnixMountEntry;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class LinuxNativeDispatcher : public ::sun::nio::fs::UnixNativeDispatcher {
	$class(LinuxNativeDispatcher, 0, ::sun::nio::fs::UnixNativeDispatcher)
public:
	LinuxNativeDispatcher();
	void init$();
	static void endmntent(int64_t stream);
	static int32_t getmntent(int64_t fp, ::sun::nio::fs::UnixMountEntry* entry, int32_t buflen);
	static int32_t getmntent0(int64_t fp, ::sun::nio::fs::UnixMountEntry* entry, int64_t buffer, int32_t bufLen);
	static void init();
	static int64_t setmntent($bytes* filename, $bytes* type);
	static int64_t setmntent0(int64_t pathAddress, int64_t typeAddress);
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_LinuxNativeDispatcher_h_