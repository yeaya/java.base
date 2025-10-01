#ifndef _sun_nio_ch_DatagramChannelImpl$AbstractSelectableChannels_h_
#define _sun_nio_ch_DatagramChannelImpl$AbstractSelectableChannels_h_
//$ class sun.nio.ch.DatagramChannelImpl$AbstractSelectableChannels
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FOREACH")
#undef FOREACH

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AbstractSelectableChannel;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class DatagramChannelImpl$AbstractSelectableChannels : public ::java::lang::Object {
	$class(DatagramChannelImpl$AbstractSelectableChannels, 0, ::java::lang::Object)
public:
	DatagramChannelImpl$AbstractSelectableChannels();
	void init$();
	static void forEach(::java::nio::channels::spi::AbstractSelectableChannel* ch, ::java::util::function::Consumer* action);
	static ::java::lang::reflect::Method* lambda$static$0();
	static ::java::lang::reflect::Method* FOREACH;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("FOREACH")

#endif // _sun_nio_ch_DatagramChannelImpl$AbstractSelectableChannels_h_