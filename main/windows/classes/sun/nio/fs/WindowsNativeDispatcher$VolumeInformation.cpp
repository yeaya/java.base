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

$FieldInfo _WindowsNativeDispatcher$VolumeInformation_FieldInfo_[] = {
	{"fileSystemName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$VolumeInformation, fileSystemName$)},
	{"volumeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$VolumeInformation, volumeName$)},
	{"volumeSerialNumber", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$VolumeInformation, volumeSerialNumber$)},
	{"flags", "I", nullptr, $PRIVATE, $field(WindowsNativeDispatcher$VolumeInformation, flags$)},
	{}
};

$MethodInfo _WindowsNativeDispatcher$VolumeInformation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsNativeDispatcher$VolumeInformation::*)()>(&WindowsNativeDispatcher$VolumeInformation::init$))},
	{"fileSystemName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"flags", "()I", nullptr, $PUBLIC},
	{"volumeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"volumeSerialNumber", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsNativeDispatcher$VolumeInformation_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsNativeDispatcher$VolumeInformation", "sun.nio.fs.WindowsNativeDispatcher", "VolumeInformation", $STATIC},
	{}
};

$ClassInfo _WindowsNativeDispatcher$VolumeInformation_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsNativeDispatcher$VolumeInformation",
	"java.lang.Object",
	nullptr,
	_WindowsNativeDispatcher$VolumeInformation_FieldInfo_,
	_WindowsNativeDispatcher$VolumeInformation_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsNativeDispatcher$VolumeInformation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsNativeDispatcher"
};

$Object* allocate$WindowsNativeDispatcher$VolumeInformation($Class* clazz) {
	return $of($alloc(WindowsNativeDispatcher$VolumeInformation));
}

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
	$loadClass(WindowsNativeDispatcher$VolumeInformation, name, initialize, &_WindowsNativeDispatcher$VolumeInformation_ClassInfo_, allocate$WindowsNativeDispatcher$VolumeInformation);
	return class$;
}

$Class* WindowsNativeDispatcher$VolumeInformation::class$ = nullptr;

		} // fs
	} // nio
} // sun