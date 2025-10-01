#ifndef _sun_nio_ch_SocketOptionRegistry_h_
#define _sun_nio_ch_SocketOptionRegistry_h_
//$ class sun.nio.ch.SocketOptionRegistry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class ProtocolFamily;
		class SocketOption;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class OptionKey;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SocketOptionRegistry : public ::java::lang::Object {
	$class(SocketOptionRegistry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SocketOptionRegistry();
	void init$();
	static ::sun::nio::ch::OptionKey* findOption(::java::net::SocketOption* name, ::java::net::ProtocolFamily* family);
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SocketOptionRegistry_h_