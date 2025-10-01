#include <sun/nio/fs/LinuxFileSystem.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Iterable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/WatchService.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <sun/nio/fs/AbstractWatchService.h>
#include <sun/nio/fs/LinuxFileStore.h>
#include <sun/nio/fs/LinuxFileSystem$SupportedFileFileAttributeViewsHolder.h>
#include <sun/nio/fs/LinuxNativeDispatcher.h>
#include <sun/nio/fs/LinuxWatchService.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileStore.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <sun/nio/fs/UnixFileSystemProvider.h>
#include <sun/nio/fs/UnixMountEntry.h>
#include <sun/nio/fs/UnixUserDefinedFileAttributeView.h>
#include <sun/nio/fs/Util.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileStore = ::java::nio::file::FileStore;
using $WatchService = ::java::nio::file::WatchService;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $AbstractWatchService = ::sun::nio::fs::AbstractWatchService;
using $LinuxFileStore = ::sun::nio::fs::LinuxFileStore;
using $LinuxFileSystem$SupportedFileFileAttributeViewsHolder = ::sun::nio::fs::LinuxFileSystem$SupportedFileFileAttributeViewsHolder;
using $LinuxNativeDispatcher = ::sun::nio::fs::LinuxNativeDispatcher;
using $LinuxWatchService = ::sun::nio::fs::LinuxWatchService;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileStore = ::sun::nio::fs::UnixFileStore;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixFileSystemProvider = ::sun::nio::fs::UnixFileSystemProvider;
using $UnixMountEntry = ::sun::nio::fs::UnixMountEntry;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixUserDefinedFileAttributeView = ::sun::nio::fs::UnixUserDefinedFileAttributeView;
using $Util = ::sun::nio::fs::Util;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _LinuxFileSystem_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixFileSystemProvider;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LinuxFileSystem::*)($UnixFileSystemProvider*,$String*)>(&LinuxFileSystem::init$))},
	{"copyNonPosixAttributes", "(II)V", nullptr, 0},
	{"getFileStore", "(Lsun/nio/fs/UnixMountEntry;)Ljava/nio/file/FileStore;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getMountEntries", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Lsun/nio/fs/UnixMountEntry;>;", 0},
	{"getMountEntries", "()Ljava/util/List;", "()Ljava/util/List<Lsun/nio/fs/UnixMountEntry;>;", 0},
	{"newWatchService", "()Ljava/nio/file/WatchService;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"supportedFileAttributeViews", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{}
};

$InnerClassInfo _LinuxFileSystem_InnerClassesInfo_[] = {
	{"sun.nio.fs.LinuxFileSystem$SupportedFileFileAttributeViewsHolder", "sun.nio.fs.LinuxFileSystem", "SupportedFileFileAttributeViewsHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LinuxFileSystem_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.LinuxFileSystem",
	"sun.nio.fs.UnixFileSystem",
	nullptr,
	nullptr,
	_LinuxFileSystem_MethodInfo_,
	nullptr,
	nullptr,
	_LinuxFileSystem_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.LinuxFileSystem$SupportedFileFileAttributeViewsHolder"
};

$Object* allocate$LinuxFileSystem($Class* clazz) {
	return $of($alloc(LinuxFileSystem));
}

void LinuxFileSystem::init$($UnixFileSystemProvider* provider, $String* dir) {
	$UnixFileSystem::init$(provider, dir);
}

$WatchService* LinuxFileSystem::newWatchService() {
	return $new($LinuxWatchService, this);
}

$Set* LinuxFileSystem::supportedFileAttributeViews() {
	$init($LinuxFileSystem$SupportedFileFileAttributeViewsHolder);
	return $LinuxFileSystem$SupportedFileFileAttributeViewsHolder::supportedFileAttributeViews$;
}

void LinuxFileSystem::copyNonPosixAttributes(int32_t ofd, int32_t nfd) {
	$UnixUserDefinedFileAttributeView::copyExtendedAttributes(ofd, nfd);
}

$List* LinuxFileSystem::getMountEntries($String* fstab) {
	$var($ArrayList, entries, $new($ArrayList));
	try {
		$var($bytes, var$0, $Util::toBytes(fstab));
		int64_t fp = $LinuxNativeDispatcher::setmntent(var$0, $($Util::toBytes("r"_s)));
		int32_t maxLineSize = 1024;
		{
			$var($Throwable, var$1, nullptr);
			try {
				try {
					for (;;) {
						int32_t lineSize = $LinuxNativeDispatcher::getlinelen(fp);
						if (lineSize == -1) {
							break;
						}
						if (lineSize > maxLineSize) {
							maxLineSize = lineSize;
						}
					}
				} catch ($UnixException&) {
					$catch();
				}
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} /*finally*/ {
				$LinuxNativeDispatcher::rewind(fp);
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
		{
			$var($Throwable, var$2, nullptr);
			try {
				for (;;) {
					$var($UnixMountEntry, entry, $new($UnixMountEntry));
					int32_t res = $LinuxNativeDispatcher::getmntent(fp, entry, maxLineSize + 1);
					if (res < 0) {
						break;
					}
					entries->add(entry);
				}
			} catch ($Throwable&) {
				$assign(var$2, $catch());
			} /*finally*/ {
				$LinuxNativeDispatcher::endmntent(fp);
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	} catch ($UnixException&) {
		$catch();
	}
	return entries;
}

$Iterable* LinuxFileSystem::getMountEntries() {
	return getMountEntries("/etc/mtab"_s);
}

$FileStore* LinuxFileSystem::getFileStore($UnixMountEntry* entry) {
	return $new($LinuxFileStore, this, entry);
}

LinuxFileSystem::LinuxFileSystem() {
}

$Class* LinuxFileSystem::load$($String* name, bool initialize) {
	$loadClass(LinuxFileSystem, name, initialize, &_LinuxFileSystem_ClassInfo_, allocate$LinuxFileSystem);
	return class$;
}

$Class* LinuxFileSystem::class$ = nullptr;

		} // fs
	} // nio
} // sun