#include <sun/nio/fs/BsdUserDefinedFileAttributeView.h>

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

$MethodInfo _BsdUserDefinedFileAttributeView_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixPath;Z)V", nullptr, 0, $method(static_cast<void(BsdUserDefinedFileAttributeView::*)($UnixPath*,bool)>(&BsdUserDefinedFileAttributeView::init$))},
	{"maxNameLength", "()I", nullptr, $PROTECTED},
	{}
};

$ClassInfo _BsdUserDefinedFileAttributeView_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.BsdUserDefinedFileAttributeView",
	"sun.nio.fs.UnixUserDefinedFileAttributeView",
	nullptr,
	nullptr,
	_BsdUserDefinedFileAttributeView_MethodInfo_
};

$Object* allocate$BsdUserDefinedFileAttributeView($Class* clazz) {
	return $of($alloc(BsdUserDefinedFileAttributeView));
}

void BsdUserDefinedFileAttributeView::init$($UnixPath* file, bool followLinks) {
	$UnixUserDefinedFileAttributeView::init$(file, followLinks);
}

int32_t BsdUserDefinedFileAttributeView::maxNameLength() {
	return 127;
}

BsdUserDefinedFileAttributeView::BsdUserDefinedFileAttributeView() {
}

$Class* BsdUserDefinedFileAttributeView::load$($String* name, bool initialize) {
	$loadClass(BsdUserDefinedFileAttributeView, name, initialize, &_BsdUserDefinedFileAttributeView_ClassInfo_, allocate$BsdUserDefinedFileAttributeView);
	return class$;
}

$Class* BsdUserDefinedFileAttributeView::class$ = nullptr;

		} // fs
	} // nio
} // sun