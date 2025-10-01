#ifndef _sun_nio_ch_Util$4_h_
#define _sun_nio_ch_Util$4_h_
//$ class sun.nio.ch.Util$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace nio {
		namespace ch {

class Util$4 : public ::java::security::PrivilegedAction {
	$class(Util$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Util$4();
	void init$();
	virtual $Object* run() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Util$4_h_