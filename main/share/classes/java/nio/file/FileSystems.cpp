#include <java/nio/file/FileSystems.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems$DefaultFileSystemHolder.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/ProviderNotFoundException.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/ServiceLoader.h>
#include <jdk/internal/misc/VM.h>
#include <sun/nio/fs/DefaultFileSystemProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems$DefaultFileSystemHolder = ::java::nio::file::FileSystems$DefaultFileSystemHolder;
using $Path = ::java::nio::file::Path;
using $ProviderNotFoundException = ::java::nio::file::ProviderNotFoundException;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ServiceLoader = ::java::util::ServiceLoader;
using $VM = ::jdk::internal::misc::VM;
using $DefaultFileSystemProvider = ::sun::nio::fs::DefaultFileSystemProvider;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _FileSystems_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(FileSystems, init$, void)},
	{"getDefault", "()Ljava/nio/file/FileSystem;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileSystems, getDefault, $FileSystem*)},
	{"getFileSystem", "(Ljava/net/URI;)Ljava/nio/file/FileSystem;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileSystems, getFileSystem, $FileSystem*, $URI*)},
	{"newFileSystem", "(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;", "(Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;*>;)Ljava/nio/file/FileSystem;", $PUBLIC | $STATIC, $staticMethod(FileSystems, newFileSystem, $FileSystem*, $URI*, $Map*), "java.io.IOException"},
	{"newFileSystem", "(Ljava/net/URI;Ljava/util/Map;Ljava/lang/ClassLoader;)Ljava/nio/file/FileSystem;", "(Ljava/net/URI;Ljava/util/Map<Ljava/lang/String;*>;Ljava/lang/ClassLoader;)Ljava/nio/file/FileSystem;", $PUBLIC | $STATIC, $staticMethod(FileSystems, newFileSystem, $FileSystem*, $URI*, $Map*, $ClassLoader*), "java.io.IOException"},
	{"newFileSystem", "(Ljava/nio/file/Path;Ljava/lang/ClassLoader;)Ljava/nio/file/FileSystem;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileSystems, newFileSystem, $FileSystem*, $Path*, $ClassLoader*), "java.io.IOException"},
	{"newFileSystem", "(Ljava/nio/file/Path;Ljava/util/Map;)Ljava/nio/file/FileSystem;", "(Ljava/nio/file/Path;Ljava/util/Map<Ljava/lang/String;*>;)Ljava/nio/file/FileSystem;", $PUBLIC | $STATIC, $staticMethod(FileSystems, newFileSystem, $FileSystem*, $Path*, $Map*), "java.io.IOException"},
	{"newFileSystem", "(Ljava/nio/file/Path;)Ljava/nio/file/FileSystem;", nullptr, $PUBLIC | $STATIC, $staticMethod(FileSystems, newFileSystem, $FileSystem*, $Path*), "java.io.IOException"},
	{"newFileSystem", "(Ljava/nio/file/Path;Ljava/util/Map;Ljava/lang/ClassLoader;)Ljava/nio/file/FileSystem;", "(Ljava/nio/file/Path;Ljava/util/Map<Ljava/lang/String;*>;Ljava/lang/ClassLoader;)Ljava/nio/file/FileSystem;", $PUBLIC | $STATIC, $staticMethod(FileSystems, newFileSystem, $FileSystem*, $Path*, $Map*, $ClassLoader*), "java.io.IOException"},
	{}
};

$InnerClassInfo _FileSystems_InnerClassesInfo_[] = {
	{"java.nio.file.FileSystems$DefaultFileSystemHolder", "java.nio.file.FileSystems", "DefaultFileSystemHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _FileSystems_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.nio.file.FileSystems",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FileSystems_MethodInfo_,
	nullptr,
	nullptr,
	_FileSystems_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.file.FileSystems$DefaultFileSystemHolder,java.nio.file.FileSystems$DefaultFileSystemHolder$1"
};

$Object* allocate$FileSystems($Class* clazz) {
	return $of($alloc(FileSystems));
}

void FileSystems::init$() {
}

$FileSystem* FileSystems::getDefault() {
	if ($VM::isModuleSystemInited()) {
		$init($FileSystems$DefaultFileSystemHolder);
		return $FileSystems$DefaultFileSystemHolder::defaultFileSystem$;
	} else {
		return $DefaultFileSystemProvider::theFileSystem();
	}
}

$FileSystem* FileSystems::getFileSystem($URI* uri) {
	$useLocalCurrentObjectStackCache();
	$var($String, scheme, $nc(uri)->getScheme());
	if (scheme == nullptr) {
		$throwNew($IllegalArgumentException, $(uri->toString()));
	}
	{
		$var($Iterator, i$, $nc($($FileSystemProvider::installedProviders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($FileSystemProvider, provider, $cast($FileSystemProvider, i$->next()));
			{
				if ($nc(scheme)->equalsIgnoreCase($($nc(provider)->getScheme()))) {
					return $nc(provider)->getFileSystem(uri);
				}
			}
		}
	}
	$throwNew($ProviderNotFoundException, $$str({"Provider \""_s, scheme, "\" not found"_s}));
}

$FileSystem* FileSystems::newFileSystem($URI* uri, $Map* env) {
	return newFileSystem(uri, env, ($ClassLoader*)nullptr);
}

$FileSystem* FileSystems::newFileSystem($URI* uri, $Map* env, $ClassLoader* loader) {
	$load(FileSystems);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, scheme, $nc(uri)->getScheme());
	{
		$var($Iterator, i$, $nc($($FileSystemProvider::installedProviders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($FileSystemProvider, provider, $cast($FileSystemProvider, i$->next()));
			{
				if ($nc(scheme)->equalsIgnoreCase($($nc(provider)->getScheme()))) {
					try {
						return $nc(provider)->newFileSystem(uri, env);
					} catch ($UnsupportedOperationException& uoe) {
					}
				}
			}
		}
	}
	if (loader != nullptr) {
		$load($FileSystemProvider);
		$var($ServiceLoader, sl, $ServiceLoader::load($FileSystemProvider::class$, loader));
		{
			$var($Iterator, i$, $nc(sl)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($FileSystemProvider, provider, $cast($FileSystemProvider, i$->next()));
				{
					if ($nc(scheme)->equalsIgnoreCase($($nc(provider)->getScheme()))) {
						try {
							return $nc(provider)->newFileSystem(uri, env);
						} catch ($UnsupportedOperationException& uoe) {
						}
					}
				}
			}
		}
	}
	$throwNew($ProviderNotFoundException, $$str({"Provider \""_s, scheme, "\" not found"_s}));
	$shouldNotReachHere();
}

$FileSystem* FileSystems::newFileSystem($Path* path, $ClassLoader* loader) {
	return newFileSystem(path, $($Map::of()), loader);
}

$FileSystem* FileSystems::newFileSystem($Path* path, $Map* env) {
	return newFileSystem(path, env, ($ClassLoader*)nullptr);
}

$FileSystem* FileSystems::newFileSystem($Path* path) {
	return newFileSystem(path, $($Map::of()), ($ClassLoader*)nullptr);
}

$FileSystem* FileSystems::newFileSystem($Path* path, $Map* env, $ClassLoader* loader) {
	$load(FileSystems);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (path == nullptr) {
		$throwNew($NullPointerException);
	}
	{
		$var($Iterator, i$, $nc($($FileSystemProvider::installedProviders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($FileSystemProvider, provider, $cast($FileSystemProvider, i$->next()));
			{
				try {
					return $nc(provider)->newFileSystem(path, env);
				} catch ($UnsupportedOperationException& uoe) {
				}
			}
		}
	}
	if (loader != nullptr) {
		$load($FileSystemProvider);
		$var($ServiceLoader, sl, $ServiceLoader::load($FileSystemProvider::class$, loader));
		{
			$var($Iterator, i$, $nc(sl)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($FileSystemProvider, provider, $cast($FileSystemProvider, i$->next()));
				{
					try {
						return $nc(provider)->newFileSystem(path, env);
					} catch ($UnsupportedOperationException& uoe) {
					}
				}
			}
		}
	}
	$throwNew($ProviderNotFoundException, "Provider not found"_s);
	$shouldNotReachHere();
}

FileSystems::FileSystems() {
}

$Class* FileSystems::load$($String* name, bool initialize) {
	$loadClass(FileSystems, name, initialize, &_FileSystems_ClassInfo_, allocate$FileSystems);
	return class$;
}

$Class* FileSystems::class$ = nullptr;

		} // file
	} // nio
} // java