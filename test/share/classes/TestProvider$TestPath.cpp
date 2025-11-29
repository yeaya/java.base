#include <TestProvider$TestPath.h>

#include <TestProvider$TestFileSystem.h>
#include <TestProvider$TestPath$1.h>
#include <TestProvider.h>
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

using $TestProvider$TestFileSystem = ::TestProvider$TestFileSystem;
using $TestProvider$TestPath$1 = ::TestProvider$TestPath$1;
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

$FieldInfo _TestProvider$TestPath_FieldInfo_[] = {
	{"fs", "LTestProvider$TestFileSystem;", nullptr, $PRIVATE | $FINAL, $field(TestProvider$TestPath, fs)},
	{"delegate", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(TestProvider$TestPath, delegate)},
	{}
};

$MethodInfo _TestProvider$TestPath_MethodInfo_[] = {
	{"<init>", "(LTestProvider$TestFileSystem;Ljava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(TestProvider$TestPath::*)($TestProvider$TestFileSystem*,$Path*)>(&TestProvider$TestPath::init$))},
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
	{"unwrap", "()Ljava/nio/file/Path;", nullptr, 0},
	{}
};

$InnerClassInfo _TestProvider$TestPath_InnerClassesInfo_[] = {
	{"TestProvider$TestPath", "TestProvider", "TestPath", $STATIC},
	{"TestProvider$TestPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestProvider$TestPath_ClassInfo_ = {
	$ACC_SUPER,
	"TestProvider$TestPath",
	"java.lang.Object",
	"java.nio.file.Path",
	_TestProvider$TestPath_FieldInfo_,
	_TestProvider$TestPath_MethodInfo_,
	nullptr,
	nullptr,
	_TestProvider$TestPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestProvider"
};

$Object* allocate$TestProvider$TestPath($Class* clazz) {
	return $of($alloc(TestProvider$TestPath));
}

void TestProvider$TestPath::init$($TestProvider$TestFileSystem* fs, $Path* delegate) {
	$set(this, fs, fs);
	$set(this, delegate, delegate);
}

$Path* TestProvider$TestPath::unwrap() {
	return this->delegate;
}

$FileSystem* TestProvider$TestPath::getFileSystem() {
	return this->fs;
}

bool TestProvider$TestPath::isAbsolute() {
	return $nc(this->delegate)->isAbsolute();
}

$Path* TestProvider$TestPath::getRoot() {
	return $nc(this->fs)->wrap($($nc(this->delegate)->getRoot()));
}

$Path* TestProvider$TestPath::getParent() {
	return $nc(this->fs)->wrap($($nc(this->delegate)->getParent()));
}

int32_t TestProvider$TestPath::getNameCount() {
	return $nc(this->delegate)->getNameCount();
}

$Path* TestProvider$TestPath::getFileName() {
	return $nc(this->fs)->wrap($($nc(this->delegate)->getFileName()));
}

$Path* TestProvider$TestPath::getName(int32_t index) {
	return $nc(this->fs)->wrap($($nc(this->delegate)->getName(index)));
}

$Path* TestProvider$TestPath::subpath(int32_t beginIndex, int32_t endIndex) {
	return $nc(this->fs)->wrap($($nc(this->delegate)->subpath(beginIndex, endIndex)));
}

bool TestProvider$TestPath::startsWith($Path* other) {
	return $nc(this->delegate)->startsWith($($nc(this->fs)->unwrap(other)));
}

bool TestProvider$TestPath::startsWith($String* other) {
	return $nc(this->delegate)->startsWith(other);
}

bool TestProvider$TestPath::endsWith($Path* other) {
	return $nc(this->delegate)->endsWith($($nc(this->fs)->unwrap(other)));
}

bool TestProvider$TestPath::endsWith($String* other) {
	return $nc(this->delegate)->endsWith(other);
}

$Path* TestProvider$TestPath::normalize() {
	return $nc(this->fs)->wrap($($nc(this->delegate)->normalize()));
}

$Path* TestProvider$TestPath::resolve($Path* other) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->fs)->wrap($($nc(this->delegate)->resolve($($nc(this->fs)->unwrap(other)))));
}

$Path* TestProvider$TestPath::resolve($String* other) {
	return $nc(this->fs)->wrap($($nc(this->delegate)->resolve(other)));
}

$Path* TestProvider$TestPath::resolveSibling($Path* other) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->fs)->wrap($($nc(this->delegate)->resolveSibling($($nc(this->fs)->unwrap(other)))));
}

$Path* TestProvider$TestPath::resolveSibling($String* other) {
	return $nc(this->fs)->wrap($($nc(this->delegate)->resolveSibling(other)));
}

$Path* TestProvider$TestPath::relativize($Path* other) {
	$useLocalCurrentObjectStackCache();
	return $nc(this->fs)->wrap($($nc(this->delegate)->relativize($($nc(this->fs)->unwrap(other)))));
}

bool TestProvider$TestPath::equals(Object$* other) {
	if (!($instanceOf(TestProvider$TestPath, other))) {
		return false;
	}
	return $nc(this->delegate)->equals($($nc(this->fs)->unwrap($cast(TestProvider$TestPath, other))));
}

int32_t TestProvider$TestPath::hashCode() {
	return $nc(this->delegate)->hashCode();
}

$String* TestProvider$TestPath::toString() {
	return $nc(this->delegate)->toString();
}

$URI* TestProvider$TestPath::toUri() {
	$useLocalCurrentObjectStackCache();
	$var($String, ssp, $nc($($nc(this->delegate)->toUri()))->getSchemeSpecificPart());
	return $URI::create($$str({$($nc($($nc(this->fs)->provider()))->getScheme()), ":"_s, ssp}));
}

$Path* TestProvider$TestPath::toAbsolutePath() {
	return $nc(this->fs)->wrap($($nc(this->delegate)->toAbsolutePath()));
}

$Path* TestProvider$TestPath::toRealPath($LinkOptionArray* options) {
	return $nc(this->fs)->wrap($($nc(this->delegate)->toRealPath(options)));
}

$File* TestProvider$TestPath::toFile() {
	return $new($File, $(toString()));
}

$Iterator* TestProvider$TestPath::iterator() {
	$var($Iterator, itr, $nc(this->delegate)->iterator());
	return $new($TestProvider$TestPath$1, this, itr);
}

int32_t TestProvider$TestPath::compareTo($Path* other) {
	return $nc(this->delegate)->compareTo($($nc(this->fs)->unwrap(other)));
}

$WatchKey* TestProvider$TestPath::register$($WatchService* watcher, $WatchEvent$KindArray* events, $WatchEvent$ModifierArray* modifiers) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$WatchKey* TestProvider$TestPath::register$($WatchService* watcher, $WatchEvent$KindArray* events) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t TestProvider$TestPath::compareTo(Object$* other) {
	return this->compareTo($cast($Path, other));
}

TestProvider$TestPath::TestProvider$TestPath() {
}

$Class* TestProvider$TestPath::load$($String* name, bool initialize) {
	$loadClass(TestProvider$TestPath, name, initialize, &_TestProvider$TestPath_ClassInfo_, allocate$TestProvider$TestPath);
	return class$;
}

$Class* TestProvider$TestPath::class$ = nullptr;