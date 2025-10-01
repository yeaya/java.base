#ifndef _sun_nio_fs_WindowsNativeDispatcher$FirstStream_h_
#define _sun_nio_fs_WindowsNativeDispatcher$FirstStream_h_
//$ class sun.nio.fs.WindowsNativeDispatcher$FirstStream
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class WindowsNativeDispatcher$FirstStream : public ::java::lang::Object {
	$class(WindowsNativeDispatcher$FirstStream, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsNativeDispatcher$FirstStream();
	void init$();
	virtual int64_t handle();
	virtual $String* name();
	int64_t handle$ = 0;
	$String* name$ = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsNativeDispatcher$FirstStream_h_