#ifndef _sun_nio_ch_DatagramChannelImpl_h_
#define _sun_nio_ch_DatagramChannelImpl_h_
//$ class sun.nio.ch.DatagramChannelImpl
//$ extends java.nio.channels.DatagramChannel
//$ implements sun.nio.ch.SelChImpl

#include <java/lang/Array.h>
#include <java/nio/channels/DatagramChannel.h>
#include <sun/nio/ch/SelChImpl.h>

#pragma push_macro("ST_CLOSED")
#undef ST_CLOSED
#pragma push_macro("ST_CLOSING")
#undef ST_CLOSING
#pragma push_macro("ST_UNCONNECTED")
#undef ST_UNCONNECTED
#pragma push_macro("SOCKET")
#undef SOCKET
#pragma push_macro("ST_CONNECTED")
#undef ST_CONNECTED

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Cleaner$Cleanable;
		}
	}
}
namespace java {
	namespace net {
		class DatagramSocket;
		class InetAddress;
		class InetSocketAddress;
		class NetworkInterface;
		class ProtocolFamily;
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
			class MembershipKeyImpl;
			class MembershipRegistry;
			class NativeDispatcher;
			class NativeSocketAddress;
			class SelectionKeyImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class DatagramChannelImpl : public ::java::nio::channels::DatagramChannel, public ::sun::nio::ch::SelChImpl {
	$class(DatagramChannelImpl, 0, ::java::nio::channels::DatagramChannel, ::sun::nio::ch::SelChImpl)
public:
	DatagramChannelImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual bool isOpen() override;
	void init$(::java::nio::channels::spi::SelectorProvider* sp, bool interruptible);
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::net::ProtocolFamily* family, bool interruptible);
	void init$(::java::nio::channels::spi::SelectorProvider* sp, ::java::io::FileDescriptor* fd);
	::java::net::SocketAddress* beginRead(bool blocking, bool mustBeConnected);
	::java::net::SocketAddress* beginWrite(bool blocking, bool mustBeConnected);
	virtual ::java::nio::channels::NetworkChannel* bind(::java::net::SocketAddress* local) override;
	void bindInternal(::java::net::SocketAddress* local);
	virtual void block(::sun::nio::ch::MembershipKeyImpl* key, ::java::net::InetAddress* source);
	virtual ::java::net::SocketAddress* blockingReceive(::java::nio::ByteBuffer* dst, int64_t nanos);
	virtual void blockingSend(::java::nio::ByteBuffer* src, ::java::net::SocketAddress* target);
	virtual ::java::nio::channels::DatagramChannel* connect(::java::net::SocketAddress* sa) override;
	virtual ::java::nio::channels::DatagramChannel* connect(::java::net::SocketAddress* sa, bool check);
	virtual ::java::nio::channels::DatagramChannel* disconnect() override;
	static void disconnect0(::java::io::FileDescriptor* fd, bool isIPv6);
	virtual void drop(::sun::nio::ch::MembershipKeyImpl* key);
	void endRead(bool blocking, bool completed);
	void endWrite(bool blocking, bool completed);
	void ensureOpen();
	::java::net::ProtocolFamily* familyFor(::java::net::SocketOption* name);
	virtual ::java::nio::channels::MembershipKey* findMembership(::java::net::InetAddress* group, ::java::net::NetworkInterface* interf);
	virtual ::java::io::FileDescriptor* getFD() override;
	virtual int32_t getFDVal() override;
	virtual ::java::net::SocketAddress* getLocalAddress() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual ::java::net::SocketAddress* getRemoteAddress() override;
	void implCloseBlockingMode();
	void implCloseNonBlockingMode();
	virtual void implCloseSelectableChannel() override;
	virtual void implConfigureBlocking(bool block) override;
	::java::nio::channels::MembershipKey* innerJoin(::java::net::InetAddress* group, ::java::net::NetworkInterface* interf, ::java::net::InetAddress* source);
	virtual bool isConnected() override;
	virtual ::java::nio::channels::MembershipKey* join(::java::net::InetAddress* group, ::java::net::NetworkInterface* interf) override;
	virtual ::java::nio::channels::MembershipKey* join(::java::net::InetAddress* group, ::java::net::NetworkInterface* interf, ::java::net::InetAddress* source) override;
	virtual void kill() override;
	static void lambda$releaserFor$1(::java::io::FileDescriptor* fd, $Array<::sun::nio::ch::NativeSocketAddress>* sockAddrs);
	void lambda$repairSocket$0(::sun::nio::ch::MembershipKeyImpl* k);
	virtual ::java::net::InetSocketAddress* localAddress();
	void lockedConfigureBlocking(bool block);
	using ::java::nio::channels::DatagramChannel::read;
	virtual int32_t read(::java::nio::ByteBuffer* buf) override;
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) override;
	virtual ::java::net::SocketAddress* receive(::java::nio::ByteBuffer* dst) override;
	int32_t receive(::java::nio::ByteBuffer* dst, bool connected);
	static int32_t receive0(::java::io::FileDescriptor* fd, int64_t address, int32_t len, int64_t senderAddress, bool connected);
	int32_t receiveIntoNativeBuffer(::java::nio::ByteBuffer* bb, int32_t rem, int32_t pos, bool connected);
	using ::java::nio::channels::DatagramChannel::register$;
	static ::java::lang::Runnable* releaserFor(::java::io::FileDescriptor* fd, $Array<::sun::nio::ch::NativeSocketAddress>* sockAddrs);
	virtual ::java::net::InetSocketAddress* remoteAddress();
	void repairSocket(::java::net::InetSocketAddress* target);
	virtual int32_t send(::java::nio::ByteBuffer* src, ::java::net::SocketAddress* target) override;
	int32_t send(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* src, ::java::net::InetSocketAddress* target);
	static int32_t send0(::java::io::FileDescriptor* fd, int64_t address, int32_t len, int64_t targetAddress, int32_t targetAddressLen);
	int32_t sendFromNativeBuffer(::java::io::FileDescriptor* fd, ::java::nio::ByteBuffer* bb, ::java::net::InetSocketAddress* target);
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual ::java::net::DatagramSocket* socket() override;
	::java::net::InetSocketAddress* sourceSocketAddress();
	virtual ::java::util::Set* supportedOptions() override;
	int32_t targetSocketAddress(::java::net::InetSocketAddress* isa);
	virtual $String* toString() override;
	virtual bool translateAndSetReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual bool translateAndUpdateReadyOps(int32_t ops, ::sun::nio::ch::SelectionKeyImpl* ski) override;
	virtual int32_t translateInterestOps(int32_t ops) override;
	virtual bool translateReadyOps(int32_t ops, int32_t initialOps, ::sun::nio::ch::SelectionKeyImpl* ski);
	::java::net::SocketAddress* trustedBlockingReceive(::java::nio::ByteBuffer* dst);
	::java::net::SocketAddress* trustedBlockingReceive(::java::nio::ByteBuffer* dst, int64_t nanos);
	bool tryClose();
	void tryFinishClose();
	bool tryLockedConfigureBlocking(bool block);
	virtual void unblock(::sun::nio::ch::MembershipKeyImpl* key, ::java::net::InetAddress* source);
	::java::net::SocketAddress* untrustedReceive(::java::nio::ByteBuffer* dst);
	using ::java::nio::channels::DatagramChannel::write;
	virtual int32_t write(::java::nio::ByteBuffer* buf) override;
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length) override;
	static bool $assertionsDisabled;
	static ::sun::nio::ch::NativeDispatcher* nd;
	bool interruptible = false;
	::java::net::ProtocolFamily* family = nullptr;
	::java::io::FileDescriptor* fd = nullptr;
	int32_t fdVal = 0;
	::sun::nio::ch::NativeSocketAddress* sourceSockAddr = nullptr;
	::sun::nio::ch::NativeSocketAddress* cachedSockAddr = nullptr;
	::java::net::InetSocketAddress* cachedInetSocketAddress = nullptr;
	::sun::nio::ch::NativeSocketAddress* targetSockAddr = nullptr;
	::java::net::InetSocketAddress* previousTarget = nullptr;
	int32_t previousSockAddrLength = 0;
	::java::lang::ref::Cleaner$Cleanable* cleaner = nullptr;
	::java::util::concurrent::locks::ReentrantLock* readLock = nullptr;
	::java::util::concurrent::locks::ReentrantLock* writeLock = nullptr;
	$Object* stateLock = nullptr;
	static const int32_t ST_UNCONNECTED = 0;
	static const int32_t ST_CONNECTED = 1;
	static const int32_t ST_CLOSING = 2;
	static const int32_t ST_CLOSED = 3;
	int32_t state = 0;
	int64_t readerThread = 0;
	int64_t writerThread = 0;
	::java::net::InetSocketAddress* localAddress$ = nullptr;
	::java::net::InetSocketAddress* remoteAddress$ = nullptr;
	::java::net::InetSocketAddress* initialLocalAddress = nullptr;
	static ::java::lang::invoke::VarHandle* SOCKET;
	$volatile(::java::net::DatagramSocket*) socket$ = nullptr;
	::sun::nio::ch::MembershipRegistry* registry = nullptr;
	bool reuseAddressEmulated = false;
	bool isReuseAddress = false;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("ST_CLOSED")
#pragma pop_macro("ST_CLOSING")
#pragma pop_macro("ST_UNCONNECTED")
#pragma pop_macro("SOCKET")
#pragma pop_macro("ST_CONNECTED")

#endif // _sun_nio_ch_DatagramChannelImpl_h_