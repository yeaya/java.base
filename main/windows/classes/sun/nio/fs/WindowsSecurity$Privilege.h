#ifndef _sun_nio_fs_WindowsSecurity$Privilege_h_
#define _sun_nio_fs_WindowsSecurity$Privilege_h_
//$ interface sun.nio.fs.WindowsSecurity$Privilege
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace fs {

class WindowsSecurity$Privilege : public ::java::lang::Object {
	$interface(WindowsSecurity$Privilege, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void drop() {}
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsSecurity$Privilege_h_