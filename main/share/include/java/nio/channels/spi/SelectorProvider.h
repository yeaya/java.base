#ifndef _java_nio_channels_spi_SelectorProvider_h_
#define _java_nio_channels_spi_SelectorProvider_h_
//$ class java.nio.channels.spi.SelectorProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace net {
		class ProtocolFamily;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class Channel;
			class DatagramChannel;
			class Pipe;
			class ServerSocketChannel;
			class SocketChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace channels {
			namespace spi {
				class AbstractSelector;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace channels {
			namespace spi {

class $import SelectorProvider : public ::java::lang::Object {
	$class(SelectorProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SelectorProvider();
	void init$(::java::lang::Void* ignore);
	void init$();
	static ::java::lang::Void* checkPermission();
	virtual ::java::nio::channels::Channel* inheritedChannel();
	virtual ::java::nio::channels::DatagramChannel* openDatagramChannel() {return nullptr;}
	virtual ::java::nio::channels::DatagramChannel* openDatagramChannel(::java::net::ProtocolFamily* family) {return nullptr;}
	virtual ::java::nio::channels::Pipe* openPipe() {return nullptr;}
	virtual ::java::nio::channels::spi::AbstractSelector* openSelector() {return nullptr;}
	virtual ::java::nio::channels::ServerSocketChannel* openServerSocketChannel() {return nullptr;}
	virtual ::java::nio::channels::ServerSocketChannel* openServerSocketChannel(::java::net::ProtocolFamily* family);
	virtual ::java::nio::channels::SocketChannel* openSocketChannel() {return nullptr;}
	virtual ::java::nio::channels::SocketChannel* openSocketChannel(::java::net::ProtocolFamily* family);
	static ::java::nio::channels::spi::SelectorProvider* provider();
};

			} // spi
		} // channels
	} // nio
} // java

#endif // _java_nio_channels_spi_SelectorProvider_h_