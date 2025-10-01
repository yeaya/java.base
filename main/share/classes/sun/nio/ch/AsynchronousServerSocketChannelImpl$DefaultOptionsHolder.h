#ifndef _sun_nio_ch_AsynchronousServerSocketChannelImpl$DefaultOptionsHolder_h_
#define _sun_nio_ch_AsynchronousServerSocketChannelImpl$DefaultOptionsHolder_h_
//$ class sun.nio.ch.AsynchronousServerSocketChannelImpl$DefaultOptionsHolder
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

class AsynchronousServerSocketChannelImpl$DefaultOptionsHolder : public ::java::lang::Object {
	$class(AsynchronousServerSocketChannelImpl$DefaultOptionsHolder, 0, ::java::lang::Object)
public:
	AsynchronousServerSocketChannelImpl$DefaultOptionsHolder();
	void init$();
	static ::java::util::Set* defaultOptions();
	static ::java::util::Set* defaultOptions$;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_AsynchronousServerSocketChannelImpl$DefaultOptionsHolder_h_