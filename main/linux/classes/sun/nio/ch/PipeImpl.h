#ifndef _sun_nio_ch_PipeImpl_h_
#define _sun_nio_ch_PipeImpl_h_
//$ class sun.nio.ch.PipeImpl
//$ extends java.nio.channels.Pipe

#include <java/nio/channels/Pipe.h>

namespace java {
	namespace nio {
		namespace channels {
			class Pipe$SinkChannel;
			class Pipe$SourceChannel;
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

namespace sun {
	namespace nio {
		namespace ch {

class PipeImpl : public ::java::nio::channels::Pipe {
	$class(PipeImpl, $NO_CLASS_INIT, ::java::nio::channels::Pipe)
public:
	PipeImpl();
	void init$(::java::nio::channels::spi::SelectorProvider* sp);
	virtual ::java::nio::channels::Pipe$SinkChannel* sink() override;
	virtual ::java::nio::channels::Pipe$SourceChannel* source() override;
	::java::nio::channels::Pipe$SourceChannel* source$ = nullptr;
	::java::nio::channels::Pipe$SinkChannel* sink$ = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_PipeImpl_h_