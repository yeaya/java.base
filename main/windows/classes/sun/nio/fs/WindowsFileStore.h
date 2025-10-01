#ifndef _sun_nio_fs_WindowsFileStore_h_
#define _sun_nio_fs_WindowsFileStore_h_
//$ class sun.nio.fs.WindowsFileStore
//$ extends java.nio.file.FileStore

#include <java/nio/file/FileStore.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileStoreAttributeView;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class WindowsNativeDispatcher$DiskFreeSpace;
			class WindowsNativeDispatcher$VolumeInformation;
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsFileStore : public ::java::nio::file::FileStore {
	$class(WindowsFileStore, 0, ::java::nio::file::FileStore)
public:
	WindowsFileStore();
	void init$($String* root);
	static ::sun::nio::fs::WindowsFileStore* create($String* root, bool ignoreNotReady);
	static ::sun::nio::fs::WindowsFileStore* create(::sun::nio::fs::WindowsPath* file);
	static ::sun::nio::fs::WindowsFileStore* createFromPath($String* target);
	virtual bool equals(Object$* ob) override;
	virtual $Object* getAttribute($String* attribute) override;
	virtual int64_t getBlockSize() override;
	virtual ::java::nio::file::attribute::FileStoreAttributeView* getFileStoreAttributeView($Class* type) override;
	virtual int64_t getTotalSpace() override;
	virtual int64_t getUnallocatedSpace() override;
	virtual int64_t getUsableSpace() override;
	virtual int32_t hashCode() override;
	virtual bool isReadOnly() override;
	virtual $String* name() override;
	::sun::nio::fs::WindowsNativeDispatcher$DiskFreeSpace* readDiskFreeSpace();
	::sun::nio::fs::WindowsNativeDispatcher$DiskFreeSpace* readDiskFreeSpaceEx();
	virtual bool supportsFileAttributeView($Class* type) override;
	virtual bool supportsFileAttributeView($String* name) override;
	virtual $String* toString() override;
	virtual $String* type() override;
	virtual ::sun::nio::fs::WindowsNativeDispatcher$VolumeInformation* volumeInformation();
	virtual int32_t volumeType();
	static bool $assertionsDisabled;
	$String* root = nullptr;
	::sun::nio::fs::WindowsNativeDispatcher$VolumeInformation* volInfo = nullptr;
	int32_t volType = 0;
	$String* displayName = nullptr;
	int32_t hashCode$ = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsFileStore_h_