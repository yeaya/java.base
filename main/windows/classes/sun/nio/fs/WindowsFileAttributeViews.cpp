#include <sun/nio/fs/WindowsFileAttributeViews.h>
#include <sun/nio/fs/WindowsFileAttributeViews$Basic.h>
#include <sun/nio/fs/WindowsFileAttributeViews$Dos.h>
#include <sun/nio/fs/WindowsPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsFileAttributeViews$Basic = ::sun::nio::fs::WindowsFileAttributeViews$Basic;
using $WindowsFileAttributeViews$Dos = ::sun::nio::fs::WindowsFileAttributeViews$Dos;
using $WindowsPath = ::sun::nio::fs::WindowsPath;

namespace sun {
	namespace nio {
		namespace fs {

void WindowsFileAttributeViews::init$() {
}

$WindowsFileAttributeViews$Basic* WindowsFileAttributeViews::createBasicView($WindowsPath* file, bool followLinks) {
	return $new($WindowsFileAttributeViews$Basic, file, followLinks);
}

$WindowsFileAttributeViews$Dos* WindowsFileAttributeViews::createDosView($WindowsPath* file, bool followLinks) {
	return $new($WindowsFileAttributeViews$Dos, file, followLinks);
}

WindowsFileAttributeViews::WindowsFileAttributeViews() {
}

$Class* WindowsFileAttributeViews::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WindowsFileAttributeViews, init$, void)},
		{"createBasicView", "(Lsun/nio/fs/WindowsPath;Z)Lsun/nio/fs/WindowsFileAttributeViews$Basic;", nullptr, $STATIC, $staticMethod(WindowsFileAttributeViews, createBasicView, $WindowsFileAttributeViews$Basic*, $WindowsPath*, bool)},
		{"createDosView", "(Lsun/nio/fs/WindowsPath;Z)Lsun/nio/fs/WindowsFileAttributeViews$Dos;", nullptr, $STATIC, $staticMethod(WindowsFileAttributeViews, createDosView, $WindowsFileAttributeViews$Dos*, $WindowsPath*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsFileAttributeViews$Dos", "sun.nio.fs.WindowsFileAttributeViews", "Dos", $STATIC},
		{"sun.nio.fs.WindowsFileAttributeViews$Basic", "sun.nio.fs.WindowsFileAttributeViews", "Basic", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsFileAttributeViews",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsFileAttributeViews$Dos,sun.nio.fs.WindowsFileAttributeViews$Basic"
	};
	$loadClass(WindowsFileAttributeViews, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsFileAttributeViews);
	});
	return class$;
}

$Class* WindowsFileAttributeViews::class$ = nullptr;

		} // fs
	} // nio
} // sun