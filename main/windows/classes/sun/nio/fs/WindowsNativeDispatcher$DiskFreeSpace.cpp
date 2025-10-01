#include <sun/nio/fs/WindowsNativeDispatcher$DiskFreeSpace.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsNativeDispatcher$DiskFreeSpace_FieldInfo_[] = {
	{"freeBytesAvailable", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$DiskFreeSpace, freeBytesAvailable$)},
	{"totalNumberOfBytes", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$DiskFreeSpace, totalNumberOfBytes$)},
	{"totalNumberOfFreeBytes", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$DiskFreeSpace, totalNumberOfFreeBytes$)},
	{"bytesPerSector", "J", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$DiskFreeSpace, bytesPerSector$)},
	{}
};

$MethodInfo _WindowsNativeDispatcher$DiskFreeSpace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsNativeDispatcher$DiskFreeSpace::*)()>(&WindowsNativeDispatcher$DiskFreeSpace::init$))},
	{"bytesPerSector", "()J", nullptr, $PUBLIC},
	{"freeBytesAvailable", "()J", nullptr, $PUBLIC},
	{"totalNumberOfBytes", "()J", nullptr, $PUBLIC},
	{"totalNumberOfFreeBytes", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsNativeDispatcher$DiskFreeSpace_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsNativeDispatcher$DiskFreeSpace", "sun.nio.fs.WindowsNativeDispatcher", "DiskFreeSpace", $STATIC},
	{}
};

$ClassInfo _WindowsNativeDispatcher$DiskFreeSpace_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsNativeDispatcher$DiskFreeSpace",
	"java.lang.Object",
	nullptr,
	_WindowsNativeDispatcher$DiskFreeSpace_FieldInfo_,
	_WindowsNativeDispatcher$DiskFreeSpace_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsNativeDispatcher$DiskFreeSpace_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsNativeDispatcher"
};

$Object* allocate$WindowsNativeDispatcher$DiskFreeSpace($Class* clazz) {
	return $of($alloc(WindowsNativeDispatcher$DiskFreeSpace));
}

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
	$loadClass(WindowsNativeDispatcher$DiskFreeSpace, name, initialize, &_WindowsNativeDispatcher$DiskFreeSpace_ClassInfo_, allocate$WindowsNativeDispatcher$DiskFreeSpace);
	return class$;
}

$Class* WindowsNativeDispatcher$DiskFreeSpace::class$ = nullptr;

		} // fs
	} // nio
} // sun