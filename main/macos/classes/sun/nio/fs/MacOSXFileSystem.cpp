#include <sun/nio/fs/MacOSXFileSystem.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Pattern.h>
#include <sun/nio/fs/BsdFileSystem.h>
#include <sun/nio/fs/MacOSXNativeDispatcher.h>
#include <sun/nio/fs/UnixFileSystemProvider.h>
#include <jcpp.h>

#undef CANON_EQ

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;
using $BsdFileSystem = ::sun::nio::fs::BsdFileSystem;
using $MacOSXNativeDispatcher = ::sun::nio::fs::MacOSXNativeDispatcher;
using $UnixFileSystemProvider = ::sun::nio::fs::UnixFileSystemProvider;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _MacOSXFileSystem_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixFileSystemProvider;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MacOSXFileSystem::*)($UnixFileSystemProvider*,$String*)>(&MacOSXFileSystem::init$))},
	{"compilePathMatchPattern", "(Ljava/lang/String;)Ljava/util/regex/Pattern;", nullptr, 0},
	{"normalizeJavaPath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"normalizeNativePath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{}
};

$ClassInfo _MacOSXFileSystem_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.MacOSXFileSystem",
	"sun.nio.fs.BsdFileSystem",
	nullptr,
	nullptr,
	_MacOSXFileSystem_MethodInfo_
};

$Object* allocate$MacOSXFileSystem($Class* clazz) {
	return $of($alloc(MacOSXFileSystem));
}

void MacOSXFileSystem::init$($UnixFileSystemProvider* provider, $String* dir) {
	$BsdFileSystem::init$(provider, dir);
}

$Pattern* MacOSXFileSystem::compilePathMatchPattern($String* expr) {
	return $Pattern::compile(expr, $Pattern::CANON_EQ);
}

$String* MacOSXFileSystem::normalizeNativePath($String* path) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(path)->length(); ++i) {
		char16_t c = path->charAt(i);
		if (c > 128) {
			return $new($String, $($MacOSXNativeDispatcher::normalizepath($(path->toCharArray()), 0)));
		}
	}
	return path;
}

$String* MacOSXFileSystem::normalizeJavaPath($String* path) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(path)->length(); ++i) {
		if (path->charAt(i) > 128) {
			return $new($String, $($MacOSXNativeDispatcher::normalizepath($(path->toCharArray()), 2)));
		}
	}
	return path;
}

MacOSXFileSystem::MacOSXFileSystem() {
}

$Class* MacOSXFileSystem::load$($String* name, bool initialize) {
	$loadClass(MacOSXFileSystem, name, initialize, &_MacOSXFileSystem_ClassInfo_, allocate$MacOSXFileSystem);
	return class$;
}

$Class* MacOSXFileSystem::class$ = nullptr;

		} // fs
	} // nio
} // sun