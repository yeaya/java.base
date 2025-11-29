#include <java/nio/file/FileSystem.h>

#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _FileSystem_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FileSystem::*)()>(&FileSystem::init$))},
	{"getFileStores", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/FileStore;>;", $PUBLIC | $ABSTRACT},
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT},
	{"getPathMatcher", "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRootDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PUBLIC | $ABSTRACT},
	{"getSeparator", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUserPrincipalLookupService", "()Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $PUBLIC | $ABSTRACT},
	{"isOpen", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"newWatchService", "()Ljava/nio/file/WatchService;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"provider", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PUBLIC | $ABSTRACT},
	{"supportedFileAttributeViews", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
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