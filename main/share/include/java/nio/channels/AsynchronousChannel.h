#ifndef _java_nio_channels_AsynchronousChannel_h_
#define _java_nio_channels_AsynchronousChannel_h_
//$ interface java.nio.channels.AsynchronousChannel
//$ extends java.nio.channels.Channel

#include <java/nio/channels/Channel.h>

namespace java {
	namespace nio {
		namespace channels {

class $import AsynchronousChannel : public ::java::nio::channels::Channel {
	$interface(AsynchronousChannel, $NO_CLASS_INIT, ::java::nio::channels::Channel)
public:
	virtual void close() override {}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_AsynchronousChannel_h_