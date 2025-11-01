#ifndef _sun_nio_ch_SocketChannelImpl_h_
#define _sun_nio_ch_SocketChannelImpl_h_
//$ class sun.nio.ch.SocketChannelImpl
//$ extends java.nio.channels.SocketChannel
//$ implements sun.nio.ch.SelChImpl

#include <java/lang/Array.h>
#include <java/nio/channels/SocketChannel.h>
#include <sun/nio/ch/SelChImpl.h>

#pragma push_macro("ST_CLOSED")
#undef ST_CLOSED
#pragma push_macro("ST_CLOSING")
#undef ST_CLOSING
#pragma push_macro("ST_CONNECTED")
#undef ST_CONNECTED
#pragma push_macro("ST_CONNECTIONPENDING")
#undef ST_CONNECTIONPENDING
#pragma push_macro("ST_UNCONNECTED")
#undef ST_UNCONNECTED

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class ProtocolFamily;
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

class SocketChannelImpl : public ::java::nio::channels::SocketChannel, public ::sun::nio::ch::SelChImpl {
	$class(SocketChannelImpl, 0, ::java::nio::channels::SocketChannel, ::sun::nio::ch::SelChImpl)
public:
	SocketChannelImpl();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual bool isOpen() override;
	void init$(::java::nio::channels::spi::SelectorProvider* sp);
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::net::ProtocolFamily* family);
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::net::ProtocolFamily* family, ::java::io::FileDescriptor* fd, ::java::net::SocketAddress* remoteAddress);
	virtual int32_t available();
	void beginConnect(bool blocking, ::java::net::SocketAddress* sa);
	void beginFinishConnect(bool blocking);
	void beginRead(bool blocking);
	void beginWrite(bool blocking);
	virtual ::java::nio::channels::NetworkChannel* bind(::java::net::SocketAddress* local) override;
	virtual void blockingConnect(::java::net::SocketAddress* remote, int64_t nanos);
	virtual int32_t blockingRead($bytes* b, int32_t off, int32_t len, int64_t nanos);
	virtual void blockingWriteFully($bytes* b, int32_t off, int32_t len);
	::java::net::SocketAddress* checkRemote(::java::net::SocketAddress* sa);
	virtual bool connect(::java::net::SocketAddress* remote) override;
	void endConnect(bool blocking, bool completed);
	void endFinishConnect(bool blocking, bool completed);
	void endRead(bool blocking, bool completed);
	void endWrite(bool blocking, bool completed);
	void ensureOpen();
	void ensureOpenAndConnected();
	virtual bool finishConnect() override;
	bool finishTimedConnect(int64_t nanos);
	virtual ::java::io::FileDescriptor* getFD() override;
	virtual int32_t getFDVal() override;
	virtual ::java::net::SocketAddress* getLocalAddress() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual ::java::net::SocketAddress* getRemoteAddress() override;
	void implCloseBlockingMode();
	void implCloseNonBlockingMode();
	virtual void implCloseSelectableChannel() override;
	virtual void implConfigureBlocking(bool block) override;
	virtual bool isConnected() override;
	virtual bool isConnectionPending() override;
	virtual bool isInputOpen();
	virtual bool isNetSocket();
	virtual bool isOutputOpen();
	virtual bool isUnixSocket();
	virtual void kill() override;
	virtual ::java::net::SocketAddress* localAddress();
	void lockedConfigureBlocking(bool block);
	::java::net::SocketAddress* netBind(::java::net::SocketAddress* local);
	using ::java::nio::channels::SocketChannel::read;
	virtual int32_t read(::java::nio::ByteBuffer* buf) override;
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) override;
	using ::java::nio::channels::SocketChannel::register$;
	virtual ::java::net::SocketAddress* remoteAddress();
	virtual int32_t sendOutOfBandData(int8_t b);
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual ::java::nio::channels::SocketChannel* shutdownInput() override;
	virtual ::java::nio::channels::SocketChannel* shutdownOutput() override;
	virtual ::java::net::Socket* socket() override;
	virtual ::java::util::Set* supportedOptions() override;
	void throwConnectionReset();
	int32_t timedRead($bytes* b, int32_t off, int32_t len, int64_t nanos);
	virtual $String* toString() override;
	virtual bool translateAndSetReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual bool translateAndUpdateReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual int32_t translateInterestOps(int32_t ops) override;
	virtual bool translateReadyOps(int32_t ops, int32_t initialOps, ::sun::nio::ch::SelectionKeyImpl* ski);
	bool tryClose();
	void tryFinishClose();
	bool tryLockedConfigureBlocking(bool block);
	int32_t tryRead($bytes* b, int32_t off, int32_t len);
	int32_t tryWrite($bytes* b, int32_t off, int32_t len);
	::java::net::SocketAddress* unixBind(::java::net::SocketAddress* local);
	using ::java::nio::channels::SocketChannel::write;
	virtual int32_t write(::java::nio::ByteBuffer* buf) override;
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length) override;
	static bool $assertionsDisabled;
	static ::sun::nio::ch::NativeDispatcher* nd;
	::java::net::ProtocolFamily* family = nullptr;
	::java::io::FileDescriptor* fd = nullptr;
	int32_t fdVal = 0;
	::java::util::concurrent::locks::ReentrantLock* readLock = nullptr;
	::java::util::concurrent::locks::ReentrantLock* writeLock = nullptr;
	$Object* stateLock = nullptr;
	$volatile(bool) isInputClosed = false;
	$volatile(bool) isOutputClosed = false;
	bool connectionReset = false;
	bool isReuseAddress = false;
	static const int32_t ST_UNCONNECTED = 0;
	static const int32_t ST_CONNECTIONPENDING = 1;
	static const int32_t ST_CONNECTED = 2;
	static const int32_t ST_CLOSING = 3;
	static const int32_t ST_CLOSED = 4;
	$volatile(int32_t) state = 0;
	int64_t readerThread = 0;
	int64_t writerThread = 0;
	::java::net::SocketAddress* localAddress$ = nullptr;
	::java::net::SocketAddress* remoteAddress$ = nullptr;
	::java::net::Socket* socket$ = nullptr;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("ST_CLOSED")
#pragma pop_macro("ST_CLOSING")
#pragma pop_macro("ST_CONNECTED")
#pragma pop_macro("ST_CONNECTIONPENDING")
#pragma pop_macro("ST_UNCONNECTED")

#endif // _sun_nio_ch_SocketChannelImpl_h_