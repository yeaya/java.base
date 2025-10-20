#include <PassThroughFileSystem.h>

#include <PassThroughFileSystem$1.h>
#include <PassThroughFileSystem$2.h>
#include <PassThroughFileSystem$PassThroughPath.h>
#include <PassThroughFileSystem$PassThroughProvider.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Iterable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <java/nio/file/ProviderMismatchException.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $PassThroughFileSystem$1 = ::PassThroughFileSystem$1;
using $PassThroughFileSystem$2 = ::PassThroughFileSystem$2;
using $PassThroughFileSystem$PassThroughPath = ::PassThroughFileSystem$PassThroughPath;
using $PassThroughFileSystem$PassThroughProvider = ::PassThroughFileSystem$PassThroughProvider;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;
using $ProviderMismatchException = ::java::nio::file::ProviderMismatchException;
using $WatchService = ::java::nio::file::WatchService;
using $UserPrincipalLookupService = ::java::nio::file::attribute::UserPrincipalLookupService;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

$FieldInfo _PassThroughFileSystem_FieldInfo_[] = {
	{"provider", "Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PRIVATE | $FINAL, $field(PassThroughFileSystem, provider$)},
	{"delegate", "Ljava/nio/file/FileSystem;", nullptr, $PRIVATE | $FINAL, $field(PassThroughFileSystem, delegate)},
	{}
};

$MethodInfo _PassThroughFileSystem_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/spi/FileSystemProvider;Ljava/nio/file/FileSystem;)V", nullptr, 0, $method(static_cast<void(PassThroughFileSystem::*)($FileSystemProvider*,$FileSystem*)>(&PassThroughFileSystem::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"create", "()Ljava/nio/file/FileSystem;", nullptr, $STATIC, $method(static_cast<$FileSystem*(*)()>(&PassThroughFileSystem::create)), "java.io.IOException"},
	{"getFileStores", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/FileStore;>;", $PUBLIC},
	{"getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $TRANSIENT},
	{"getPathMatcher", "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;", nullptr, $PUBLIC},
	{"getRootDirectories", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/nio/file/Path;>;", $PUBLIC},
	{"getSeparator", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUserPrincipalLookupService", "()Ljava/nio/file/attribute/UserPrincipalLookupService;", nullptr, $PUBLIC},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"newWatchService", "()Ljava/nio/file/WatchService;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"provider", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PUBLIC},
	{"supportedFileAttributeViews", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"unwrap", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $STATIC, $method(static_cast<$Path*(*)($Path*)>(&PassThroughFileSystem::unwrap))},
	{}
};

$InnerClassInfo _PassThroughFileSystem_InnerClassesInfo_[] = {
	{"PassThroughFileSystem$PassThroughPath", "PassThroughFileSystem", "PassThroughPath", $STATIC},
	{"PassThroughFileSystem$PassThroughProvider", "PassThroughFileSystem", "PassThroughProvider", $STATIC},
	{"PassThroughFileSystem$2", nullptr, nullptr, 0},
	{"PassThroughFileSystem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PassThroughFileSystem_ClassInfo_ = {
	$ACC_SUPER,
	"PassThroughFileSystem",
	"java.nio.file.FileSystem",
	nullptr,
	_PassThroughFileSystem_FieldInfo_,
	_PassThroughFileSystem_MethodInfo_,
	nullptr,
	nullptr,
	_PassThroughFileSystem_InnerClassesInfo_,
	nullptr,
	nullptr,
	"PassThroughFileSystem$PassThroughPath,PassThroughFileSystem$PassThroughPath$1,PassThroughFileSystem$PassThroughProvider,PassThroughFileSystem$PassThroughProvider$1,PassThroughFileSystem$PassThroughProvider$1$1,PassThroughFileSystem$2,PassThroughFileSystem$1,PassThroughFileSystem$1$1"
};

$Object* allocate$PassThroughFileSystem($Class* clazz) {
	return $of($alloc(PassThroughFileSystem));
}

void PassThroughFileSystem::init$($FileSystemProvider* provider, $FileSystem* delegate) {
	$FileSystem::init$();
	$set(this, provider$, provider);
	$set(this, delegate, delegate);
}

$FileSystem* PassThroughFileSystem::create() {
	$init(PassThroughFileSystem);
	$useLocalCurrentObjectStackCache();
	$var($FileSystemProvider, provider, $new($PassThroughFileSystem$PassThroughProvider));
	$var($Map, env, $Collections::emptyMap());
	$var($URI, uri, $URI::create("pass:///"_s));
	return provider->newFileSystem(uri, env);
}

$Path* PassThroughFileSystem::unwrap($Path* wrapper) {
	$init(PassThroughFileSystem);
	if (wrapper == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($PassThroughFileSystem$PassThroughPath, wrapper))) {
		$throwNew($ProviderMismatchException);
	}
	return $nc(($cast($PassThroughFileSystem$PassThroughPath, wrapper)))->delegate;
}

$FileSystemProvider* PassThroughFileSystem::provider() {
	return this->provider$;
}

void PassThroughFileSystem::close() {
	$nc(this->delegate)->close();
}

bool PassThroughFileSystem::isOpen() {
	return $nc(this->delegate)->isOpen();
}

bool PassThroughFileSystem::isReadOnly() {
	return $nc(this->delegate)->isReadOnly();
}

$String* PassThroughFileSystem::getSeparator() {
	return $nc(this->delegate)->getSeparator();
}

$Iterable* PassThroughFileSystem::getRootDirectories() {
	$var($Iterable, roots, $nc(this->delegate)->getRootDirectories());
	return $new($PassThroughFileSystem$1, this, roots);
}

$Iterable* PassThroughFileSystem::getFileStores() {
	return $nc(this->delegate)->getFileStores();
}

$Set* PassThroughFileSystem::supportedFileAttributeViews() {
	return $nc(this->delegate)->supportedFileAttributeViews();
}

$Path* PassThroughFileSystem::getPath($String* first, $StringArray* more) {
	return $new($PassThroughFileSystem$PassThroughPath, this, $($nc(this->delegate)->getPath(first, more)));
}

$PathMatcher* PassThroughFileSystem::getPathMatcher($String* syntaxAndPattern) {
	$var($PathMatcher, matcher, $nc(this->delegate)->getPathMatcher(syntaxAndPattern));
	return $new($PassThroughFileSystem$2, this, matcher);
}

$UserPrincipalLookupService* PassThroughFileSystem::getUserPrincipalLookupService() {
	return $nc(this->delegate)->getUserPrincipalLookupService();
}

$WatchService* PassThroughFileSystem::newWatchService() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

PassThroughFileSystem::PassThroughFileSystem() {
}

$Class* PassThroughFileSystem::load$($String* name, bool initialize) {
	$loadClass(PassThroughFileSystem, name, initialize, &_PassThroughFileSystem_ClassInfo_, allocate$PassThroughFileSystem);
	return class$;
}

$Class* PassThroughFileSystem::class$ = nullptr;