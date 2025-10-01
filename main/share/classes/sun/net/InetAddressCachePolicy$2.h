#ifndef _sun_net_InetAddressCachePolicy$2_h_
#define _sun_net_InetAddressCachePolicy$2_h_
//$ class sun.net.InetAddressCachePolicy$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {

class InetAddressCachePolicy$2 : public ::java::security::PrivilegedAction {
	$class(InetAddressCachePolicy$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	InetAddressCachePolicy$2();
	void init$();
	virtual $Object* run() override;
};

	} // net
} // sun

#endif // _sun_net_InetAddressCachePolicy$2_h_