#ifndef _sun_nio_ch_InheritedChannel$InheritedServerSocketChannelImpl_h_
#define _sun_nio_ch_InheritedChannel$InheritedServerSocketChannelImpl_h_
//$ class sun.nio.ch.InheritedChannel$InheritedServerSocketChannelImpl
//$ extends sun.nio.ch.ServerSocketChannelImpl

#include <sun/nio/ch/ServerSocketChannelImpl.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class ProtocolFamily;
		class ServerSocket;
		class SocketAddress;
		class SocketOption;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class NetworkChannel;
			class ServerSocketChannel;
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
namespace sun {
	namespace nio {
		namespace ch {
			class SelectionKeyImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class InheritedChannel$InheritedServerSocketChannelImpl : public ::sun::nio::ch::ServerSocketChannelImpl {
	$class(InheritedChannel$InheritedServerSocketChannelImpl, $NO_CLASS_INIT, ::sun::nio::ch::ServerSocketChannelImpl)
public:
	InheritedChannel$InheritedServerSocketChannelImpl();
	using ::sun::nio::ch::ServerSocketChannelImpl::bind;
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::net::ProtocolFamily* family, ::java::io::FileDescriptor* fd);
	virtual ::java::nio::channels::SocketChannel* accept() override;
	virtual ::java::nio::channels::ServerSocketChannel* bind(::java::net::SocketAddress* local, int32_t backlog) override;
	virtual ::java::io::FileDescriptor* getFD() override;
	virtual int32_t getFDVal() override;
	virtual ::java::net::SocketAddress* getLocalAddress() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual void implCloseSelectableChannel() override;
	virtual void kill() override;
	using ::sun::nio::ch::ServerSocketChannelImpl::register$;
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual ::java::net::ServerSocket* socket() override;
	virtual $String* toString() override;
	virtual bool translateAndSetReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual bool translateAndUpdateReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual int32_t translateInterestOps(int32_t ops) override;
	virtual bool translateReadyOps(int32_t ops, int32_t initialOps, ::sun::nio::ch::SelectionKeyImpl* ski) override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_InheritedChannel$InheritedServerSocketChannelImpl_h_