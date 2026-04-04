#include <sun/nio/fs/UnixFileSystemProvider$2.h>
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

void UnixFileSystemProvider$2::init$($UnixFileSystemProvider* this$0, $AbstractFileTypeDetectorArray* val$detectors) {
	$set(this, this$0, this$0);
	$set(this, val$detectors, val$detectors);
	$AbstractFileTypeDetector::init$();
}

$String* UnixFileSystemProvider$2::implProbeContentType($Path* file) {
	$useLocalObjectStack();
	$var($AbstractFileTypeDetectorArray, arr$, this->val$detectors);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($AbstractFileTypeDetector, detector, arr$->get(i$));
		{
			$var($String, result, $nc(detector)->implProbeContentType(file));
			if (result != nullptr && !result->isEmpty()) {
				return result;
			}
		}
	}
	return nullptr;
}

UnixFileSystemProvider$2::UnixFileSystemProvider$2() {
}

$Class* UnixFileSystemProvider$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/UnixFileSystemProvider;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystemProvider$2, this$0)},
		{"val$detectors", "[Lsun/nio/fs/AbstractFileTypeDetector;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystemProvider$2, val$detectors)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/UnixFileSystemProvider;[Lsun/nio/fs/AbstractFileTypeDetector;)V", nullptr, 0, $method(UnixFileSystemProvider$2, init$, void, $UnixFileSystemProvider*, $AbstractFileTypeDetectorArray*)},
		{"implProbeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(UnixFileSystemProvider$2, implProbeContentType, $String*, $Path*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.UnixFileSystemProvider",
		"chain",
		"([Lsun/nio/fs/AbstractFileTypeDetector;)Ljava/nio/file/spi/FileTypeDetector;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixFileSystemProvider$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixFileSystemProvider$2",
		"sun.nio.fs.AbstractFileTypeDetector",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.UnixFileSystemProvider"
	};
	$loadClass(UnixFileSystemProvider$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileSystemProvider$2);
	});
	return class$;
}

$Class* UnixFileSystemProvider$2::class$ = nullptr;

		} // fs
	} // nio
} // sun