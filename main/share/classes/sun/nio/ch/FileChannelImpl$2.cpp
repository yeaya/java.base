#include <sun/nio/ch/FileChannelImpl$2.h>
#include <sun/nio/ch/FileChannelImpl$SyncUnmapper.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannelImpl$SyncUnmapper = ::sun::nio::ch::FileChannelImpl$SyncUnmapper;

namespace sun {
	namespace nio {
		namespace ch {

void FileChannelImpl$2::init$() {
}

$String* FileChannelImpl$2::getName() {
	return "mapped - \'non-volatile memory\'"_s;
}

int64_t FileChannelImpl$2::getCount() {
	$init($FileChannelImpl$SyncUnmapper);
	return $FileChannelImpl$SyncUnmapper::count;
}

int64_t FileChannelImpl$2::getTotalCapacity() {
	$init($FileChannelImpl$SyncUnmapper);
	return $FileChannelImpl$SyncUnmapper::totalCapacity;
}

int64_t FileChannelImpl$2::getMemoryUsed() {
	$init($FileChannelImpl$SyncUnmapper);
	return $FileChannelImpl$SyncUnmapper::totalSize;
}

FileChannelImpl$2::FileChannelImpl$2() {
}

$Class* FileChannelImpl$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileChannelImpl$2, init$, void)},
		{"getCount", "()J", nullptr, $PUBLIC, $virtualMethod(FileChannelImpl$2, getCount, int64_t)},
		{"getMemoryUsed", "()J", nullptr, $PUBLIC, $virtualMethod(FileChannelImpl$2, getMemoryUsed, int64_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileChannelImpl$2, getName, $String*)},
		{"getTotalCapacity", "()J", nullptr, $PUBLIC, $virtualMethod(FileChannelImpl$2, getTotalCapacity, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.FileChannelImpl",
		"getSyncMappedBufferPool",
		"()Ljdk/internal/misc/VM$BufferPool;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.FileChannelImpl$2", nullptr, nullptr, 0},
		{"jdk.internal.misc.VM$BufferPool", "jdk.internal.misc.VM", "BufferPool", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.FileChannelImpl$2",
		"java.lang.Object",
		"jdk.internal.misc.VM$BufferPool",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.FileChannelImpl"
	};
	$loadClass(FileChannelImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileChannelImpl$2);
	});
	return class$;
}

$Class* FileChannelImpl$2::class$ = nullptr;

		} // ch
	} // nio
} // sun