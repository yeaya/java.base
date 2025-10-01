#ifndef _java_nio_channels_WritableByteChannel_h_
#define _java_nio_channels_WritableByteChannel_h_
//$ interface java.nio.channels.WritableByteChannel
//$ extends java.nio.channels.Channel

#include <java/nio/channels/Channel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $export WritableByteChannel : public ::java::nio::channels::Channel {
	$interface(WritableByteChannel, $NO_CLASS_INIT, ::java::nio::channels::Channel)
public:
	virtual int32_t write(::java::nio::ByteBuffer* src) {return 0;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_WritableByteChannel_h_