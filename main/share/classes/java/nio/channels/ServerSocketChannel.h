#ifndef _java_nio_channels_ServerSocketChannel_h_
#define _java_nio_channels_ServerSocketChannel_h_
//$ class java.nio.channels.ServerSocketChannel
//$ extends java.nio.channels.spi.AbstractSelectableChannel
//$ implements java.nio.channels.NetworkChannel

#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>

namespace java {
	namespace net {
		class ProtocolFamily;
		class ServerSocket;
		class SocketAddress;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class SocketChannel;
		}
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

class $export ServerSocketChannel : public ::java::nio::channels::spi::AbstractSelectableChannel, public ::java::nio::channels::NetworkChannel {
	$class(ServerSocketChannel, $NO_CLASS_INIT, ::java::nio::channels::spi::AbstractSelectableChannel, ::java::nio::channels::NetworkChannel)
public:
	ServerSocketChannel();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::net::SocketAddress* getLocalAddress() override {return nullptr;}
	virtual int32_t hashCode() override;
	void init$(::java::nio::channels::spi::SelectorProvider* provider);
	virtual ::java::nio::channels::SocketChannel* accept() {return nullptr;}
	virtual ::java::nio::channels::NetworkChannel* bind(::java::net::SocketAddress* local) override;
	virtual ::java::nio::channels::ServerSocketChannel* bind(::java::net::SocketAddress* local, int32_t backlog) {return nullptr;}
	virtual bool isOpen() override;
	static ::java::nio::channels::ServerSocketChannel* open();
	static ::java::nio::channels::ServerSocketChannel* open(::java::net::ProtocolFamily* family);
	using ::java::nio::channels::spi::AbstractSelectableChannel::register$;
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override {return nullptr;}
	virtual ::java::net::ServerSocket* socket() {return nullptr;}
	virtual $String* toString() override;
	virtual int32_t validOps() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_ServerSocketChannel_h_