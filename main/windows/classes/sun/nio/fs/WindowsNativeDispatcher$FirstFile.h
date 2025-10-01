#ifndef _sun_nio_fs_WindowsNativeDispatcher$FirstFile_h_
#define _sun_nio_fs_WindowsNativeDispatcher$FirstFile_h_
//$ class sun.nio.fs.WindowsNativeDispatcher$FirstFile
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class WindowsNativeDispatcher$FirstFile : public ::java::lang::Object {
	$class(WindowsNativeDispatcher$FirstFile, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsNativeDispatcher$FirstFile();
	void init$();
	virtual int32_t attributes();
	virtual int64_t handle();
	virtual $String* name();
	int64_t handle$ = 0;
	$String* name$ = nullptr;
	int32_t attributes$ = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsNativeDispatcher$FirstFile_h_