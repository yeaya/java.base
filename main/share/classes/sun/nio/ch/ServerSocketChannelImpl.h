#ifndef _sun_nio_ch_ServerSocketChannelImpl_h_
#define _sun_nio_ch_ServerSocketChannelImpl_h_
//$ class sun.nio.ch.ServerSocketChannelImpl
//$ extends java.nio.channels.ServerSocketChannel
//$ implements sun.nio.ch.SelChImpl

#include <java/lang/Array.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <sun/nio/ch/SelChImpl.h>

#pragma push_macro("ST_CLOSED")
#undef ST_CLOSED
#pragma push_macro("ST_CLOSING")
#undef ST_CLOSING
#pragma push_macro("ST_INUSE")
#undef ST_INUSE

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
	namespace util {
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReentrantLock;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class NativeDispatcher;
			class SelectionKeyImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class ServerSocketChannelImpl : public ::java::nio::channels::ServerSocketChannel, public ::sun::nio::ch::SelChImpl {
	$class(ServerSocketChannelImpl, 0, ::java::nio::channels::ServerSocketChannel, ::sun::nio::ch::SelChImpl)
public:
	ServerSocketChannelImpl();
	using ::java::nio::channels::ServerSocketChannel::bind;
	using ::java::nio::channels::ServerSocketChannel::begin;
	using ::java::nio::channels::ServerSocketChannel::end;
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual bool isOpen() override;
	void init$(::java::nio::channels::spi::SelectorProvider* sp);
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::net::ProtocolFamily* family);
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::net::ProtocolFamily* family, ::java::io::FileDescriptor* fd, bool bound);
	virtual ::java::nio::channels::SocketChannel* accept() override;
	void begin(bool blocking);
	virtual ::java::nio::channels::ServerSocketChannel* bind(::java::net::SocketAddress* local, int32_t backlog) override;
	virtual ::java::nio::channels::SocketChannel* blockingAccept(int64_t nanos);
	void end(bool blocking, bool completed);
	void ensureOpen();
	::java::nio::channels::SocketChannel* finishAccept(::java::io::FileDescriptor* newfd, ::java::net::SocketAddress* sa);
	virtual ::java::io::FileDescriptor* getFD() override;
	virtual int32_t getFDVal() override;
	virtual ::java::net::SocketAddress* getLocalAddress() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	int32_t implAccept(::java::io::FileDescriptor* fd, ::java::io::FileDescriptor* newfd, $Array<::java::net::SocketAddress>* saa);
	void implCloseBlockingMode();
	void implCloseNonBlockingMode();
	virtual void implCloseSelectableChannel() override;
	virtual void implConfigureBlocking(bool block) override;
	virtual bool isBound();
	bool isNetSocket();
	virtual bool isUnixSocket();
	virtual void kill() override;
	virtual ::java::net::SocketAddress* localAddress();
	void lockedConfigureBlocking(bool block);
	::java::net::SocketAddress* netBind(::java::net::SocketAddress* local, int32_t backlog);
	using ::java::nio::channels::ServerSocketChannel::register$;
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual ::java::net::ServerSocket* socket() override;
	virtual ::java::util::Set* supportedOptions() override;
	virtual $String* toString() override;
	virtual bool translateAndSetReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual bool translateAndUpdateReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual int32_t translateInterestOps(int32_t ops) override;
	virtual bool translateReadyOps(int32_t ops, int32_t initialOps, ::sun::nio::ch::SelectionKeyImpl* ski);
	bool tryClose();
	void tryFinishClose();
	bool tryLockedConfigureBlocking(bool block);
	::java::net::SocketAddress* unixBind(::java::net::SocketAddress* local, int32_t backlog);
	static bool $assertionsDisabled;
	static ::sun::nio::ch::NativeDispatcher* nd;
	::java::net::ProtocolFamily* family = nullptr;
	::java::io::FileDescriptor* fd = nullptr;
	int32_t fdVal = 0;
	::java::util::concurrent::locks::ReentrantLock* acceptLock = nullptr;
	$Object* stateLock = nullptr;
	static const int32_t ST_INUSE = 0;
	static const int32_t ST_CLOSING = 1;
	static const int32_t ST_CLOSED = 2;
	int32_t state = 0;
	int64_t thread = 0;
	::java::net::SocketAddress* localAddress$ = nullptr;
	bool isReuseAddress = false;
	::java::net::ServerSocket* socket$ = nullptr;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("ST_CLOSED")
#pragma pop_macro("ST_CLOSING")
#pragma pop_macro("ST_INUSE")

#endif // _sun_nio_ch_ServerSocketChannelImpl_h_