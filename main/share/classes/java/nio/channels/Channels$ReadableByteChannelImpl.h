#ifndef _java_nio_channels_Channels$ReadableByteChannelImpl_h_
#define _java_nio_channels_Channels$ReadableByteChannelImpl_h_
//$ class java.nio.channels.Channels$ReadableByteChannelImpl
//$ extends java.nio.channels.spi.AbstractInterruptibleChannel
//$ implements java.nio.channels.ReadableByteChannel

#include <java/lang/Array.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>

#pragma push_macro("TRANSFER_SIZE")
#undef TRANSFER_SIZE

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace java {
	namespace nio {
		namespace channels {

class Channels$ReadableByteChannelImpl : public ::java::nio::channels::spi::AbstractInterruptibleChannel, public ::java::nio::channels::ReadableByteChannel {
	$class(Channels$ReadableByteChannelImpl, $NO_CLASS_INIT, ::java::nio::channels::spi::AbstractInterruptibleChannel, ::java::nio::channels::ReadableByteChannel)
public:
	Channels$ReadableByteChannelImpl();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::InputStream* in);
	virtual void implCloseChannel() override;
	virtual bool isOpen() override;
	virtual int32_t read(::java::nio::ByteBuffer* dst) override;
	virtual $String* toString() override;
	::java::io::InputStream* in = nullptr;
	static const int32_t TRANSFER_SIZE = 8192;
	$bytes* buf = nullptr;
	$Object* readLock = nullptr;
};

		} // channels
	} // nio
} // java

#pragma pop_macro("TRANSFER_SIZE")

#endif // _java_nio_channels_Channels$ReadableByteChannelImpl_h_