#ifndef _sun_nio_ch_UnixAsynchronousSocketChannelImpl_h_
#define _sun_nio_ch_UnixAsynchronousSocketChannelImpl_h_
//$ class sun.nio.ch.UnixAsynchronousSocketChannelImpl
//$ extends sun.nio.ch.AsynchronousSocketChannelImpl
//$ implements sun.nio.ch.Port$PollableChannel

#include <java/lang/Array.h>
#include <sun/nio/ch/AsynchronousSocketChannelImpl.h>
#include <sun/nio/ch/Port$PollableChannel.h>

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
	namespace net {
		class InetSocketAddress;
		class SocketAddress;
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
		}
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
namespace sun {
	namespace nio {
		namespace ch {
			class AsynchronousChannelGroupImpl;
			class NativeDispatcher;
			class PendingFuture;
			class Port;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class UnixAsynchronousSocketChannelImpl : public ::sun::nio::ch::AsynchronousSocketChannelImpl, public ::sun::nio::ch::Port$PollableChannel {
	$class(UnixAsynchronousSocketChannelImpl, 0, ::sun::nio::ch::AsynchronousSocketChannelImpl, ::sun::nio::ch::Port$PollableChannel)
public:
	UnixAsynchronousSocketChannelImpl();
	virtual $Object* clone() override;
	virtual void close() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::Port* port);
	void init$(::sun::nio::ch::Port* port, ::java::io::FileDescriptor* fd, ::java::net::InetSocketAddress* remote);
	static void checkConnect(int32_t fdVal);
	void finish(bool mayInvokeDirect, bool readable, bool writable);
	void finishConnect(bool mayInvokeDirect);
	void finishRead(bool mayInvokeDirect);
	void finishWrite(bool mayInvokeDirect);
	virtual ::sun::nio::ch::AsynchronousChannelGroupImpl* group() override;
	virtual void implClose() override;
	virtual ::java::util::concurrent::Future* implConnect(::java::net::SocketAddress* remote, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual ::java::util::concurrent::Future* implRead(bool isScatteringRead, ::java::nio::ByteBuffer* dst, $Array<::java::nio::ByteBuffer>* dsts, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	virtual ::java::util::concurrent::Future* implWrite(bool isGatheringWrite, ::java::nio::ByteBuffer* src, $Array<::java::nio::ByteBuffer>* srcs, int64_t timeout, ::java::util::concurrent::TimeUnit* unit, Object$* attachment, ::java::nio::channels::CompletionHandler* handler) override;
	void lockAndUpdateEvents();
	virtual void onCancel(::sun::nio::ch::PendingFuture* task) override;
	virtual void onEvent(int32_t events, bool mayInvokeDirect) override;
	using ::sun::nio::ch::AsynchronousSocketChannelImpl::read;
	void setConnected();
	virtual $String* toString() override;
	void updateEvents();
	using ::sun::nio::ch::AsynchronousSocketChannelImpl::write;
	static bool $assertionsDisabled;
	static ::sun::nio::ch::NativeDispatcher* nd;
	static bool disableSynchronousRead;
	::sun::nio::ch::Port* port = nullptr;
	int32_t fdVal = 0;
	$Object* updateLock = nullptr;
	bool connectPending = false;
	::java::nio::channels::CompletionHandler* connectHandler = nullptr;
	$Object* connectAttachment = nullptr;
	::sun::nio::ch::PendingFuture* connectFuture = nullptr;
	::java::net::SocketAddress* pendingRemote = nullptr;
	bool readPending = false;
	bool isScatteringRead = false;
	::java::nio::ByteBuffer* readBuffer = nullptr;
	$Array<::java::nio::ByteBuffer>* readBuffers = nullptr;
	::java::lang::Runnable* readScopeHandleReleasers = nullptr;
	::java::nio::channels::CompletionHandler* readHandler = nullptr;
	$Object* readAttachment = nullptr;
	::sun::nio::ch::PendingFuture* readFuture = nullptr;
	::java::util::concurrent::Future* readTimer = nullptr;
	bool writePending = false;
	bool isGatheringWrite = false;
	::java::nio::ByteBuffer* writeBuffer = nullptr;
	$Array<::java::nio::ByteBuffer>* writeBuffers = nullptr;
	::java::lang::Runnable* writeScopeHandleReleasers = nullptr;
	::java::nio::channels::CompletionHandler* writeHandler = nullptr;
	$Object* writeAttachment = nullptr;
	::sun::nio::ch::PendingFuture* writeFuture = nullptr;
	::java::util::concurrent::Future* writeTimer = nullptr;
	::java::lang::Runnable* readTimeoutTask = nullptr;
	::java::lang::Runnable* writeTimeoutTask = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_UnixAsynchronousSocketChannelImpl_h_