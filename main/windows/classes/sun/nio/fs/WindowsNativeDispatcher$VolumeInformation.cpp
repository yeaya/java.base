#include <sun/nio/fs/WindowsNativeDispatcher$VolumeInformation.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

void WindowsNativeDispatcher$VolumeInformation::init$() {
}

$String* WindowsNativeDispatcher$VolumeInformation::fileSystemName() {
	return this->fileSystemName$;
}

$String* WindowsNativeDispatcher$VolumeInformation::volumeName() {
	return this->volumeName$;
}

int32_t WindowsNativeDispatcher$VolumeInformation::volumeSerialNumber() {
	return this->volumeSerialNumber$;
}

int32_t WindowsNativeDispatcher$VolumeInformation::flags() {
	return this->flags$;
}

WindowsNativeDispatcher$VolumeInformation::WindowsNativeDispatcher$VolumeInformation() {
}

$Class* WindowsNativeDispatcher$VolumeInformation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fileSystemName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$VolumeInformation, fileSystemName$)},
		{"volumeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$VolumeInformation, volumeName$)},
		{"volumeSerialNumber", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$VolumeInformation, volumeSerialNumber$)},
		{"flags", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$VolumeInformation, flags$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WindowsNativeDispatcher$VolumeInformation, init$, void)},
		{"fileSystemName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$VolumeInformation, fileSystemName, $String*)},
		{"flags", "()I", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$VolumeInformation, flags, int32_t)},
		{"volumeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$VolumeInformation, volumeName, $String*)},
		{"volumeSerialNumber", "()I", nullptr, $PUBLIC, $virtualMethod(WindowsNativeDispatcher$VolumeInformation, volumeSerialNumber, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsNativeDispatcher$VolumeInformation", "sun.nio.fs.WindowsNativeDispatcher", "VolumeInformation", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsNativeDispatcher$VolumeInformation",
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
	$loadClass(WindowsNativeDispatcher$VolumeInformation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsNativeDispatcher$VolumeInformation);
	});
	return class$;
}

$Class* WindowsNativeDispatcher$VolumeInformation::class$ = nullptr;

		} // fs
	} // nio
} // sun