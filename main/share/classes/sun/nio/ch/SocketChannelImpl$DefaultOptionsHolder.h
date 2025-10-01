#ifndef _sun_nio_ch_SocketChannelImpl$DefaultOptionsHolder_h_
#define _sun_nio_ch_SocketChannelImpl$DefaultOptionsHolder_h_
//$ class sun.nio.ch.SocketChannelImpl$DefaultOptionsHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class SocketChannelImpl$DefaultOptionsHolder : public ::java::lang::Object {
	$class(SocketChannelImpl$DefaultOptionsHolder, 0, ::java::lang::Object)
public:
	SocketChannelImpl$DefaultOptionsHolder();
	void init$();
	static ::java::util::Set* defaultInetOptions();
	static ::java::util::Set* defaultUnixOptions();
	static ::java::util::Set* defaultInetOptions$;
	static ::java::util::Set* defaultUnixOptions$;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SocketChannelImpl$DefaultOptionsHolder_h_