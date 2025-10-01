#ifndef _sun_nio_ch_ServerSocketChannelImpl$DefaultOptionsHolder_h_
#define _sun_nio_ch_ServerSocketChannelImpl$DefaultOptionsHolder_h_
//$ class sun.nio.ch.ServerSocketChannelImpl$DefaultOptionsHolder
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

class ServerSocketChannelImpl$DefaultOptionsHolder : public ::java::lang::Object {
	$class(ServerSocketChannelImpl$DefaultOptionsHolder, 0, ::java::lang::Object)
public:
	ServerSocketChannelImpl$DefaultOptionsHolder();
	void init$();
	static ::java::util::Set* defaultInetOptions();
	static ::java::util::Set* defaultUnixDomainOptions();
	static ::java::util::Set* defaultInetOptions$;
	static ::java::util::Set* defaultUnixDomainOptions$;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_ServerSocketChannelImpl$DefaultOptionsHolder_h_