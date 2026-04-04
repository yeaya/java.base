#include <sun/nio/fs/WindowsNativeDispatcher$DiskFreeSpace.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

void WindowsNativeDispatcher$DiskFreeSpace::init$() {
}

int64_t WindowsNativeDispatcher$DiskFreeSpace::freeBytesAvailable() {
	return this->freeBytesAvailable$;
}

int64_t WindowsNativeDispatcher$DiskFreeSpace::totalNumberOfBytes() {
	return this->totalNumberOfBytes$;
}

int64_t WindowsNativeDispatcher$DiskFreeSpace::totalNumberOfFreeBytes() {
	return this->totalNumberOfFreeBytes$;
}

int64_t WindowsNativeDispatcher$DiskFreeSpace::bytesPerSector() {
	return this->bytesPerSector$;
}

WindowsNativeDispatcher$DiskFreeSpace::WindowsNativeDispatcher$DiskFreeSpace() {
}

$Class* WindowsNativeDispatcher$DiskFreeSpace::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"freeBytesAvailable", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$DiskFreeSpace, freeBytesAvailable$)},
		{"totalNumberOfBytes", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$DiskFreeSpace, totalNumberOfBytes$)},
		{"totalNumberOfFreeBytes", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$DiskFreeSpace, totalNumberOfFreeBytes$)},
		{"bytesPerSector", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$DiskFreeSpace, bytesPerSector$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsNativeDispatcher$DiskFreeSpace, init$, void)},
		{"bytesPerSector", "()J", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$DiskFreeSpace, bytesPerSector, int64_t)},
		{"freeBytesAvailable", "()J", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$DiskFreeSpace, freeBytesAvailable, int64_t)},
		{"totalNumberOfBytes", "()J", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$DiskFreeSpace, totalNumberOfBytes, int64_t)},
		{"totalNumberOfFreeBytes", "()J", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$DiskFreeSpace, totalNumberOfFreeBytes, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsNativeDispatcher$DiskFreeSpace", "sun.nio.fs.WindowsNativeDispatcher", "DiskFreeSpace", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsNativeDispatcher$DiskFreeSpace",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsNativeDispatcher"
	};
	$loadClass(WindowsNativeDispatcher$DiskFreeSpace, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsNativeDispatcher$DiskFreeSpace);
	});
	return class$;
}

$Class* WindowsNativeDispatcher$DiskFreeSpace::class$ = nullptr;

		} // fs
	} // nio
} // sun