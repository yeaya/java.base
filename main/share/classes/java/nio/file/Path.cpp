#include <java/nio/file/Path.h>

#include <java/io/File.h>
#include <java/lang/Comparable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystemNotFoundException.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path$1.h>
#include <java/nio/file/WatchEvent$Kind.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <java/nio/file/WatchKey.h>
#include <java/nio/file/WatchService.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $WatchEvent$KindArray = $Array<::java::nio::file::WatchEvent$Kind>;
using $WatchEvent$ModifierArray = $Array<::java::nio::file::WatchEvent$Modifier>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystemNotFoundException = ::java::nio::file::FileSystemNotFoundException;
using $FileSystems = ::java::nio::file::FileSystems;
using $Path$1 = ::java::nio::file::Path$1;
using $WatchKey = ::java::nio::file::WatchKey;
using $WatchService = ::java::nio::file::WatchService;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _Path_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"compareTo", "(Ljava/nio/file/Path;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, compareTo, int32_t, Path*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Path, compareTo, int32_t, Object$*)},
	{"endsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, endsWith, bool, Path*)},
	{"endsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(Path, endsWith, bool, $String*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getFileName", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, getFileName, Path*)},
	{"getFileSystem", "()Ljava/nio/file/FileSystem;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, getFileSystem, $FileSystem*)},
	{"getName", "(I)Ljava/nio/file/Path;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, getName, Path*, int32_t)},
	{"getNameCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, getNameCount, int32_t)},
	{"getParent", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, getParent, Path*)},
	{"getRoot", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, getRoot, Path*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isAbsolute", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, isAbsolute, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC, $virtualMethod(Path, iterator, $Iterator*)},
	{"normalize", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, normalize, Path*)},
	{"of", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Path, of, Path*, $String*, $StringArray*)},
	{"of", "(Ljava/net/URI;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $STATIC, $staticMethod(Path, of, Path*, $URI*)},
	{"register$", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;", nullptr, $PUBLIC | $ABSTRACT},
	{"register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;)Ljava/nio/file/WatchKey;", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind<*>;)Ljava/nio/file/WatchKey;", $PUBLIC | $TRANSIENT, $virtualMethod(Path, register$, $WatchKey*, $WatchService*, $WatchEvent$KindArray*), "java.io.IOException"},
	{"relativize", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, relativize, Path*, Path*)},
	{"resolve", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, resolve, Path*, Path*)},
	{"resolve", "(Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(Path, resolve, Path*, $String*)},
	{"resolveSibling", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(Path, resolveSibling, Path*, Path*)},
	{"resolveSibling", "(Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(Path, resolveSibling, Path*, $String*)},
	{"startsWith", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, startsWith, bool, Path*)},
	{"startsWith", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(Path, startsWith, bool, $String*)},
	{"subpath", "(II)Ljava/nio/file/Path;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, subpath, Path*, int32_t, int32_t)},
	{"toAbsolutePath", "()Ljava/nio/file/Path;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, toAbsolutePath, Path*)},
	{"toFile", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(Path, toFile, $File*)},
	{"toRealPath", "([Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Path, toRealPath, Path*, $LinkOptionArray*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"toUri", "()Ljava/net/URI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Path, toUri, $URI*)},
	{}
};

$InnerClassInfo _Path_InnerClassesInfo_[] = {
	{"java.nio.file.Path$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Path_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.nio.file.Path",
	nullptr,
	"java.lang.Comparable,java.lang.Iterable,java.nio.file.Watchable",
	nullptr,
	_Path_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljava/nio/file/Path;>;Ljava/lang/Iterable<Ljava/nio/file/Path;>;Ljava/nio/file/Watchable;",
	nullptr,
	_Path_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.file.Path$1"
};

$Object* allocate$Path($Class* clazz) {
	return $of($alloc(Path));
}

bool Path::equals(Object$* other) {
	 return this->$Comparable::equals(other);
}

int32_t Path::hashCode() {
	 return this->$Comparable::hashCode();
}

$String* Path::toString() {
	 return this->$Comparable::toString();
}

$Object* Path::clone() {
	 return this->$Comparable::clone();
}

void Path::finalize() {
	this->$Comparable::finalize();
}

Path* Path::of($String* first, $StringArray* more) {
	$init(Path);
	return $nc($($FileSystems::getDefault()))->getPath(first, more);
}

Path* Path::of($URI* uri) {
	$init(Path);
	$useLocalCurrentObjectStackCache();
	$var($String, scheme, $nc(uri)->getScheme());
	if (scheme == nullptr) {
		$throwNew($IllegalArgumentException, "Missing scheme"_s);
	}
	if ($nc(scheme)->equalsIgnoreCase("file"_s)) {
		return $nc($($nc($($FileSystems::getDefault()))->provider()))->getPath(uri);
	}
	{
		$var($Iterator, i$, $nc($($FileSystemProvider::installedProviders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($FileSystemProvider, provider, $cast($FileSystemProvider, i$->next()));
			{
				if ($nc($($nc(provider)->getScheme()))->equalsIgnoreCase(scheme)) {
					return provider->getPath(uri);
				}
			}
		}
	}
	$throwNew($FileSystemNotFoundException, $$str({"Provider \""_s, scheme, "\" not installed"_s}));
}

bool Path::startsWith($String* other) {
	$useLocalCurrentObjectStackCache();
	return startsWith($($nc($(getFileSystem()))->getPath(other, $$new($StringArray, 0))));
}

bool Path::endsWith($String* other) {
	$useLocalCurrentObjectStackCache();
	return endsWith($($nc($(getFileSystem()))->getPath(other, $$new($StringArray, 0))));
}

Path* Path::resolve($String* other) {
	$useLocalCurrentObjectStackCache();
	return resolve($($nc($(getFileSystem()))->getPath(other, $$new($StringArray, 0))));
}

Path* Path::resolveSibling(Path* other) {
	if (other == nullptr) {
		$throwNew($NullPointerException);
	}
	$var(Path, parent, getParent());
	return (parent == nullptr) ? other : $nc(parent)->resolve(other);
}

Path* Path::resolveSibling($String* other) {
	$useLocalCurrentObjectStackCache();
	return resolveSibling($($nc($(getFileSystem()))->getPath(other, $$new($StringArray, 0))));
}

$File* Path::toFile() {
	if (getFileSystem() == $FileSystems::getDefault()) {
		return $new($File, $(toString()));
	} else {
		$throwNew($UnsupportedOperationException, "Path not associated with default file system."_s);
	}
}

$WatchKey* Path::register$($WatchService* watcher, $WatchEvent$KindArray* events) {
	return register$(watcher, events, $$new($WatchEvent$ModifierArray, 0));
}

$Iterator* Path::iterator() {
	return $new($Path$1, this);
}

int32_t Path::compareTo(Object$* other) {
	return this->compareTo($cast(Path, other));
}

$Class* Path::load$($String* name, bool initialize) {
	$loadClass(Path, name, initialize, &_Path_ClassInfo_, allocate$Path);
	return class$;
}

$Class* Path::class$ = nullptr;

		} // file
	} // nio
} // java