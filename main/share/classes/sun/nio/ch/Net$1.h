#ifndef _sun_nio_ch_Net$1_h_
#define _sun_nio_ch_Net$1_h_
//$ class sun.nio.ch.Net$1
//$ extends java.net.ProtocolFamily

#include <java/net/ProtocolFamily.h>

namespace sun {
	namespace nio {
		namespace ch {

class Net$1 : public ::java::net::ProtocolFamily {
	$class(Net$1, $NO_CLASS_INIT, ::java::net::ProtocolFamily)
public:
	Net$1();
	void init$();
	virtual $String* name() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Net$1_h_