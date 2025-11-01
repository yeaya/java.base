#ifndef _java_nio_channels_Channels$WritableByteChannelImpl_h_
#define _java_nio_channels_Channels$WritableByteChannelImpl_h_
//$ class java.nio.channels.Channels$WritableByteChannelImpl
//$ extends java.nio.channels.spi.AbstractInterruptibleChannel
//$ implements java.nio.channels.WritableByteChannel

#include <java/lang/Array.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>

#pragma push_macro("TRANSFER_SIZE")
#undef TRANSFER_SIZE

namespace java {
	namespace io {
		class OutputStream;
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

class Channels$WritableByteChannelImpl : public ::java::nio::channels::spi::AbstractInterruptibleChannel, public ::java::nio::channels::WritableByteChannel {
	$class(Channels$WritableByteChannelImpl, $NO_CLASS_INIT, ::java::nio::channels::spi::AbstractInterruptibleChannel, ::java::nio::channels::WritableByteChannel)
public:
	Channels$WritableByteChannelImpl();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::OutputStream* out);
	virtual void implCloseChannel() override;
	virtual bool isOpen() override;
	virtual $String* toString() override;
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
	::java::io::OutputStream* out = nullptr;
	static const int32_t TRANSFER_SIZE = 8192;
	$bytes* buf = nullptr;
	$Object* writeLock = nullptr;
};

		} // channels
	} // nio
} // java

#pragma pop_macro("TRANSFER_SIZE")

#endif // _java_nio_channels_Channels$WritableByteChannelImpl_h_