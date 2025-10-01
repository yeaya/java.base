#ifndef _sun_nio_fs_WindowsUserPrincipals_h_
#define _sun_nio_fs_WindowsUserPrincipals_h_
//$ class sun.nio.fs.WindowsUserPrincipals
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class UserPrincipal;
			}
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsUserPrincipals : public ::java::lang::Object {
	$class(WindowsUserPrincipals, 0, ::java::lang::Object)
public:
	WindowsUserPrincipals();
	void init$();
	static ::java::nio::file::attribute::UserPrincipal* fromSid(int64_t sidAddress);
	static ::java::nio::file::attribute::UserPrincipal* lookup($String* name);
	static bool $assertionsDisabled;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsUserPrincipals_h_