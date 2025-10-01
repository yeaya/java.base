#ifndef _sun_nio_ch_Util$3_h_
#define _sun_nio_ch_Util$3_h_
//$ class sun.nio.ch.Util$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace nio {
		namespace ch {

class Util$3 : public ::java::security::PrivilegedAction {
	$class(Util$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Util$3();
	void init$();
	virtual $Object* run() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Util$3_h_