#ifndef _sun_nio_fs_BsdFileStore_h_
#define _sun_nio_fs_BsdFileStore_h_
//$ class sun.nio.fs.BsdFileStore
//$ extends sun.nio.fs.UnixFileStore

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

class BsdFileStore : public ::sun::nio::fs::UnixFileStore {
	$class(BsdFileStore, $NO_CLASS_INIT, ::sun::nio::fs::UnixFileStore)
public:
	BsdFileStore();
	void init$(::sun::nio::fs::UnixPath* file);
	void init$(::sun::nio::fs::UnixFileSystem* fs, ::sun::nio::fs::UnixMountEntry* entry);
	virtual ::sun::nio::fs::UnixMountEntry* findMountEntry() override;
	static bool isOsVersionGte(int32_t requiredMajor, int32_t requiredMinor);
	virtual bool supportsFileAttributeView($Class* type) override;
	virtual bool supportsFileAttributeView($String* name) override;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_BsdFileStore_h_