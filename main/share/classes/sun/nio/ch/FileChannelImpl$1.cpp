#include <sun/nio/ch/FileChannelImpl$1.h>
#include <sun/nio/ch/FileChannelImpl$DefaultUnmapper.h>
#include <sun/nio/ch/FileChannelImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannelImpl$DefaultUnmapper = ::sun::nio::ch::FileChannelImpl$DefaultUnmapper;

namespace sun {
	namespace nio {
		namespace ch {

void FileChannelImpl$1::init$() {
}

$String* FileChannelImpl$1::getName() {
	return "mapped"_s;
}

int64_t FileChannelImpl$1::getCount() {
	$init($FileChannelImpl$DefaultUnmapper);
	return $FileChannelImpl$DefaultUnmapper::count;
}

int64_t FileChannelImpl$1::getTotalCapacity() {
	$init($FileChannelImpl$DefaultUnmapper);
	return $FileChannelImpl$DefaultUnmapper::totalCapacity;
}

int64_t FileChannelImpl$1::getMemoryUsed() {
	$init($FileChannelImpl$DefaultUnmapper);
	return $FileChannelImpl$DefaultUnmapper::totalSize;
}

FileChannelImpl$1::FileChannelImpl$1() {
}

$Class* FileChannelImpl$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FileChannelImpl$1, init$, void)},
		{"getCount", "()J", nullptr, $PUBLIC, $virtualMethod(FileChannelImpl$1, getCount, int64_t)},
		{"getMemoryUsed", "()J", nullptr, $PUBLIC, $virtualMethod(FileChannelImpl$1, getMemoryUsed, int64_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileChannelImpl$1, getName, $String*)},
		{"getTotalCapacity", "()J", nullptr, $PUBLIC, $virtualMethod(FileChannelImpl$1, getTotalCapacity, int64_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.FileChannelImpl",
		"getMappedBufferPool",
		"()Ljdk/internal/misc/VM$BufferPool;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.FileChannelImpl$1", nullptr, nullptr, 0},
		{"jdk.internal.misc.VM$BufferPool", "jdk.internal.misc.VM", "BufferPool", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.FileChannelImpl$1",
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
	$loadClass(FileChannelImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileChannelImpl$1);
	});
	return class$;
}

$Class* FileChannelImpl$1::class$ = nullptr;

		} // ch
	} // nio
} // sun