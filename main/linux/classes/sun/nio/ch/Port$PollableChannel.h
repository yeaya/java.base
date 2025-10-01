#ifndef _sun_nio_ch_Port$PollableChannel_h_
#define _sun_nio_ch_Port$PollableChannel_h_
//$ interface sun.nio.ch.Port$PollableChannel
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

namespace sun {
	namespace nio {
		namespace ch {

class Port$PollableChannel : public ::java::io::Closeable {
	$interface(Port$PollableChannel, $NO_CLASS_INIT, ::java::io::Closeable)
public:
	virtual void onEvent(int32_t events, bool mayInvokeDirect) {}
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Port$PollableChannel_h_