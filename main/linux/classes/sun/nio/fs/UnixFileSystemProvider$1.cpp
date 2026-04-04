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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/UnixFileSystemProvider;", nullptr, $FINAL | $SYNTHETIC, $field(UnixFileSystemProvider$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/UnixFileSystemProvider;)V", nullptr, 0, $method(UnixFileSystemProvider$1, init$, void, $UnixFileSystemProvider*)},
		{"implProbeContentType", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnixFileSystemProvider$1, implProbeContentType, $String*, $Path*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.UnixFileSystemProvider",
		"getFileTypeDetector",
		"()Ljava/nio/file/spi/FileTypeDetector;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.UnixFileSystemProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixFileSystemProvider$1",
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
	$loadClass(UnixFileSystemProvider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileSystemProvider$1);
	});
	return class$;
}

$Class* UnixFileSystemProvider$1::class$ = nullptr;

		} // fs
	} // nio
} // sun