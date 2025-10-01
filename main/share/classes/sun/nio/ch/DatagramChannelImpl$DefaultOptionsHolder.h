#ifndef _sun_nio_ch_DatagramChannelImpl$DefaultOptionsHolder_h_
#define _sun_nio_ch_DatagramChannelImpl$DefaultOptionsHolder_h_
//$ class sun.nio.ch.DatagramChannelImpl$DefaultOptionsHolder
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

class DatagramChannelImpl$DefaultOptionsHolder : public ::java::lang::Object {
	$class(DatagramChannelImpl$DefaultOptionsHolder, 0, ::java::lang::Object)
public:
	DatagramChannelImpl$DefaultOptionsHolder();
	void init$();
	static ::java::util::Set* defaultOptions();
	static ::java::util::Set* defaultOptions$;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_DatagramChannelImpl$DefaultOptionsHolder_h_