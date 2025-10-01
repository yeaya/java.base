#include <sun/nio/fs/UnixFileSystemProvider$2.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <sun/nio/fs/AbstractFileTypeDetector.h>
#include <sun/nio/fs/UnixFileSystemProvider.h>
#include <jcpp.h>

using $AbstractFileTypeDetectorArray = $Array<::sun::nio::fs::AbstractFileTypeDetector>;
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

$FieldInfo _UnixFileSystemProvider$2_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/UnixFileSystemProvider;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystemProvider$2, this$0)},
	{"val$detectors", "[Lsun/nio/fs/AbstractFileTypeDetector;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystemProvider$2, val$detectors)},
	{}
};

$MethodInfo _UnixFileSystemProvider$2_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/UnixFileSystemProvider;[Lsun/nio/fs/AbstractFileTypeDetector;)V", nullptr, 0, $method(static_cast<void(UnixFileSystemProvider$2::*)($UnixFileSystemProvider*,$AbstractFileTypeDetectorArray*)>(&UnixFileSystemProvider$2::init$))},
	{"implProbeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _UnixFileSystemProvider$2_EnclosingMethodInfo_ = {
	"sun.nio.fs.UnixFileSystemProvider",
	"chain",
	"([Lsun/nio/fs/AbstractFileTypeDetector;)Ljava/nio/file/spi/FileTypeDetector;"
};

$InnerClassInfo _UnixFileSystemProvider$2_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileSystemProvider$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UnixFileSystemProvider$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileSystemProvider$2",
	"sun.nio.fs.AbstractFileTypeDetector",
	nullptr,
	_UnixFileSystemProvider$2_FieldInfo_,
	_UnixFileSystemProvider$2_MethodInfo_,
	nullptr,
	&_UnixFileSystemProvider$2_EnclosingMethodInfo_,
	_UnixFileSystemProvider$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileSystemProvider"
};

$Object* allocate$UnixFileSystemProvider$2($Class* clazz) {
	return $of($alloc(UnixFileSystemProvider$2));
}

void UnixFileSystemProvider$2::init$($UnixFileSystemProvider* this$0, $AbstractFileTypeDetectorArray* val$detectors) {
	$set(this, this$0, this$0);
	$set(this, val$detectors, val$detectors);
	$AbstractFileTypeDetector::init$();
}

$String* UnixFileSystemProvider$2::implProbeContentType($Path* file) {
	{
		$var($AbstractFileTypeDetectorArray, arr$, this->val$detectors);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($AbstractFileTypeDetector, detector, arr$->get(i$));
			{
				$var($String, result, $nc(detector)->implProbeContentType(file));
				if (result != nullptr && !result->isEmpty()) {
					return result;
				}
			}
		}
	}
	return nullptr;
}

UnixFileSystemProvider$2::UnixFileSystemProvider$2() {
}

$Class* UnixFileSystemProvider$2::load$($String* name, bool initialize) {
	$loadClass(UnixFileSystemProvider$2, name, initialize, &_UnixFileSystemProvider$2_ClassInfo_, allocate$UnixFileSystemProvider$2);
	return class$;
}

$Class* UnixFileSystemProvider$2::class$ = nullptr;

		} // fs
	} // nio
} // sun