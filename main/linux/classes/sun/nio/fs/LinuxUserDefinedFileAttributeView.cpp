#include <sun/nio/fs/LinuxUserDefinedFileAttributeView.h>
#include <sun/nio/fs/UnixPath.h>
#include <sun/nio/fs/UnixUserDefinedFileAttributeView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnixPath = ::sun::nio::fs::UnixPath;
using $UnixUserDefinedFileAttributeView = ::sun::nio::fs::UnixUserDefinedFileAttributeView;

namespace sun {
	namespace nio {
		namespace fs {

void LinuxUserDefinedFileAttributeView::init$($UnixPath* file, bool followLinks) {
	$UnixUserDefinedFileAttributeView::init$(file, followLinks);
}

int32_t LinuxUserDefinedFileAttributeView::maxNameLength() {
	return 255;
}

LinuxUserDefinedFileAttributeView::LinuxUserDefinedFileAttributeView() {
}

$Class* LinuxUserDefinedFileAttributeView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/UnixPath;Z)V", nullptr, 0, $method(LinuxUserDefinedFileAttributeView, init$, void, $UnixPath*, bool)},
		{"maxNameLength", "()I", nullptr, $PROTECTED, $virtualMethod(LinuxUserDefinedFileAttributeView, maxNameLength, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.LinuxUserDefinedFileAttributeView",
		"sun.nio.fs.UnixUserDefinedFileAttributeView",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LinuxUserDefinedFileAttributeView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LinuxUserDefinedFileAttributeView));
	});
	return class$;
}

$Class* LinuxUserDefinedFileAttributeView::class$ = nullptr;

		} // fs
	} // nio
} // sun