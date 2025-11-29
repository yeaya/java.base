#include <PassThroughFileSystem$PassThroughProvider.h>

#include <PassThroughFileSystem$PassThroughPath.h>
#include <PassThroughFileSystem$PassThroughProvider$1.h>
#include <PassThroughFileSystem.h>
#include <java/net/URI.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/file/AccessMode.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/DirectoryStream.h>
#include <java/nio/file/FileStore.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystemAlreadyExistsException.h>
#include <java/nio/file/FileSystemNotFoundException.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef SCHEME

using $PassThroughFileSystem = ::PassThroughFileSystem;
using $PassThroughFileSystem$PassThroughPath = ::PassThroughFileSystem$PassThroughPath;
using $PassThroughFileSystem$PassThroughProvider$1 = ::PassThroughFileSystem$PassThroughProvider$1;
using $AccessModeArray = $Array<::java::nio::file::AccessMode>;
using $CopyOptionArray = $Array<::java::nio::file::CopyOption>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $DirectoryStream = ::java::nio::file::DirectoryStream;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $FileStore = ::java::nio::file::FileStore;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystemAlreadyExistsException = ::java::nio::file::FileSystemAlreadyExistsException;
using $FileSystemNotFoundException = ::java::nio::file::FileSystemNotFoundException;
using $FileSystems = ::java::nio::file::FileSystems;
using $Files = ::java::nio::file::Files;
using $NoSuchFileException = ::java::nio::file::NoSuchFileException;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

$FieldInfo _PassThroughFileSystem$PassThroughProvider_FieldInfo_[] = {
	{"SCHEME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PassThroughFileSystem$PassThroughProvider, SCHEME)},
	{"delegate", "LPassThroughFileSystem;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(PassThroughFileSystem$PassThroughProvider, delegate)},
	{}
};

$MethodInfo _PassThroughFileSystem$PassThroughProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PassThroughFileSystem$PassThroughProvider::*)()>(&PassThroughFileSystem$PassThroughProvider::init$))},
	{"checkAccess", "(Ljava/nio/file/Path;[Ljava/nio/file/AccessMode;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"checkScheme", "(Ljava/net/URI;)V", nullptr, $PRIVATE, $method(static_cast<void(PassThroughFileSystem$PassThroughProvider::*)($URI*)>(&PassThroughFileSystem$PassThroughProvider::checkScheme))},
	{"checkUri", "(Ljava/net/URI;)V", nullptr, $PRIVATE, $method(static_cast<void(PassThroughFileSystem$PassThroughProvider::*)($URI*)>(&PassThroughFileSystem$PassThroughProvider::checkUri))},
	{"copy", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V", nullptr, $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"createDirectory", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute<*>;)V", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
	{"createLink", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"createSymbolicLink", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute<*>;)V", $PUBLIC | $TRANSIENT, nullptr, "java.io.IOException"},
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
	{"wrap", "(Ljava/nio/file/DirectoryStream;)Ljava/nio/file/DirectoryStream;", "(Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;)Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;", $PRIVATE, $method(static_cast<$DirectoryStream*(PassThroughFileSystem$PassThroughProvider::*)($DirectoryStream*)>(&PassThroughFileSystem$PassThroughProvider::wrap))},
	{}
};

$InnerClassInfo _PassThroughFileSystem$PassThroughProvider_InnerClassesInfo_[] = {
	{"PassThroughFileSystem$PassThroughProvider", "PassThroughFileSystem", "PassThroughProvider", $STATIC},
	{"PassThroughFileSystem$PassThroughProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PassThroughFileSystem$PassThroughProvider_ClassInfo_ = {
	$ACC_SUPER,
	"PassThroughFileSystem$PassThroughProvider",
	"java.nio.file.spi.FileSystemProvider",
	nullptr,
	_PassThroughFileSystem$PassThroughProvider_FieldInfo_,
	_PassThroughFileSystem$PassThroughProvider_MethodInfo_,
	nullptr,
	nullptr,
	_PassThroughFileSystem$PassThroughProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PassThroughFileSystem"
};

$Object* allocate$PassThroughFileSystem$PassThroughProvider($Class* clazz) {
	return $of($alloc(PassThroughFileSystem$PassThroughProvider));
}

$String* PassThroughFileSystem$PassThroughProvider::SCHEME = nullptr;
$volatile($PassThroughFileSystem*) PassThroughFileSystem$PassThroughProvider::delegate = nullptr;

void PassThroughFileSystem$PassThroughProvider::init$() {
	$FileSystemProvider::init$();
}

$String* PassThroughFileSystem$PassThroughProvider::getScheme() {
	return PassThroughFileSystem$PassThroughProvider::SCHEME;
}

void PassThroughFileSystem$PassThroughProvider::checkScheme($URI* uri) {
	if (!$nc($($nc(uri)->getScheme()))->equalsIgnoreCase(PassThroughFileSystem$PassThroughProvider::SCHEME)) {
		$throwNew($IllegalArgumentException);
	}
}

void PassThroughFileSystem$PassThroughProvider::checkUri($URI* uri) {
	checkScheme(uri);
	if (!$nc($($nc(uri)->getSchemeSpecificPart()))->equals("///"_s)) {
		$throwNew($IllegalArgumentException);
	}
}

$FileSystem* PassThroughFileSystem$PassThroughProvider::newFileSystem($URI* uri, $Map* env) {
	$useLocalCurrentObjectStackCache();
	checkUri(uri);
	$synchronized(PassThroughFileSystem$PassThroughProvider::class$) {
		if (PassThroughFileSystem$PassThroughProvider::delegate != nullptr) {
			$throwNew($FileSystemAlreadyExistsException);
		}
		$var($PassThroughFileSystem, result, $new($PassThroughFileSystem, this, $($FileSystems::getDefault())));
		$assignStatic(PassThroughFileSystem$PassThroughProvider::delegate, result);
		return result;
	}
}

$FileSystem* PassThroughFileSystem$PassThroughProvider::getFileSystem($URI* uri) {
	checkUri(uri);
	$var($FileSystem, result, PassThroughFileSystem$PassThroughProvider::delegate);
	if (result == nullptr) {
		$throwNew($FileSystemNotFoundException);
	}
	return result;
}

$Path* PassThroughFileSystem$PassThroughProvider::getPath($URI* uri$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($URI, uri, uri$renamed);
	checkScheme(uri);
	if (PassThroughFileSystem$PassThroughProvider::delegate == nullptr) {
		$throwNew($FileSystemNotFoundException);
	}
	$var($String, var$0, $$str({$($nc($($nc(PassThroughFileSystem$PassThroughProvider::delegate)->provider()))->getScheme()), ":"_s}));
	$assign(uri, $URI::create($$concat(var$0, $($nc(uri)->getSchemeSpecificPart()))));
	return $new($PassThroughFileSystem$PassThroughPath, PassThroughFileSystem$PassThroughProvider::delegate, $($nc($($nc(PassThroughFileSystem$PassThroughProvider::delegate)->provider()))->getPath(uri)));
}

void PassThroughFileSystem$PassThroughProvider::setAttribute($Path* file, $String* attribute, Object$* value, $LinkOptionArray* options) {
	$Files::setAttribute($($PassThroughFileSystem::unwrap(file)), attribute, value, options);
}

$Map* PassThroughFileSystem$PassThroughProvider::readAttributes($Path* file, $String* attributes, $LinkOptionArray* options) {
	return $Files::readAttributes($($PassThroughFileSystem::unwrap(file)), attributes, options);
}

$FileAttributeView* PassThroughFileSystem$PassThroughProvider::getFileAttributeView($Path* file, $Class* type, $LinkOptionArray* options) {
	return $Files::getFileAttributeView($($PassThroughFileSystem::unwrap(file)), type, options);
}

$BasicFileAttributes* PassThroughFileSystem$PassThroughProvider::readAttributes($Path* file, $Class* type, $LinkOptionArray* options) {
	return $Files::readAttributes($($PassThroughFileSystem::unwrap(file)), type, options);
}

void PassThroughFileSystem$PassThroughProvider::delete$($Path* file) {
	$Files::delete$($($PassThroughFileSystem::unwrap(file)));
}

void PassThroughFileSystem$PassThroughProvider::createSymbolicLink($Path* link, $Path* target, $FileAttributeArray* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($Path, var$0, $PassThroughFileSystem::unwrap(link));
	$Files::createSymbolicLink(var$0, $($PassThroughFileSystem::unwrap(target)), attrs);
}

void PassThroughFileSystem$PassThroughProvider::createLink($Path* link, $Path* existing) {
	$useLocalCurrentObjectStackCache();
	$var($Path, var$0, $PassThroughFileSystem::unwrap(link));
	$Files::createLink(var$0, $($PassThroughFileSystem::unwrap(existing)));
}

$Path* PassThroughFileSystem$PassThroughProvider::readSymbolicLink($Path* link) {
	$useLocalCurrentObjectStackCache();
	$var($Path, target, $Files::readSymbolicLink($($PassThroughFileSystem::unwrap(link))));
	return $new($PassThroughFileSystem$PassThroughPath, PassThroughFileSystem$PassThroughProvider::delegate, target);
}

void PassThroughFileSystem$PassThroughProvider::copy($Path* source, $Path* target, $CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($Path, var$0, $PassThroughFileSystem::unwrap(source));
	$Files::copy(var$0, $($PassThroughFileSystem::unwrap(target)), options);
}

void PassThroughFileSystem$PassThroughProvider::move($Path* source, $Path* target, $CopyOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$var($Path, var$0, $PassThroughFileSystem::unwrap(source));
	$Files::move(var$0, $($PassThroughFileSystem::unwrap(target)), options);
}

$DirectoryStream* PassThroughFileSystem$PassThroughProvider::wrap($DirectoryStream* stream) {
	return $new($PassThroughFileSystem$PassThroughProvider$1, this, stream);
}

$DirectoryStream* PassThroughFileSystem$PassThroughProvider::newDirectoryStream($Path* dir, $DirectoryStream$Filter* filter) {
	$useLocalCurrentObjectStackCache();
	return wrap($($Files::newDirectoryStream($($PassThroughFileSystem::unwrap(dir)), filter)));
}

void PassThroughFileSystem$PassThroughProvider::createDirectory($Path* dir, $FileAttributeArray* attrs) {
	$Files::createDirectory($($PassThroughFileSystem::unwrap(dir)), attrs);
}

$SeekableByteChannel* PassThroughFileSystem$PassThroughProvider::newByteChannel($Path* file, $Set* options, $FileAttributeArray* attrs) {
	return $Files::newByteChannel($($PassThroughFileSystem::unwrap(file)), options, attrs);
}

bool PassThroughFileSystem$PassThroughProvider::isHidden($Path* file) {
	return $Files::isHidden($($PassThroughFileSystem::unwrap(file)));
}

$FileStore* PassThroughFileSystem$PassThroughProvider::getFileStore($Path* file) {
	return $Files::getFileStore($($PassThroughFileSystem::unwrap(file)));
}

bool PassThroughFileSystem$PassThroughProvider::isSameFile($Path* file, $Path* other) {
	$useLocalCurrentObjectStackCache();
	$var($Path, var$0, $PassThroughFileSystem::unwrap(file));
	return $Files::isSameFile(var$0, $($PassThroughFileSystem::unwrap(other)));
}

void PassThroughFileSystem$PassThroughProvider::checkAccess($Path* file, $AccessModeArray* modes) {
	$useLocalCurrentObjectStackCache();
	if ($nc(modes)->length == 0) {
		if ($Files::exists($($PassThroughFileSystem::unwrap(file)), $$new($LinkOptionArray, 0))) {
			return;
		} else {
			$throwNew($NoSuchFileException, $($nc(file)->toString()));
		}
	}
	$throwNew($RuntimeException, "not implemented yet"_s);
}

PassThroughFileSystem$PassThroughProvider::PassThroughFileSystem$PassThroughProvider() {
}

void clinit$PassThroughFileSystem$PassThroughProvider($Class* class$) {
	$assignStatic(PassThroughFileSystem$PassThroughProvider::SCHEME, "pass"_s);
}

$Class* PassThroughFileSystem$PassThroughProvider::load$($String* name, bool initialize) {
	$loadClass(PassThroughFileSystem$PassThroughProvider, name, initialize, &_PassThroughFileSystem$PassThroughProvider_ClassInfo_, clinit$PassThroughFileSystem$PassThroughProvider, allocate$PassThroughFileSystem$PassThroughProvider);
	return class$;
}

$Class* PassThroughFileSystem$PassThroughProvider::class$ = nullptr;