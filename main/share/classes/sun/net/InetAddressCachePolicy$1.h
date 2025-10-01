#ifndef _sun_net_InetAddressCachePolicy$1_h_
#define _sun_net_InetAddressCachePolicy$1_h_
//$ class sun.net.InetAddressCachePolicy$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {

class InetAddressCachePolicy$1 : public ::java::security::PrivilegedAction {
	$class(InetAddressCachePolicy$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	InetAddressCachePolicy$1();
	void init$();
	virtual $Object* run() override;
};

	} // net
} // sun

#endif // _sun_net_InetAddressCachePolicy$1_h_