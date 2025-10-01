#ifndef _sun_nio_ch_InheritedChannel$InheritedDatagramChannelImpl_h_
#define _sun_nio_ch_InheritedChannel$InheritedDatagramChannelImpl_h_
//$ class sun.nio.ch.InheritedChannel$InheritedDatagramChannelImpl
//$ extends sun.nio.ch.DatagramChannelImpl

#include <java/lang/Array.h>
#include <sun/nio/ch/DatagramChannelImpl.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class DatagramSocket;
		class InetAddress;
		class NetworkInterface;
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
			class DatagramChannel;
			class MembershipKey;
			class NetworkChannel;
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

class InheritedChannel$InheritedDatagramChannelImpl : public ::sun::nio::ch::DatagramChannelImpl {
	$class(InheritedChannel$InheritedDatagramChannelImpl, $NO_CLASS_INIT, ::sun::nio::ch::DatagramChannelImpl)
public:
	InheritedChannel$InheritedDatagramChannelImpl();
	using ::sun::nio::ch::DatagramChannelImpl::connect;
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::io::FileDescriptor* fd);
	virtual ::java::nio::channels::NetworkChannel* bind(::java::net::SocketAddress* local) override;
	virtual ::java::nio::channels::DatagramChannel* connect(::java::net::SocketAddress* sa) override;
	virtual ::java::nio::channels::DatagramChannel* disconnect() override;
	virtual ::java::io::FileDescriptor* getFD() override;
	virtual int32_t getFDVal() override;
	virtual ::java::net::SocketAddress* getLocalAddress() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual ::java::net::SocketAddress* getRemoteAddress() override;
	virtual void implCloseSelectableChannel() override;
	virtual bool isConnected() override;
	virtual ::java::nio::channels::MembershipKey* join(::java::net::InetAddress* group, ::java::net::NetworkInterface* interf, ::java::net::InetAddress* source) override;
	virtual ::java::nio::channels::MembershipKey* join(::java::net::InetAddress* group, ::java::net::NetworkInterface* interf) override;
	virtual void kill() override;
	using ::sun::nio::ch::DatagramChannelImpl::read;
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) override;
	virtual int32_t read(::java::nio::ByteBuffer* buf) override;
	virtual ::java::net::SocketAddress* receive(::java::nio::ByteBuffer* dst) override;
	using ::sun::nio::ch::DatagramChannelImpl::register$;
	virtual int32_t send(::java::nio::ByteBuffer* src, ::java::net::SocketAddress* target) override;
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual ::java::net::DatagramSocket* socket() override;
	virtual bool translateAndSetReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual bool translateAndUpdateReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual int32_t translateInterestOps(int32_t ops) override;
	virtual bool translateReadyOps(int32_t ops, int32_t initialOps, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	using ::sun::nio::ch::DatagramChannelImpl::write;
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length) override;
	virtual int32_t write(::java::nio::ByteBuffer* buf) override;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_InheritedChannel$InheritedDatagramChannelImpl_h_