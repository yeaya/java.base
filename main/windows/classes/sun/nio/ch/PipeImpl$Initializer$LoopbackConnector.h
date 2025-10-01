#ifndef _sun_nio_ch_PipeImpl$Initializer$LoopbackConnector_h_
#define _sun_nio_ch_PipeImpl$Initializer$LoopbackConnector_h_
//$ class sun.nio.ch.PipeImpl$Initializer$LoopbackConnector
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace nio {
		namespace ch {
			class PipeImpl$Initializer;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class PipeImpl$Initializer$LoopbackConnector : public ::java::lang::Runnable {
	$class(PipeImpl$Initializer$LoopbackConnector, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	PipeImpl$Initializer$LoopbackConnector();
	void init$(::sun::nio::ch::PipeImpl$Initializer* this$0);
	virtual void run() override;
	::sun::nio::ch::PipeImpl$Initializer* this$0 = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_PipeImpl$Initializer$LoopbackConnector_h_