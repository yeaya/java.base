#ifndef _sun_nio_ch_ExtendedSocketOption$1_h_
#define _sun_nio_ch_ExtendedSocketOption$1_h_
//$ class sun.nio.ch.ExtendedSocketOption$1
//$ extends java.net.SocketOption

#include <java/net/SocketOption.h>

namespace sun {
	namespace nio {
		namespace ch {

class ExtendedSocketOption$1 : public ::java::net::SocketOption {
	$class(ExtendedSocketOption$1, $NO_CLASS_INIT, ::java::net::SocketOption)
public:
	ExtendedSocketOption$1();
	void init$();
	virtual $String* name() override;
	virtual $String* toString() override;
	virtual $Class* type() override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_ExtendedSocketOption$1_h_