#ifndef _java_nio_channels_GatheringByteChannel_h_
#define _java_nio_channels_GatheringByteChannel_h_
//$ interface java.nio.channels.GatheringByteChannel
//$ extends java.nio.channels.WritableByteChannel

#include <java/lang/Array.h>
#include <java/nio/channels/WritableByteChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $import GatheringByteChannel : public ::java::nio::channels::WritableByteChannel {
	$interface(GatheringByteChannel, $NO_CLASS_INIT, ::java::nio::channels::WritableByteChannel)
public:
	using ::java::nio::channels::WritableByteChannel::write;
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length) {return 0;}
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs) {return 0;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_GatheringByteChannel_h_