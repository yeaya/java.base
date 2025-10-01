#ifndef _sun_nio_fs_WindowsNativeDispatcher$VolumeInformation_h_
#define _sun_nio_fs_WindowsNativeDispatcher$VolumeInformation_h_
//$ class sun.nio.fs.WindowsNativeDispatcher$VolumeInformation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class WindowsNativeDispatcher$VolumeInformation : public ::java::lang::Object {
	$class(WindowsNativeDispatcher$VolumeInformation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsNativeDispatcher$VolumeInformation();
	void init$();
	virtual $String* fileSystemName();
	virtual int32_t flags();
	virtual $String* volumeName();
	virtual int32_t volumeSerialNumber();
	$String* fileSystemName$ = nullptr;
	$String* volumeName$ = nullptr;
	int32_t volumeSerialNumber$ = 0;
	int32_t flags$ = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsNativeDispatcher$VolumeInformation_h_