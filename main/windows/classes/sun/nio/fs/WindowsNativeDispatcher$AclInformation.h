#ifndef _sun_nio_fs_WindowsNativeDispatcher$AclInformation_h_
#define _sun_nio_fs_WindowsNativeDispatcher$AclInformation_h_
//$ class sun.nio.fs.WindowsNativeDispatcher$AclInformation
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class WindowsNativeDispatcher$AclInformation : public ::java::lang::Object {
	$class(WindowsNativeDispatcher$AclInformation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsNativeDispatcher$AclInformation();
	void init$();
	virtual int32_t aceCount();
	int32_t aceCount$ = 0;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsNativeDispatcher$AclInformation_h_