#ifndef _sun_nio_fs_LinuxFileStore_h_
#define _sun_nio_fs_LinuxFileStore_h_
//$ class sun.nio.fs.LinuxFileStore
//$ extends sun.nio.fs.UnixFileStore

#include <java/lang/Array.h>
#include <sun/nio/fs/UnixFileStore.h>

namespace sun {
	namespace nio {
		namespace fs {
			class UnixFileSystem;
			class UnixMountEntry;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class LinuxFileStore : public ::sun::nio::fs::UnixFileStore {
	$class(LinuxFileStore, $NO_CLASS_INIT, ::sun::nio::fs::UnixFileStore)
public:
	LinuxFileStore();
	void init$(::sun::nio::fs::UnixPath* file);
	void init$(::sun::nio::fs::UnixFileSystem* fs, ::sun::nio::fs::UnixMountEntry* entry);
	virtual ::sun::nio::fs::UnixMountEntry* findMountEntry() override;
	static $ints* getKernelVersion();
	virtual bool supportsFileAttributeView($Class* type) override;
	virtual bool supportsFileAttributeView($String* name) override;
	$volatile(bool) xattrChecked = false;
	$volatile(bool) xattrEnabled = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_LinuxFileStore_h_