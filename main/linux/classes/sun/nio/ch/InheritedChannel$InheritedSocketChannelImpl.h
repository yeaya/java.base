#ifndef _sun_nio_ch_InheritedChannel$InheritedSocketChannelImpl_h_
#define _sun_nio_ch_InheritedChannel$InheritedSocketChannelImpl_h_
//$ class sun.nio.ch.InheritedChannel$InheritedSocketChannelImpl
//$ extends sun.nio.ch.SocketChannelImpl

#include <java/lang/Array.h>
#include <sun/nio/ch/SocketChannelImpl.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class Socket;
		class SocketAddress;
		class SocketOption;
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
			class NetworkChannel;
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

class InheritedChannel$InheritedSocketChannelImpl : public ::sun::nio::ch::SocketChannelImpl {
	$class(InheritedChannel$InheritedSocketChannelImpl, $NO_CLASS_INIT, ::sun::nio::ch::SocketChannelImpl)
public:
	InheritedChannel$InheritedSocketChannelImpl();
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::io::FileDescriptor* fd, ::java::net::SocketAddress* remote);
	virtual ::java::nio::channels::NetworkChannel* bind(::java::net::SocketAddress* local) override;
	virtual bool connect(::java::net::SocketAddress* remote) override;
	virtual bool finishConnect() override;
	virtual ::java::io::FileDescriptor* getFD() override;
	virtual int32_t getFDVal() override;
	virtual ::java::net::SocketAddress* getLocalAddress() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual ::java::net::SocketAddress* getRemoteAddress() override;
	virtual void implCloseSelectableChannel() override;
	virtual bool isConnected() override;
	virtual bool isConnectionPending() override;
	virtual void kill() override;
	using ::sun::nio::ch::SocketChannelImpl::read;
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) override;
	virtual int32_t read(::java::nio::ByteBuffer* buf) override;
	using ::sun::nio::ch::SocketChannelImpl::register$;
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual ::java::nio::channels::SocketChannel* shutdownInput() override;
	virtual ::java::nio::channels::SocketChannel* shutdownOutput() override;
	virtual ::java::net::Socket* socket() override;
	virtual $String* toString() override;
	virtual bool translateAndSetReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual bool translateAndUpdateReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual int32_t translateInterestOps(int32_t ops) override;
	virtual bool translateReadyOps(int32_t ops, int32_t initialOps, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	using ::sun::nio::ch::SocketChannelImpl::write;
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length) override;
	virtual int32_t write(::java::nio::ByteBuffer* buf) override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_InheritedChannel$InheritedSocketChannelImpl_h_