#ifndef _sun_nio_ch_PipeImpl_h_
#define _sun_nio_ch_PipeImpl_h_
//$ class sun.nio.ch.PipeImpl
//$ extends java.nio.channels.Pipe

#include <java/nio/channels/Pipe.h>

#pragma push_macro("NUM_SECRET_BYTES")
#undef NUM_SECRET_BYTES
#pragma push_macro("RANDOM_NUMBER_GENERATOR")
#undef RANDOM_NUMBER_GENERATOR

namespace java {
	namespace nio {
		namespace channels {
			class Pipe$SinkChannel;
			class Pipe$SourceChannel;
			class ServerSocketChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class SelectorProvider;
			}
		}
	}
}
namespace java {
	namespace util {
		class Random;
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class SinkChannelImpl;
			class SourceChannelImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class PipeImpl : public ::java::nio::channels::Pipe {
	$class(PipeImpl, 0, ::java::nio::channels::Pipe)
public:
	PipeImpl();
	void init$(::java::nio::channels::spi::SelectorProvider* sp);
	void init$(::java::nio::channels::spi::SelectorProvider* sp, bool buffering);
	static ::java::nio::channels::ServerSocketChannel* createListener();
	virtual ::java::nio::channels::Pipe$SinkChannel* sink() override;
	virtual ::java::nio::channels::Pipe$SourceChannel* source() override;
	static const int32_t NUM_SECRET_BYTES = 16;
	static ::java::util::Random* RANDOM_NUMBER_GENERATOR;
	::sun::nio::ch::SourceChannelImpl* source$ = nullptr;
	::sun::nio::ch::SinkChannelImpl* sink$ = nullptr;
	static $volatile(bool) noUnixDomainSockets;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("NUM_SECRET_BYTES")
#pragma pop_macro("RANDOM_NUMBER_GENERATOR")

#endif // _sun_nio_ch_PipeImpl_h_