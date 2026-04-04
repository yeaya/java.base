#include <sun/nio/fs/UnixFileStoreAttributes.h>
#include <sun/nio/fs/UnixNativeDispatcher.h>
#include <sun/nio/fs/UnixPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnixNativeDispatcher = ::sun::nio::fs::UnixNativeDispatcher;
using $UnixPath = ::sun::nio::fs::UnixPath;

namespace sun {
	namespace nio {
		namespace fs {

void UnixFileStoreAttributes::init$() {
}

UnixFileStoreAttributes* UnixFileStoreAttributes::get($UnixPath* path) {
	$var(UnixFileStoreAttributes, attrs, $new(UnixFileStoreAttributes));
	$UnixNativeDispatcher::statvfs(path, attrs);
	return attrs;
}

int64_t UnixFileStoreAttributes::blockSize() {
	return this->f_frsize;
}

int64_t UnixFileStoreAttributes::totalBlocks() {
	return this->f_blocks;
}

int64_t UnixFileStoreAttributes::freeBlocks() {
	return this->f_bfree;
}

int64_t UnixFileStoreAttributes::availableBlocks() {
	return this->f_bavail;
}

UnixFileStoreAttributes::UnixFileStoreAttributes() {
}

$Class* UnixFileStoreAttributes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f_frsize", "J", nullptr, $PRIVATE, $field(UnixFileStoreAttributes, f_frsize)},
		{"f_blocks", "J", nullptr, $PRIVATE, $field(UnixFileStoreAttributes, f_blocks)},
		{"f_bfree", "J", nullptr, $PRIVATE, $field(UnixFileStoreAttributes, f_bfree)},
		{"f_bavail", "J", nullptr, $PRIVATE, $field(UnixFileStoreAttributes, f_bavail)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(UnixFileStoreAttributes, init$, void)},
		{"availableBlocks", "()J", nullptr, 0, $virtualMethod(UnixFileStoreAttributes, availableBlocks, int64_t)},
		{"blockSize", "()J", nullptr, 0, $virtualMethod(UnixFileStoreAttributes, blockSize, int64_t)},
		{"freeBlocks", "()J", nullptr, 0, $virtualMethod(UnixFileStoreAttributes, freeBlocks, int64_t)},
		{"get", "(Lsun/nio/fs/UnixPath;)Lsun/nio/fs/UnixFileStoreAttributes;", nullptr, $STATIC, $staticMethod(UnixFileStoreAttributes, get, UnixFileStoreAttributes*, $UnixPath*), "sun.nio.fs.UnixException"},
		{"totalBlocks", "()J", nullptr, 0, $virtualMethod(UnixFileStoreAttributes, totalBlocks, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.UnixFileStoreAttributes",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnixFileStoreAttributes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnixFileStoreAttributes);
	});
	return class$;
}

$Class* UnixFileStoreAttributes::class$ = nullptr;

		} // fs
	} // nio
} // sun