#include <sun/nio/fs/BsdFileSystem.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/WatchService.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Set.h>
#include <sun/nio/fs/BsdFileStore.h>
#include <sun/nio/fs/BsdFileSystem$SupportedFileFileAttributeViewsHolder.h>
#include <sun/nio/fs/BsdNativeDispatcher.h>
#include <sun/nio/fs/PollingWatchService.h>
#include <sun/nio/fs/UnixException.h>
#include <sun/nio/fs/UnixFileSystem.h>
#include <sun/nio/fs/UnixFileSystemProvider.h>
#include <sun/nio/fs/UnixMountEntry.h>
#include <sun/nio/fs/UnixUserDefinedFileAttributeView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileStore = ::java::nio::file::FileStore;
using $WatchService = ::java::nio::file::WatchService;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Set = ::java::util::Set;
using $BsdFileStore = ::sun::nio::fs::BsdFileStore;
using $BsdFileSystem$SupportedFileFileAttributeViewsHolder = ::sun::nio::fs::BsdFileSystem$SupportedFileFileAttributeViewsHolder;
using $BsdNativeDispatcher = ::sun::nio::fs::BsdNativeDispatcher;
using $PollingWatchService = ::sun::nio::fs::PollingWatchService;
using $UnixException = ::sun::nio::fs::UnixException;
using $UnixFileSystem = ::sun::nio::fs::UnixFileSystem;
using $UnixFileSystemProvider = ::sun::nio::fs::UnixFileSystemProvider;
using $UnixMountEntry = ::sun::nio::fs::UnixMountEntry;
using $UnixUserDefinedFileAttributeView = ::sun::nio::fs::UnixUserDefinedFileAttributeView;

namespace sun {
	namespace nio {
		namespace fs {

void BsdFileSystem::init$($UnixFileSystemProvider* provider, $String* dir) {
	$UnixFileSystem::init$(provider, dir);
}

$WatchService* BsdFileSystem::newWatchService() {
	return $new($PollingWatchService);
}

$Set* BsdFileSystem::supportedFileAttributeViews() {
	$init($BsdFileSystem$SupportedFileFileAttributeViewsHolder);
	return $BsdFileSystem$SupportedFileFileAttributeViewsHolder::supportedFileAttributeViews$;
}

void BsdFileSystem::copyNonPosixAttributes(int32_t ofd, int32_t nfd) {
	$UnixUserDefinedFileAttributeView::copyExtendedAttributes(ofd, nfd);
}

$Iterable* BsdFileSystem::getMountEntries() {
	$useLocalObjectStack();
	$var($ArrayList, entries, $new($ArrayList));
	try {
		int64_t iter = $BsdNativeDispatcher::getfsstat();
		$var($Throwable, var$0, nullptr);
		try {
			for (;;) {
				$var($UnixMountEntry, entry, $new($UnixMountEntry));
				int32_t res = $BsdNativeDispatcher::fsstatEntry(iter, entry);
				if (res < 0) {
					break;
				}
				entries->add(entry);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$BsdNativeDispatcher::endfsstat(iter);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} catch ($UnixException& x) {
	}
	return $cast($AbstractCollection, entries);
}

$FileStore* BsdFileSystem::getFileStore($UnixMountEntry* entry) {
	return $new($BsdFileStore, this, entry);
}

BsdFileSystem::BsdFileSystem() {
}

$Class* BsdFileSystem::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/UnixFileSystemProvider;Ljava/lang/String;)V", nullptr, 0, $method(BsdFileSystem, init$, void, $UnixFileSystemProvider*, $String*)},
		{"copyNonPosixAttributes", "(II)V", nullptr, 0, $virtualMethod(BsdFileSystem, copyNonPosixAttributes, void, int32_t, int32_t)},
		{"getFileStore", "(Lsun/nio/fs/UnixMountEntry;)Ljava/nio/file/FileStore;", nullptr, 0, $virtualMethod(BsdFileSystem, getFileStore, $FileStore*, $UnixMountEntry*), "java.io.IOException"},
		{"getMountEntries", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Lsun/nio/fs/UnixMountEntry;>;", 0, $virtualMethod(BsdFileSystem, getMountEntries, $Iterable*)},
		{"newWatchService", "()Ljava/nio/file/WatchService;", nullptr, $PUBLIC, $virtualMethod(BsdFileSystem, newWatchService, $WatchService*), "java.io.IOException"},
		{"supportedFileAttributeViews", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(BsdFileSystem, supportedFileAttributeViews, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.BsdFileSystem$SupportedFileFileAttributeViewsHolder", "sun.nio.fs.BsdFileSystem", "SupportedFileFileAttributeViewsHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.BsdFileSystem",
		"sun.nio.fs.UnixFileSystem",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.fs.BsdFileSystem$SupportedFileFileAttributeViewsHolder"
	};
	$loadClass(BsdFileSystem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BsdFileSystem);
	});
	return class$;
}

$Class* BsdFileSystem::class$ = nullptr;

		} // fs
	} // nio
} // sun