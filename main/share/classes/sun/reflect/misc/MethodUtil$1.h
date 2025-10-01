#ifndef _sun_reflect_misc_MethodUtil$1_h_
#define _sun_reflect_misc_MethodUtil$1_h_
//$ class sun.reflect.misc.MethodUtil$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace sun {
	namespace reflect {
		namespace misc {

class MethodUtil$1 : public ::java::security::PrivilegedExceptionAction {
	$class(MethodUtil$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	MethodUtil$1();
	void init$();
	virtual $Object* run() override;
};

		} // misc
	} // reflect
} // sun

#endif // _sun_reflect_misc_MethodUtil$1_h_