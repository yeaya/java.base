#ifndef _sun_net_NetworkClient$1_h_
#define _sun_net_NetworkClient$1_h_
//$ class sun.net.NetworkClient$1
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace net {

class NetworkClient$1 : public ::java::security::PrivilegedAction {
	$class(NetworkClient$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	NetworkClient$1();
	void init$($ints* val$vals, $StringArray* val$encs);
	virtual $Object* run() override;
	$StringArray* val$encs = nullptr;
	$ints* val$vals = nullptr;
};

	} // net
} // sun

#endif // _sun_net_NetworkClient$1_h_