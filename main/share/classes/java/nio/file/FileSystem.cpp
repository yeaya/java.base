#include <java/nio/file/FileSystem.h>

#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;
using $WatchService = ::java::nio::file::WatchService;
using $UserPrincipalLookupService = ::java::nio::file::attribute::UserPrincipalLookupService;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $Set = ::java::util::Set;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _FileSystem_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(FileSystem, init$, void)},
	{"getFileStores", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/FileStore;>;", $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getFileStores, $Iterable*)},
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(FileSystem, getPath, $Path*, $String*, $StringArray*)},
	{"getPathMatcher", "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getPathMatcher, $PathMatcher*, $String*)},
	{"getRootDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getRootDirectories, $Iterable*)},
	{"getSeparator", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getSeparator, $String*)},
	{"getUserPrincipalLookupService", "()Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, getUserPrincipalLookupService, $UserPrincipalLookupService*)},
	{"isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, isOpen, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, isReadOnly, bool)},
	{"newWatchService", "()Ljava/nio/file/WatchService;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, newWatchService, $WatchService*), "java.io.IOException"},
	{"provider", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, provider, $FileSystemProvider*)},
	{"supportedFileAttributeViews", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(FileSystem, supportedFileAttributeViews, $Set*)},
	{}
};

$ClassInfo _FileSystem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.file.FileSystem",
	"java.lang.Object",
	"java.io.Closeable",
	nullptr,
	_FileSystem_MethodInfo_
};

$Object* allocate$FileSystem($Class* clazz) {
	return $of($alloc(FileSystem));
}

void FileSystem::init$() {
}

FileSystem::FileSystem() {
}

$Class* FileSystem::load$($String* name, bool initialize) {
	$loadClass(FileSystem, name, initialize, &_FileSystem_ClassInfo_, allocate$FileSystem);
	return class$;
}

$Class* FileSystem::class$ = nullptr;

		} // file
	} // nio
} // java