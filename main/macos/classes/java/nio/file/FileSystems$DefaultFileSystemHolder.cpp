#include <java/nio/file/FileSystems$DefaultFileSystemHolder.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/reflect/Constructor.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems$DefaultFileSystemHolder$1.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/security/AccessController.h>
#include <sun/nio/fs/DefaultFileSystemProvider.h>
#include <sun/nio/fs/MacOSXFileSystemProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems$DefaultFileSystemHolder$1 = ::java::nio::file::FileSystems$DefaultFileSystemHolder$1;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $AccessController = ::java::security::AccessController;
using $DefaultFileSystemProvider = ::sun::nio::fs::DefaultFileSystemProvider;

namespace java {
	namespace nio {
		namespace file {

$FileSystem* FileSystems$DefaultFileSystemHolder::defaultFileSystem$ = nullptr;

void FileSystems$DefaultFileSystemHolder::init$() {
}

$FileSystem* FileSystems$DefaultFileSystemHolder::defaultFileSystem() {
	$init(FileSystems$DefaultFileSystemHolder);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($FileSystemProvider, provider, $cast($FileSystemProvider, $AccessController::doPrivileged($$new($FileSystems$DefaultFileSystemHolder$1))));
	return $nc(provider)->getFileSystem($($URI::create("file:///"_s)));
}

$FileSystemProvider* FileSystems$DefaultFileSystemHolder::getDefaultProvider() {
	$init(FileSystems$DefaultFileSystemHolder);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($FileSystemProvider, provider, $DefaultFileSystemProvider::instance());
	$var($String, prop, "java.nio.file.spi.DefaultFileSystemProvider"_s);
	$var($String, propValue, $System::getProperty(prop));
	if (propValue != nullptr) {
		$var($StringArray, arr$, propValue->split(","_s));
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, cn, arr$->get(i$));
			try {
				$Class* c = $Class::forName(cn, true, $($ClassLoader::getSystemClassLoader()));
				$load($FileSystemProvider);
				$var($Constructor, ctor, c->getDeclaredConstructor($$new($ClassArray, {$FileSystemProvider::class$})));
				$assign(provider, $cast($FileSystemProvider, $nc(ctor)->newInstance($$new($ObjectArray, {provider}))));
				if (!$$nc($nc(provider)->getScheme())->equals("file"_s)) {
					$throwNew($Error, "Default provider must use scheme \'file\'"_s);
				}
			} catch ($Exception& x) {
				$throwNew($Error, x);
			}
		}
	}
	return provider;
}

void FileSystems$DefaultFileSystemHolder::clinit$($Class* clazz) {
	$assignStatic(FileSystems$DefaultFileSystemHolder::defaultFileSystem$, FileSystems$DefaultFileSystemHolder::defaultFileSystem());
}

FileSystems$DefaultFileSystemHolder::FileSystems$DefaultFileSystemHolder() {
}

$Class* FileSystems$DefaultFileSystemHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultFileSystem", "Ljava/nio/file/FileSystem;", nullptr, $STATIC | $FINAL, $staticField(FileSystems$DefaultFileSystemHolder, defaultFileSystem$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(FileSystems$DefaultFileSystemHolder, init$, void)},
		{"defaultFileSystem", "()Ljava/nio/file/FileSystem;", nullptr, $PRIVATE | $STATIC, $staticMethod(FileSystems$DefaultFileSystemHolder, defaultFileSystem, $FileSystem*)},
		{"getDefaultProvider", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PRIVATE | $STATIC, $staticMethod(FileSystems$DefaultFileSystemHolder, getDefaultProvider, $FileSystemProvider*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.FileSystems$DefaultFileSystemHolder", "java.nio.file.FileSystems", "DefaultFileSystemHolder", $PRIVATE | $STATIC},
		{"java.nio.file.FileSystems$DefaultFileSystemHolder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.FileSystems$DefaultFileSystemHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.nio.file.FileSystems"
	};
	$loadClass(FileSystems$DefaultFileSystemHolder, name, initialize, &classInfo$$, FileSystems$DefaultFileSystemHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystems$DefaultFileSystemHolder);
	});
	return class$;
}

$Class* FileSystems$DefaultFileSystemHolder::class$ = nullptr;

		} // file
	} // nio
} // java