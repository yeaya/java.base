#ifndef _sun_nio_ch_ExtendedSocketOption_h_
#define _sun_nio_ch_ExtendedSocketOption_h_
//$ class sun.nio.ch.ExtendedSocketOption
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SO_OOBINLINE")
#undef SO_OOBINLINE

namespace java {
	namespace net {
		class SocketOption;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class ExtendedSocketOption : public ::java::lang::Object {
	$class(ExtendedSocketOption, 0, ::java::lang::Object)
public:
	ExtendedSocketOption();
	void init$();
	static ::java::net::SocketOption* SO_OOBINLINE;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("SO_OOBINLINE")

#endif // _sun_nio_ch_ExtendedSocketOption_h_