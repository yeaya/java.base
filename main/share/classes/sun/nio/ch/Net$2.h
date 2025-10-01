#ifndef _sun_nio_ch_Net$2_h_
#define _sun_nio_ch_Net$2_h_
//$ class sun.nio.ch.Net$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class NetworkInterface;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Net$2 : public ::java::security::PrivilegedAction {
	$class(Net$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Net$2();
	void init$(::java::net::NetworkInterface* val$interf);
	virtual $Object* run() override;
	::java::net::NetworkInterface* val$interf = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Net$2_h_