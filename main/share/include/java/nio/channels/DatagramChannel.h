#ifndef _java_nio_channels_DatagramChannel_h_
#define _java_nio_channels_DatagramChannel_h_
//$ class java.nio.channels.DatagramChannel
//$ extends java.nio.channels.spi.AbstractSelectableChannel
//$ implements java.nio.channels.ByteChannel,java.nio.channels.ScatteringByteChannel,java.nio.channels.GatheringByteChannel,java.nio.channels.MulticastChannel

#include <java/lang/Array.h>
#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/GatheringByteChannel.h>
#include <java/nio/channels/MulticastChannel.h>
#include <java/nio/channels/ScatteringByteChannel.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>

namespace java {
	namespace net {
		class DatagramSocket;
		class ProtocolFamily;
		class SocketAddress;
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
			namespace spi {
				class SelectorProvider;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {

class $import DatagramChannel : public ::java::nio::channels::spi::AbstractSelectableChannel, public ::java::nio::channels::ByteChannel, public ::java::nio::channels::ScatteringByteChannel, public ::java::nio::channels::GatheringByteChannel, public ::java::nio::channels::MulticastChannel {
	$class(DatagramChannel, $NO_CLASS_INIT, ::java::nio::channels::spi::AbstractSelectableChannel, ::java::nio::channels::ByteChannel, ::java::nio::channels::ScatteringByteChannel, ::java::nio::channels::GatheringByteChannel, ::java::nio::channels::MulticastChannel)
public:
	DatagramChannel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual ::java::nio::channels::NetworkChannel* bind(::java::net::SocketAddress* local) override {return nullptr;}
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::net::SocketAddress* getLocalAddress() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$(::java::nio::channels::spi::SelectorProvider* provider);
	virtual ::java::nio::channels::DatagramChannel* connect(::java::net::SocketAddress* remote) {return nullptr;}
	virtual ::java::nio::channels::DatagramChannel* disconnect() {return nullptr;}
	virtual ::java::net::SocketAddress* getRemoteAddress() {return nullptr;}
	virtual bool isConnected() {return false;}
	virtual bool isOpen() override;
	static ::java::nio::channels::DatagramChannel* open();
	static ::java::nio::channels::DatagramChannel* open(::java::net::ProtocolFamily* family);
	virtual int32_t read(::java::nio::ByteBuffer* dst) override {return 0;}
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) override {return 0;}
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts) override;
	virtual ::java::net::SocketAddress* receive(::java::nio::ByteBuffer* dst) {return nullptr;}
	using ::java::nio::channels::spi::AbstractSelectableChannel::register$;
	virtual int32_t send(::java::nio::ByteBuffer* src, ::java::net::SocketAddress* target) {return 0;}
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override {return nullptr;}
	virtual ::java::net::DatagramSocket* socket() {return nullptr;}
	virtual $String* toString() override;
	virtual int32_t validOps() override;
	virtual int32_t write(::java::nio::ByteBuffer* src) override {return 0;}
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length) override {return 0;}
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs) override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_DatagramChannel_h_