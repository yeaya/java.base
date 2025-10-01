#ifndef _sun_nio_ch_SelectorProviderImpl_h_
#define _sun_nio_ch_SelectorProviderImpl_h_
//$ class sun.nio.ch.SelectorProviderImpl
//$ extends java.nio.channels.spi.SelectorProvider

#include <java/nio/channels/spi/SelectorProvider.h>

namespace java {
	namespace net {
		class ProtocolFamily;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class DatagramChannel;
			class Pipe;
			class ServerSocketChannel;
			class SocketChannel;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class $export SelectorProviderImpl : public ::java::nio::channels::spi::SelectorProvider {
	$class(SelectorProviderImpl, $NO_CLASS_INIT, ::java::nio::channels::spi::SelectorProvider)
public:
	SelectorProviderImpl();
	void init$();
	virtual ::java::nio::channels::DatagramChannel* openDatagramChannel() override;
	virtual ::java::nio::channels::DatagramChannel* openDatagramChannel(::java::net::ProtocolFamily* family) override;
	virtual ::java::nio::channels::Pipe* openPipe() override;
	virtual ::java::nio::channels::spi::AbstractSelector* openSelector() override {return nullptr;}
	virtual ::java::nio::channels::ServerSocketChannel* openServerSocketChannel() override;
	virtual ::java::nio::channels::ServerSocketChannel* openServerSocketChannel(::java::net::ProtocolFamily* family) override;
	virtual ::java::nio::channels::SocketChannel* openSocketChannel() override;
	virtual ::java::nio::channels::SocketChannel* openSocketChannel(::java::net::ProtocolFamily* family) override;
	virtual ::java::nio::channels::DatagramChannel* openUninterruptibleDatagramChannel();
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_SelectorProviderImpl_h_