#ifndef _sun_nio_ch_Port$1_h_
#define _sun_nio_ch_Port$1_h_
//$ class sun.nio.ch.Port$1
//$ extends sun.nio.ch.Port$PollableChannel

#include <sun/nio/ch/Port$PollableChannel.h>

namespace java {
	namespace nio {
		namespace channels {
			class Channel;
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class Port;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Port$1 : public ::sun::nio::ch::Port$PollableChannel {
	$class(Port$1, $NO_CLASS_INIT, ::sun::nio::ch::Port$PollableChannel)
public:
	Port$1();
	void init$(::sun::nio::ch::Port* this$0, ::java::nio::channels::Channel* val$channel);
	virtual void close() override;
	virtual void onEvent(int32_t events, bool mayInvokeDirect) override;
	::sun::nio::ch::Port* this$0 = nullptr;
	::java::nio::channels::Channel* val$channel = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Port$1_h_