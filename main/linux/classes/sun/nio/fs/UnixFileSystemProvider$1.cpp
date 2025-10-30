#include <sun/nio/fs/UnixFileSystemProvider$1.h>

#include <java/nio/file/Path.h>
#include <sun/nio/fs/AbstractFileTypeDetector.h>
#include <sun/nio/fs/UnixFileSystemProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractFileTypeDetector = ::sun::nio::fs::AbstractFileTypeDetector;
using $UnixFileSystemProvider = ::sun::nio::fs::UnixFileSystemProvider;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileSystemProvider$1_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/UnixFileSystemProvider;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystemProvider$1, this$0)},
	{}
};

$MethodInfo _UnixFileSystemProvider$1_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixFileSystemProvider;)V", nullptr, 0, $method(static_cast<void(UnixFileSystemProvider$1::*)($UnixFileSystemProvider*)>(&UnixFileSystemProvider$1::init$))},
	{"implProbeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _UnixFileSystemProvider$1_EnclosingMethodInfo_ = {
	"sun.nio.fs.UnixFileSystemProvider",
	"getFileTypeDetector",
	"()Ljava/nio/file/spi/FileTypeDetector;"
};

$InnerClassInfo _UnixFileSystemProvider$1_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileSystemProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UnixFileSystemProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileSystemProvider$1",
	"sun.nio.fs.AbstractFileTypeDetector",
	nullptr,
	_UnixFileSystemProvider$1_FieldInfo_,
	_UnixFileSystemProvider$1_MethodInfo_,
	nullptr,
	&_UnixFileSystemProvider$1_EnclosingMethodInfo_,
	_UnixFileSystemProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileSystemProvider"
};

$Object* allocate$UnixFileSystemProvider$1($Class* clazz) {
	return $of($alloc(UnixFileSystemProvider$1));
}

void UnixFileSystemProvider$1::init$($UnixFileSystemProvider* this$0) {
	$set(this, this$0, this$0);
	$AbstractFileTypeDetector::init$();
}

$String* UnixFileSystemProvider$1::implProbeContentType($Path* file) {
	return nullptr;
}

UnixFileSystemProvider$1::UnixFileSystemProvider$1() {
}

$Class* UnixFileSystemProvider$1::load$($String* name, bool initialize) {
	$loadClass(UnixFileSystemProvider$1, name, initialize, &_UnixFileSystemProvider$1_ClassInfo_, allocate$UnixFileSystemProvider$1);
	return class$;
}

$Class* UnixFileSystemProvider$1::class$ = nullptr;

		} // fs
	} // nio
} // sun