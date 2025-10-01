#ifndef _sun_nio_fs_WindowsNativeDispatcher$Account_h_
#define _sun_nio_fs_WindowsNativeDispatcher$Account_h_
//$ class sun.nio.fs.WindowsNativeDispatcher$Account
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class WindowsNativeDispatcher$Account : public ::java::lang::Object {
	$class(WindowsNativeDispatcher$Account, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsNativeDispatcher$Account();
	void init$();
	virtual $String* domain();
	virtual $String* name();
	virtual int32_t use();
	$String* domain$ = nullptr;
	$String* name$ = nullptr;
	int32_t use$ = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsNativeDispatcher$Account_h_