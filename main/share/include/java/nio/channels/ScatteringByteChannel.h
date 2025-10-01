#ifndef _java_nio_channels_ScatteringByteChannel_h_
#define _java_nio_channels_ScatteringByteChannel_h_
//$ interface java.nio.channels.ScatteringByteChannel
//$ extends java.nio.channels.ReadableByteChannel

#include <java/lang/Array.h>
#include <java/nio/channels/ReadableByteChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $import ScatteringByteChannel : public ::java::nio::channels::ReadableByteChannel {
	$interface(ScatteringByteChannel, $NO_CLASS_INIT, ::java::nio::channels::ReadableByteChannel)
public:
	using ::java::nio::channels::ReadableByteChannel::read;
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) {return 0;}
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts) {return 0;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_ScatteringByteChannel_h_