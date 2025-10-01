#ifndef _java_nio_channels_ReadableByteChannel_h_
#define _java_nio_channels_ReadableByteChannel_h_
//$ interface java.nio.channels.ReadableByteChannel
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

class $import ReadableByteChannel : public ::java::nio::channels::Channel {
	$interface(ReadableByteChannel, $NO_CLASS_INIT, ::java::nio::channels::Channel)
public:
	virtual int32_t read(::java::nio::ByteBuffer* dst) {return 0;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_ReadableByteChannel_h_