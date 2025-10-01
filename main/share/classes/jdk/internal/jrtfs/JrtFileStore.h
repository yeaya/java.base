#ifndef _jdk_internal_jrtfs_JrtFileStore_h_
#define _jdk_internal_jrtfs_JrtFileStore_h_
//$ class jdk.internal.jrtfs.JrtFileStore
//$ extends java.nio.file.FileStore

#include <java/nio/file/FileStore.h>

namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileStoreAttributeView;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace jrtfs {
			class JrtPath;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtFileStore : public ::java::nio::file::FileStore {
	$class(JrtFileStore, $NO_CLASS_INIT, ::java::nio::file::FileStore)
public:
	JrtFileStore();
	void init$(::jdk::internal::jrtfs::JrtPath* jrtPath);
	virtual $Object* getAttribute($String* attribute) override;
	virtual ::java::nio::file::attribute::FileStoreAttributeView* getFileStoreAttributeView($Class* type) override;
	virtual int64_t getTotalSpace() override;
	virtual int64_t getUnallocatedSpace() override;
	virtual int64_t getUsableSpace() override;
	virtual bool isReadOnly() override;
	virtual $String* name() override;
	virtual bool supportsFileAttributeView($String* name) override;
	virtual bool supportsFileAttributeView($Class* type) override;
	virtual $String* type() override;
	::java::nio::file::FileSystem* jrtfs = nullptr;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_JrtFileStore_h_