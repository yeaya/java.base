#ifndef _sun_nio_fs_WindowsNativeDispatcher$DiskFreeSpace_h_
#define _sun_nio_fs_WindowsNativeDispatcher$DiskFreeSpace_h_
//$ class sun.nio.fs.WindowsNativeDispatcher$DiskFreeSpace
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class WindowsNativeDispatcher$DiskFreeSpace : public ::java::lang::Object {
	$class(WindowsNativeDispatcher$DiskFreeSpace, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsNativeDispatcher$DiskFreeSpace();
	void init$();
	virtual int64_t bytesPerSector();
	virtual int64_t freeBytesAvailable();
	virtual int64_t totalNumberOfBytes();
	virtual int64_t totalNumberOfFreeBytes();
	int64_t freeBytesAvailable$ = 0;
	int64_t totalNumberOfBytes$ = 0;
	int64_t totalNumberOfFreeBytes$ = 0;
	int64_t bytesPerSector$ = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsNativeDispatcher$DiskFreeSpace_h_