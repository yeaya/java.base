#ifndef _sun_nio_fs_LinuxFileSystem_h_
#define _sun_nio_fs_LinuxFileSystem_h_
//$ class sun.nio.fs.LinuxFileSystem
//$ extends sun.nio.fs.UnixFileSystem

#include <sun/nio/fs/UnixFileSystem.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileStore;
			class WatchService;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class UnixFileSystemProvider;
			class UnixMountEntry;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class LinuxFileSystem : public ::sun::nio::fs::UnixFileSystem {
	$class(LinuxFileSystem, $NO_CLASS_INIT, ::sun::nio::fs::UnixFileSystem)
public:
	LinuxFileSystem();
	void init$(::sun::nio::fs::UnixFileSystemProvider* provider, $String* dir);
	virtual void copyNonPosixAttributes(int32_t ofd, int32_t nfd) override;
	virtual ::java::nio::file::FileStore* getFileStore(::sun::nio::fs::UnixMountEntry* entry) override;
	virtual ::java::util::List* getMountEntries($String* fstab);
	virtual ::java::lang::Iterable* getMountEntries() override;
	virtual ::java::nio::file::WatchService* newWatchService() override;
	virtual ::java::util::Set* supportedFileAttributeViews() override;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_LinuxFileSystem_h_