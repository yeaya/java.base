#ifndef _sun_nio_fs_UnixFileStore_h_
#define _sun_nio_fs_UnixFileStore_h_
//$ class sun.nio.fs.UnixFileStore
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
namespace java {
	namespace util {
		class Properties;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class UnixFileStore$FeatureStatus;
			class UnixFileStoreAttributes;
			class UnixFileSystem;
			class UnixMountEntry;
			class UnixPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileStore : public ::java::nio::file::FileStore {
	$class(UnixFileStore, 0, ::java::nio::file::FileStore)
public:
	UnixFileStore();
	void init$(::sun::nio::fs::UnixPath* file);
	void init$(::sun::nio::fs::UnixFileSystem* fs, ::sun::nio::fs::UnixMountEntry* entry);
	virtual ::sun::nio::fs::UnixFileStore$FeatureStatus* checkIfFeaturePresent($String* feature);
	virtual int64_t dev();
	static int64_t devFor(::sun::nio::fs::UnixPath* file);
	virtual ::sun::nio::fs::UnixMountEntry* entry();
	virtual bool equals(Object$* ob) override;
	virtual ::sun::nio::fs::UnixPath* file();
	virtual ::sun::nio::fs::UnixMountEntry* findMountEntry() {return nullptr;}
	virtual $Object* getAttribute($String* attribute) override;
	virtual int64_t getBlockSize() override;
	virtual ::java::nio::file::attribute::FileStoreAttributeView* getFileStoreAttributeView($Class* view) override;
	virtual int64_t getTotalSpace() override;
	virtual int64_t getUnallocatedSpace() override;
	virtual int64_t getUsableSpace() override;
	virtual int32_t hashCode() override;
	virtual bool isExtendedAttributesEnabled(::sun::nio::fs::UnixPath* path);
	virtual bool isReadOnly() override;
	static ::java::util::Properties* loadProperties();
	virtual $String* name() override;
	::sun::nio::fs::UnixFileStoreAttributes* readAttributes();
	virtual bool supportsFileAttributeView($Class* type) override;
	virtual bool supportsFileAttributeView($String* name) override;
	virtual $String* toString() override;
	virtual $String* type() override;
	::sun::nio::fs::UnixPath* file$ = nullptr;
	int64_t dev$ = 0;
	::sun::nio::fs::UnixMountEntry* entry$$ = nullptr;
	static $Object* loadLock;
	static $volatile(::java::util::Properties*) props;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileStore_h_