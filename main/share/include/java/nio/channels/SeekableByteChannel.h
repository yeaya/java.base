#ifndef _java_nio_channels_SeekableByteChannel_h_
#define _java_nio_channels_SeekableByteChannel_h_
//$ interface java.nio.channels.SeekableByteChannel
//$ extends java.nio.channels.ByteChannel

#include <java/nio/channels/ByteChannel.h>

namespace java {
	namespace nio {
		namespace channels {

class $import SeekableByteChannel : public ::java::nio::channels::ByteChannel {
	$interface(SeekableByteChannel, $NO_CLASS_INIT, ::java::nio::channels::ByteChannel)
public:
	virtual int64_t position() {return 0;}
	virtual ::java::nio::channels::SeekableByteChannel* position(int64_t newPosition) {return nullptr;}
	virtual int32_t read(::java::nio::ByteBuffer* dst) override {return 0;}
	virtual int64_t size() {return 0;}
	virtual ::java::nio::channels::SeekableByteChannel* truncate(int64_t size) {return nullptr;}
	virtual int32_t write(::java::nio::ByteBuffer* src) override {return 0;}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_SeekableByteChannel_h_