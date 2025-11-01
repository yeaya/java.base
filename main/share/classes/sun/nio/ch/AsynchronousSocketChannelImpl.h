#ifndef _sun_nio_ch_AsynchronousSocketChannelImpl_h_
#define _sun_nio_ch_AsynchronousSocketChannelImpl_h_
//$ class sun.nio.ch.AsynchronousSocketChannelImpl
//$ extends java.nio.channels.AsynchronousSocketChannel
//$ implements sun.nio.ch.Cancellable,sun.nio.ch.Groupable

#include <java/lang/Array.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <sun/nio/ch/Cancellable.h>
#include <sun/nio/ch/Groupable.h>

#pragma push_macro("ST_CONNECTED")
#undef ST_CONNECTED
#pragma push_macro("ST_PENDING")
#undef ST_PENDING
#pragma push_macro("ST_UNCONNECTED")
#undef ST_UNCONNECTED
#pragma push_macro("ST_UNINITIALIZED")
#undef ST_UNINITIALIZED

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
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
			class CompletionHandler;
			class NetworkChannel;
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
			class Future;
			class TimeUnit;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReadWriteLock;
			}
		}
	}
}
namespace sun {
	namespace nio {
		namespace ch {
			class AsynchronousChannelGroupImpl;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class AsynchronousSocketChannelImpl : public ::java::nio::channels::AsynchronousSocketChannel, public ::sun::nio::ch::Cancellable, public ::sun::nio::ch::Groupable {
	$class(AsynchronousSocketChannelImpl, $NO_CLASS_INIT, ::java::nio::channels::AsynchronousSocketChannel, ::sun::nio::ch::Cancellable, ::sun::nio::ch::Groupable)
public:
	AsynchronousSocketChannelImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::AsynchronousChannelGroupImpl* group);
	void init$(::sun::nio::ch::AsynchronousChannelGroupImpl* group, ::java::io::FileDescriptor* fd, ::java::net::InetSocketAddress* remote);
	void begin();
	virtual ::java::nio::channels::NetworkChannel* bind(::java::net::SocketAddress* local) override;
	virtual void close() override;
	virtual ::java::util::concurrent::Future* connect(::java::net::SocketAddress* remote) override;
	virtual void connect(::java::net::SocketAddress* remote, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	void enableReading(bool killed);
	void enableReading();
	void enableWriting(bool killed);
	void enableWriting();
	void end();
	virtual ::java::net::SocketAddress* getLocalAddress() override;
	virtual $Object* getOption(::java::net::SocketOption* name) override;
	virtual ::java::net::SocketAddress* getRemoteAddress() override;
	virtual void implClose() {}
	virtual ::java::util::concurrent::Future* implConnect(::java::net::SocketAddress* remote, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {return nullptr;}
	virtual ::java::util::concurrent::Future* implRead(bool isScatteringRead, ::java::nio::ByteBuffer* dst, $Array<::java::nio::ByteBuffer>* dsts, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {return nullptr;}
	virtual ::java::util::concurrent::Future* implWrite(bool isGatheringWrite, ::java::nio::ByteBuffer* src, $Array<::java::nio::ByteBuffer>* srcs, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) {return nullptr;}
	virtual bool isOpen() override;
	void killConnect();
	void killReading();
	void killWriting();
	using ::java::nio::channels::AsynchronousSocketChannel::read;
	::java::util::concurrent::Future* read(bool isScatteringRead, ::java::nio::ByteBuffer* dst, $Array<::java::nio::ByteBuffer>* dsts, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* att, ::java::nio::channels::CompletionHandler* handler);
	virtual ::java::util::concurrent::Future* read(::java::nio::ByteBuffer* dst) override;
	virtual void read(::java::nio::ByteBuffer* dst, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual void read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual ::java::nio::channels::NetworkChannel* setOption(::java::net::SocketOption* name, Object$* value) override;
	virtual ::java::nio::channels::AsynchronousSocketChannel* shutdownInput() override;
	virtual ::java::nio::channels::AsynchronousSocketChannel* shutdownOutput() override;
	virtual ::java::util::Set* supportedOptions() override;
	virtual $String* toString() override;
	using ::java::nio::channels::AsynchronousSocketChannel::write;
	::java::util::concurrent::Future* write(bool isGatheringWrite, ::java::nio::ByteBuffer* src, $Array<::java::nio::ByteBuffer>* srcs, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* att, ::java::nio::channels::CompletionHandler* handler);
	virtual ::java::util::concurrent::Future* write(::java::nio::ByteBuffer* src) override;
	virtual void write(::java::nio::ByteBuffer* src, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual void write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	::java::io::FileDescriptor* fd = nullptr;
	$Object* stateLock = nullptr;
	$volatile(::java::net::InetSocketAddress*) localAddress = nullptr;
	$volatile(::java::net::InetSocketAddress*) remoteAddress = nullptr;
	static const int32_t ST_UNINITIALIZED = (-1);
	static const int32_t ST_UNCONNECTED = 0;
	static const int32_t ST_PENDING = 1;
	static const int32_t ST_CONNECTED = 2;
	$volatile(int32_t) state = 0;
	$Object* readLock = nullptr;
	bool reading = false;
	bool readShutdown = false;
	bool readKilled = false;
	$Object* writeLock = nullptr;
	bool writing = false;
	bool writeShutdown = false;
	bool writeKilled = false;
	::java::util::concurrent::locks::ReadWriteLock* closeLock = nullptr;
	$volatile(bool) closed = false;
	bool isReuseAddress = false;
};

		} // ch
	} // nio
} // sun

#pragma pop_macro("ST_CONNECTED")
#pragma pop_macro("ST_PENDING")
#pragma pop_macro("ST_UNCONNECTED")
#pragma pop_macro("ST_UNINITIALIZED")

#endif // _sun_nio_ch_AsynchronousSocketChannelImpl_h_