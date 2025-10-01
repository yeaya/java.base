#ifndef _sun_nio_fs_WindowsLinkSupport$1_h_
#define _sun_nio_fs_WindowsLinkSupport$1_h_
//$ class sun.nio.fs.WindowsLinkSupport$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace nio {
		namespace fs {
			class WindowsPath;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsLinkSupport$1 : public ::java::security::PrivilegedAction {
	$class(WindowsLinkSupport$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	WindowsLinkSupport$1();
	void init$(::sun::nio::fs::WindowsPath* val$t);
	virtual $Object* run() override;
	::sun::nio::fs::WindowsPath* val$t = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsLinkSupport$1_h_