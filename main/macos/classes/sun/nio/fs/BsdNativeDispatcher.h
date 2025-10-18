#ifndef _sun_nio_fs_BsdNativeDispatcher_h_
#define _sun_nio_fs_BsdNativeDispatcher_h_
//$ class sun.nio.fs.BsdNativeDispatcher
//$ extends sun.nio.fs.UnixNativeDispatcher

#include <java/lang/Array.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>

namespace sun {
	namespace nio {
		namespace fs {
			class UnixMountEntry;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class BsdNativeDispatcher : public ::sun::nio::fs::UnixNativeDispatcher {
	$class(BsdNativeDispatcher, 0, ::sun::nio::fs::UnixNativeDispatcher)
public:
	BsdNativeDispatcher();
	void init$();
	static void endfsstat(int64_t iter);
	static int32_t fsstatEntry(int64_t iter, ::sun::nio::fs::UnixMountEntry* entry);
	static int64_t getfsstat();
	static $bytes* getmntonname(::sun::nio::fs::UnixPath* path);
	static $bytes* getmntonname0(int64_t pathAddress);
	static void initIDs();
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_BsdNativeDispatcher_h_