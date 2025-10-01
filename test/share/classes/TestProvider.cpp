#include <TestProvider.h>

#include <TestProvider$TestFileSystem.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/file/AccessMode.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/ReadOnlyFileSystemException.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $TestProvider$TestFileSystem = ::TestProvider$TestFileSystem;
using $AccessModeArray = $Array<::java::nio::file::AccessMode>;
using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $FileStore = ::java::nio::file::FileStore;
using $FileSystem = ::java::nio::file::FileSystem;
using $Path = ::java::nio::file::Path;
using $ReadOnlyFileSystemException = ::java::nio::file::ReadOnlyFileSystemException;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

$FieldInfo _TestProvider_FieldInfo_[] = {
	{"defaultProvider", "Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PRIVATE | $FINAL, $field(TestProvider, defaultProvider$)},
	{"theFileSystem", "LTestProvider$TestFileSystem;", nullptr, $PRIVATE | $FINAL, $field(TestProvider, theFileSystem)},
	{}
};

$MethodInfo _TestProvider_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/spi/FileSystemProvider;)V", nullptr, $PUBLIC, $method(static_cast<void(TestProvider::*)($FileSystemProvider*)>(&TestProvider::init$))},
	{"checkAccess", "(Ljava/nio/file/Path;[Ljava/nio/file/AccessMode;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"copy", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"createDirectory", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute<*>;)V", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"createLink", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createSymbolicLink", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute<*>;)V", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"defaultProvider", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, 0},
	{"delete", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileAttributeView", "(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;", "<V::Ljava/nio/file/attribute/FileAttributeView;>(Ljava/nio/file/Path;Ljava/lang/Class<TV;>;[Ljava/nio/file/LinkOption;)TV;", $PUBLIC | $TRANSIENT},
	{"getFileStore", "(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileSystem", "(Ljava/net/URI;)Ljava/nio/file/FileSystem;", nullptr, $PUBLIC},
	{"getPath", "(Ljava/net/URI;)Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"getScheme", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isHidden", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isSameFile", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"move", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"newByteChannel", "(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;", "(Ljava/nio/file/Path;Ljava/util/Set<+Ljava/nio/file/OpenOption;>;[Ljava/nio/file/attribute/FileAttribute<*>;)Ljava/nio/channels/SeekableByteChannel;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"newDirectoryStream", "(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;", "(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"newFileSystem", "(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;", "(Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;*>;)Ljava/nio/file/FileSystem;", $PUBLIC, nullptr, "java.io.IOException"},
	{"readAttributes", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"readAttributes", "(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;", "<A::Ljava/nio/file/attribute/BasicFileAttributes;>(Ljava/nio/file/Path;Ljava/lang/Class<TA;>;[Ljava/nio/file/LinkOption;)TA;", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"readSymbolicLink", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setAttribute", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _TestProvider_InnerClassesInfo_[] = {
	{"TestProvider$TestPath", "TestProvider", "TestPath", $STATIC},
	{"TestProvider$TestFileSystem", "TestProvider", "TestFileSystem", $STATIC},
	{}
};

$ClassInfo _TestProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestProvider",
	"java.nio.file.spi.FileSystemProvider",
	nullptr,
	_TestProvider_FieldInfo_,
	_TestProvider_MethodInfo_,
	nullptr,
	nullptr,
	_TestProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestProvider$TestPath,TestProvider$TestPath$1,TestProvider$TestFileSystem"
};

$Object* allocate$TestProvider($Class* clazz) {
	return $of($alloc(TestProvider));
}

void TestProvider::init$($FileSystemProvider* defaultProvider) {
	$FileSystemProvider::init$();
	$set(this, defaultProvider$, defaultProvider);
	$var($FileSystem, fs, $nc(defaultProvider)->getFileSystem($($URI::create("file:/"_s))));
	$set(this, theFileSystem, $new($TestProvider$TestFileSystem, fs, this));
}

$FileSystemProvider* TestProvider::defaultProvider() {
	return this->defaultProvider$;
}

$String* TestProvider::getScheme() {
	return "file"_s;
}

$FileSystem* TestProvider::newFileSystem($URI* uri, $Map* env) {
	return $nc(this->defaultProvider$)->newFileSystem(uri, env);
}

$FileSystem* TestProvider::getFileSystem($URI* uri) {
	return this->theFileSystem;
}

$Path* TestProvider::getPath($URI* uri) {
	$var($Path, path, $nc(this->defaultProvider$)->getPath(uri));
	return $nc(this->theFileSystem)->wrap(path);
}

void TestProvider::setAttribute($Path* file, $String* attribute, Object$* value, $LinkOptionArray* options) {
	$throwNew($RuntimeException, "not implemented"_s);
}

$Map* TestProvider::readAttributes($Path* file, $String* attributes, $LinkOptionArray* options) {
	$var($Path, delegate, $nc(this->theFileSystem)->unwrap(file));
	return $nc(this->defaultProvider$)->readAttributes(delegate, attributes, options);
}

$BasicFileAttributes* TestProvider::readAttributes($Path* file, $Class* type, $LinkOptionArray* options) {
	$var($Path, delegate, $nc(this->theFileSystem)->unwrap(file));
	return $nc(this->defaultProvider$)->readAttributes(delegate, type, options);
}

$FileAttributeView* TestProvider::getFileAttributeView($Path* file, $Class* type, $LinkOptionArray* options) {
	$var($Path, delegate, $nc(this->theFileSystem)->unwrap(file));
	return $nc(this->defaultProvider$)->getFileAttributeView(delegate, type, options);
}

void TestProvider::delete$($Path* file) {
	$var($Path, delegate, $nc(this->theFileSystem)->unwrap(file));
	$nc(this->defaultProvider$)->delete$(delegate);
}

void TestProvider::createSymbolicLink($Path* link, $Path* target, $FileAttributeArray* attrs) {
	$throwNew($RuntimeException, "not implemented"_s);
}

void TestProvider::createLink($Path* link, $Path* existing) {
	$throwNew($RuntimeException, "not implemented"_s);
}

$Path* TestProvider::readSymbolicLink($Path* link) {
	$var($Path, delegate, $nc(this->theFileSystem)->unwrap(link));
	$var($Path, target, $nc(this->defaultProvider$)->readSymbolicLink(delegate));
	return $nc(this->theFileSystem)->wrap(target);
}

void TestProvider::copy($Path* source, $Path* target, $CopyOptionArray* options) {
	$throwNew($RuntimeException, "not implemented"_s);
}

void TestProvider::move($Path* source, $Path* target, $CopyOptionArray* options) {
	$throwNew($RuntimeException, "not implemented"_s);
}

$DirectoryStream* TestProvider::newDirectoryStream($Path* dir, $DirectoryStream$Filter* filter) {
	$throwNew($RuntimeException, "not implemented"_s);
	$shouldNotReachHere();
}

void TestProvider::createDirectory($Path* dir, $FileAttributeArray* attrs) {
	$var($Path, delegate, $nc(this->theFileSystem)->unwrap(dir));
	$nc(this->defaultProvider$)->createDirectory(delegate, attrs);
}

$SeekableByteChannel* TestProvider::newByteChannel($Path* file, $Set* options, $FileAttributeArray* attrs) {
	$var($Path, delegate, $nc(this->theFileSystem)->unwrap(file));
	return $nc(this->defaultProvider$)->newByteChannel(delegate, options, attrs);
}

bool TestProvider::isHidden($Path* file) {
	$throwNew($ReadOnlyFileSystemException);
	$shouldNotReachHere();
}

$FileStore* TestProvider::getFileStore($Path* file) {
	$throwNew($RuntimeException, "not implemented"_s);
	$shouldNotReachHere();
}

bool TestProvider::isSameFile($Path* file, $Path* other) {
	$throwNew($RuntimeException, "not implemented"_s);
	$shouldNotReachHere();
}

void TestProvider::checkAccess($Path* file, $AccessModeArray* modes) {
	$throwNew($RuntimeException, "not implemented"_s);
}

TestProvider::TestProvider() {
}

$Class* TestProvider::load$($String* name, bool initialize) {
	$loadClass(TestProvider, name, initialize, &_TestProvider_ClassInfo_, allocate$TestProvider);
	return class$;
}

$Class* TestProvider::class$ = nullptr;