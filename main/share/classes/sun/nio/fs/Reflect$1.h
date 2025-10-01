#ifndef _sun_nio_fs_Reflect$1_h_
#define _sun_nio_fs_Reflect$1_h_
//$ class sun.nio.fs.Reflect$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AccessibleObject;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class Reflect$1 : public ::java::security::PrivilegedAction {
	$class(Reflect$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Reflect$1();
	void init$(::java::lang::reflect::AccessibleObject* val$ao);
	virtual $Object* run() override;
	::java::lang::reflect::AccessibleObject* val$ao = nullptr;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_Reflect$1_h_