#include <TestProvider$TestFileSystem.h>

#include <TestProvider$TestPath.h>
#include <TestProvider.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <java/nio/file/ProviderMismatchException.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $TestProvider = ::TestProvider;
using $TestProvider$TestPath = ::TestProvider$TestPath;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $FileSystem = ::java::nio::file::FileSystem;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;
using $ProviderMismatchException = ::java::nio::file::ProviderMismatchException;
using $WatchService = ::java::nio::file::WatchService;
using $UserPrincipalLookupService = ::java::nio::file::attribute::UserPrincipalLookupService;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $Set = ::java::util::Set;

$FieldInfo _TestProvider$TestFileSystem_FieldInfo_[] = {
	{"delegate", "Ljava/nio/file/FileSystem;", nullptr, $PRIVATE | $FINAL, $field(TestProvider$TestFileSystem, delegate)},
	{"provider", "LTestProvider;", nullptr, $PRIVATE | $FINAL, $field(TestProvider$TestFileSystem, provider$)},
	{}
};

$MethodInfo _TestProvider$TestFileSystem_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/FileSystem;LTestProvider;)V", nullptr, 0, $method(TestProvider$TestFileSystem, init$, void, $FileSystem*, $TestProvider*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(TestProvider$TestFileSystem, close, void), "java.io.IOException"},
	{"getFileStores", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/FileStore;>;", $PUBLIC, $virtualMethod(TestProvider$TestFileSystem, getFileStores, $Iterable*)},
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(TestProvider$TestFileSystem, getPath, $Path*, $String*, $StringArray*)},
	{"getPathMatcher", "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;", nullptr, $PUBLIC, $virtualMethod(TestProvider$TestFileSystem, getPathMatcher, $PathMatcher*, $String*)},
	{"getRootDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PUBLIC, $virtualMethod(TestProvider$TestFileSystem, getRootDirectories, $Iterable*)},
	{"getSeparator", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestProvider$TestFileSystem, getSeparator, $String*)},
	{"getUserPrincipalLookupService", "()Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $PUBLIC, $virtualMethod(TestProvider$TestFileSystem, getUserPrincipalLookupService, $UserPrincipalLookupService*)},
	{"isOpen", "()Z", nullptr, $PUBLIC, $virtualMethod(TestProvider$TestFileSystem, isOpen, bool)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(TestProvider$TestFileSystem, isReadOnly, bool)},
	{"newWatchService", "()Ljava/nio/file/WatchService;", nullptr, $PUBLIC, $virtualMethod(TestProvider$TestFileSystem, newWatchService, $WatchService*), "java.io.IOException"},
	{"provider", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PUBLIC, $virtualMethod(TestProvider$TestFileSystem, provider, $FileSystemProvider*)},
	{"supportedFileAttributeViews", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(TestProvider$TestFileSystem, supportedFileAttributeViews, $Set*)},
	{"unwrap", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, 0, $virtualMethod(TestProvider$TestFileSystem, unwrap, $Path*, $Path*)},
	{"wrap", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, 0, $virtualMethod(TestProvider$TestFileSystem, wrap, $Path*, $Path*)},
	{}
};

$InnerClassInfo _TestProvider$TestFileSystem_InnerClassesInfo_[] = {
	{"TestProvider$TestFileSystem", "TestProvider", "TestFileSystem", $STATIC},
	{}
};

$ClassInfo _TestProvider$TestFileSystem_ClassInfo_ = {
	$ACC_SUPER,
	"TestProvider$TestFileSystem",
	"java.nio.file.FileSystem",
	nullptr,
	_TestProvider$TestFileSystem_FieldInfo_,
	_TestProvider$TestFileSystem_MethodInfo_,
	nullptr,
	nullptr,
	_TestProvider$TestFileSystem_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestProvider"
};

$Object* allocate$TestProvider$TestFileSystem($Class* clazz) {
	return $of($alloc(TestProvider$TestFileSystem));
}

void TestProvider$TestFileSystem::init$($FileSystem* delegate, $TestProvider* provider) {
	$FileSystem::init$();
	$set(this, delegate, delegate);
	$set(this, provider$, provider);
}

$Path* TestProvider$TestFileSystem::wrap($Path* path) {
	return (path != nullptr) ? static_cast<$Path*>($new($TestProvider$TestPath, this, path)) : ($Path*)nullptr;
}

$Path* TestProvider$TestFileSystem::unwrap($Path* wrapper) {
	if (wrapper == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($TestProvider$TestPath, wrapper))) {
		$throwNew($ProviderMismatchException);
	}
	return $nc(($cast($TestProvider$TestPath, wrapper)))->unwrap();
}

$FileSystemProvider* TestProvider$TestFileSystem::provider() {
	return this->provider$;
}

void TestProvider$TestFileSystem::close() {
	$throwNew($RuntimeException, "not implemented"_s);
}

bool TestProvider$TestFileSystem::isOpen() {
	return true;
}

bool TestProvider$TestFileSystem::isReadOnly() {
	return false;
}

$String* TestProvider$TestFileSystem::getSeparator() {
	return $nc(this->delegate)->getSeparator();
}

$Iterable* TestProvider$TestFileSystem::getRootDirectories() {
	$throwNew($RuntimeException, "not implemented"_s);
	$shouldNotReachHere();
}

$Iterable* TestProvider$TestFileSystem::getFileStores() {
	$throwNew($RuntimeException, "not implemented"_s);
	$shouldNotReachHere();
}

$Set* TestProvider$TestFileSystem::supportedFileAttributeViews() {
	return $nc(this->delegate)->supportedFileAttributeViews();
}

$Path* TestProvider$TestFileSystem::getPath($String* first, $StringArray* more) {
	$var($Path, path, $nc(this->delegate)->getPath(first, more));
	return wrap(path);
}

$PathMatcher* TestProvider$TestFileSystem::getPathMatcher($String* syntaxAndPattern) {
	return $nc(this->delegate)->getPathMatcher(syntaxAndPattern);
}

$UserPrincipalLookupService* TestProvider$TestFileSystem::getUserPrincipalLookupService() {
	return $nc(this->delegate)->getUserPrincipalLookupService();
}

$WatchService* TestProvider$TestFileSystem::newWatchService() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

TestProvider$TestFileSystem::TestProvider$TestFileSystem() {
}

$Class* TestProvider$TestFileSystem::load$($String* name, bool initialize) {
	$loadClass(TestProvider$TestFileSystem, name, initialize, &_TestProvider$TestFileSystem_ClassInfo_, allocate$TestProvider$TestFileSystem);
	return class$;
}

$Class* TestProvider$TestFileSystem::class$ = nullptr;