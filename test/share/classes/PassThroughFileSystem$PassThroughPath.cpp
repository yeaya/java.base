#include <PassThroughFileSystem$PassThroughPath.h>

#include <PassThroughFileSystem$PassThroughPath$1.h>
#include <PassThroughFileSystem.h>
#include <java/io/File.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $PassThroughFileSystem = ::PassThroughFileSystem;
using $PassThroughFileSystem$PassThroughPath$1 = ::PassThroughFileSystem$PassThroughPath$1;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $WatchEvent$ModifierArray = $Array<::java::nio::file::WatchEvent$Modifier>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $Path = ::java::nio::file::Path;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $Iterator = ::java::util::Iterator;

$FieldInfo _PassThroughFileSystem$PassThroughPath_FieldInfo_[] = {
	{"fs", "Ljava/nio/file/FileSystem;", nullptr, $PRIVATE | $FINAL, $field(PassThroughFileSystem$PassThroughPath, fs)},
	{"delegate", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(PassThroughFileSystem$PassThroughPath, delegate)},
	{}
};

$MethodInfo _PassThroughFileSystem$PassThroughPath_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/FileSystem;Ljava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(PassThroughFileSystem$PassThroughPath::*)($FileSystem*,$Path*)>(&PassThroughFileSystem$PassThroughPath::init$))},
	{"compareTo", "(Ljava/nio/file/Path;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"endsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"endsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getFileName", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getFileSystem", "()Ljava/nio/file/FileSystem;", nullptr, $PUBLIC},
	{"getName", "(I)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getNameCount", "()I", nullptr, $PUBLIC},
	{"getParent", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getRoot", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isAbsolute", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC},
	{"normalize", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind<*>;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", $PUBLIC | $TRANSIENT},
	{"register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind<*>;)Ljava/nio/file/WatchKey;", $PUBLIC | $TRANSIENT},
	{"relativize", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"resolve", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"resolve", "(Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"resolveSibling", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"resolveSibling", "(Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"startsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{"startsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"subpath", "(II)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"toAbsolutePath", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"toFile", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"toRealPath", "([Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"wrap", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(static_cast<$Path*(PassThroughFileSystem$PassThroughPath::*)($Path*)>(&PassThroughFileSystem$PassThroughPath::wrap))},
	{}
};

$InnerClassInfo _PassThroughFileSystem$PassThroughPath_InnerClassesInfo_[] = {
	{"PassThroughFileSystem$PassThroughPath", "PassThroughFileSystem", "PassThroughPath", $STATIC},
	{"PassThroughFileSystem$PassThroughPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PassThroughFileSystem$PassThroughPath_ClassInfo_ = {
	$ACC_SUPER,
	"PassThroughFileSystem$PassThroughPath",
	"java.lang.Object",
	"java.nio.file.Path",
	_PassThroughFileSystem$PassThroughPath_FieldInfo_,
	_PassThroughFileSystem$PassThroughPath_MethodInfo_,
	nullptr,
	nullptr,
	_PassThroughFileSystem$PassThroughPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PassThroughFileSystem"
};

$Object* allocate$PassThroughFileSystem$PassThroughPath($Class* clazz) {
	return $of($alloc(PassThroughFileSystem$PassThroughPath));
}

void PassThroughFileSystem$PassThroughPath::init$($FileSystem* fs, $Path* delegate) {
	$set(this, fs, fs);
	$set(this, delegate, delegate);
}

$Path* PassThroughFileSystem$PassThroughPath::wrap($Path* path) {
	return (path != nullptr) ? static_cast<$Path*>($new(PassThroughFileSystem$PassThroughPath, this->fs, path)) : ($Path*)nullptr;
}

$FileSystem* PassThroughFileSystem$PassThroughPath::getFileSystem() {
	return this->fs;
}

bool PassThroughFileSystem$PassThroughPath::isAbsolute() {
	return $nc(this->delegate)->isAbsolute();
}

$Path* PassThroughFileSystem$PassThroughPath::getRoot() {
	return wrap($($nc(this->delegate)->getRoot()));
}

$Path* PassThroughFileSystem$PassThroughPath::getParent() {
	return wrap($($nc(this->delegate)->getParent()));
}

int32_t PassThroughFileSystem$PassThroughPath::getNameCount() {
	return $nc(this->delegate)->getNameCount();
}

$Path* PassThroughFileSystem$PassThroughPath::getFileName() {
	return wrap($($nc(this->delegate)->getFileName()));
}

$Path* PassThroughFileSystem$PassThroughPath::getName(int32_t index) {
	return wrap($($nc(this->delegate)->getName(index)));
}

$Path* PassThroughFileSystem$PassThroughPath::subpath(int32_t beginIndex, int32_t endIndex) {
	return wrap($($nc(this->delegate)->subpath(beginIndex, endIndex)));
}

bool PassThroughFileSystem$PassThroughPath::startsWith($Path* other) {
	return $nc(this->delegate)->startsWith($($PassThroughFileSystem::unwrap(other)));
}

bool PassThroughFileSystem$PassThroughPath::startsWith($String* other) {
	return $nc(this->delegate)->startsWith(other);
}

bool PassThroughFileSystem$PassThroughPath::endsWith($Path* other) {
	return $nc(this->delegate)->endsWith($($PassThroughFileSystem::unwrap(other)));
}

bool PassThroughFileSystem$PassThroughPath::endsWith($String* other) {
	return $nc(this->delegate)->endsWith(other);
}

$Path* PassThroughFileSystem$PassThroughPath::normalize() {
	return wrap($($nc(this->delegate)->normalize()));
}

$Path* PassThroughFileSystem$PassThroughPath::resolve($Path* other) {
	$useLocalCurrentObjectStackCache();
	return wrap($($nc(this->delegate)->resolve($($PassThroughFileSystem::unwrap(other)))));
}

$Path* PassThroughFileSystem$PassThroughPath::resolve($String* other) {
	return wrap($($nc(this->delegate)->resolve(other)));
}

$Path* PassThroughFileSystem$PassThroughPath::resolveSibling($Path* other) {
	$useLocalCurrentObjectStackCache();
	return wrap($($nc(this->delegate)->resolveSibling($($PassThroughFileSystem::unwrap(other)))));
}

$Path* PassThroughFileSystem$PassThroughPath::resolveSibling($String* other) {
	return wrap($($nc(this->delegate)->resolveSibling(other)));
}

$Path* PassThroughFileSystem$PassThroughPath::relativize($Path* other) {
	$useLocalCurrentObjectStackCache();
	return wrap($($nc(this->delegate)->relativize($($PassThroughFileSystem::unwrap(other)))));
}

bool PassThroughFileSystem$PassThroughPath::equals(Object$* other) {
	if (!($instanceOf(PassThroughFileSystem$PassThroughPath, other))) {
		return false;
	}
	return $nc(this->delegate)->equals($($PassThroughFileSystem::unwrap($cast(PassThroughFileSystem$PassThroughPath, other))));
}

int32_t PassThroughFileSystem$PassThroughPath::hashCode() {
	return $nc(this->delegate)->hashCode();
}

$String* PassThroughFileSystem$PassThroughPath::toString() {
	return $nc(this->delegate)->toString();
}

$URI* PassThroughFileSystem$PassThroughPath::toUri() {
	$useLocalCurrentObjectStackCache();
	$var($String, ssp, $nc($($nc(this->delegate)->toUri()))->getSchemeSpecificPart());
	return $URI::create($$str({$($nc($($nc(this->fs)->provider()))->getScheme()), ":"_s, ssp}));
}

$Path* PassThroughFileSystem$PassThroughPath::toAbsolutePath() {
	return wrap($($nc(this->delegate)->toAbsolutePath()));
}

$Path* PassThroughFileSystem$PassThroughPath::toRealPath($LinkOptionArray* options) {
	return wrap($($nc(this->delegate)->toRealPath(options)));
}

$File* PassThroughFileSystem$PassThroughPath::toFile() {
	return $nc(this->delegate)->toFile();
}

$Iterator* PassThroughFileSystem$PassThroughPath::iterator() {
	$var($Iterator, itr, $nc(this->delegate)->iterator());
	return $new($PassThroughFileSystem$PassThroughPath$1, this, itr);
}

int32_t PassThroughFileSystem$PassThroughPath::compareTo($Path* other) {
	return $nc(this->delegate)->compareTo($($PassThroughFileSystem::unwrap(other)));
}

$WatchKey* PassThroughFileSystem$PassThroughPath::register$($WatchService* watcher, $WatchEvent$KindArray* events, $WatchEvent$ModifierArray* modifiers) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$WatchKey* PassThroughFileSystem$PassThroughPath::register$($WatchService* watcher, $WatchEvent$KindArray* events) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t PassThroughFileSystem$PassThroughPath::compareTo(Object$* other) {
	return this->compareTo($cast($Path, other));
}

PassThroughFileSystem$PassThroughPath::PassThroughFileSystem$PassThroughPath() {
}

$Class* PassThroughFileSystem$PassThroughPath::load$($String* name, bool initialize) {
	$loadClass(PassThroughFileSystem$PassThroughPath, name, initialize, &_PassThroughFileSystem$PassThroughPath_ClassInfo_, allocate$PassThroughFileSystem$PassThroughPath);
	return class$;
}

$Class* PassThroughFileSystem$PassThroughPath::class$ = nullptr;