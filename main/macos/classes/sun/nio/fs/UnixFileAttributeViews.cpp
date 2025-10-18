#include <sun/nio/fs/UnixFileAttributeViews.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/attribute/PosixFileAttributeView.h>
#include <sun/nio/fs/FileOwnerAttributeViewImpl.h>
#include <sun/nio/fs/UnixFileAttributeViews$Basic.h>
#include <sun/nio/fs/UnixFileAttributeViews$Posix.h>
#include <sun/nio/fs/UnixFileAttributeViews$Unix.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PosixFileAttributeView = ::java::nio::file::attribute::PosixFileAttributeView;
using $FileOwnerAttributeViewImpl = ::sun::nio::fs::FileOwnerAttributeViewImpl;
using $UnixFileAttributeViews$Basic = ::sun::nio::fs::UnixFileAttributeViews$Basic;
using $UnixFileAttributeViews$Posix = ::sun::nio::fs::UnixFileAttributeViews$Posix;
using $UnixFileAttributeViews$Unix = ::sun::nio::fs::UnixFileAttributeViews$Unix;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

$MethodInfo _UnixFileAttributeViews_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(UnixFileAttributeViews::*)()>(&UnixFileAttributeViews::init$))},
	{"createBasicView", "(Lsun/nio/fs/UnixPath;Z)Lsun/nio/fs/UnixFileAttributeViews$Basic;", nullptr, $STATIC, $method(static_cast<$UnixFileAttributeViews$Basic*(*)($UnixPath*,bool)>(&UnixFileAttributeViews::createBasicView))},
	{"createOwnerView", "(Lsun/nio/fs/UnixPath;Z)Lsun/nio/fs/FileOwnerAttributeViewImpl;", nullptr, $STATIC, $method(static_cast<$FileOwnerAttributeViewImpl*(*)($UnixPath*,bool)>(&UnixFileAttributeViews::createOwnerView))},
	{"createPosixView", "(Lsun/nio/fs/UnixPath;Z)Lsun/nio/fs/UnixFileAttributeViews$Posix;", nullptr, $STATIC, $method(static_cast<$UnixFileAttributeViews$Posix*(*)($UnixPath*,bool)>(&UnixFileAttributeViews::createPosixView))},
	{"createUnixView", "(Lsun/nio/fs/UnixPath;Z)Lsun/nio/fs/UnixFileAttributeViews$Unix;", nullptr, $STATIC, $method(static_cast<$UnixFileAttributeViews$Unix*(*)($UnixPath*,bool)>(&UnixFileAttributeViews::createUnixView))},
	{}
};

$InnerClassInfo _UnixFileAttributeViews_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileAttributeViews$Unix", "sun.nio.fs.UnixFileAttributeViews", "Unix", $PRIVATE | $STATIC},
	{"sun.nio.fs.UnixFileAttributeViews$Posix", "sun.nio.fs.UnixFileAttributeViews", "Posix", $PRIVATE | $STATIC},
	{"sun.nio.fs.UnixFileAttributeViews$Basic", "sun.nio.fs.UnixFileAttributeViews", "Basic", $STATIC},
	{}
};

$ClassInfo _UnixFileAttributeViews_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileAttributeViews",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UnixFileAttributeViews_MethodInfo_,
	nullptr,
	nullptr,
	_UnixFileAttributeViews_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileAttributeViews$Unix,sun.nio.fs.UnixFileAttributeViews$Posix,sun.nio.fs.UnixFileAttributeViews$Basic"
};

$Object* allocate$UnixFileAttributeViews($Class* clazz) {
	return $of($alloc(UnixFileAttributeViews));
}

void UnixFileAttributeViews::init$() {
}

$UnixFileAttributeViews$Basic* UnixFileAttributeViews::createBasicView($UnixPath* file, bool followLinks) {
	return $new($UnixFileAttributeViews$Basic, file, followLinks);
}

$UnixFileAttributeViews$Posix* UnixFileAttributeViews::createPosixView($UnixPath* file, bool followLinks) {
	return $new($UnixFileAttributeViews$Posix, file, followLinks);
}

$UnixFileAttributeViews$Unix* UnixFileAttributeViews::createUnixView($UnixPath* file, bool followLinks) {
	return $new($UnixFileAttributeViews$Unix, file, followLinks);
}

$FileOwnerAttributeViewImpl* UnixFileAttributeViews::createOwnerView($UnixPath* file, bool followLinks) {
	return $new($FileOwnerAttributeViewImpl, $(static_cast<$PosixFileAttributeView*>(createPosixView(file, followLinks))));
}

UnixFileAttributeViews::UnixFileAttributeViews() {
}

$Class* UnixFileAttributeViews::load$($String* name, bool initialize) {
	$loadClass(UnixFileAttributeViews, name, initialize, &_UnixFileAttributeViews_ClassInfo_, allocate$UnixFileAttributeViews);
	return class$;
}

$Class* UnixFileAttributeViews::class$ = nullptr;

		} // fs
	} // nio
} // sun